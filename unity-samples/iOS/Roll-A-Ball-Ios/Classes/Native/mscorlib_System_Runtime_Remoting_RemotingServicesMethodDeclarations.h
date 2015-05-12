#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.RemotingServices
struct RemotingServices_t2095;
// System.Reflection.MethodBase
struct MethodBase_t307;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t2078;
// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t2077;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_t2065;
// System.Type[]
struct TypeU5BU5D_t146;
// System.Runtime.Remoting.ActivatedClientTypeEntry
struct ActivatedClientTypeEntry_t2084;
// System.Object[]
struct ObjectU5BU5D_t112;
// System.Runtime.Remoting.Identity
struct Identity_t2080;
// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t2081;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t1767;
// System.Runtime.Remoting.WellKnownObjectMode
#include "mscorlib_System_Runtime_Remoting_WellKnownObjectMode.h"

// System.Void System.Runtime.Remoting.RemotingServices::.cctor()
 void RemotingServices__cctor_m10416 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetVirtualMethod(System.Type,System.Reflection.MethodBase)
 MethodBase_t307 * RemotingServices_GetVirtualMethod_m10417 (Object_t * __this/* static, unused */, Type_t * ___type, MethodBase_t307 * ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.RemotingServices::IsTransparentProxy(System.Object)
 bool RemotingServices_IsTransparentProxy_m10418 (Object_t * __this/* static, unused */, Object_t * ___proxy, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.RemotingServices::GetServerTypeForUri(System.String)
 Type_t * RemotingServices_GetServerTypeForUri_m10419 (Object_t * __this/* static, unused */, String_t* ___URI, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::Unmarshal(System.Runtime.Remoting.ObjRef)
 Object_t * RemotingServices_Unmarshal_m10420 (Object_t * __this/* static, unused */, ObjRef_t2078 * ___objectRef, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::Unmarshal(System.Runtime.Remoting.ObjRef,System.Boolean)
 Object_t * RemotingServices_Unmarshal_m10421 (Object_t * __this/* static, unused */, ObjRef_t2078 * ___objectRef, bool ___fRefine, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.RemotingServices::GetRealProxy(System.Object)
 RealProxy_t2077 * RemotingServices_GetRealProxy_m10422 (Object_t * __this/* static, unused */, Object_t * ___proxy, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetMethodBaseFromMethodMessage(System.Runtime.Remoting.Messaging.IMethodMessage)
 MethodBase_t307 * RemotingServices_GetMethodBaseFromMethodMessage_m10423 (Object_t * __this/* static, unused */, Object_t * ___msg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetMethodBaseFromName(System.Type,System.String,System.Type[])
 MethodBase_t307 * RemotingServices_GetMethodBaseFromName_m10424 (Object_t * __this/* static, unused */, Type_t * ___type, String_t* ___methodName, TypeU5BU5D_t146* ___signature, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::FindInterfaceMethod(System.Type,System.String,System.Type[])
 MethodBase_t307 * RemotingServices_FindInterfaceMethod_m10425 (Object_t * __this/* static, unused */, Type_t * ___type, String_t* ___methodName, TypeU5BU5D_t146* ___signature, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxy(System.Runtime.Remoting.ActivatedClientTypeEntry,System.Object[])
 Object_t * RemotingServices_CreateClientProxy_m10426 (Object_t * __this/* static, unused */, ActivatedClientTypeEntry_t2084 * ___entry, ObjectU5BU5D_t112* ___activationAttributes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxyForContextBound(System.Type,System.Object[])
 Object_t * RemotingServices_CreateClientProxyForContextBound_m10427 (Object_t * __this/* static, unused */, Type_t * ___type, ObjectU5BU5D_t112* ___activationAttributes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Identity System.Runtime.Remoting.RemotingServices::GetIdentityForUri(System.String)
 Identity_t2080 * RemotingServices_GetIdentityForUri_m10428 (Object_t * __this/* static, unused */, String_t* ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.RemotingServices::RemoveAppNameFromUri(System.String)
 String_t* RemotingServices_RemoveAppNameFromUri_m10429 (Object_t * __this/* static, unused */, String_t* ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ClientIdentity System.Runtime.Remoting.RemotingServices::GetOrCreateClientIdentity(System.Runtime.Remoting.ObjRef,System.Type,System.Object&)
 ClientIdentity_t2081 * RemotingServices_GetOrCreateClientIdentity_m10430 (Object_t * __this/* static, unused */, ObjRef_t2078 * ___objRef, Type_t * ___proxyType, Object_t ** ___clientProxy, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ServerIdentity System.Runtime.Remoting.RemotingServices::CreateWellKnownServerIdentity(System.Type,System.String,System.Runtime.Remoting.WellKnownObjectMode)
 ServerIdentity_t1767 * RemotingServices_CreateWellKnownServerIdentity_m10431 (Object_t * __this/* static, unused */, Type_t * ___objectType, String_t* ___objectUri, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingServices::RegisterServerIdentity(System.Runtime.Remoting.ServerIdentity)
 void RemotingServices_RegisterServerIdentity_m10432 (Object_t * __this/* static, unused */, ServerIdentity_t1767 * ___identity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::GetProxyForRemoteObject(System.Runtime.Remoting.ObjRef,System.Type)
 Object_t * RemotingServices_GetProxyForRemoteObject_m10433 (Object_t * __this/* static, unused */, ObjRef_t2078 * ___objref, Type_t * ___classToProxy, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::GetRemoteObject(System.Runtime.Remoting.ObjRef,System.Type)
 Object_t * RemotingServices_GetRemoteObject_m10434 (Object_t * __this/* static, unused */, ObjRef_t2078 * ___objRef, Type_t * ___proxyType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingServices::RegisterInternalChannels()
 void RemotingServices_RegisterInternalChannels_m10435 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingServices::DisposeIdentity(System.Runtime.Remoting.Identity)
 void RemotingServices_DisposeIdentity_m10436 (Object_t * __this/* static, unused */, Identity_t2080 * ___ident, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.RemotingServices::GetNormalizedUri(System.String)
 String_t* RemotingServices_GetNormalizedUri_m10437 (Object_t * __this/* static, unused */, String_t* ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
