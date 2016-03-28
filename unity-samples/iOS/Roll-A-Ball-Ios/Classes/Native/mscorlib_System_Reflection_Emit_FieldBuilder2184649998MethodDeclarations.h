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

// System.Reflection.Emit.FieldBuilder
struct FieldBuilder_t2184649998;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Object
struct Il2CppObject;
// System.Reflection.Binder
struct Binder_t4180926488;
// System.Globalization.CultureInfo
struct CultureInfo_t3603717042;
// System.Reflection.Emit.UnmanagedMarshal
struct UnmanagedMarshal_t446138789;
// System.Exception
struct Exception_t1967233988;
// System.Reflection.Module
struct Module_t206139610;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_FieldAttributes3381152799.h"
#include "mscorlib_System_RuntimeFieldHandle3184214143.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Reflection_BindingFlags2090192240.h"
#include "mscorlib_System_Reflection_Binder4180926488.h"
#include "mscorlib_System_Globalization_CultureInfo3603717042.h"

// System.Reflection.FieldAttributes System.Reflection.Emit.FieldBuilder::get_Attributes()
extern "C"  int32_t FieldBuilder_get_Attributes_m3921109250 (FieldBuilder_t2184649998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.FieldBuilder::get_DeclaringType()
extern "C"  Type_t * FieldBuilder_get_DeclaringType_m1725909420 (FieldBuilder_t2184649998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeFieldHandle System.Reflection.Emit.FieldBuilder::get_FieldHandle()
extern "C"  RuntimeFieldHandle_t3184214143  FieldBuilder_get_FieldHandle_m1219776477 (FieldBuilder_t2184649998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.FieldBuilder::get_FieldType()
extern "C"  Type_t * FieldBuilder_get_FieldType_m1219556799 (FieldBuilder_t2184649998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.FieldBuilder::get_Name()
extern "C"  String_t* FieldBuilder_get_Name_m819487801 (FieldBuilder_t2184649998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.FieldBuilder::get_ReflectedType()
extern "C"  Type_t * FieldBuilder_get_ReflectedType_m956356193 (FieldBuilder_t2184649998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.FieldBuilder::GetCustomAttributes(System.Boolean)
extern "C"  ObjectU5BU5D_t11523773* FieldBuilder_GetCustomAttributes_m2903117794 (FieldBuilder_t2184649998 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.FieldBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C"  ObjectU5BU5D_t11523773* FieldBuilder_GetCustomAttributes_m1840342223 (FieldBuilder_t2184649998 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.FieldBuilder::GetValue(System.Object)
extern "C"  Il2CppObject * FieldBuilder_GetValue_m1365484742 (FieldBuilder_t2184649998 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.FieldBuilder::IsDefined(System.Type,System.Boolean)
extern "C"  bool FieldBuilder_IsDefined_m1233219871 (FieldBuilder_t2184649998 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.FieldBuilder::GetFieldOffset()
extern "C"  int32_t FieldBuilder_GetFieldOffset_m849516803 (FieldBuilder_t2184649998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.FieldBuilder::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo)
extern "C"  void FieldBuilder_SetValue_m668442259 (FieldBuilder_t2184649998 * __this, Il2CppObject * ___obj, Il2CppObject * ___val, int32_t ___invokeAttr, Binder_t4180926488 * ___binder, CultureInfo_t3603717042 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.UnmanagedMarshal System.Reflection.Emit.FieldBuilder::get_UMarshal()
extern "C"  UnmanagedMarshal_t446138789 * FieldBuilder_get_UMarshal_m2685231318 (FieldBuilder_t2184649998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.FieldBuilder::CreateNotSupportedException()
extern "C"  Exception_t1967233988 * FieldBuilder_CreateNotSupportedException_m2418755853 (FieldBuilder_t2184649998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.FieldBuilder::get_Module()
extern "C"  Module_t206139610 * FieldBuilder_get_Module_m3744550626 (FieldBuilder_t2184649998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
