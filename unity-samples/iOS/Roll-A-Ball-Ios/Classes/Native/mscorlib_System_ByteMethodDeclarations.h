#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Byte
struct Byte_t98;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IFormatProvider
struct IFormatProvider_t1162;
// System.String
struct String_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"

// System.Object System.Byte::System.IConvertible.ToType(System.Type,System.IFormatProvider)
 Object_t * Byte_System_IConvertible_ToType_m7830 (uint8_t* __this, Type_t * ___targetType, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Byte::System.IConvertible.ToBoolean(System.IFormatProvider)
 bool Byte_System_IConvertible_ToBoolean_m7831 (uint8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Byte::System.IConvertible.ToByte(System.IFormatProvider)
 uint8_t Byte_System_IConvertible_ToByte_m7832 (uint8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Byte::System.IConvertible.ToChar(System.IFormatProvider)
 uint16_t Byte_System_IConvertible_ToChar_m7833 (uint8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Byte::System.IConvertible.ToDateTime(System.IFormatProvider)
 DateTime_t837  Byte_System_IConvertible_ToDateTime_m7834 (uint8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Byte::System.IConvertible.ToDecimal(System.IFormatProvider)
 Decimal_t5  Byte_System_IConvertible_ToDecimal_m7835 (uint8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Byte::System.IConvertible.ToDouble(System.IFormatProvider)
 double Byte_System_IConvertible_ToDouble_m7836 (uint8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Byte::System.IConvertible.ToInt16(System.IFormatProvider)
 int16_t Byte_System_IConvertible_ToInt16_m7837 (uint8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Byte::System.IConvertible.ToInt32(System.IFormatProvider)
 int32_t Byte_System_IConvertible_ToInt32_m7838 (uint8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Byte::System.IConvertible.ToInt64(System.IFormatProvider)
 int64_t Byte_System_IConvertible_ToInt64_m7839 (uint8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Byte::System.IConvertible.ToSByte(System.IFormatProvider)
 int8_t Byte_System_IConvertible_ToSByte_m7840 (uint8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Byte::System.IConvertible.ToSingle(System.IFormatProvider)
 float Byte_System_IConvertible_ToSingle_m7841 (uint8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Byte::System.IConvertible.ToUInt16(System.IFormatProvider)
 uint16_t Byte_System_IConvertible_ToUInt16_m7842 (uint8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Byte::System.IConvertible.ToUInt32(System.IFormatProvider)
 uint32_t Byte_System_IConvertible_ToUInt32_m7843 (uint8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Byte::System.IConvertible.ToUInt64(System.IFormatProvider)
 uint64_t Byte_System_IConvertible_ToUInt64_m7844 (uint8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Byte::CompareTo(System.Object)
 int32_t Byte_CompareTo_m7845 (uint8_t* __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Byte::Equals(System.Object)
 bool Byte_Equals_m7846 (uint8_t* __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Byte::GetHashCode()
 int32_t Byte_GetHashCode_m7847 (uint8_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Byte::CompareTo(System.Byte)
 int32_t Byte_CompareTo_m7848 (uint8_t* __this, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Byte::Equals(System.Byte)
 bool Byte_Equals_m7849 (uint8_t* __this, uint8_t ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Byte::Parse(System.String,System.IFormatProvider)
 uint8_t Byte_Parse_m7850 (Object_t * __this/* static, unused */, String_t* ___s, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Byte::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
 uint8_t Byte_Parse_m7851 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Byte::Parse(System.String)
 uint8_t Byte_Parse_m7852 (Object_t * __this/* static, unused */, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Byte::TryParse(System.String,System.Byte&)
 bool Byte_TryParse_m7853 (Object_t * __this/* static, unused */, String_t* ___s, uint8_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Byte::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Byte&)
 bool Byte_TryParse_m7854 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, uint8_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Byte::ToString()
 String_t* Byte_ToString_m6533 (uint8_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Byte::ToString(System.String)
 String_t* Byte_ToString_m6396 (uint8_t* __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Byte::ToString(System.IFormatProvider)
 String_t* Byte_ToString_m6404 (uint8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Byte::ToString(System.String,System.IFormatProvider)
 String_t* Byte_ToString_m6426 (uint8_t* __this, String_t* ___format, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
