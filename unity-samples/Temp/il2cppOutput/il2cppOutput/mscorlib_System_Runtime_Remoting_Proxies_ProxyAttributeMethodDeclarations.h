#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Runtime.Remoting.Proxies.ProxyAttribute
struct ProxyAttribute_t1781;
// System.MarshalByRefObject
struct MarshalByRefObject_t1068;
// System.Type
struct Type_t;
// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t1775;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t1790;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Contexts.Context
struct Context_t1730;
// System.Runtime.Remoting.Activation.IConstructionCallMessage
struct IConstructionCallMessage_t2073;

#include "codegen/il2cpp-codegen.h"

// System.MarshalByRefObject System.Runtime.Remoting.Proxies.ProxyAttribute::CreateInstance(System.Type)
extern "C" MarshalByRefObject_t1068 * ProxyAttribute_CreateInstance_m10448 (ProxyAttribute_t1781 * __this, Type_t * ___serverType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Proxies.ProxyAttribute::CreateProxy(System.Runtime.Remoting.ObjRef,System.Type,System.Object,System.Runtime.Remoting.Contexts.Context)
extern "C" RealProxy_t1775 * ProxyAttribute_CreateProxy_m10449 (ProxyAttribute_t1781 * __this, ObjRef_t1790 * ___objRef, Type_t * ___serverType, Object_t * ___serverObject, Context_t1730 * ___serverContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.ProxyAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" void ProxyAttribute_GetPropertiesForNewContext_m10450 (ProxyAttribute_t1781 * __this, Object_t * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Proxies.ProxyAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" bool ProxyAttribute_IsContextOK_m10451 (ProxyAttribute_t1781 * __this, Context_t1730 * ___ctx, Object_t * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
