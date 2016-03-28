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

// System.Type
struct Type_t;
// System.Collections.Hashtable
struct Hashtable_t3875263730;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_MonoEnumInfo1320882439.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void System.MonoEnumInfo::.ctor(System.MonoEnumInfo)
extern "C"  void MonoEnumInfo__ctor_m427288990 (MonoEnumInfo_t1320882439 * __this, MonoEnumInfo_t1320882439  ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoEnumInfo::.cctor()
extern "C"  void MonoEnumInfo__cctor_m2878678058 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoEnumInfo::get_enum_info(System.Type,System.MonoEnumInfo&)
extern "C"  void MonoEnumInfo_get_enum_info_m1623052572 (Il2CppObject * __this /* static, unused */, Type_t * ___enumType, MonoEnumInfo_t1320882439 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.MonoEnumInfo::get_Cache()
extern "C"  Hashtable_t3875263730 * MonoEnumInfo_get_Cache_m295946653 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoEnumInfo::GetInfo(System.Type,System.MonoEnumInfo&)
extern "C"  void MonoEnumInfo_GetInfo_m2492061277 (Il2CppObject * __this /* static, unused */, Type_t * ___enumType, MonoEnumInfo_t1320882439 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
