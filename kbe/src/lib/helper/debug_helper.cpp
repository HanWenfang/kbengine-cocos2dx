/*
This source file is part of KBEngine
For the latest info, see http://www.kbengine.org/

Copyright (c) 2008-2012 KBEngine.

KBEngine is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

KBEngine is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License for more details.
 
You should have received a copy of the GNU Lesser General Public License
along with KBEngine.  If not, see <http://www.gnu.org/licenses/>.
*/


#include "debug_helper.h"
#include "profile.h"
#include "common/common.h"
#include "common/timer.h"
#include "thread/threadguard.h"
#include "network/channel.h"
#include "resmgr/resmgr.h"
#include "network/bundle.h"
#include "network/event_dispatcher.h"
#include "network/network_interface.h"
#include "network/tcp_packet.h"
#include "server/serverconfig.h"

#ifdef unix
#include <unistd.h>
#include <syslog.h>
#endif

#include <sys/timeb.h>

#ifndef NO_USE_LOG4CXX
#include "log4cxx/logger.h"
#include "log4cxx/net/socketappender.h"
#include "log4cxx/fileappender.h"
#include "log4cxx/helpers/inetaddress.h"
#include "log4cxx/propertyconfigurator.h"
#include "log4cxx/patternlayout.h"
#include "log4cxx/logstring.h"
#include "log4cxx/basicconfigurator.h"
#include "helper/script_loglevel.h"
#if KBE_PLATFORM == PLATFORM_WIN32
#pragma comment (lib, "Mswsock.lib")
#pragma comment( lib, "odbc32.lib" )
#endif
#endif

#include "../../server/tools/message_log/messagelog_interface.h"

namespace KBEngine{
	
KBE_SINGLETON_INIT(DebugHelper);

DebugHelper dbghelper;
ProfileVal g_syncLogProfile("syncLog");

#ifndef NO_USE_LOG4CXX
log4cxx::LoggerPtr g_logger(log4cxx::Logger::getLogger(""));
#endif

#define DBG_PT_SIZE 1024 * 4

bool g_shouldWriteToSyslog = false;

#ifdef KBE_USE_ASSERTS
void myassert(const char * exp, const char * func, const char * file, unsigned int line)
{
	DebugHelper::getSingleton().backtrace_msg();
	std::string s = (fmt::format("assertion failed: {}, file {}, line {}, at: {}\n", exp, file, line, func));
	printf("%s", (std::string("[ASSERT]: ") + s).c_str());
	dbghelper.print_msg(s);
    abort();
}
#endif

//-------------------------------------------------------------------------------------
void utf8printf(FILE *out, const char *str, ...)
{
    va_list ap;
    va_start(ap, str);
    vutf8printf(stdout, str, &ap);
    va_end(ap);
}

//-------------------------------------------------------------------------------------
void vutf8printf(FILE *out, const char *str, va_list* ap)
{
    vfprintf(out, str, *ap);
}

//-------------------------------------------------------------------------------------
class DebugHelperSyncHandler  : public TimerHandler
{
public:
	DebugHelperSyncHandler():
	pActiveTimerHandle_(NULL)
	{
	}

	virtual ~DebugHelperSyncHandler()
	{
		// cancel();
	}

	enum TimeOutType
	{
		TIMEOUT_ACTIVE_TICK,
		TIMEOUT_MAX
	};

	virtual void handleTimeout(TimerHandle handle, void * arg)
	{
		g_syncLogProfile.start();
		DebugHelper::getSingleton().sync();
		g_syncLogProfile.stop();
	}

	//-------------------------------------------------------------------------------------
	void cancel()
	{
		if(pActiveTimerHandle_ == NULL)
			return;

		pActiveTimerHandle_->cancel();
		delete pActiveTimerHandle_;
		pActiveTimerHandle_ = NULL;
	}

