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


#if defined(DEFINE_IN_INTERFACE)
	#undef KBE_MESSAGELOG_INTERFACE_HPP
#endif


#ifndef KBE_MESSAGELOG_INTERFACE_HPP
#define KBE_MESSAGELOG_INTERFACE_HPP

// common include	
#if defined(MESSAGELOG)
#include "messagelog.h"
#endif
#include "messagelog_interface_macros.h"
#include "network/interface_defs.h"
//#define NDEBUG
// windows include	
#if KBE_PLATFORM == PLATFORM_WIN32
#else
// linux include
#endif
	
namespace KBEngine{

/**
	Messagelog������Ϣ�ӿ��ڴ˶���
*/
NETWORK_INTERFACE_DECLARE_BEGIN(MessagelogInterface)
	// ĳappע���Լ��Ľӿڵ�ַ����app
	MESSAGELOG_MESSAGE_DECLARE_ARGS11(onRegisterNewApp,						NETWORK_VARIABLE_MESSAGE,
									int32,									uid, 
									std::string,							username,
									COMPONENT_TYPE,							componentType, 
									COMPONENT_ID,							componentID, 
									COMPONENT_ORDER,						globalorderID,
									COMPONENT_ORDER,						grouporderID,
									uint32,									intaddr, 
									uint16,									intport,
									uint32,									extaddr, 
									uint16,									extport,
									std::string,							extAddrEx)

	// ĳapp��������look��
	MESSAGELOG_MESSAGE_DECLARE_ARGS0(lookApp,								NETWORK_FIXED_MESSAGE)

	// ĳ��app����鿴��app����״̬��
	MESSAGELOG_MESSAGE_DECLARE_ARGS0(queryLoad,								NETWORK_FIXED_MESSAGE)

	// ĳ��app��app��֪���ڻ״̬��
	MESSAGELOG_MESSAGE_DECLARE_ARGS2(onAppActiveTick,						NETWORK_FIXED_MESSAGE,
									COMPONENT_TYPE,							componentType, 
									COMPONENT_ID,							componentID)

	// Զ��д��־
	MESSAGELOG_MESSAGE_DECLARE_STREAM(writeLog,								NETWORK_VARIABLE_MESSAGE)

	// ע��log������
	MESSAGELOG_MESSAGE_DECLARE_STREAM(registerLogWatcher,					NETWORK_VARIABLE_MESSAGE)

	// ע��log������
	MESSAGELOG_MESSAGE_DECLARE_STREAM(deregisterLogWatcher,					NETWORK_VARIABLE_MESSAGE)

	// log�����߸����Լ�������
	MESSAGELOG_MESSAGE_DECLARE_STREAM(updateLogWatcherSetting,				NETWORK_VARIABLE_MESSAGE)

	// ����رշ�����
	MESSAGELOG_MESSAGE_DECLARE_STREAM(reqCloseServer,						NETWORK_VARIABLE_MESSAGE)

	// �����ѯwatcher����
	MESSAGELOG_MESSAGE_DECLARE_STREAM(queryWatcher,							NETWORK_VARIABLE_MESSAGE)

	// ��ʼprofile
	MESSAGELOG_MESSAGE_DECLARE_STREAM(startProfile,							NETWORK_VARIABLE_MESSAGE)

	// ����ǿ��ɱ����ǰapp
	MESSAGELOG_MESSAGE_DECLARE_STREAM(reqKillServer,						NETWORK_VARIABLE_MESSAGE)

NETWORK_INTERFACE_DECLARE_END()

#ifdef DEFINE_IN_INTERFACE
	#undef DEFINE_IN_INTERFACE
#endif

}
#endif
