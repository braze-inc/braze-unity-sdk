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
struct Il2CppObject;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t446138789;
// System.Object[]
struct ObjectU5BU5D_t11523773;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MemberTypes938013741.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_RuntimeFieldHandle3184214143.h"

// System.Void System.Reflection.FieldInfo::.ctor()
extern "C"  void FieldInfo__ctor_m1830395376 (FieldInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberTypes System.Reflection.FieldInfo::get_MemberType()
extern "C"  int32_t FieldInfo_get_MemberType_m1921984537 (FieldInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.FieldInfo::get_IsLiteral()
extern "C"  bool FieldInfo_get_IsLiteral_m2099153292 (FieldInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.FieldInfo::get_IsStatic()
extern "C"  bool FieldInfo_get_IsStatic_m24721619 (FieldInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.FieldInfo::get_IsNotSerialized()
extern "C"  bool FieldInfo_get_IsNotSerialized_m3868603028 (FieldInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
extern "C"  void FieldInfo_SetValue_m1669444927 (FieldInfo_t * __this, Il2CppObject * ___obj, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.FieldInfo::internal_from_handle_type(System.IntPtr,System.IntPtr)
extern "C"  FieldInfo_t * FieldInfo_internal_from_handle_type_m449136039 (Il2CppObject * __this /* static, unused */, IntPtr_t ___field_handle, IntPtr_t ___type_handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.FieldInfo::GetFieldFromHandle(System.RuntimeFieldHandle)
extern "C"  FieldInfo_t * FieldInfo_GetFieldFromHandle_m3507098254 (Il2CppObject * __this /* static, unused */, RuntimeFieldHandle_t3184214143  ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.FieldInfo::GetFieldOffset()
extern "C"  int32_t FieldInfo_GetFieldOffset_m3781007919 (FieldInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.FieldInfo::GetUnmanagedMarshal()
extern "C"  UnmanagedMarshal_t446138789 * FieldInfo_GetUnmanagedMarshal_m3736180640 (FieldInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.FieldInfo::get_UMarshal()
extern "C"  UnmanagedMarshal_t446138789 * FieldInfo_get_UMarshal_m3592475906 (FieldInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.FieldInfo::GetPseudoCustomAttributes()
extern "C"  ObjectU5BU5D_t11523773* FieldInfo_GetPseudoCustomAttributes_m3219838173 (FieldInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
