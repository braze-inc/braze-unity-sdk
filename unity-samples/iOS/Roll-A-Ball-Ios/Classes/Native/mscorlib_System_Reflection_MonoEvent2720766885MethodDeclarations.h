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

// System.Reflection.MonoEvent
struct MonoEvent_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_EventAttributes1168020927.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"

// System.Void System.Reflection.MonoEvent::.ctor()
extern "C"  void MonoEvent__ctor_m1732756001 (MonoEvent_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventAttributes System.Reflection.MonoEvent::get_Attributes()
extern "C"  int32_t MonoEvent_get_Attributes_m3196030141 (MonoEvent_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoEvent::GetAddMethod(System.Boolean)
extern "C"  MethodInfo_t * MonoEvent_GetAddMethod_m3118173230 (MonoEvent_t * __this, bool ___nonPublic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoEvent::get_DeclaringType()
extern "C"  Type_t * MonoEvent_get_DeclaringType_m3994610097 (MonoEvent_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoEvent::get_ReflectedType()
extern "C"  Type_t * MonoEvent_get_ReflectedType_m3225056870 (MonoEvent_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoEvent::get_Name()
extern "C"  String_t* MonoEvent_get_Name_m4045390228 (MonoEvent_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoEvent::ToString()
extern "C"  String_t* MonoEvent_ToString_m3407115308 (MonoEvent_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoEvent::IsDefined(System.Type,System.Boolean)
extern "C"  bool MonoEvent_IsDefined_m3229573604 (MonoEvent_t * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoEvent::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t11523773* MonoEvent_GetCustomAttributes_m2984693479 (MonoEvent_t * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoEvent::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t11523773* MonoEvent_GetCustomAttributes_m1928774740 (MonoEvent_t * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoEvent::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void MonoEvent_GetObjectData_m2378937663 (MonoEvent_t * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
