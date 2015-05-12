#pragma once
#include <stdint.h>
// System.Reflection.MethodInfo
struct MethodInfo_t211;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t1132;
// System.Runtime.Remoting.Messaging.ConstructionCall
struct ConstructionCall_t2041;
// System.Runtime.Remoting.Proxies.RealProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RealProxy.h"
// System.Runtime.Remoting.Proxies.RemotingProxy
struct RemotingProxy_t2094  : public RealProxy_t2089
{
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Proxies.RemotingProxy::_sink
	Object_t * ____sink_7;
	// System.Boolean System.Runtime.Remoting.Proxies.RemotingProxy::_hasEnvoySink
	bool ____hasEnvoySink_8;
	// System.Runtime.Remoting.Messaging.ConstructionCall System.Runtime.Remoting.Proxies.RemotingProxy::_ctorCall
	ConstructionCall_t2041 * ____ctorCall_9;
};
struct RemotingProxy_t2094_StaticFields{
	// System.Reflection.MethodInfo System.Runtime.Remoting.Proxies.RemotingProxy::_cache_GetTypeMethod
	MethodInfo_t211 * ____cache_GetTypeMethod_5;
	// System.Reflection.MethodInfo System.Runtime.Remoting.Proxies.RemotingProxy::_cache_GetHashCodeMethod
	MethodInfo_t211 * ____cache_GetHashCodeMethod_6;
};
