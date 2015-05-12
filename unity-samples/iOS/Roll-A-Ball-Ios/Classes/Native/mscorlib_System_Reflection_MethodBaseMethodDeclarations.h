#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MethodBase
struct MethodBase_t307;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t1067;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t112;
// System.Reflection.Binder
struct Binder_t1062;
// System.Globalization.CultureInfo
struct CultureInfo_t1065;
// System.Type[]
struct TypeU5BU5D_t146;
// System.RuntimeMethodHandle
#include "mscorlib_System_RuntimeMethodHandle.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Reflection.BindingFlags
#include "mscorlib_System_Reflection_BindingFlags.h"

// System.Void System.Reflection.MethodBase::.ctor()
 void MethodBase__ctor_m9957 (MethodBase_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandleNoGenericCheck(System.RuntimeMethodHandle)
 MethodBase_t307 * MethodBase_GetMethodFromHandleNoGenericCheck_m9958 (Object_t * __this/* static, unused */, RuntimeMethodHandle_t1948  ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromIntPtr(System.IntPtr,System.IntPtr)
 MethodBase_t307 * MethodBase_GetMethodFromIntPtr_m9959 (Object_t * __this/* static, unused */, IntPtr_t107 ___handle, IntPtr_t107 ___declaringType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandle(System.RuntimeMethodHandle)
 MethodBase_t307 * MethodBase_GetMethodFromHandle_m9960 (Object_t * __this/* static, unused */, RuntimeMethodHandle_t1948  ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandleInternalType(System.IntPtr,System.IntPtr)
 MethodBase_t307 * MethodBase_GetMethodFromHandleInternalType_m9961 (Object_t * __this/* static, unused */, IntPtr_t107 ___method_handle, IntPtr_t107 ___type_handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters()
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
 Object_t * MethodBase_Invoke_m1284 (MethodBase_t307 * __this, Object_t * ___obj, ObjectU5BU5D_t112* ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
// System.RuntimeMethodHandle System.Reflection.MethodBase::get_MethodHandle()
// System.Reflection.MethodAttributes System.Reflection.MethodBase::get_Attributes()
// System.Reflection.CallingConventions System.Reflection.MethodBase::get_CallingConvention()
 int32_t MethodBase_get_CallingConvention_m9962 (MethodBase_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsPublic()
 bool MethodBase_get_IsPublic_m9963 (MethodBase_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
 bool MethodBase_get_IsStatic_m5099 (MethodBase_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsVirtual()
 bool MethodBase_get_IsVirtual_m9964 (MethodBase_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MethodBase::GetGenericArguments()
 TypeU5BU5D_t146* MethodBase_GetGenericArguments_m9965 (MethodBase_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_ContainsGenericParameters()
 bool MethodBase_get_ContainsGenericParameters_m9966 (MethodBase_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsGenericMethodDefinition()
 bool MethodBase_get_IsGenericMethodDefinition_m9967 (MethodBase_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MethodBase::get_IsGenericMethod()
 bool MethodBase_get_IsGenericMethod_m9968 (MethodBase_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