	//-------------------------------------------------------------------------------------
	void startActiveTick()
	{
		if(pActiveTimerHandle_ == NULL)
		{
			if(DebugHelper::getSingleton().pDispatcher())
			{
				pActiveTimerHandle_ = new TimerHandle();
				(*pActiveTimerHandle_) = DebugHelper::getSingleton().pDispatcher()->addTimer(1000000 / 10,
												this, (void *)TIMEOUT_ACTIVE_TICK);

			}
		}
	}

private:
	TimerHandle* pActiveTimerHandle_;
};

DebugHelperSyncHandler* g_pDebugHelperSyncHandler = NULL;

//-------------------------------------------------------------------------------------
DebugHelper::DebugHelper():
_logfile(NULL),
_currFile(),
_currFuncName(),
_currLine(0),
messagelogAddr_(),
logMutex(),
bufferedLogPackets_(),
hasBufferedLogPackets_(0),
pNetworkInterface_(NULL),
pDispatcher_(NULL),
scriptMsgType_(log4cxx::ScriptLevel::SCRIPT_INT),
noSyncLog_(false),
canLogFile_(true)
{
	g_pDebugHelperSyncHandler = new DebugHelperSyncHandler();
}

//-------------------------------------------------------------------------------------
DebugHelper::~DebugHelper()
{
	finalise();
}	

//-------------------------------------------------------------------------------------
void DebugHelper::shouldWriteToSyslog(bool v)
{
	g_shouldWriteToSyslog = v;
}

//-------------------------------------------------------------------------------------
std::string DebugHelper::getLogName()
{
#ifndef NO_USE_LOG4CXX
	/*
	log4cxx::FileAppenderPtr appender = (log4cxx::FileAppenderPtr)g_logger->getAppender(log4cxx::LogString(L"R"));
	if(appender->getFile().size() == 0 || appender == NULL)
		return "";

	char* ccattr = strutil::wchar2char(appender->getFile().c_str());
	std::string path = ccattr;
	free(ccattr);

	return path;
	*/
#endif

	return "";
}

//-------------------------------------------------------------------------------------
void DebugHelper::changeLogger(std::string name)
{
#ifndef NO_USE_LOG4CXX
	g_logger = log4cxx::Logger::getLogger(name.c_str());
#endif
}

//-------------------------------------------------------------------------------------
void DebugHelper::lockthread()
{
	logMutex.lockMutex();
}

//-------------------------------------------------------------------------------------
void DebugHelper::unlockthread()
{
	logMutex.unlockMutex();
}

//-------------------------------------------------------------------------------------
void DebugHelper::initialize(COMPONENT_TYPE componentType)
{
#ifndef NO_USE_LOG4CXX
	
	char helpConfig[MAX_PATH];

	if(componentType == CLIENT_TYPE || componentType == CONSOLE_TYPE)
	{
		g_logger = log4cxx::Logger::getLogger("default");
		kbe_snprintf(helpConfig, MAX_PATH, "log4j.properties");
	}
	else
	{
		g_logger = log4cxx::Logger::getLogger(COMPONENT_NAME_EX(componentType));
		kbe_snprintf(helpConfig, MAX_PATH, "server/log4cxx_properties/%s.properties", COMPONENT_NAME_EX(componentType));
	}

	log4cxx::PropertyConfigurator::configure(Resmgr::getSingleton().matchRes(helpConfig).c_str());
#endif
}

//-------------------------------------------------------------------------------------
void DebugHelper::finalise()
{
	DebugHelper::getSingleton().clearBufferedLog(true);

	// SAFE_RELEASE(g_pDebugHelperSyncHandler);

#ifndef NO_USE_LOG4CXX
#endif
}

//-------------------------------------------------------------------------------------
void DebugHelper::clearBufferedLog(bool destroy)
{
	int8 v = Network::g_trace_packet;
	Network::g_trace_packet = 0;

	if(destroy)
	{
		while(!bufferedLogPackets_.empty())
		{
			Network::Bundle* pBundle = bufferedLogPackets_.front();
			bufferedLogPackets_.pop();
			delete pBundle;
		}
	}
	else
	{
		Network::Bundle::ObjPool().reclaimObject(bufferedLogPackets_);
	}

	Network::g_trace_packet = v;

	hasBufferedLogPackets_ = 0;
	noSyncLog_ = true;

	if(!destroy)
		g_pDebugHelperSyncHandler->cancel();
}

//-------------------------------------------------------------------------------------
void DebugHelper::sync()
{
	lockthread();

	if(hasBufferedLogPackets_ == 0)
	{
		unlockthread();
		return;
	}

	if(Network::Address::NONE == messagelogAddr_)
	{
		if(hasBufferedLogPackets_ > g_kbeSrvConfig.tickMaxBufferedLogs())
		{
			clearBufferedLog();
		}
		
		canLogFile_ = true;
		unlockthread();
		return;
	}
	
	Network::Channel* pMessagelogChannel = pNetworkInterface_->findChannel(messagelogAddr_);
	if(pMessagelogChannel == NULL)
	{
		if(hasBufferedLogPackets_ > g_kbeSrvConfig.tickMaxBufferedLogs())
		{
			clearBufferedLog();
		}
		
		canLogFile_ = true;
		unlockthread();
		return;
	}

	static bool alertmsg = false;
	if(!alertmsg)
	{
		LOG4CXX_WARN(g_logger, fmt::format("The message is forwarded to the messagelog[{}]...\n", 
			pMessagelogChannel->c_str()));
		alertmsg = true;
	}

	int8 v = Network::g_trace_packet;
	Network::g_trace_packet = 0;

	uint32 i = 0;
	size_t totalLen = 0;

	while(!bufferedLogPackets_.empty())
	{
		if(i++ >= g_kbeSrvConfig.tickMaxSyncLogs() || totalLen > (PACKET_MAX_SIZE_TCP * 10))
			break;
		
		Network::Bundle* pBundle = bufferedLogPackets_.front();
		bufferedLogPackets_.pop();

		totalLen += pBundle->currMsgLength();
		pMessagelogChannel->send(pBundle);
		
		--hasBufferedLogPackets_;
	}

	Network::g_trace_packet = v;
	canLogFile_ = false;
	unlockthread();
}

//-------------------------------------------------------------------------------------
void DebugHelper::pDispatcher(Network::EventDispatcher* dispatcher)
{ 
	pDispatcher_ = dispatcher; 
	g_pDebugHelperSyncHandler->startActiveTick();
}

//-------------------------------------------------------------------------------------
void DebugHelper::pNetworkInterface(Network::NetworkInterface* networkInterface)
{ 
	pNetworkInterface_ = networkInterface; 
}

//-------------------------------------------------------------------------------------
void DebugHelper::onMessage(uint32 logType, const char * str, uint32 length)
{
#if !defined( _WIN32 ) && !defined( PLAYSTATION3 )
	if (g_shouldWriteToSyslog)
	{
		int lid = LOG_INFO;

		switch(logType)
		{
		case KBELOG_ERROR:
			lid = LOG_ERR;
			break;
		case KBELOG_CRITICAL:
			lid = LOG_CRIT;
			break;
		case KBELOG_WARNING:
			lid = LOG_WARNING;
			break;
		default:
			lid = LOG_INFO;
			break;
		};
		
		if(lid == KBELOG_ERROR || lid == KBELOG_CRITICAL)
			syslog( LOG_CRIT, "%s", str );
	}
#endif

	if(length <= 0 || noSyncLog_)
		return;

	if(g_componentType == MACHINE_TYPE || 
		g_componentType == CONSOLE_TYPE || 
		g_componentType == MESSAGELOG_TYPE || 
		g_componentType == CLIENT_TYPE)
		return;

	if(hasBufferedLogPackets_ > g_kbeSrvConfig.tickMaxBufferedLogs())
	{
		int8 v = Network::g_trace_packet;
		Network::g_trace_packet = 0;

#ifdef NO_USE_LOG4CXX
#else
		LOG4CXX_WARN(g_logger, "DebugHelper::onMessage: bufferedLogPackets is full, discard log-packets!\n");
#endif

		Network::g_trace_packet = v;

		clearBufferedLog();
		return;
	}

	Network::Bundle* pBundle = Network::Bundle::ObjPool().createObject();

	int8 v = Network::g_trace_packet;
	Network::g_trace_packet = 0;
	pBundle->newMessage(MessagelogInterface::writeLog);

	(*pBundle) << logType;
	(*pBundle) << g_componentType;
	(*pBundle) << g_componentID;
	(*pBundle) << g_componentGlobalOrder;
	(*pBundle) << g_componentGroupOrder;

	struct timeb tp;
	ftime(&tp);

	int64 t = tp.time;
	(*pBundle) << t;
	uint32 millitm = tp.millitm;
	(*pBundle) << millitm;
	(*pBundle) << str;
	
	++hasBufferedLogPackets_;
	bufferedLogPackets_.push(pBundle);

	Network::g_trace_packet = v;
	g_pDebugHelperSyncHandler->startActiveTick();
}

//-------------------------------------------------------------------------------------
void DebugHelper::registerMessagelog(Network::MessageID msgID, Network::Address* pAddr)
{
	messagelogAddr_ = *pAddr;
}

//-------------------------------------------------------------------------------------
void DebugHelper::unregisterMessagelog(Network::MessageID msgID, Network::Address* pAddr)
{
	messagelogAddr_ = Network::Address::NONE;
}

//-------------------------------------------------------------------------------------
void DebugHelper::print_msg(const std::string& s)
{
	KBEngine::thread::ThreadGuard tg(&this->logMutex); 

#ifdef NO_USE_LOG4CXX
#else
	if(canLogFile_)
		LOG4CXX_INFO(g_logger, s);
#endif

	onMessage(KBELOG_PRINT, s.c_str(), s.size());
}

//-------------------------------------------------------------------------------------
void DebugHelper::error_msg(const std::string& s)
{
	KBEngine::thread::ThreadGuard tg(&this->logMutex); 

#ifdef NO_USE_LOG4CXX
#else
	LOG4CXX_ERROR(g_logger, s);
#endif

	onMessage(KBELOG_ERROR, s.c_str(), s.size());

#if KBE_PLATFORM == PLATFORM_WIN32
	printf("[ERROR]: %s", s.c_str());
#endif
}

//-------------------------------------------------------------------------------------
void DebugHelper::info_msg(const std::string& s)
{
	KBEngine::thread::ThreadGuard tg(&this->logMutex); 

#ifdef NO_USE_LOG4CXX
#else
	if(canLogFile_)
		LOG4CXX_INFO(g_logger, s);
#endif

	onMessage(KBELOG_INFO, s.c_str(), s.size());
}

//-------------------------------------------------------------------------------------
int KBELOG_TYPE_MAPPING(int type)
{
#ifdef NO_USE_LOG4CXX
	return KBELOG_SCRIPT_INFO;
#else
	switch(type)
	{
	case log4cxx::ScriptLevel::SCRIPT_INFO:
		return KBELOG_SCRIPT_INFO;
	case log4cxx::ScriptLevel::SCRIPT_ERR:
		return KBELOG_SCRIPT_ERROR;
	case log4cxx::ScriptLevel::SCRIPT_DBG:
		return KBELOG_SCRIPT_DEBUG;
	case log4cxx::ScriptLevel::SCRIPT_WAR:
		return KBELOG_SCRIPT_WARNING;
	default:
		break;
	}

	return KBELOG_SCRIPT_NORMAL;
#endif
}

//-------------------------------------------------------------------------------------
void DebugHelper::script_info_msg(const std::string& s)
{
	KBEngine::thread::ThreadGuard tg(&this->logMutex); 

#ifdef NO_USE_LOG4CXX
#else
	if(canLogFile_)
		LOG4CXX_LOG(g_logger,  log4cxx::ScriptLevel::toLevel(scriptMsgType_), s);
#endif


	onMessage(KBELOG_TYPE_MAPPING(scriptMsgType_), s.c_str(), s.size());

#if KBE_PLATFORM == PLATFORM_WIN32
	// ������û��ֶ����õ�Ҳ���Ϊ������Ϣ
	if(log4cxx::ScriptLevel::SCRIPT_ERR == scriptMsgType_)
		printf("[S_ERROR]: %s", s.c_str());
#endif
}

//-------------------------------------------------------------------------------------
void DebugHelper::script_error_msg(const std::string& s)
{
	KBEngine::thread::ThreadGuard tg(&this->logMutex); 

	setScriptMsgType(log4cxx::ScriptLevel::SCRIPT_ERR);

#ifdef NO_USE_LOG4CXX
#else
	if(canLogFile_)
		LOG4CXX_LOG(g_logger,  log4cxx::ScriptLevel::toLevel(scriptMsgType_), s);
#endif

	onMessage(KBELOG_SCRIPT_ERROR, s.c_str(), s.size());

#if KBE_PLATFORM == PLATFORM_WIN32
	printf("[S_ERROR]: %s", s.c_str());
#endif
}

//-------------------------------------------------------------------------------------
void DebugHelper::setScriptMsgType(int msgtype)
{
	scriptMsgType_ = msgtype;
}

//-------------------------------------------------------------------------------------
void DebugHelper::resetScriptMsgType()
{
	setScriptMsgType(log4cxx::ScriptLevel::SCRIPT_INFO);
}

//-------------------------------------------------------------------------------------
void DebugHelper::debug_msg(const std::string& s)
{
	KBEngine::thread::ThreadGuard tg(&this->logMutex); 

#ifdef NO_USE_LOG4CXX
#else
	if(canLogFile_)
		LOG4CXX_DEBUG(g_logger, s);
#endif

	onMessage(KBELOG_DEBUG, s.c_str(), s.size());
}

//-------------------------------------------------------------------------------------
void DebugHelper::warning_msg(const std::string& s)
{
	KBEngine::thread::ThreadGuard tg(&this->logMutex); 

#ifdef NO_USE_LOG4CXX
#else
	if(canLogFile_)
		LOG4CXX_WARN(g_logger, s);
#endif

	onMessage(KBELOG_WARNING, s.c_str(), s.size());
}

//-------------------------------------------------------------------------------------
void DebugHelper::critical_msg(const std::string& s)
{
	KBEngine::thread::ThreadGuard tg(&this->logMutex); 

	char buf[DBG_PT_SIZE];
	kbe_snprintf(buf, DBG_PT_SIZE, "%s(%d) -> %s\n\t%s\n", _currFile.c_str(), _currLine, _currFuncName.c_str(), s.c_str());

#ifdef NO_USE_LOG4CXX
#else
	LOG4CXX_FATAL(g_logger, buf);
#endif

#if KBE_PLATFORM == PLATFORM_WIN32
	printf("[FATAL]: %s", s.c_str());
#endif

	onMessage(KBELOG_CRITICAL, buf, strlen(buf));
	backtrace_msg();
}

//-------------------------------------------------------------------------------------
#ifdef unix
#define MAX_DEPTH 50
#include <execinfo.h>
#include <cxxabi.h>

void DebugHelper::backtrace_msg()
{
	void ** traceBuffer = new void*[MAX_DEPTH];
	uint32 depth = backtrace( traceBuffer, MAX_DEPTH );
	char ** traceStringBuffer = backtrace_symbols( traceBuffer, depth );
	for (uint32 i = 0; i < depth; i++)
	{
		// Format: <executable path>(<mangled-function-name>+<function
		// instruction offset>) [<eip>]
		std::string functionName;

		std::string traceString( traceStringBuffer[i] );
		std::string::size_type begin = traceString.find( '(' );
		bool gotFunctionName = (begin >= 0);

		if (gotFunctionName)
		{
			// Skip the round bracket start.
			++begin;
			std::string::size_type bracketEnd = traceString.find( ')', begin );
			std::string::size_type end = traceString.rfind( '+', bracketEnd );
			std::string mangled( traceString.substr( begin, end - begin ) );

			int status = 0;
			size_t demangledBufferLength = 0;
			char * demangledBuffer = abi::__cxa_demangle( mangled.c_str(), 0, 
				&demangledBufferLength, &status );

			if (demangledBuffer)
			{
				functionName.assign( demangledBuffer, demangledBufferLength );

				// __cxa_demangle allocates the memory for the demangled
				// output using malloc(), we need to free it.
				free( demangledBuffer );
			}
			else
			{
				// Didn't demangle, but we did get a function name, use that.
				functionName = mangled;
			}
		}

		std::string ss = fmt::format("Stack: #{} {}\n", 
			i,
			((gotFunctionName) ? functionName.c_str() : traceString.c_str()));

#ifdef NO_USE_LOG4CXX
#else
			LOG4CXX_INFO(g_logger, ss);
#endif

			onMessage(KBELOG_PRINT, ss.c_str(), ss.size());

	}

	free(traceStringBuffer);
	delete[] traceBuffer;
}

#else
void DebugHelper::backtrace_msg()
{
}
#endif

//-------------------------------------------------------------------------------------

}


