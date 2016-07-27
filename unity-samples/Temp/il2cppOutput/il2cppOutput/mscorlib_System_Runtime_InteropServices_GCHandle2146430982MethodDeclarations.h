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

// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_InteropServices_GCHandle2146430982.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Runtime_InteropServices_GCHandleTy1597784416.h"

// System.Void System.Runtime.InteropServices.GCHandle::.ctor(System.Object,System.Runtime.InteropServices.GCHandleType)
extern "C"  void GCHandle__ctor_m396637490 (GCHandle_t2146430982 * __this, Il2CppObject * ___value0, int32_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
extern "C"  bool GCHandle_get_IsAllocated_m1991616348 (GCHandle_t2146430982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
extern "C"  Il2CppObject * GCHandle_get_Target_m1356841761 (GCHandle_t2146430982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
extern "C"  GCHandle_t2146430982  GCHandle_Alloc_m4018232088 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, int32_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
extern "C"  void GCHandle_Free_m2878302728 (GCHandle_t2146430982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.InteropServices.GCHandle::GetTarget(System.Int32)
extern "C"  Il2CppObject * GCHandle_GetTarget_m385786707 (Il2CppObject * __this /* static, unused */, int32_t ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.GCHandle::GetTargetHandle(System.Object,System.Int32,System.Runtime.InteropServices.GCHandleType)
extern "C"  int32_t GCHandle_GetTargetHandle_m414463034 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___obj0, int32_t ___handle1, int32_t ___type2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.GCHandle::FreeHandle(System.Int32)
extern "C"  void GCHandle_FreeHandle_m2607926881 (Il2CppObject * __this /* static, unused */, int32_t ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.InteropServices.GCHandle::Equals(System.Object)
extern "C"  bool GCHandle_Equals_m2737763611 (GCHandle_t2146430982 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.GCHandle::GetHashCode()
extern "C"  int32_t GCHandle_GetHashCode_m3173355379 (GCHandle_t2146430982 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct GCHandle_t2146430982;
struct GCHandle_t2146430982_marshaled_pinvoke;

extern "C" void GCHandle_t2146430982_marshal_pinvoke(const GCHandle_t2146430982& unmarshaled, GCHandle_t2146430982_marshaled_pinvoke& marshaled);
extern "C" void GCHandle_t2146430982_marshal_pinvoke_back(const GCHandle_t2146430982_marshaled_pinvoke& marshaled, GCHandle_t2146430982& unmarshaled);
extern "C" void GCHandle_t2146430982_marshal_pinvoke_cleanup(GCHandle_t2146430982_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct GCHandle_t2146430982;
struct GCHandle_t2146430982_marshaled_com;

extern "C" void GCHandle_t2146430982_marshal_com(const GCHandle_t2146430982& unmarshaled, GCHandle_t2146430982_marshaled_com& marshaled);
extern "C" void GCHandle_t2146430982_marshal_com_back(const GCHandle_t2146430982_marshaled_com& marshaled, GCHandle_t2146430982& unmarshaled);
extern "C" void GCHandle_t2146430982_marshal_com_cleanup(GCHandle_t2146430982_marshaled_com& marshaled);
