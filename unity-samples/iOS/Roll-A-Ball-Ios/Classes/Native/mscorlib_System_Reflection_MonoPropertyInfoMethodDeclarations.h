#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoPropertyInfo
struct MonoPropertyInfo_t1999;
// System.Reflection.MonoProperty
struct MonoProperty_t2000;
// System.Type[]
struct TypeU5BU5D_t160;
// System.Reflection.MonoPropertyInfo
#include "mscorlib_System_Reflection_MonoPropertyInfo.h"
// System.Reflection.PInfo
#include "mscorlib_System_Reflection_PInfo.h"

// System.Void System.Reflection.MonoPropertyInfo::get_property_info(System.Reflection.MonoProperty,System.Reflection.MonoPropertyInfo&,System.Reflection.PInfo)
 void MonoPropertyInfo_get_property_info_m10175 (Object_t * __this/* static, unused */, MonoProperty_t2000 * ___prop, MonoPropertyInfo_t1999 * ___info, int32_t ___req_info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MonoPropertyInfo::GetTypeModifiers(System.Reflection.MonoProperty,System.Boolean)
 TypeU5BU5D_t160* MonoPropertyInfo_GetTypeModifiers_m10176 (Object_t * __this/* static, unused */, MonoProperty_t2000 * ___prop, bool ___optional, MethodInfo* method) IL2CPP_METHOD_ATTR;
