#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t1755;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t960;
// System.Object
struct Object_t;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.RuntimeFieldHandle::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void RuntimeFieldHandle__ctor_m8451 (RuntimeFieldHandle_t1755 * __this, SerializationInfo_t960 * ___info, StreamingContext_t961  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.RuntimeFieldHandle::get_Value()
 IntPtr_t107 RuntimeFieldHandle_get_Value_m8452 (RuntimeFieldHandle_t1755 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.RuntimeFieldHandle::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void RuntimeFieldHandle_GetObjectData_m8453 (RuntimeFieldHandle_t1755 * __this, SerializationInfo_t960 * ___info, StreamingContext_t961  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.RuntimeFieldHandle::Equals(System.Object)
 bool RuntimeFieldHandle_Equals_m8454 (RuntimeFieldHandle_t1755 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.RuntimeFieldHandle::GetHashCode()
 int32_t RuntimeFieldHandle_GetHashCode_m8455 (RuntimeFieldHandle_t1755 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
