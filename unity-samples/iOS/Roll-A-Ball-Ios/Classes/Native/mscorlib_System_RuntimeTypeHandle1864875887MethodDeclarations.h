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

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_RuntimeTypeHandle1864875887.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.RuntimeTypeHandle::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void RuntimeTypeHandle__ctor_m437060952 (RuntimeTypeHandle_t1864875887 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.RuntimeTypeHandle::get_Value()
extern "C"  IntPtr_t RuntimeTypeHandle_get_Value_m3549598952 (RuntimeTypeHandle_t1864875887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.RuntimeTypeHandle::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void RuntimeTypeHandle_GetObjectData_m2331997365 (RuntimeTypeHandle_t1864875887 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.RuntimeTypeHandle::Equals(System.Object)
extern "C"  bool RuntimeTypeHandle_Equals_m3214712582 (RuntimeTypeHandle_t1864875887 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.RuntimeTypeHandle::GetHashCode()
extern "C"  int32_t RuntimeTypeHandle_GetHashCode_m3575892074 (RuntimeTypeHandle_t1864875887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct RuntimeTypeHandle_t1864875887;
struct RuntimeTypeHandle_t1864875887_marshaled_pinvoke;

extern "C" void RuntimeTypeHandle_t1864875887_marshal_pinvoke(const RuntimeTypeHandle_t1864875887& unmarshaled, RuntimeTypeHandle_t1864875887_marshaled_pinvoke& marshaled);
extern "C" void RuntimeTypeHandle_t1864875887_marshal_pinvoke_back(const RuntimeTypeHandle_t1864875887_marshaled_pinvoke& marshaled, RuntimeTypeHandle_t1864875887& unmarshaled);
extern "C" void RuntimeTypeHandle_t1864875887_marshal_pinvoke_cleanup(RuntimeTypeHandle_t1864875887_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct RuntimeTypeHandle_t1864875887;
struct RuntimeTypeHandle_t1864875887_marshaled_com;

extern "C" void RuntimeTypeHandle_t1864875887_marshal_com(const RuntimeTypeHandle_t1864875887& unmarshaled, RuntimeTypeHandle_t1864875887_marshaled_com& marshaled);
extern "C" void RuntimeTypeHandle_t1864875887_marshal_com_back(const RuntimeTypeHandle_t1864875887_marshaled_com& marshaled, RuntimeTypeHandle_t1864875887& unmarshaled);
extern "C" void RuntimeTypeHandle_t1864875887_marshal_com_cleanup(RuntimeTypeHandle_t1864875887_marshaled_com& marshaled);
