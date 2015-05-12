#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.SByte
struct SByte_t65;
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
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"

// System.Boolean System.SByte::System.IConvertible.ToBoolean(System.IFormatProvider)
 bool SByte_System_IConvertible_ToBoolean_m7855 (int8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.SByte::System.IConvertible.ToByte(System.IFormatProvider)
 uint8_t SByte_System_IConvertible_ToByte_m7856 (int8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.SByte::System.IConvertible.ToChar(System.IFormatProvider)
 uint16_t SByte_System_IConvertible_ToChar_m7857 (int8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.SByte::System.IConvertible.ToDateTime(System.IFormatProvider)
 DateTime_t837  SByte_System_IConvertible_ToDateTime_m7858 (int8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.SByte::System.IConvertible.ToDecimal(System.IFormatProvider)
 Decimal_t5  SByte_System_IConvertible_ToDecimal_m7859 (int8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.SByte::System.IConvertible.ToDouble(System.IFormatProvider)
 double SByte_System_IConvertible_ToDouble_m7860 (int8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.SByte::System.IConvertible.ToInt16(System.IFormatProvider)
 int16_t SByte_System_IConvertible_ToInt16_m7861 (int8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.SByte::System.IConvertible.ToInt32(System.IFormatProvider)
 int32_t SByte_System_IConvertible_ToInt32_m7862 (int8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.SByte::System.IConvertible.ToInt64(System.IFormatProvider)
 int64_t SByte_System_IConvertible_ToInt64_m7863 (int8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.SByte::System.IConvertible.ToSByte(System.IFormatProvider)
 int8_t SByte_System_IConvertible_ToSByte_m7864 (int8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.SByte::System.IConvertible.ToSingle(System.IFormatProvider)
 float SByte_System_IConvertible_ToSingle_m7865 (int8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.SByte::System.IConvertible.ToType(System.Type,System.IFormatProvider)
 Object_t * SByte_System_IConvertible_ToType_m7866 (int8_t* __this, Type_t * ___targetType, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.SByte::System.IConvertible.ToUInt16(System.IFormatProvider)
 uint16_t SByte_System_IConvertible_ToUInt16_m7867 (int8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.SByte::System.IConvertible.ToUInt32(System.IFormatProvider)
 uint32_t SByte_System_IConvertible_ToUInt32_m7868 (int8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.SByte::System.IConvertible.ToUInt64(System.IFormatProvider)
 uint64_t SByte_System_IConvertible_ToUInt64_m7869 (int8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.SByte::CompareTo(System.Object)
 int32_t SByte_CompareTo_m7870 (int8_t* __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.SByte::Equals(System.Object)
 bool SByte_Equals_m7871 (int8_t* __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.SByte::GetHashCode()
 int32_t SByte_GetHashCode_m7872 (int8_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.SByte::CompareTo(System.SByte)
 int32_t SByte_CompareTo_m7873 (int8_t* __this, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.SByte::Equals(System.SByte)
 bool SByte_Equals_m7874 (int8_t* __this, int8_t ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.SByte::Parse(System.String,System.Boolean,System.SByte&,System.Exception&)
 bool SByte_Parse_m7875 (Object_t * __this/* static, unused */, String_t* ___s, bool ___tryParse, int8_t* ___result, Exception_t71 ** ___exc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.SByte::Parse(System.String,System.IFormatProvider)
 int8_t SByte_Parse_m7876 (Object_t * __this/* static, unused */, String_t* ___s, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.SByte::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
 int8_t SByte_Parse_m7877 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.SByte::TryParse(System.String,System.SByte&)
 bool SByte_TryParse_m7878 (Object_t * __this/* static, unused */, String_t* ___s, int8_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.SByte::ToString()
 String_t* SByte_ToString_m7879 (int8_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.SByte::ToString(System.IFormatProvider)
 String_t* SByte_ToString_m7880 (int8_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.SByte::ToString(System.String)
 String_t* SByte_ToString_m7881 (int8_t* __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.SByte::ToString(System.String,System.IFormatProvider)
 String_t* SByte_ToString_m7882 (int8_t* __this, String_t* ___format, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
