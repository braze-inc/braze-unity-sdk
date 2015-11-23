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

// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Object
struct Object_t;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t1596;
// System.Object[]
struct ObjectU5BU5D_t87;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MemberTypes.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_RuntimeFieldHandle.h"

// System.Void System.Reflection.FieldInfo::.ctor()
extern "C" void FieldInfo__ctor_m9876 (FieldInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberTypes System.Reflection.FieldInfo::get_MemberType()
extern "C" int32_t FieldInfo_get_MemberType_m9877 (FieldInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.FieldInfo::get_IsLiteral()
extern "C" bool FieldInfo_get_IsLiteral_m9878 (FieldInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.FieldInfo::get_IsStatic()
extern "C" bool FieldInfo_get_IsStatic_m9879 (FieldInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.FieldInfo::get_IsNotSerialized()
extern "C" bool FieldInfo_get_IsNotSerialized_m9880 (FieldInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
extern "C" void FieldInfo_SetValue_m9881 (FieldInfo_t * __this, Object_t * ___obj, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.FieldInfo::internal_from_handle_type(System.IntPtr,System.IntPtr)
extern "C" FieldInfo_t * FieldInfo_internal_from_handle_type_m9882 (Object_t * __this /* static, unused */, IntPtr_t ___field_handle, IntPtr_t ___type_handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.FieldInfo::GetFieldFromHandle(System.RuntimeFieldHandle)
extern "C" FieldInfo_t * FieldInfo_GetFieldFromHandle_m9883 (Object_t * __this /* static, unused */, RuntimeFieldHandle_t1406  ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.FieldInfo::GetFieldOffset()
extern "C" int32_t FieldInfo_GetFieldOffset_m9884 (FieldInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.FieldInfo::GetUnmanagedMarshal()
extern "C" UnmanagedMarshal_t1596 * FieldInfo_GetUnmanagedMarshal_m9885 (FieldInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.FieldInfo::get_UMarshal()
extern "C" UnmanagedMarshal_t1596 * FieldInfo_get_UMarshal_m9886 (FieldInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.FieldInfo::GetPseudoCustomAttributes()
extern "C" ObjectU5BU5D_t87* FieldInfo_GetPseudoCustomAttributes_m9887 (FieldInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
