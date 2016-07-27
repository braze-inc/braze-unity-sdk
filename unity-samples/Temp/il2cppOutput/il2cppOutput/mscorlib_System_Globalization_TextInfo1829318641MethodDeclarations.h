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

// System.Globalization.TextInfo
struct TextInfo_t1829318641;
// System.Globalization.CultureInfo
struct CultureInfo_t3603717042;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Globalization_CultureInfo3603717042.h"
#include "mscorlib_System_Void2779279689.h"
#include "mscorlib_System_Globalization_TextInfo1829318641.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Globalization.TextInfo::.ctor(System.Globalization.CultureInfo,System.Int32,System.Void*,System.Boolean)
extern "C"  void TextInfo__ctor_m3402153128 (TextInfo_t1829318641 * __this, CultureInfo_t3603717042 * ___ci0, int32_t ___lcid1, void* ___data2, bool ___read_only3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.TextInfo::.ctor(System.Globalization.TextInfo)
extern "C"  void TextInfo__ctor_m100037022 (TextInfo_t1829318641 * __this, TextInfo_t1829318641 * ___textInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.TextInfo::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C"  void TextInfo_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m3742228713 (TextInfo_t1829318641 * __this, Il2CppObject * ___sender0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.TextInfo::get_ListSeparator()
extern "C"  String_t* TextInfo_get_ListSeparator_m3704127084 (TextInfo_t1829318641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.TextInfo::get_CultureName()
extern "C"  String_t* TextInfo_get_CultureName_m346063966 (TextInfo_t1829318641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.TextInfo::Equals(System.Object)
extern "C"  bool TextInfo_Equals_m2282464544 (TextInfo_t1829318641 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.TextInfo::GetHashCode()
extern "C"  int32_t TextInfo_GetHashCode_m265055480 (TextInfo_t1829318641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.TextInfo::ToString()
extern "C"  String_t* TextInfo_ToString_m2104789920 (TextInfo_t1829318641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Globalization.TextInfo::ToLower(System.Char)
extern "C"  uint16_t TextInfo_ToLower_m4134533294 (TextInfo_t1829318641 * __this, uint16_t ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Globalization.TextInfo::ToUpper(System.Char)
extern "C"  uint16_t TextInfo_ToUpper_m87931053 (TextInfo_t1829318641 * __this, uint16_t ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.TextInfo::ToLower(System.String)
extern "C"  String_t* TextInfo_ToLower_m1323104334 (TextInfo_t1829318641 * __this, String_t* ___str0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.TextInfo::Clone()
extern "C"  Il2CppObject * TextInfo_Clone_m2796816861 (TextInfo_t1829318641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
