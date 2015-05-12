#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.CaseInsensitiveHashCodeProvider
struct CaseInsensitiveHashCodeProvider_t1719;
// System.Globalization.CultureInfo
struct CultureInfo_t1065;
// System.Globalization.TextInfo
struct TextInfo_t1794;
// System.Object
struct Object_t;

// System.Void System.Collections.CaseInsensitiveHashCodeProvider::.ctor()
 void CaseInsensitiveHashCodeProvider__ctor_m9076 (CaseInsensitiveHashCodeProvider_t1719 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CaseInsensitiveHashCodeProvider::.ctor(System.Globalization.CultureInfo)
 void CaseInsensitiveHashCodeProvider__ctor_m9077 (CaseInsensitiveHashCodeProvider_t1719 * __this, CultureInfo_t1065 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CaseInsensitiveHashCodeProvider::.cctor()
 void CaseInsensitiveHashCodeProvider__cctor_m9078 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CaseInsensitiveHashCodeProvider::AreEqual(System.Globalization.CultureInfo,System.Globalization.CultureInfo)
 bool CaseInsensitiveHashCodeProvider_AreEqual_m9079 (Object_t * __this/* static, unused */, CultureInfo_t1065 * ___a, CultureInfo_t1065 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CaseInsensitiveHashCodeProvider::AreEqual(System.Globalization.TextInfo,System.Globalization.CultureInfo)
 bool CaseInsensitiveHashCodeProvider_AreEqual_m9080 (Object_t * __this/* static, unused */, TextInfo_t1794 * ___info, CultureInfo_t1065 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.CaseInsensitiveHashCodeProvider System.Collections.CaseInsensitiveHashCodeProvider::get_DefaultInvariant()
 CaseInsensitiveHashCodeProvider_t1719 * CaseInsensitiveHashCodeProvider_get_DefaultInvariant_m7540 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CaseInsensitiveHashCodeProvider::GetHashCode(System.Object)
 int32_t CaseInsensitiveHashCodeProvider_GetHashCode_m9081 (CaseInsensitiveHashCodeProvider_t1719 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
