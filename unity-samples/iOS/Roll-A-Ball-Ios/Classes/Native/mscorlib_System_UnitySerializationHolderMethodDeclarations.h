#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UnitySerializationHolder
struct UnitySerializationHolder_t2299;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t960;
// System.Type
struct Type_t;
// System.DBNull
struct DBNull_t2241;
// System.Reflection.Module
struct Module_t1752;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void UnitySerializationHolder__ctor_m11991 (UnitySerializationHolder_t2299 * __this, SerializationInfo_t960 * ___info, StreamingContext_t961  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void UnitySerializationHolder_GetTypeData_m11992 (Object_t * __this/* static, unused */, Type_t * ___instance, SerializationInfo_t960 * ___info, StreamingContext_t961  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void UnitySerializationHolder_GetDBNullData_m11993 (Object_t * __this/* static, unused */, DBNull_t2241 * ___instance, SerializationInfo_t960 * ___info, StreamingContext_t961  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void UnitySerializationHolder_GetModuleData_m11994 (Object_t * __this/* static, unused */, Module_t1752 * ___instance, SerializationInfo_t960 * ___info, StreamingContext_t961  ___ctx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void UnitySerializationHolder_GetObjectData_m11995 (UnitySerializationHolder_t2299 * __this, SerializationInfo_t960 * ___info, StreamingContext_t961  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
 Object_t * UnitySerializationHolder_GetRealObject_m11996 (UnitySerializationHolder_t2299 * __this, StreamingContext_t961  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
