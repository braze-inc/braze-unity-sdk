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

// System.Runtime.Remoting.Messaging.MethodCall
struct MethodCall_t524563129;
// System.Runtime.Remoting.Messaging.Header[]
struct HeaderU5BU5D_t3833532446;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t1074763138;
// System.Reflection.MethodBase
struct MethodBase_t3461000640;
// System.Collections.IDictionary
struct IDictionary_t1654916945;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3431720054;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor(System.Runtime.Remoting.Messaging.Header[])
extern "C"  void MethodCall__ctor_m2280547300 (MethodCall_t524563129 * __this, HeaderU5BU5D_t3833532446* ___h1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MethodCall__ctor_m3232041652 (MethodCall_t524563129 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::.ctor()
extern "C"  void MethodCall__ctor_m4232248307 (MethodCall_t524563129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::System.Runtime.Remoting.Messaging.IInternalMessage.set_Uri(System.String)
extern "C"  void MethodCall_System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri_m75118319 (MethodCall_t524563129 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::InitMethodProperty(System.String,System.Object)
extern "C"  void MethodCall_InitMethodProperty_m2379029369 (MethodCall_t524563129 * __this, String_t* ___key, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MethodCall_GetObjectData_m3092930065 (MethodCall_t524563129 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.MethodCall::get_Args()
extern "C"  ObjectU5BU5D_t11523773* MethodCall_get_Args_m2777349738 (MethodCall_t524563129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MethodCall::get_LogicalCallContext()
extern "C"  LogicalCallContext_t1074763138 * MethodCall_get_LogicalCallContext_m3758703237 (MethodCall_t524563129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MethodCall::get_MethodBase()
extern "C"  MethodBase_t3461000640 * MethodCall_get_MethodBase_m1563575745 (MethodCall_t524563129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_MethodName()
extern "C"  String_t* MethodCall_get_MethodName_m703141353 (MethodCall_t524563129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodCall::get_MethodSignature()
extern "C"  Il2CppObject * MethodCall_get_MethodSignature_m3505289450 (MethodCall_t524563129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::get_Properties()
extern "C"  Il2CppObject * MethodCall_get_Properties_m3494690993 (MethodCall_t524563129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::InitDictionary()
extern "C"  void MethodCall_InitDictionary_m1823571767 (MethodCall_t524563129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_TypeName()
extern "C"  String_t* MethodCall_get_TypeName_m2818536578 (MethodCall_t524563129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MethodCall::get_Uri()
extern "C"  String_t* MethodCall_get_Uri_m110584337 (MethodCall_t524563129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::set_Uri(System.String)
extern "C"  void MethodCall_set_Uri_m3629049250 (MethodCall_t524563129 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::Init()
extern "C"  void MethodCall_Init_m1334986753 (MethodCall_t524563129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodCall::ResolveMethod()
extern "C"  void MethodCall_ResolveMethod_m2191435710 (MethodCall_t524563129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.Messaging.MethodCall::CastTo(System.String,System.Type)
extern "C"  Type_t * MethodCall_CastTo_m2140135600 (MethodCall_t524563129 * __this, String_t* ___clientType, Type_t * ___serverType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MethodCall::GetTypeNameFromAssemblyQualifiedName(System.String)
extern "C"  String_t* MethodCall_GetTypeNameFromAssemblyQualifiedName_m148372306 (Il2CppObject * __this /* static, unused */, String_t* ___aqname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Runtime.Remoting.Messaging.MethodCall::get_GenericArguments()
extern "C"  TypeU5BU5D_t3431720054* MethodCall_get_GenericArguments_m3093552433 (MethodCall_t524563129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
