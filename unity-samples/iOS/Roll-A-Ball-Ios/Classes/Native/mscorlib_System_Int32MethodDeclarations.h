#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Int32
struct Int32_t63;
// System.IFormatProvider
struct IFormatProvider_t1162;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Exception
struct Exception_t71;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1737;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"
// System.TypeCode
#include "mscorlib_System_TypeCode.h"

// System.Boolean System.Int32::System.IConvertible.ToBoolean(System.IFormatProvider)
 bool Int32_System_IConvertible_ToBoolean_m7711 (int32_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Int32::System.IConvertible.ToByte(System.IFormatProvider)
 uint8_t Int32_System_IConvertible_ToByte_m7712 (int32_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Int32::System.IConvertible.ToChar(System.IFormatProvider)
 uint16_t Int32_System_IConvertible_ToChar_m7713 (int32_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Int32::System.IConvertible.ToDateTime(System.IFormatProvider)
 DateTime_t837  Int32_System_IConvertible_ToDateTime_m7714 (int32_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Int32::System.IConvertible.ToDecimal(System.IFormatProvider)
 Decimal_t5  Int32_System_IConvertible_ToDecimal_m7715 (int32_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Int32::System.IConvertible.ToDouble(System.IFormatProvider)
 double Int32_System_IConvertible_ToDouble_m7716 (int32_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Int32::System.IConvertible.ToInt16(System.IFormatProvider)
 int16_t Int32_System_IConvertible_ToInt16_m7717 (int32_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int32::System.IConvertible.ToInt32(System.IFormatProvider)
 int32_t Int32_System_IConvertible_ToInt32_m7718 (int32_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Int32::System.IConvertible.ToInt64(System.IFormatProvider)
 int64_t Int32_System_IConvertible_ToInt64_m7719 (int32_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Int32::System.IConvertible.ToSByte(System.IFormatProvider)
 int8_t Int32_System_IConvertible_ToSByte_m7720 (int32_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Int32::System.IConvertible.ToSingle(System.IFormatProvider)
 float Int32_System_IConvertible_ToSingle_m7721 (int32_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Int32::System.IConvertible.ToType(System.Type,System.IFormatProvider)
 Object_t * Int32_System_IConvertible_ToType_m7722 (int32_t* __this, Type_t * ___targetType, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Int32::System.IConvertible.ToUInt16(System.IFormatProvider)
 uint16_t Int32_System_IConvertible_ToUInt16_m7723 (int32_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Int32::System.IConvertible.ToUInt32(System.IFormatProvider)
 uint32_t Int32_System_IConvertible_ToUInt32_m7724 (int32_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Int32::System.IConvertible.ToUInt64(System.IFormatProvider)
 uint64_t Int32_System_IConvertible_ToUInt64_m7725 (int32_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int32::CompareTo(System.Object)
 int32_t Int32_CompareTo_m7726 (int32_t* __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::Equals(System.Object)
 bool Int32_Equals_m7727 (int32_t* __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int32::GetHashCode()
 int32_t Int32_GetHashCode_m4986 (int32_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int32::CompareTo(System.Int32)
 int32_t Int32_CompareTo_m1433 (int32_t* __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::Equals(System.Int32)
 bool Int32_Equals_m4988 (int32_t* __this, int32_t ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::ProcessTrailingWhitespace(System.Boolean,System.String,System.Int32,System.Exception&)
 bool Int32_ProcessTrailingWhitespace_m7728 (Object_t * __this/* static, unused */, bool ___tryParse, String_t* ___s, int32_t ___position, Exception_t71 ** ___exc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::Parse(System.String,System.Boolean,System.Int32&,System.Exception&)
 bool Int32_Parse_m7729 (Object_t * __this/* static, unused */, String_t* ___s, bool ___tryParse, int32_t* ___result, Exception_t71 ** ___exc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int32::Parse(System.String,System.IFormatProvider)
 int32_t Int32_Parse_m7730 (Object_t * __this/* static, unused */, String_t* ___s, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int32::Parse(System.String,System.Globalization.NumberStyles)
 int32_t Int32_Parse_m516 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::CheckStyle(System.Globalization.NumberStyles,System.Boolean,System.Exception&)
 bool Int32_CheckStyle_m7731 (Object_t * __this/* static, unused */, int32_t ___style, bool ___tryParse, Exception_t71 ** ___exc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::JumpOverWhite(System.Int32&,System.String,System.Boolean,System.Boolean,System.Exception&)
 bool Int32_JumpOverWhite_m7732 (Object_t * __this/* static, unused */, int32_t* ___pos, String_t* ___s, bool ___reportError, bool ___tryParse, Exception_t71 ** ___exc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Int32::FindSign(System.Int32&,System.String,System.Globalization.NumberFormatInfo,System.Boolean&,System.Boolean&)
 void Int32_FindSign_m7733 (Object_t * __this/* static, unused */, int32_t* ___pos, String_t* ___s, NumberFormatInfo_t1737 * ___nfi, bool* ___foundSign, bool* ___negative, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Int32::FindCurrency(System.Int32&,System.String,System.Globalization.NumberFormatInfo,System.Boolean&)
 void Int32_FindCurrency_m7734 (Object_t * __this/* static, unused */, int32_t* ___pos, String_t* ___s, NumberFormatInfo_t1737 * ___nfi, bool* ___foundCurrency, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::FindExponent(System.Int32&,System.String,System.Int32&,System.Boolean,System.Exception&)
 bool Int32_FindExponent_m7735 (Object_t * __this/* static, unused */, int32_t* ___pos, String_t* ___s, int32_t* ___exponent, bool ___tryParse, Exception_t71 ** ___exc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::FindOther(System.Int32&,System.String,System.String)
 bool Int32_FindOther_m7736 (Object_t * __this/* static, unused */, int32_t* ___pos, String_t* ___s, String_t* ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::ValidDigit(System.Char,System.Boolean)
 bool Int32_ValidDigit_m7737 (Object_t * __this/* static, unused */, uint16_t ___e, bool ___allowHex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Int32::GetFormatException()
 Exception_t71 * Int32_GetFormatException_m7738 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Boolean,System.Int32&,System.Exception&)
 bool Int32_Parse_m7739 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___fp, bool ___tryParse, int32_t* ___result, Exception_t71 ** ___exc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int32::Parse(System.String)
 int32_t Int32_Parse_m6566 (Object_t * __this/* static, unused */, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int32::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
 int32_t Int32_Parse_m7740 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
 bool Int32_TryParse_m496 (Object_t * __this/* static, unused */, String_t* ___s, int32_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int32&)
 bool Int32_TryParse_m7568 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, int32_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString()
 String_t* Int32_ToString_m497 (int32_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString(System.IFormatProvider)
 String_t* Int32_ToString_m6531 (int32_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString(System.String)
 String_t* Int32_ToString_m7618 (int32_t* __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString(System.String,System.IFormatProvider)
 String_t* Int32_ToString_m6535 (int32_t* __this, String_t* ___format, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.Int32::GetTypeCode()
 int32_t Int32_GetTypeCode_m7741 (int32_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
