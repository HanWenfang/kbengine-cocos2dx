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


#include "packet_filter.hpp"

#ifndef CODE_INLINE
#include "packet_filter.ipp"
#endif

#include "network/channel.hpp"
#include "network/network_interface.hpp"
#include "network/packet_receiver.hpp"

namespace KBEngine { 
namespace Mercury
{
//-------------------------------------------------------------------------------------
Reason PacketFilter::send(NetworkInterface & networkInterface, Channel * pChannel, Packet * pPacket)
{
	return networkInterface.basicSendWithRetries(pChannel, pPacket);
}

//-------------------------------------------------------------------------------------
Reason PacketFilter::recv(Channel * pChannel, PacketReceiver & receiver, Packet * pPacket)
{
	return receiver.processFilteredPacket(pChannel, pPacket);
}

//-------------------------------------------------------------------------------------
} 
}
