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

#include "html5_packet_reader.hpp"
#include "network/channel.hpp"
#include "network/message_handler.hpp"
#include "network/mercurystats.hpp"

namespace KBEngine { 
namespace Mercury
{


//-------------------------------------------------------------------------------------
HTML5PacketReader::HTML5PacketReader(Channel* pChannel):
	PacketReader(pChannel)
{
}

//-------------------------------------------------------------------------------------
HTML5PacketReader::~HTML5PacketReader()
{
}

//-------------------------------------------------------------------------------------
void HTML5PacketReader::reset()
{
	PacketReader::reset();
}

//-------------------------------------------------------------------------------------
void HTML5PacketReader::processMessages(KBEngine::Mercury::MessageHandlers* pMsgHandlers, Packet* pPacket)
{
	PacketReader::processMessages(pMsgHandlers, pPacket);
}

//-------------------------------------------------------------------------------------
} 
}
