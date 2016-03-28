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

// System.DelegateSerializationHolder
struct DelegateSerializationHolder_t1755885420;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Delegate
struct Delegate_t3660574010;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Delegate3660574010.h"

// System.Void System.DelegateSerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DelegateSerializationHolder__ctor_m3368674811 (DelegateSerializationHolder_t1755885420 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DelegateSerializationHolder::GetDelegateData(System.Delegate,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DelegateSerializationHolder_GetDelegateData_m3517598358 (Il2CppObject * __this /* static, unused */, Delegate_t3660574010 * ___instance, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DelegateSerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DelegateSerializationHolder_GetObjectData_m107938392 (DelegateSerializationHolder_t1755885420 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.DelegateSerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C"  Il2CppObject * DelegateSerializationHolder_GetRealObject_m296541084 (DelegateSerializationHolder_t1755885420 * __this, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
