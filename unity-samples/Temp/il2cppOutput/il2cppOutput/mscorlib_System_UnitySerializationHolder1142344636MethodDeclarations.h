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

// System.UnitySerializationHolder
struct UnitySerializationHolder_t1142344636;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Type
struct Type_t;
// System.DBNull
struct DBNull_t491814586;
// System.Reflection.Module
struct Module_t206139610;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_DBNull491814586.h"
#include "mscorlib_System_Reflection_Module206139610.h"

// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UnitySerializationHolder__ctor_m3313764879 (UnitySerializationHolder_t1142344636 * __this, SerializationInfo_t2995724695 * ___info0, StreamingContext_t986364934  ___ctx1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UnitySerializationHolder_GetTypeData_m1915295124 (Il2CppObject * __this /* static, unused */, Type_t * ___instance0, SerializationInfo_t2995724695 * ___info1, StreamingContext_t986364934  ___ctx2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UnitySerializationHolder_GetDBNullData_m3162174122 (Il2CppObject * __this /* static, unused */, DBNull_t491814586 * ___instance0, SerializationInfo_t2995724695 * ___info1, StreamingContext_t986364934  ___ctx2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UnitySerializationHolder_GetModuleData_m3074840415 (Il2CppObject * __this /* static, unused */, Module_t206139610 * ___instance0, SerializationInfo_t2995724695 * ___info1, StreamingContext_t986364934  ___ctx2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UnitySerializationHolder_GetObjectData_m3726496364 (UnitySerializationHolder_t1142344636 * __this, SerializationInfo_t2995724695 * ___info0, StreamingContext_t986364934  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C"  Il2CppObject * UnitySerializationHolder_GetRealObject_m3182718270 (UnitySerializationHolder_t1142344636 * __this, StreamingContext_t986364934  ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
