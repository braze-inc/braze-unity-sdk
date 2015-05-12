#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t276;
// System.IFormatProvider
struct IFormatProvider_t1162;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerator`1<System.Char>
struct IEnumerator_1_t1739;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.String[]
struct StringU5BU5D_t3;
// System.Globalization.CultureInfo
struct CultureInfo_t1065;
// System.Object[]
struct ObjectU5BU5D_t112;
// System.Text.StringBuilder
struct StringBuilder_t80;
// System.Text.Encoding
struct Encoding_t322;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.StringSplitOptions
#include "mscorlib_System_StringSplitOptions.h"
// System.StringComparison
#include "mscorlib_System_StringComparison.h"
// System.Globalization.CompareOptions
#include "mscorlib_System_Globalization_CompareOptions.h"

// System.Void System.String::.ctor(System.Char*,System.Int32,System.Int32)
 void String__ctor_m7968 (String_t* __this, uint16_t* ___value, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::.ctor(System.Char[],System.Int32,System.Int32)
 void String__ctor_m7969 (String_t* __this, CharU5BU5D_t276* ___value, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::.ctor(System.Char[])
 void String__ctor_m7673 (String_t* __this, CharU5BU5D_t276* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::.ctor(System.Char,System.Int32)
 void String__ctor_m3602 (String_t* __this, uint16_t ___c, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::.cctor()
 void String__cctor_m7970 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::System.IConvertible.ToBoolean(System.IFormatProvider)
 bool String_System_IConvertible_ToBoolean_m7971 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.String::System.IConvertible.ToByte(System.IFormatProvider)
 uint8_t String_System_IConvertible_ToByte_m7972 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::System.IConvertible.ToChar(System.IFormatProvider)
 uint16_t String_System_IConvertible_ToChar_m7973 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.String::System.IConvertible.ToDateTime(System.IFormatProvider)
 DateTime_t837  String_System_IConvertible_ToDateTime_m7974 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.String::System.IConvertible.ToDecimal(System.IFormatProvider)
 Decimal_t5  String_System_IConvertible_ToDecimal_m7975 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.String::System.IConvertible.ToDouble(System.IFormatProvider)
 double String_System_IConvertible_ToDouble_m7976 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.String::System.IConvertible.ToInt16(System.IFormatProvider)
 int16_t String_System_IConvertible_ToInt16_m7977 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::System.IConvertible.ToInt32(System.IFormatProvider)
 int32_t String_System_IConvertible_ToInt32_m7978 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.String::System.IConvertible.ToInt64(System.IFormatProvider)
 int64_t String_System_IConvertible_ToInt64_m7979 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.String::System.IConvertible.ToSByte(System.IFormatProvider)
 int8_t String_System_IConvertible_ToSByte_m7980 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.String::System.IConvertible.ToSingle(System.IFormatProvider)
 float String_System_IConvertible_ToSingle_m7981 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.String::System.IConvertible.ToType(System.Type,System.IFormatProvider)
 Object_t * String_System_IConvertible_ToType_m7982 (String_t* __this, Type_t * ___targetType, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.String::System.IConvertible.ToUInt16(System.IFormatProvider)
 uint16_t String_System_IConvertible_ToUInt16_m7983 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.String::System.IConvertible.ToUInt32(System.IFormatProvider)
 uint32_t String_System_IConvertible_ToUInt32_m7984 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.String::System.IConvertible.ToUInt64(System.IFormatProvider)
 uint64_t String_System_IConvertible_ToUInt64_m7985 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Char> System.String::System.Collections.Generic.IEnumerable<char>.GetEnumerator()
 Object_t* String_System_Collections_Generic_IEnumerableU3CcharU3E_GetEnumerator_m7986 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.String::System.Collections.IEnumerable.GetEnumerator()
 Object_t * String_System_Collections_IEnumerable_GetEnumerator_m7987 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.String,System.String)
 bool String_Equals_m7988 (Object_t * __this/* static, unused */, String_t* ___a, String_t* ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.Object)
 bool String_Equals_m7989 (String_t* __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.String)
 bool String_Equals_m6464 (String_t* __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::get_Chars(System.Int32)
 uint16_t String_get_Chars_m505 (String_t* __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CopyTo(System.Int32,System.Char[],System.Int32,System.Int32)
 void String_CopyTo_m7990 (String_t* __this, int32_t ___sourceIndex, CharU5BU5D_t276* ___destination, int32_t ___destinationIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.String::ToCharArray()
 CharU5BU5D_t276* String_ToCharArray_m7565 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.String::ToCharArray(System.Int32,System.Int32)
 CharU5BU5D_t276* String_ToCharArray_m7991 (String_t* __this, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.Char[])
 StringU5BU5D_t3* String_Split_m1074 (String_t* __this, CharU5BU5D_t276* ___separator, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.Char[],System.Int32)
 StringU5BU5D_t3* String_Split_m7992 (String_t* __this, CharU5BU5D_t276* ___separator, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.Char[],System.Int32,System.StringSplitOptions)
 StringU5BU5D_t3* String_Split_m7993 (String_t* __this, CharU5BU5D_t276* ___separator, int32_t ___count, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.String[],System.Int32,System.StringSplitOptions)
 StringU5BU5D_t3* String_Split_m7994 (String_t* __this, StringU5BU5D_t3* ___separator, int32_t ___count, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.String[],System.StringSplitOptions)
 StringU5BU5D_t3* String_Split_m7593 (String_t* __this, StringU5BU5D_t3* ___separator, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32)
 String_t* String_Substring_m1083 (String_t* __this, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32,System.Int32)
 String_t* String_Substring_m515 (String_t* __this, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::SubstringUnchecked(System.Int32,System.Int32)
 String_t* String_SubstringUnchecked_m7995 (String_t* __this, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Trim()
 String_t* String_Trim_m509 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Trim(System.Char[])
 String_t* String_Trim_m7996 (String_t* __this, CharU5BU5D_t276* ___trimChars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::TrimStart(System.Char[])
 String_t* String_TrimStart_m7692 (String_t* __this, CharU5BU5D_t276* ___trimChars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::TrimEnd(System.Char[])
 String_t* String_TrimEnd_m7591 (String_t* __this, CharU5BU5D_t276* ___trimChars, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::FindNotWhiteSpace(System.Int32,System.Int32,System.Int32)
 int32_t String_FindNotWhiteSpace_m7997 (String_t* __this, int32_t ___pos, int32_t ___target, int32_t ___change, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::FindNotInTable(System.Int32,System.Int32,System.Int32,System.Char[])
 int32_t String_FindNotInTable_m7998 (String_t* __this, int32_t ___pos, int32_t ___target, int32_t ___change, CharU5BU5D_t276* ___table, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::Compare(System.String,System.String)
 int32_t String_Compare_m7999 (Object_t * __this/* static, unused */, String_t* ___strA, String_t* ___strB, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::Compare(System.String,System.String,System.Boolean)
 int32_t String_Compare_m8000 (Object_t * __this/* static, unused */, String_t* ___strA, String_t* ___strB, bool ___ignoreCase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::Compare(System.String,System.String,System.Boolean,System.Globalization.CultureInfo)
 int32_t String_Compare_m6656 (Object_t * __this/* static, unused */, String_t* ___strA, String_t* ___strB, bool ___ignoreCase, CultureInfo_t1065 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::Compare(System.String,System.Int32,System.String,System.Int32,System.Int32,System.Boolean,System.Globalization.CultureInfo)
 int32_t String_Compare_m6658 (Object_t * __this/* static, unused */, String_t* ___strA, int32_t ___indexA, String_t* ___strB, int32_t ___indexB, int32_t ___length, bool ___ignoreCase, CultureInfo_t1065 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::Compare(System.String,System.String,System.StringComparison)
 int32_t String_Compare_m1221 (Object_t * __this/* static, unused */, String_t* ___strA, String_t* ___strB, int32_t ___comparisonType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareTo(System.Object)
 int32_t String_CompareTo_m8001 (String_t* __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareTo(System.String)
 int32_t String_CompareTo_m1431 (String_t* __this, String_t* ___strB, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareOrdinal(System.String,System.Int32,System.String,System.Int32,System.Int32)
 int32_t String_CompareOrdinal_m8002 (Object_t * __this/* static, unused */, String_t* ___strA, int32_t ___indexA, String_t* ___strB, int32_t ___indexB, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareOrdinalUnchecked(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32)
 int32_t String_CompareOrdinalUnchecked_m8003 (Object_t * __this/* static, unused */, String_t* ___strA, int32_t ___indexA, int32_t ___lenA, String_t* ___strB, int32_t ___indexB, int32_t ___lenB, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::CompareOrdinalCaseInsensitiveUnchecked(System.String,System.Int32,System.Int32,System.String,System.Int32,System.Int32)
 int32_t String_CompareOrdinalCaseInsensitiveUnchecked_m8004 (Object_t * __this/* static, unused */, String_t* ___strA, int32_t ___indexA, int32_t ___lenA, String_t* ___strB, int32_t ___indexB, int32_t ___lenB, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::EndsWith(System.String)
 bool String_EndsWith_m1291 (String_t* __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfAny(System.Char[])
 int32_t String_IndexOfAny_m8005 (String_t* __this, CharU5BU5D_t276* ___anyOf, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfAny(System.Char[],System.Int32)
 int32_t String_IndexOfAny_m3594 (String_t* __this, CharU5BU5D_t276* ___anyOf, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfAny(System.Char[],System.Int32,System.Int32)
 int32_t String_IndexOfAny_m6477 (String_t* __this, CharU5BU5D_t276* ___anyOf, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfAnyUnchecked(System.Char[],System.Int32,System.Int32)
 int32_t String_IndexOfAnyUnchecked_m8006 (String_t* __this, CharU5BU5D_t276* ___anyOf, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String,System.StringComparison)
 int32_t String_IndexOf_m7613 (String_t* __this, String_t* ___value, int32_t ___comparisonType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String,System.Int32,System.Int32,System.StringComparison)
 int32_t String_IndexOf_m8007 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, int32_t ___comparisonType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfOrdinal(System.String,System.Int32,System.Int32,System.Globalization.CompareOptions)
 int32_t String_IndexOfOrdinal_m8008 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfOrdinalUnchecked(System.String,System.Int32,System.Int32)
 int32_t String_IndexOfOrdinalUnchecked_m8009 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfOrdinalIgnoreCaseUnchecked(System.String,System.Int32,System.Int32)
 int32_t String_IndexOfOrdinalIgnoreCaseUnchecked_m8010 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.Char)
 int32_t String_IndexOf_m1535 (String_t* __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.Char,System.Int32)
 int32_t String_IndexOf_m6657 (String_t* __this, uint16_t ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.Char,System.Int32,System.Int32)
 int32_t String_IndexOf_m7693 (String_t* __this, uint16_t ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfUnchecked(System.Char,System.Int32,System.Int32)
 int32_t String_IndexOfUnchecked_m8011 (String_t* __this, uint16_t ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String)
 int32_t String_IndexOf_m1292 (String_t* __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String,System.Int32)
 int32_t String_IndexOf_m5081 (String_t* __this, String_t* ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOf(System.String,System.Int32,System.Int32)
 int32_t String_IndexOf_m8012 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOfAny(System.Char[])
 int32_t String_LastIndexOfAny_m8013 (String_t* __this, CharU5BU5D_t276* ___anyOf, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOfAny(System.Char[],System.Int32)
 int32_t String_LastIndexOfAny_m3596 (String_t* __this, CharU5BU5D_t276* ___anyOf, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOfAnyUnchecked(System.Char[],System.Int32,System.Int32)
 int32_t String_LastIndexOfAnyUnchecked_m8014 (String_t* __this, CharU5BU5D_t276* ___anyOf, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.Char)
 int32_t String_LastIndexOf_m1534 (String_t* __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.Char,System.Int32)
 int32_t String_LastIndexOf_m8015 (String_t* __this, uint16_t ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.Char,System.Int32,System.Int32)
 int32_t String_LastIndexOf_m7694 (String_t* __this, uint16_t ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOfUnchecked(System.Char,System.Int32,System.Int32)
 int32_t String_LastIndexOfUnchecked_m8016 (String_t* __this, uint16_t ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.String)
 int32_t String_LastIndexOf_m1082 (String_t* __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::LastIndexOf(System.String,System.Int32,System.Int32)
 int32_t String_LastIndexOf_m8017 (String_t* __this, String_t* ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Contains(System.String)
 bool String_Contains_m3629 (String_t* __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::IsNullOrEmpty(System.String)
 bool String_IsNullOrEmpty_m503 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::PadRight(System.Int32,System.Char)
 String_t* String_PadRight_m4990 (String_t* __this, int32_t ___totalWidth, uint16_t ___paddingChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::StartsWith(System.String)
 bool String_StartsWith_m1290 (String_t* __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Replace(System.Char,System.Char)
 String_t* String_Replace_m5083 (String_t* __this, uint16_t ___oldChar, uint16_t ___newChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Replace(System.String,System.String)
 String_t* String_Replace_m5082 (String_t* __this, String_t* ___oldValue, String_t* ___newValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ReplaceUnchecked(System.String,System.String)
 String_t* String_ReplaceUnchecked_m8018 (String_t* __this, String_t* ___oldValue, String_t* ___newValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ReplaceFallback(System.String,System.String,System.Int32)
 String_t* String_ReplaceFallback_m8019 (String_t* __this, String_t* ___oldValue, String_t* ___newValue, int32_t ___testedCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Remove(System.Int32,System.Int32)
 String_t* String_Remove_m3598 (String_t* __this, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToLower()
 String_t* String_ToLower_m1220 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToLower(System.Globalization.CultureInfo)
 String_t* String_ToLower_m7690 (String_t* __this, CultureInfo_t1065 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToLowerInvariant()
 String_t* String_ToLowerInvariant_m8020 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToString()
 String_t* String_ToString_m585 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ToString(System.IFormatProvider)
 String_t* String_ToString_m8021 (String_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object)
 String_t* String_Format_m442 (Object_t * __this/* static, unused */, String_t* ___format, Object_t * ___arg0, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object)
 String_t* String_Format_m455 (Object_t * __this/* static, unused */, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
 String_t* String_Format_m443 (Object_t * __this/* static, unused */, String_t* ___format, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object[])
 String_t* String_Format_m581 (Object_t * __this/* static, unused */, String_t* ___format, ObjectU5BU5D_t112* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
 String_t* String_Format_m6564 (Object_t * __this/* static, unused */, Object_t * ___provider, String_t* ___format, ObjectU5BU5D_t112* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder System.String::FormatHelper(System.Text.StringBuilder,System.IFormatProvider,System.String,System.Object[])
 StringBuilder_t80 * String_FormatHelper_m8022 (Object_t * __this/* static, unused */, StringBuilder_t80 * ___result, Object_t * ___provider, String_t* ___format, ObjectU5BU5D_t112* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
 String_t* String_Concat_m420 (Object_t * __this/* static, unused */, Object_t * ___arg0, Object_t * ___arg1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object,System.Object)
 String_t* String_Concat_m1143 (Object_t * __this/* static, unused */, Object_t * ___arg0, Object_t * ___arg1, Object_t * ___arg2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
 String_t* String_Concat_m419 (Object_t * __this/* static, unused */, String_t* ___str0, String_t* ___str1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
 String_t* String_Concat_m430 (Object_t * __this/* static, unused */, String_t* ___str0, String_t* ___str1, String_t* ___str2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
 String_t* String_Concat_m548 (Object_t * __this/* static, unused */, String_t* ___str0, String_t* ___str1, String_t* ___str2, String_t* ___str3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object[])
 String_t* String_Concat_m1148 (Object_t * __this/* static, unused */, ObjectU5BU5D_t112* ___args, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String[])
 String_t* String_Concat_m567 (Object_t * __this/* static, unused */, StringU5BU5D_t3* ___values, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::ConcatInternal(System.String[],System.Int32)
 String_t* String_ConcatInternal_m8023 (Object_t * __this/* static, unused */, StringU5BU5D_t3* ___values, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Insert(System.Int32,System.String)
 String_t* String_Insert_m3600 (String_t* __this, int32_t ___startIndex, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Join(System.String,System.String[])
 String_t* String_Join_m593 (Object_t * __this/* static, unused */, String_t* ___separator, StringU5BU5D_t3* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Join(System.String,System.String[],System.Int32,System.Int32)
 String_t* String_Join_m8024 (Object_t * __this/* static, unused */, String_t* ___separator, StringU5BU5D_t3* ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::JoinUnchecked(System.String,System.String[],System.Int32,System.Int32)
 String_t* String_JoinUnchecked_m8025 (Object_t * __this/* static, unused */, String_t* ___separator, StringU5BU5D_t3* ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
 int32_t String_get_Length_m506 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::ParseFormatSpecifier(System.String,System.Int32&,System.Int32&,System.Int32&,System.Boolean&,System.String&)
 void String_ParseFormatSpecifier_m8026 (Object_t * __this/* static, unused */, String_t* ___str, int32_t* ___ptr, int32_t* ___n, int32_t* ___width, bool* ___left_align, String_t** ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::ParseDecimal(System.String,System.Int32&)
 int32_t String_ParseDecimal_m8027 (Object_t * __this/* static, unused */, String_t* ___str, int32_t* ___ptr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::InternalSetChar(System.Int32,System.Char)
 void String_InternalSetChar_m8028 (String_t* __this, int32_t ___idx, uint16_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::InternalSetLength(System.Int32)
 void String_InternalSetLength_m8029 (String_t* __this, int32_t ___newLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::GetHashCode()
 int32_t String_GetHashCode_m1461 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::GetCaseInsensitiveHashCode()
 int32_t String_GetCaseInsensitiveHashCode_m8030 (String_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.SByte*)
 String_t* String_CreateString_m8031 (String_t* __this, int8_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.SByte*,System.Int32,System.Int32)
 String_t* String_CreateString_m8032 (String_t* __this, int8_t* ___value, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.SByte*,System.Int32,System.Int32,System.Text.Encoding)
 String_t* String_CreateString_m8033 (String_t* __this, int8_t* ___value, int32_t ___startIndex, int32_t ___length, Encoding_t322 * ___enc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char*)
 String_t* String_CreateString_m8034 (String_t* __this, uint16_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char*,System.Int32,System.Int32)
 String_t* String_CreateString_m8035 (String_t* __this, uint16_t* ___value, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
 String_t* String_CreateString_m8036 (String_t* __this, CharU5BU5D_t276* ___val, int32_t ___startIndex, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char[])
 String_t* String_CreateString_m7674 (String_t* __this, CharU5BU5D_t276* ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::CreateString(System.Char,System.Int32)
 String_t* String_CreateString_m3640 (String_t* __this, uint16_t ___c, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::memcpy4(System.Byte*,System.Byte*,System.Int32)
 void String_memcpy4_m8037 (Object_t * __this/* static, unused */, uint8_t* ___dest, uint8_t* ___src, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::memcpy2(System.Byte*,System.Byte*,System.Int32)
 void String_memcpy2_m8038 (Object_t * __this/* static, unused */, uint8_t* ___dest, uint8_t* ___src, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::memcpy1(System.Byte*,System.Byte*,System.Int32)
 void String_memcpy1_m8039 (Object_t * __this/* static, unused */, uint8_t* ___dest, uint8_t* ___src, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::memcpy(System.Byte*,System.Byte*,System.Int32)
 void String_memcpy_m8040 (Object_t * __this/* static, unused */, uint8_t* ___dest, uint8_t* ___src, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopy(System.Char*,System.Char*,System.Int32)
 void String_CharCopy_m8041 (Object_t * __this/* static, unused */, uint16_t* ___dest, uint16_t* ___src, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopyReverse(System.Char*,System.Char*,System.Int32)
 void String_CharCopyReverse_m8042 (Object_t * __this/* static, unused */, uint16_t* ___dest, uint16_t* ___src, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopy(System.String,System.Int32,System.String,System.Int32,System.Int32)
 void String_CharCopy_m8043 (Object_t * __this/* static, unused */, String_t* ___target, int32_t ___targetIndex, String_t* ___source, int32_t ___sourceIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopy(System.String,System.Int32,System.Char[],System.Int32,System.Int32)
 void String_CharCopy_m8044 (Object_t * __this/* static, unused */, String_t* ___target, int32_t ___targetIndex, CharU5BU5D_t276* ___source, int32_t ___sourceIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.String::CharCopyReverse(System.String,System.Int32,System.String,System.Int32,System.Int32)
 void String_CharCopyReverse_m8045 (Object_t * __this/* static, unused */, String_t* ___target, int32_t ___targetIndex, String_t* ___source, int32_t ___sourceIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::InternalSplit(System.Char[],System.Int32,System.Int32)
 StringU5BU5D_t3* String_InternalSplit_m8046 (String_t* __this, CharU5BU5D_t276* ___separator, int32_t ___count, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::InternalAllocateStr(System.Int32)
 String_t* String_InternalAllocateStr_m8047 (Object_t * __this/* static, unused */, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
 bool String_op_Equality_m573 (Object_t * __this/* static, unused */, String_t* ___a, String_t* ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Inequality(System.String,System.String)
 bool String_op_Inequality_m511 (Object_t * __this/* static, unused */, String_t* ___a, String_t* ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
