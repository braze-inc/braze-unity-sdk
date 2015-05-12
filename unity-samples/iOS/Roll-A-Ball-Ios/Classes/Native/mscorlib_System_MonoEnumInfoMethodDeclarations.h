#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MonoEnumInfo
struct MonoEnumInfo_t2258;
// System.Collections.Hashtable
struct Hashtable_t414;
// System.Type
struct Type_t;
// System.MonoEnumInfo
#include "mscorlib_System_MonoEnumInfo.h"

// System.Void System.MonoEnumInfo::.ctor(System.MonoEnumInfo)
 void MonoEnumInfo__ctor_m11640 (MonoEnumInfo_t2258 * __this, MonoEnumInfo_t2258  ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoEnumInfo::.cctor()
 void MonoEnumInfo__cctor_m11641 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoEnumInfo::get_enum_info(System.Type,System.MonoEnumInfo&)
 void MonoEnumInfo_get_enum_info_m11642 (Object_t * __this/* static, unused */, Type_t * ___enumType, MonoEnumInfo_t2258 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.MonoEnumInfo::get_Cache()
 Hashtable_t414 * MonoEnumInfo_get_Cache_m11643 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoEnumInfo::GetInfo(System.Type,System.MonoEnumInfo&)
 void MonoEnumInfo_GetInfo_m11644 (Object_t * __this/* static, unused */, Type_t * ___enumType, MonoEnumInfo_t2258 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
