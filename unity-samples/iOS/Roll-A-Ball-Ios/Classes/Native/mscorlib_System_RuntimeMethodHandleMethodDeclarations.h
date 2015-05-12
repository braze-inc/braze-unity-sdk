#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.RuntimeMethodHandle
struct RuntimeMethodHandle_t1960;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t971;
// System.Object
struct Object_t;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.RuntimeMethodHandle::.ctor(System.IntPtr)
 void RuntimeMethodHandle__ctor_m11999 (RuntimeMethodHandle_t1960 * __this, IntPtr_t120 ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.RuntimeMethodHandle::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void RuntimeMethodHandle__ctor_m12000 (RuntimeMethodHandle_t1960 * __this, SerializationInfo_t971 * ___info, StreamingContext_t972  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.RuntimeMethodHandle::get_Value()
 IntPtr_t120 RuntimeMethodHandle_get_Value_m12001 (RuntimeMethodHandle_t1960 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.RuntimeMethodHandle::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void RuntimeMethodHandle_GetObjectData_m12002 (RuntimeMethodHandle_t1960 * __this, SerializationInfo_t971 * ___info, StreamingContext_t972  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.RuntimeMethodHandle::Equals(System.Object)
 bool RuntimeMethodHandle_Equals_m12003 (RuntimeMethodHandle_t1960 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.RuntimeMethodHandle::GetHashCode()
 int32_t RuntimeMethodHandle_GetHashCode_m12004 (RuntimeMethodHandle_t1960 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
