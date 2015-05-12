#pragma once
#include <stdint.h>
// System.Reflection.MethodInfo
struct MethodInfo_t198;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t1121;
// System.Runtime.Remoting.Messaging.ConstructionCall
struct ConstructionCall_t2029;
// System.Runtime.Remoting.Proxies.RealProxy
#include "mscorlib_System_Runtime_Remoting_Proxies_RealProxy.h"
// System.Runtime.Remoting.Proxies.RemotingProxy
struct RemotingProxy_t2082  : public RealProxy_t2077
{
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Proxies.RemotingProxy::_sink
	Object_t * ____sink_7;
	// System.Boolean System.Runtime.Remoting.Proxies.RemotingProxy::_hasEnvoySink
	bool ____hasEnvoySink_8;
	// System.Runtime.Remoting.Messaging.ConstructionCall System.Runtime.Remoting.Proxies.RemotingProxy::_ctorCall
	ConstructionCall_t2029 * ____ctorCall_9;
};
struct RemotingProxy_t2082_StaticFields{
	// System.Reflection.MethodInfo System.Runtime.Remoting.Proxies.RemotingProxy::_cache_GetTypeMethod
	MethodInfo_t198 * ____cache_GetTypeMethod_5;
	// System.Reflection.MethodInfo System.Runtime.Remoting.Proxies.RemotingProxy::_cache_GetHashCodeMethod
	MethodInfo_t198 * ____cache_GetHashCodeMethod_6;
};
