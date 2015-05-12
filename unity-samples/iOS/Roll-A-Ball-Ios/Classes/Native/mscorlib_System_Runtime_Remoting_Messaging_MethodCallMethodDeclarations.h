#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.MethodCall
struct MethodCall_t2056;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t112;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t2062;
// System.Reflection.MethodBase
struct MethodBase_t307;
// System.Object
struct Object_t;
// System.Collections.IDictionary
struct IDictionary_t1560;
// System.Type[]
struct TypeU5BU5D_t146;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t2063;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t960;
// System.Type
struct Type_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor(System.Runtime.Remoting.Messaging.Header[])
 void MethodCall__ctor_m10275 (MethodCall_t2056 * __this, HeaderU5BU5D_t2063* ___h1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MethodCall__ctor_m10276 (MethodCall_t2056 * __this, SerializationInfo_t960 * ___info, StreamingContext_t961  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor()
 void MethodCall__ctor_m10277 (MethodCall_t2056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String)
 void MethodCall_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m10278 (MethodCall_t2056 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::InitMethodProperty(System.String,System.Object)
 void MethodCall_InitMethodProperty_m10279 (MethodCall_t2056 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void MethodCall_GetObjectData_m10280 (MethodCall_t2056 * __this, SerializationInfo_t960 * ___info, StreamingContext_t961  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.MethodCall::get_Args()
 ObjectU5BU5D_t112* MethodCall_get_Args_m10281 (MethodCall_t2056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MethodCall::get_LogicalCallContext()
 LogicalCallContext_t2062 * MethodCall_get_LogicalCallContext_m10282 (MethodCall_t2056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MethodCall::get_MethodBase()
 MethodBase_t307 * MethodCall_get_MethodBase_m10283 (MethodCall_t2056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_MethodName()
 String_t* MethodCall_get_MethodName_m10284 (MethodCall_t2056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodCall::get_MethodSignature()
 Object_t * MethodCall_get_MethodSignature_m10285 (MethodCall_t2056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::get_Properties()
 Object_t * MethodCall_get_Properties_m10286 (MethodCall_t2056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::InitDictionary()
 void MethodCall_InitDictionary_m10287 (MethodCall_t2056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_TypeName()
 String_t* MethodCall_get_TypeName_m10288 (MethodCall_t2056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_Uri()
 String_t* MethodCall_get_Uri_m10289 (MethodCall_t2056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::set_Uri(System.String)
 void MethodCall_set_Uri_m10290 (MethodCall_t2056 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::Init()
 void MethodCall_Init_m10291 (MethodCall_t2056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::ResolveMethod()
 void MethodCall_ResolveMethod_m10292 (MethodCall_t2056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.Messaging.MethodCall::CastTo(System.String,System.Type)
 Type_t * MethodCall_CastTo_m10293 (MethodCall_t2056 * __this, String_t* ___clientType, Type_t * ___serverType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MethodCall::GetTypeNameFromAssemblyQualifiedName(System.String)
 String_t* MethodCall_GetTypeNameFromAssemblyQualifiedName_m10294 (Object_t * __this/* static, unused */, String_t* ___aqname, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Runtime.Remoting.Messaging.MethodCall::get_GenericArguments()
 TypeU5BU5D_t146* MethodCall_get_GenericArguments_m10295 (MethodCall_t2056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
