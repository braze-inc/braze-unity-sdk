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

// System.Runtime.Remoting.ObjRef
struct ObjRef_t3894317828;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Runtime.Remoting.IChannelInfo
struct IChannelInfo_t18691856;
// System.Runtime.Remoting.IEnvoyInfo
struct IEnvoyInfo_t3291672932;
// System.Runtime.Remoting.IRemotingTypeInfo
struct IRemotingTypeInfo_t2946196700;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Runtime.Remoting.ObjRef::.ctor()
extern "C"  void ObjRef__ctor_m1153489184 (ObjRef_t3894317828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ObjRef__ctor_m2174528097 (ObjRef_t3894317828 * __this, SerializationInfo_t2995724695 * ___info0, StreamingContext_t986364934  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::.cctor()
extern "C"  void ObjRef__cctor_m916330125 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.ObjRef::get_IsReferenceToWellKnow()
extern "C"  bool ObjRef_get_IsReferenceToWellKnow_m2771899016 (ObjRef_t3894317828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.IChannelInfo System.Runtime.Remoting.ObjRef::get_ChannelInfo()
extern "C"  Il2CppObject * ObjRef_get_ChannelInfo_m2862076953 (ObjRef_t3894317828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.IEnvoyInfo System.Runtime.Remoting.ObjRef::get_EnvoyInfo()
extern "C"  Il2CppObject * ObjRef_get_EnvoyInfo_m2219083329 (ObjRef_t3894317828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::set_EnvoyInfo(System.Runtime.Remoting.IEnvoyInfo)
extern "C"  void ObjRef_set_EnvoyInfo_m2077304852 (ObjRef_t3894317828 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.IRemotingTypeInfo System.Runtime.Remoting.ObjRef::get_TypeInfo()
extern "C"  Il2CppObject * ObjRef_get_TypeInfo_m3305027018 (ObjRef_t3894317828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::set_TypeInfo(System.Runtime.Remoting.IRemotingTypeInfo)
extern "C"  void ObjRef_set_TypeInfo_m752870763 (ObjRef_t3894317828 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ObjRef::get_URI()
extern "C"  String_t* ObjRef_get_URI_m1667957438 (ObjRef_t3894317828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::set_URI(System.String)
extern "C"  void ObjRef_set_URI_m837283029 (ObjRef_t3894317828 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void ObjRef_GetObjectData_m1166147774 (ObjRef_t3894317828 * __this, SerializationInfo_t2995724695 * ___info0, StreamingContext_t986364934  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.ObjRef::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C"  Il2CppObject * ObjRef_GetRealObject_m2762672246 (ObjRef_t3894317828 * __this, StreamingContext_t986364934  ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ObjRef::UpdateChannelInfo()
extern "C"  void ObjRef_UpdateChannelInfo_m3151551622 (ObjRef_t3894317828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.ObjRef::get_ServerType()
extern "C"  Type_t * ObjRef_get_ServerType_m164890532 (ObjRef_t3894317828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
