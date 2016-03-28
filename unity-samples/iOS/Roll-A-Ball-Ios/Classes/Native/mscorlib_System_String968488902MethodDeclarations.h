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

// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t3416858730;
// System.IFormatProvider
struct IFormatProvider_t3436592966;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerator`1<System.Char>
struct IEnumerator_1_t4261813147;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Globalization.CultureInfo
struct CultureInfo_t3603717042;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;
// System.Text.Encoding
struct Encoding_t180559927;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_Decimal1688557254.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_StringSplitOptions3963075722.h"
#include "mscorlib_System_Globalization_CultureInfo3603717042.h"
#include "mscorlib_System_StringComparison1653470895.h"
#include "mscorlib_System_Globalization_CompareOptions1115053679.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"
#include "mscorlib_System_Text_Encoding180559927.h"

// System.Void System.String::.ctor(System.Char*,System.Int32,System.Int32)
extern "C"  void String__ctor_m2618237231 (String_t* __this, uint16_t* ___value, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::.ctor(System.Char[],System.Int32,System.Int32)
extern "C"  void String__ctor_m683273815 (String_t* __this, CharU5BU5D_t3416858730* ___value, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::.ctor(System.Char[])
extern "C"  void String__ctor_m2956844983 (String_t* __this, CharU5BU5D_t3416858730* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::.ctor(System.Char,System.Int32)
extern "C"  void String__ctor_m3883063966 (String_t* __this, uint16_t ___c, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::.cctor()
extern "C"  void String__cctor_m351290025 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C"  bool String_System_IConvertible_ToBoolean_m1435209676 (String_t* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.String::System.IConvertible.ToByte(System.IFormatProvider)
extern "C"  uint8_t String_System_IConvertible_ToByte_m651944216 (String_t* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::System.IConvertible.ToChar(System.IFormatProvider)
extern "C"  uint16_t String_System_IConvertible_ToChar_m2612850740 (String_t* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.String::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C"  DateTime_t339033936  String_System_IConvertible_ToDateTime_m2969728254 (String_t* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.String::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C"  Decimal_t1688557254  String_System_IConvertible_ToDecimal_m102415980 (String_t* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.String::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C"  double String_System_IConvertible_ToDouble_m1896960042 (String_t* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.String::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C"  int16_t String_System_IConvertible_ToInt16_m3244865612 (String_t* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C"  int32_t String_System_IConvertible_ToInt32_m625301516 (String_t* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.String::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C"  int64_t String_System_IConvertible_ToInt64_m1073910444 (String_t* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.String::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C"  int8_t String_System_IConvertible_ToSByte_m3796017644 (String_t* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.String::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C"  float String_System_IConvertible_ToSingle_m3461669016 (String_t* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.String::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C"  Il2CppObject * String_System_IConvertible_ToType_m1615588078 (String_t* __this, Type_t * ___targetType, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.String::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C"  uint16_t String_System_IConvertible_ToUInt16_m1338557766 (String_t* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.String::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C"  uint32_t String_System_IConvertible_ToUInt32_m4013210298 (String_t* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.String::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C"  uint64_t String_System_IConvertible_ToUInt64_m2321911544 (String_t* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Char> System.String::System.Collections.Generic.IEnumerable<char>.GetEnumerator()
extern "C"  Il2CppObject* String_System_Collections_Generic_IEnumerableU3CcharU3E_GetEnumerator_m319382653 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.String::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * String_System_Collections_IEnumerable_GetEnumerator_m1432650703 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.String,System.String)
extern "C"  bool String_Equals_m1002918753 (Il2CppObject * __this /* static, unused */, String_t* ___a, String_t* ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.Object)
extern "C"  bool String_Equals_m3763831415 (String_t* __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.String)
extern "C"  bool String_Equals_m3541721061 (String_t* __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::get_Chars(System.Int32)
extern "C"  uint16_t String_get_Chars_m3015341861 (String_t* __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.String::Clone()
extern "C"  Il2CppObject * String_Clone_m2600780148 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CopyTo(System.Int32,System.Char[],System.Int32,System.Int32)
extern "C"  void String_CopyTo_m3455012278 (String_t* __this, int32_t ___sourceIndex, CharU5BU5D_t3416858730* ___destination, int32_t ___destinationIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.String::ToCharArray()
extern "C"  CharU5BU5D_t3416858730* String_ToCharArray_m1208288742 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.String::ToCharArray(System.Int32,System.Int32)
extern "C"  CharU5BU5D_t3416858730* String_ToCharArray_m736861184 (String_t* __this, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.Char[])
extern "C"  StringU5BU5D_t2956870243* String_Split_m290179486 (String_t* __this, CharU5BU5D_t3416858730* ___separator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.Char[],System.Int32)
extern "C"  StringU5BU5D_t2956870243* String_Split_m434660345 (String_t* __this, CharU5BU5D_t3416858730* ___separator, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.Char[],System.Int32,System.StringSplitOptions)
extern "C"  StringU5BU5D_t2956870243* String_Split_m1407702193 (String_t* __this, CharU5BU5D_t3416858730* ___separator, int32_t ___count, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.String[],System.Int32,System.StringSplitOptions)
extern "C"  StringU5BU5D_t2956870243* String_Split_m985753324 (String_t* __this, StringU5BU5D_t2956870243* ___separator, int32_t ___count, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.Char[],System.StringSplitOptions)
extern "C"  StringU5BU5D_t2956870243* String_Split_m4066821654 (String_t* __this, CharU5BU5D_t3416858730* ___separator, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.String[],System.StringSplitOptions)
extern "C"  StringU5BU5D_t2956870243* String_Split_m459616251 (String_t* __this, StringU5BU5D_t2956870243* ___separator, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32)
extern "C"  String_t* String_Substring_m2809233063 (String_t* __this, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C"  String_t* String_Substring_m675079568 (String_t* __this, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::SubstringUnchecked(System.Int32,System.Int32)
extern "C"  String_t* String_SubstringUnchecked_m3781557708 (String_t* __this, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Trim()
extern "C"  String_t* String_Trim_m1030489823 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Trim(System.Char[])
extern "C"  String_t* String_Trim_m1469603388 (String_t* __this, CharU5BU5D_t3416858730* ___trimChars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::TrimStart(System.Char[])
extern "C"  String_t* String_TrimStart_m3483716918 (String_t* __this, CharU5BU5D_t3416858730* ___trimChars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::TrimEnd(System.Char[])
extern "C"  String_t* String_TrimEnd_m3980947229 (String_t* __this, CharU5BU5D_t3416858730* ___trimChars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::FindNotWhiteSpace(System.Int32,System.Int32,System.Int32)
extern "C"  int32_t String_FindNotWhiteSpace_m1718857862 (String_t* __this, int32_t ___pos, int32_t ___target, int32_t ___change, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::FindNotInTable(System.Int32,System.Int32,System.Int32,System.Char[])
extern "C"  int32_t String_FindNotInTable_m3192184121 (String_t* __this, int32_t ___pos, int32_t ___target, int32_t ___change, CharU5BU5D_t3416858730* ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::Compare(System.String,System.String)
extern "C"  int32_t String_Compare_m1439712187 (Il2CppObject * __this /* static, unused */, String_t* ___strA, String_t* ___strB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::Compare(System.String,System.String,System.Boolean)
extern "C"  int32_t String_Compare_m1309590114 (Il2CppObject * __this /* static, unused */, String_t* ___strA, String_t* ___strB, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::Compare(System.String,System.String,System.Boolean,System.Globalization.CultureInfo)
extern "C"  int32_t String_Compare_m279494420 (Il2CppObject * __this /* static, unused */, String_t* ___strA, String_t* ___strB, bool ___ignoreCase, CultureInfo_t3603717042 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::Compare(System.String,System.Int32,System.String,System.Int32,System.Int32,System.Boolean,System.Globalization.CultureInfo)
extern "C"  int32_t String_Compare_m3930467693 (Il2CppObject * __this /* static, unused */, String_t* ___strA, int32_t ___indexA, String_t* ___strB, int32_t ___indexB, int32_t ___length, bool ___ignoreCase, CultureInfo_t3603717042 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::Compare(System.String,System.String,System.StringComparison)
extern "C"  int32_t String_Compare_m3128699950 (Il2CppObject * __this /* static, unused */, String_t* ___strA, String_t* ___strB, int32_t ___comparisonType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareTo(System.Object)
extern "C"  int32_t String_CompareTo_m2173220054 (String_t* __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareTo(System.String)
extern "C"  int32_t String_CompareTo_m1951109700 (String_t* __this, String_t* ___strB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareOrdinal(System.String,System.Int32,System.String,System.Int32,System.Int32)
extern "C"  int32_t String_CompareOrdinal_m1327873633 (Il2CppObject * __this /* static, unused */, String_t* ___strA, int32_t ___indexA, String_t* ___strB, int32_t ___indexB, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareOrdinalUnchecked(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32)
extern "C"  int32_t String_CompareOrdinalUnchecked_m1968789502 (Il2CppObject * __this /* static, unused */, String_t* ___strA, int32_t ___indexA, int32_t ___lenA, String_t* ___strB, int32_t ___indexB, int32_t ___lenB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareOrdinalCaseInsensitiveUnchecked(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32)
extern "C"  int32_t String_CompareOrdinalCaseInsensitiveUnchecked_m4221700897 (Il2CppObject * __this /* static, unused */, String_t* ___strA, int32_t ___indexA, int32_t ___lenA, String_t* ___strB, int32_t ___indexB, int32_t ___lenB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::EndsWith(System.String)
extern "C"  bool String_EndsWith_m2265568550 (String_t* __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfAny(System.Char[])
extern "C"  int32_t String_IndexOfAny_m3660242324 (String_t* __this, CharU5BU5D_t3416858730* ___anyOf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfAny(System.Char[],System.Int32)
extern "C"  int32_t String_IndexOfAny_m1954541507 (String_t* __this, CharU5BU5D_t3416858730* ___anyOf, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfAny(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t String_IndexOfAny_m472916468 (String_t* __this, CharU5BU5D_t3416858730* ___anyOf, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfAnyUnchecked(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t String_IndexOfAnyUnchecked_m706673842 (String_t* __this, CharU5BU5D_t3416858730* ___anyOf, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String,System.StringComparison)
extern "C"  int32_t String_IndexOf_m864002126 (String_t* __this, String_t* ___value, int32_t ___comparisonType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String,System.Int32,System.Int32,System.StringComparison)
extern "C"  int32_t String_IndexOf_m1456548334 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, int32_t ___comparisonType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfOrdinal(System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
extern "C"  int32_t String_IndexOfOrdinal_m2362241597 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfOrdinalUnchecked(System.String,System.Int32,System.Int32)
extern "C"  int32_t String_IndexOfOrdinalUnchecked_m3747812990 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfOrdinalIgnoreCaseUnchecked(System.String,System.Int32,System.Int32)
extern "C"  int32_t String_IndexOfOrdinalIgnoreCaseUnchecked_m1319653504 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.Char)
extern "C"  int32_t String_IndexOf_m2775210486 (String_t* __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.Char,System.Int32)
extern "C"  int32_t String_IndexOf_m204546721 (String_t* __this, uint16_t ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.Char,System.Int32,System.Int32)
extern "C"  int32_t String_IndexOf_m2077558742 (String_t* __this, uint16_t ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfUnchecked(System.Char,System.Int32,System.Int32)
extern "C"  int32_t String_IndexOfUnchecked_m1897528852 (String_t* __this, uint16_t ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String)
extern "C"  int32_t String_IndexOf_m1476794331 (String_t* __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String,System.Int32)
extern "C"  int32_t String_IndexOf_m1991631068 (String_t* __this, String_t* ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String,System.Int32,System.Int32)
extern "C"  int32_t String_IndexOf_m4052910459 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOfAny(System.Char[])
extern "C"  int32_t String_LastIndexOfAny_m1405458718 (String_t* __this, CharU5BU5D_t3416858730* ___anyOf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOfAny(System.Char[],System.Int32)
extern "C"  int32_t String_LastIndexOfAny_m2835072121 (String_t* __this, CharU5BU5D_t3416858730* ___anyOf, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOfAnyUnchecked(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t String_LastIndexOfAnyUnchecked_m3532047592 (String_t* __this, CharU5BU5D_t3416858730* ___anyOf, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.Char)
extern "C"  int32_t String_LastIndexOf_m3245805612 (String_t* __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.Char,System.Int32)
extern "C"  int32_t String_LastIndexOf_m902083627 (String_t* __this, uint16_t ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.Char,System.Int32,System.Int32)
extern "C"  int32_t String_LastIndexOf_m434357900 (String_t* __this, uint16_t ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOfUnchecked(System.Char,System.Int32,System.Int32)
extern "C"  int32_t String_LastIndexOfUnchecked_m4042746910 (String_t* __this, uint16_t ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.String)
extern "C"  int32_t String_LastIndexOf_m2747144337 (String_t* __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.String,System.Int32,System.Int32)
extern "C"  int32_t String_LastIndexOf_m1189898929 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Contains(System.String)
extern "C"  bool String_Contains_m3032019141 (String_t* __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C"  bool String_IsNullOrEmpty_m1256468773 (Il2CppObject * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::PadLeft(System.Int32,System.Char)
extern "C"  String_t* String_PadLeft_m3268206439 (String_t* __this, int32_t ___totalWidth, uint16_t ___paddingChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::PadRight(System.Int32,System.Char)
extern "C"  String_t* String_PadRight_m1932151982 (String_t* __this, int32_t ___totalWidth, uint16_t ___paddingChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::StartsWith(System.String)
extern "C"  bool String_StartsWith_m1500793453 (String_t* __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Replace(System.Char,System.Char)
extern "C"  String_t* String_Replace_m3369701083 (String_t* __this, uint16_t ___oldChar, uint16_t ___newChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Replace(System.String,System.String)
extern "C"  String_t* String_Replace_m2915759397 (String_t* __this, String_t* ___oldValue, String_t* ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ReplaceUnchecked(System.String,System.String)
extern "C"  String_t* String_ReplaceUnchecked_m872372231 (String_t* __this, String_t* ___oldValue, String_t* ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ReplaceFallback(System.String,System.String,System.Int32)
extern "C"  String_t* String_ReplaceFallback_m3944881236 (String_t* __this, String_t* ___oldValue, String_t* ___newValue, int32_t ___testedCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Remove(System.Int32,System.Int32)
extern "C"  String_t* String_Remove_m242090629 (String_t* __this, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToLower()
extern "C"  String_t* String_ToLower_m2421900555 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToLower(System.Globalization.CultureInfo)
extern "C"  String_t* String_ToLower_m2140020155 (String_t* __this, CultureInfo_t3603717042 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToLowerInvariant()
extern "C"  String_t* String_ToLowerInvariant_m4111189975 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToString()
extern "C"  String_t* String_ToString_m1382284457 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToString(System.IFormatProvider)
extern "C"  String_t* String_ToString_m1534627031 (String_t* __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object)
extern "C"  String_t* String_Format_m2471250780 (Il2CppObject * __this /* static, unused */, String_t* ___format, Il2CppObject * ___arg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C"  String_t* String_Format_m2398979370 (Il2CppObject * __this /* static, unused */, String_t* ___format, Il2CppObject * ___arg0, Il2CppObject * ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
extern "C"  String_t* String_Format_m3928391288 (Il2CppObject * __this /* static, unused */, String_t* ___format, Il2CppObject * ___arg0, Il2CppObject * ___arg1, Il2CppObject * ___arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object[])
extern "C"  String_t* String_Format_m4050103162 (Il2CppObject * __this /* static, unused */, String_t* ___format, ObjectU5BU5D_t11523773* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
extern "C"  String_t* String_Format_m3351777162 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___provider, String_t* ___format, ObjectU5BU5D_t11523773* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.String::FormatHelper(System.Text.StringBuilder,System.IFormatProvider,System.String,System.Object[])
extern "C"  StringBuilder_t3822575854 * String_FormatHelper_m2506490508 (Il2CppObject * __this /* static, unused */, StringBuilder_t3822575854 * ___result, Il2CppObject * ___provider, String_t* ___format, ObjectU5BU5D_t11523773* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m389863537 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___arg0, Il2CppObject * ___arg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C"  String_t* String_Concat_m2809334143 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___arg0, Il2CppObject * ___arg1, Il2CppObject * ___arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m138640077 (Il2CppObject * __this /* static, unused */, String_t* ___str0, String_t* ___str1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m1825781833 (Il2CppObject * __this /* static, unused */, String_t* ___str0, String_t* ___str1, String_t* ___str2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m2933632197 (Il2CppObject * __this /* static, unused */, String_t* ___str0, String_t* ___str1, String_t* ___str2, String_t* ___str3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object[])
extern "C"  String_t* String_Concat_m3016520001 (Il2CppObject * __this /* static, unused */, ObjectU5BU5D_t11523773* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String[])
extern "C"  String_t* String_Concat_m21867311 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t2956870243* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ConcatInternal(System.String[],System.Int32)
extern "C"  String_t* String_ConcatInternal_m3246297125 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t2956870243* ___values, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Insert(System.Int32,System.String)
extern "C"  String_t* String_Insert_m3926397187 (String_t* __this, int32_t ___startIndex, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Join(System.String,System.String[])
extern "C"  String_t* String_Join_m2789530325 (Il2CppObject * __this /* static, unused */, String_t* ___separator, StringU5BU5D_t2956870243* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Join(System.String,System.String[],System.Int32,System.Int32)
extern "C"  String_t* String_Join_m908926965 (Il2CppObject * __this /* static, unused */, String_t* ___separator, StringU5BU5D_t2956870243* ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::JoinUnchecked(System.String,System.String[],System.Int32,System.Int32)
extern "C"  String_t* String_JoinUnchecked_m3141793139 (Il2CppObject * __this /* static, unused */, String_t* ___separator, StringU5BU5D_t2956870243* ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m2979997331 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::ParseFormatSpecifier(System.String,System.Int32&,System.Int32&,System.Int32&,System.Boolean&,System.String&)
extern "C"  void String_ParseFormatSpecifier_m3682617588 (Il2CppObject * __this /* static, unused */, String_t* ___str, int32_t* ___ptr, int32_t* ___n, int32_t* ___width, bool* ___left_align, String_t** ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::ParseDecimal(System.String,System.Int32&)
extern "C"  int32_t String_ParseDecimal_m2522196181 (Il2CppObject * __this /* static, unused */, String_t* ___str, int32_t* ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::InternalSetChar(System.Int32,System.Char)
extern "C"  void String_InternalSetChar_m3191521125 (String_t* __this, int32_t ___idx, uint16_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::InternalSetLength(System.Int32)
extern "C"  void String_InternalSetLength_m4220170206 (String_t* __this, int32_t ___newLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::GetHashCode()
extern "C"  int32_t String_GetHashCode_m471729487 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::GetCaseInsensitiveHashCode()
extern "C"  int32_t String_GetCaseInsensitiveHashCode_m952232874 (String_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.SByte*)
extern "C"  String_t* String_CreateString_m828432250 (String_t* __this, int8_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.SByte*,System.Int32,System.Int32)
extern "C"  String_t* String_CreateString_m197914714 (String_t* __this, int8_t* ___value, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.SByte*,System.Int32,System.Int32,System.Text.Encoding)
extern "C"  String_t* String_CreateString_m416250615 (String_t* __this, int8_t* ___value, int32_t ___startIndex, int32_t ___length, Encoding_t180559927 * ___enc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char*)
extern "C"  String_t* String_CreateString_m3205262901 (String_t* __this, uint16_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char*,System.Int32,System.Int32)
extern "C"  String_t* String_CreateString_m1597586261 (String_t* __this, uint16_t* ___value, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
extern "C"  String_t* String_CreateString_m3402832113 (String_t* __this, CharU5BU5D_t3416858730* ___val, int32_t ___startIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char[])
extern "C"  String_t* String_CreateString_m578950865 (String_t* __this, CharU5BU5D_t3416858730* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char,System.Int32)
extern "C"  String_t* String_CreateString_m356585284 (String_t* __this, uint16_t ___c, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::memcpy4(System.Byte*,System.Byte*,System.Int32)
extern "C"  void String_memcpy4_m1762596688 (Il2CppObject * __this /* static, unused */, uint8_t* ___dest, uint8_t* ___src, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::memcpy2(System.Byte*,System.Byte*,System.Int32)
extern "C"  void String_memcpy2_m1338949966 (Il2CppObject * __this /* static, unused */, uint8_t* ___dest, uint8_t* ___src, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::memcpy1(System.Byte*,System.Byte*,System.Int32)
extern "C"  void String_memcpy1_m3274610253 (Il2CppObject * __this /* static, unused */, uint8_t* ___dest, uint8_t* ___src, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::memcpy(System.Byte*,System.Byte*,System.Int32)
extern "C"  void String_memcpy_m3785779208 (Il2CppObject * __this /* static, unused */, uint8_t* ___dest, uint8_t* ___src, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopy(System.Char*,System.Char*,System.Int32)
extern "C"  void String_CharCopy_m3846447580 (Il2CppObject * __this /* static, unused */, uint16_t* ___dest, uint16_t* ___src, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopyReverse(System.Char*,System.Char*,System.Int32)
extern "C"  void String_CharCopyReverse_m2265296522 (Il2CppObject * __this /* static, unused */, uint16_t* ___dest, uint16_t* ___src, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopy(System.String,System.Int32,System.String,System.Int32,System.Int32)
extern "C"  void String_CharCopy_m805553372 (Il2CppObject * __this /* static, unused */, String_t* ___target, int32_t ___targetIndex, String_t* ___source, int32_t ___sourceIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopy(System.String,System.Int32,System.Char[],System.Int32,System.Int32)
extern "C"  void String_CharCopy_m432636757 (Il2CppObject * __this /* static, unused */, String_t* ___target, int32_t ___targetIndex, CharU5BU5D_t3416858730* ___source, int32_t ___sourceIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopyReverse(System.String,System.Int32,System.String,System.Int32,System.Int32)
extern "C"  void String_CharCopyReverse_m1535680650 (Il2CppObject * __this /* static, unused */, String_t* ___target, int32_t ___targetIndex, String_t* ___source, int32_t ___sourceIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::InternalSplit(System.Char[],System.Int32,System.Int32)
extern "C"  StringU5BU5D_t2956870243* String_InternalSplit_m354977691 (String_t* __this, CharU5BU5D_t3416858730* ___separator, int32_t ___count, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::InternalAllocateStr(System.Int32)
extern "C"  String_t* String_InternalAllocateStr_m4108479373 (Il2CppObject * __this /* static, unused */, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m1260523650 (Il2CppObject * __this /* static, unused */, String_t* ___a, String_t* ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C"  bool String_op_Inequality_m2125462205 (Il2CppObject * __this /* static, unused */, String_t* ___a, String_t* ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
