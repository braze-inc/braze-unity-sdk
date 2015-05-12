#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.StringComparer
struct StringComparer_t1017;
// System.Object
struct Object_t;
// System.String
struct String_t;

// System.Void System.StringComparer::.ctor()
 void StringComparer__ctor_m11910 (StringComparer_t1017 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.StringComparer::.cctor()
 void StringComparer__cctor_m11911 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.StringComparer System.StringComparer::get_InvariantCultureIgnoreCase()
 StringComparer_t1017 * StringComparer_get_InvariantCultureIgnoreCase_m7580 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.StringComparer System.StringComparer::get_OrdinalIgnoreCase()
 StringComparer_t1017 * StringComparer_get_OrdinalIgnoreCase_m5009 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.StringComparer::Compare(System.Object,System.Object)
 int32_t StringComparer_Compare_m11912 (StringComparer_t1017 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.StringComparer::Equals(System.Object,System.Object)
 bool StringComparer_Equals_m11913 (StringComparer_t1017 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.StringComparer::GetHashCode(System.Object)
 int32_t StringComparer_GetHashCode_m11914 (StringComparer_t1017 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.StringComparer::Compare(System.String,System.String)
// System.Boolean System.StringComparer::Equals(System.String,System.String)
// System.Int32 System.StringComparer::GetHashCode(System.String)
