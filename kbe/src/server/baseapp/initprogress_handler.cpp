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

#include "baseapp.h"
#include "initprogress_handler.h"
#include "entitydef/scriptdef_module.h"
#include "entitydef/entity_macro.h"
#include "network/fixed_messages.h"
#include "math/math.h"
#include "network/bundle.h"
#include "network/channel.h"

#include "../../server/baseappmgr/baseappmgr_interface.h"

namespace KBEngine{	

//-------------------------------------------------------------------------------------
InitProgressHandler::InitProgressHandler(Network::NetworkInterface & networkInterface):
Task(),
networkInterface_(networkInterface)
{
	networkInterface.dispatcher().addFrequentTask(this);
}

//-------------------------------------------------------------------------------------
InitProgressHandler::~InitProgressHandler()
{
	// networkInterface_.mainDispatcher().cancelFrequentTask(this);
	DEBUG_MSG("InitProgressHandler::~InitProgressHandler()\n");
}

//-------------------------------------------------------------------------------------
bool InitProgressHandler::process()
{
	Components::COMPONENTS& cts = Components::getSingleton().getComponents(BASEAPPMGR_TYPE);
	Network::Channel* pChannel = NULL;

	if(cts.size() > 0)
	{
		Components::COMPONENTS::iterator ctiter = cts.begin();
		if((*ctiter).pChannel == NULL)
			return true;

		pChannel = (*ctiter).pChannel;
	}

	if(pChannel == NULL)
		return true;

	float v = 0.0f;
	bool completed = false;

	if(PyObject_HasAttrString(Baseapp::getSingleton().getEntryScript().get(), "onReadyForLogin") > 0)
	{
		// ���нű����������
		PyObject* pyResult = PyObject_CallMethod(Baseapp::getSingleton().getEntryScript().get(), 
											const_cast<char*>("onReadyForLogin"), 
											const_cast<char*>("i"), 
											g_componentGroupOrder);

		if(pyResult != NULL)
		{
			completed = (pyResult == Py_True);
			
			if(!completed)
			{
				v = (float)PyFloat_AsDouble(pyResult);
				if (PyErr_Occurred())
				{
					SCRIPT_ERROR_CHECK();
					Py_DECREF(pyResult);
					return true;
				}
			}
			else
			{
				v = 100.f;
			}

			Py_DECREF(pyResult);
		}
		else
		{
			SCRIPT_ERROR_CHECK();
			return true;
		}
	}
	else
	{
		v = 100.f;
		completed = true;
	}
	
	if(v >= 0.9999f)
	{
		v = 100.f;
		completed = true;
	}

	Network::Bundle::SmartPoolObjectPtr bundleptr = Network::Bundle::createSmartPoolObj();

	(*bundleptr)->newMessage(BaseappmgrInterface::onBaseappInitProgress);
	(*(*bundleptr)) << g_componentID << v;
	(*bundleptr)->send(networkInterface_, pChannel);

	if(completed)
	{
		delete this;
		return false;
	}

	return true;
}

//-------------------------------------------------------------------------------------

}
