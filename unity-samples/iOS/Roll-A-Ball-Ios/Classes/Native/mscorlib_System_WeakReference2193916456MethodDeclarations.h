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

// System.WeakReference
struct WeakReference_t2193916456;
// System.Object
struct Il2CppObject;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"

// System.Void System.WeakReference::.ctor()
extern "C"  void WeakReference__ctor_m2482272510 (WeakReference_t2193916456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::.ctor(System.Object)
extern "C"  void WeakReference__ctor_m1824216406 (WeakReference_t2193916456 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::.ctor(System.Object,System.Boolean)
extern "C"  void WeakReference__ctor_m1724966759 (WeakReference_t2193916456 * __this, Il2CppObject * ___target, bool ___trackResurrection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WeakReference__ctor_m1465778495 (WeakReference_t2193916456 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::AllocateHandle(System.Object)
extern "C"  void WeakReference_AllocateHandle_m3300556457 (WeakReference_t2193916456 * __this, Il2CppObject * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.WeakReference::get_Target()
extern "C"  Il2CppObject * WeakReference_get_Target_m2183973397 (WeakReference_t2193916456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.WeakReference::get_TrackResurrection()
extern "C"  bool WeakReference_get_TrackResurrection_m2498111523 (WeakReference_t2193916456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::Finalize()
extern "C"  void WeakReference_Finalize_m3030916772 (WeakReference_t2193916456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WeakReference_GetObjectData_m1524996508 (WeakReference_t2193916456 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
