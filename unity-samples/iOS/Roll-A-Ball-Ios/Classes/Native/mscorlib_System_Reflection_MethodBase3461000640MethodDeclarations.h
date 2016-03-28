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

// System.Reflection.MethodBase
struct MethodBase_t3461000640;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Type[]
struct TypeU5BU5D_t3431720054;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_RuntimeMethodHandle2360005078.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Reflection_CallingConventions3959446060.h"

// System.Void System.Reflection.MethodBase::.ctor()
extern "C"  void MethodBase__ctor_m2869737180 (MethodBase_t3461000640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandleNoGenericCheck(System.RuntimeMethodHandle)
extern "C"  MethodBase_t3461000640 * MethodBase_GetMethodFromHandleNoGenericCheck_m3857932574 (Il2CppObject * __this /* static, unused */, RuntimeMethodHandle_t2360005078  ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromIntPtr(System.IntPtr,System.IntPtr)
extern "C"  MethodBase_t3461000640 * MethodBase_GetMethodFromIntPtr_m1804781085 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle, IntPtr_t ___declaringType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandle(System.RuntimeMethodHandle)
extern "C"  MethodBase_t3461000640 * MethodBase_GetMethodFromHandle_m3548347628 (Il2CppObject * __this /* static, unused */, RuntimeMethodHandle_t2360005078  ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandleInternalType(System.IntPtr,System.IntPtr)
extern "C"  MethodBase_t3461000640 * MethodBase_GetMethodFromHandleInternalType_m1518673981 (Il2CppObject * __this /* static, unused */, IntPtr_t ___method_handle, IntPtr_t ___type_handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.MethodBase::GetParameterCount()
extern "C"  int32_t MethodBase_GetParameterCount_m3370013370 (MethodBase_t3461000640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
extern "C"  Il2CppObject * MethodBase_Invoke_m3435166155 (MethodBase_t3461000640 * __this, Il2CppObject * ___obj, ObjectU5BU5D_t11523773* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.MethodBase::get_CallingConvention()
extern "C"  int32_t MethodBase_get_CallingConvention_m1001031613 (MethodBase_t3461000640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsPublic()
extern "C"  bool MethodBase_get_IsPublic_m4089159654 (MethodBase_t3461000640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
extern "C"  bool MethodBase_get_IsStatic_m4113878699 (MethodBase_t3461000640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsVirtual()
extern "C"  bool MethodBase_get_IsVirtual_m2071496208 (MethodBase_t3461000640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsAbstract()
extern "C"  bool MethodBase_get_IsAbstract_m1047696479 (MethodBase_t3461000640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.MethodBase::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern "C"  int32_t MethodBase_get_next_table_index_m1161386136 (MethodBase_t3461000640 * __this, Il2CppObject * ___obj, int32_t ___table, bool ___inc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MethodBase::GetGenericArguments()
extern "C"  TypeU5BU5D_t3431720054* MethodBase_GetGenericArguments_m3136597879 (MethodBase_t3461000640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_ContainsGenericParameters()
extern "C"  bool MethodBase_get_ContainsGenericParameters_m30026257 (MethodBase_t3461000640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsGenericMethodDefinition()
extern "C"  bool MethodBase_get_IsGenericMethodDefinition_m3580926992 (MethodBase_t3461000640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsGenericMethod()
extern "C"  bool MethodBase_get_IsGenericMethod_m3165593181 (MethodBase_t3461000640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
