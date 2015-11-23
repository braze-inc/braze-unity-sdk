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

// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t87;
// System.Type[]
struct TypeU5BU5D_t216;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MemberTypes.h"

// System.Void System.Reflection.PropertyInfo::.ctor()
extern "C" void PropertyInfo__ctor_m10070 (PropertyInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberTypes System.Reflection.PropertyInfo::get_MemberType()
extern "C" int32_t PropertyInfo_get_MemberType_m10071 (PropertyInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod()
extern "C" MethodInfo_t * PropertyInfo_GetGetMethod_m10072 (PropertyInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[])
extern "C" Object_t * PropertyInfo_GetValue_m10073 (PropertyInfo_t * __this, Object_t * ___obj, ObjectU5BU5D_t87* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[])
extern "C" void PropertyInfo_SetValue_m10074 (PropertyInfo_t * __this, Object_t * ___obj, Object_t * ___value, ObjectU5BU5D_t87* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.PropertyInfo::GetOptionalCustomModifiers()
extern "C" TypeU5BU5D_t216* PropertyInfo_GetOptionalCustomModifiers_m10075 (PropertyInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.PropertyInfo::GetRequiredCustomModifiers()
extern "C" TypeU5BU5D_t216* PropertyInfo_GetRequiredCustomModifiers_m10076 (PropertyInfo_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
