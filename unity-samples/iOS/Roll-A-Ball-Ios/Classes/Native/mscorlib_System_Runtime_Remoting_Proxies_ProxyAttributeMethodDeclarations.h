#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Proxies.ProxyAttribute
struct ProxyAttribute_t2076;
// System.MarshalByRefObject
struct MarshalByRefObject_t1598;
// System.Type
struct Type_t;
// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t2077;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t2078;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Contexts.Context
struct Context_t2037;
// System.Runtime.Remoting.Activation.IConstructionCallMessage
struct IConstructionCallMessage_t2036;

// System.MarshalByRefObject System.Runtime.Remoting.Proxies.ProxyAttribute::CreateInstance(System.Type)
 MarshalByRefObject_t1598 * ProxyAttribute_CreateInstance_m10358 (ProxyAttribute_t2076 * __this, Type_t * ___serverType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Proxies.ProxyAttribute::CreateProxy(System.Runtime.Remoting.ObjRef,System.Type,System.Object,System.Runtime.Remoting.Contexts.Context)
 RealProxy_t2077 * ProxyAttribute_CreateProxy_m10359 (ProxyAttribute_t2076 * __this, ObjRef_t2078 * ___objRef, Type_t * ___serverType, Object_t * ___serverObject, Context_t2037 * ___serverContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.ProxyAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
 void ProxyAttribute_GetPropertiesForNewContext_m10360 (ProxyAttribute_t2076 * __this, Object_t * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Proxies.ProxyAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
 bool ProxyAttribute_IsContextOK_m10361 (ProxyAttribute_t2076 * __this, Context_t2037 * ___ctx, Object_t * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
