#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.CaseInsensitiveHashCodeProvider
struct CaseInsensitiveHashCodeProvider_t1731;
// System.Globalization.CultureInfo
struct CultureInfo_t1076;
// System.Globalization.TextInfo
struct TextInfo_t1806;
// System.Object
struct Object_t;

// System.Void System.Collections.CaseInsensitiveHashCodeProvider::.ctor()
 void CaseInsensitiveHashCodeProvider__ctor_m9171 (CaseInsensitiveHashCodeProvider_t1731 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CaseInsensitiveHashCodeProvider::.ctor(System.Globalization.CultureInfo)
 void CaseInsensitiveHashCodeProvider__ctor_m9172 (CaseInsensitiveHashCodeProvider_t1731 * __this, CultureInfo_t1076 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CaseInsensitiveHashCodeProvider::.cctor()
 void CaseInsensitiveHashCodeProvider__cctor_m9173 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CaseInsensitiveHashCodeProvider::AreEqual(System.Globalization.CultureInfo,System.Globalization.CultureInfo)
 bool CaseInsensitiveHashCodeProvider_AreEqual_m9174 (Object_t * __this/* static, unused */, CultureInfo_t1076 * ___a, CultureInfo_t1076 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CaseInsensitiveHashCodeProvider::AreEqual(System.Globalization.TextInfo,System.Globalization.CultureInfo)
 bool CaseInsensitiveHashCodeProvider_AreEqual_m9175 (Object_t * __this/* static, unused */, TextInfo_t1806 * ___info, CultureInfo_t1076 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.CaseInsensitiveHashCodeProvider System.Collections.CaseInsensitiveHashCodeProvider::get_DefaultInvariant()
 CaseInsensitiveHashCodeProvider_t1731 * CaseInsensitiveHashCodeProvider_get_DefaultInvariant_m7636 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CaseInsensitiveHashCodeProvider::GetHashCode(System.Object)
 int32_t CaseInsensitiveHashCodeProvider_GetHashCode_m9176 (CaseInsensitiveHashCodeProvider_t1731 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
