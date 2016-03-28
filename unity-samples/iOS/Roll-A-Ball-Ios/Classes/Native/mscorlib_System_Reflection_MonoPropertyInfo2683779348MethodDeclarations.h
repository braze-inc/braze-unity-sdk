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

// System.Reflection.MonoProperty
struct MonoProperty_t;
// System.Type[]
struct TypeU5BU5D_t3431720054;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MonoProperty1813257286.h"
#include "mscorlib_System_Reflection_MonoPropertyInfo2683779348.h"
#include "mscorlib_System_Reflection_PInfo2267221868.h"

// System.Void System.Reflection.MonoPropertyInfo::get_property_info(System.Reflection.MonoProperty,System.Reflection.MonoPropertyInfo&,System.Reflection.PInfo)
extern "C"  void MonoPropertyInfo_get_property_info_m1244288251 (Il2CppObject * __this /* static, unused */, MonoProperty_t * ___prop, MonoPropertyInfo_t2683779348 * ___info, int32_t ___req_info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.MonoPropertyInfo::GetTypeModifiers(System.Reflection.MonoProperty,System.Boolean)
extern "C"  TypeU5BU5D_t3431720054* MonoPropertyInfo_GetTypeModifiers_m3740551417 (Il2CppObject * __this /* static, unused */, MonoProperty_t * ___prop, bool ___optional, const MethodInfo* method) IL2CPP_METHOD_ATTR;
