#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UInt64
struct UInt64_t1057;
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

// System.Boolean System.UInt64::System.IConvertible.ToBoolean(System.IFormatProvider)
 bool UInt64_System_IConvertible_ToBoolean_m7803 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.UInt64::System.IConvertible.ToByte(System.IFormatProvider)
 uint8_t UInt64_System_IConvertible_ToByte_m7804 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.UInt64::System.IConvertible.ToChar(System.IFormatProvider)
 uint16_t UInt64_System_IConvertible_ToChar_m7805 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.UInt64::System.IConvertible.ToDateTime(System.IFormatProvider)
 DateTime_t837  UInt64_System_IConvertible_ToDateTime_m7806 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.UInt64::System.IConvertible.ToDecimal(System.IFormatProvider)
 Decimal_t5  UInt64_System_IConvertible_ToDecimal_m7807 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.UInt64::System.IConvertible.ToDouble(System.IFormatProvider)
 double UInt64_System_IConvertible_ToDouble_m7808 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.UInt64::System.IConvertible.ToInt16(System.IFormatProvider)
 int16_t UInt64_System_IConvertible_ToInt16_m7809 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt64::System.IConvertible.ToInt32(System.IFormatProvider)
 int32_t UInt64_System_IConvertible_ToInt32_m7810 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.UInt64::System.IConvertible.ToInt64(System.IFormatProvider)
 int64_t UInt64_System_IConvertible_ToInt64_m7811 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.UInt64::System.IConvertible.ToSByte(System.IFormatProvider)
 int8_t UInt64_System_IConvertible_ToSByte_m7812 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.UInt64::System.IConvertible.ToSingle(System.IFormatProvider)
 float UInt64_System_IConvertible_ToSingle_m7813 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UInt64::System.IConvertible.ToType(System.Type,System.IFormatProvider)
 Object_t * UInt64_System_IConvertible_ToType_m7814 (uint64_t* __this, Type_t * ___targetType, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.UInt64::System.IConvertible.ToUInt16(System.IFormatProvider)
 uint16_t UInt64_System_IConvertible_ToUInt16_m7815 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.UInt64::System.IConvertible.ToUInt32(System.IFormatProvider)
 uint32_t UInt64_System_IConvertible_ToUInt32_m7816 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.UInt64::System.IConvertible.ToUInt64(System.IFormatProvider)
 uint64_t UInt64_System_IConvertible_ToUInt64_m7817 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt64::CompareTo(System.Object)
 int32_t UInt64_CompareTo_m7818 (uint64_t* __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt64::Equals(System.Object)
 bool UInt64_Equals_m7819 (uint64_t* __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt64::GetHashCode()
 int32_t UInt64_GetHashCode_m7820 (uint64_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt64::CompareTo(System.UInt64)
 int32_t UInt64_CompareTo_m7821 (uint64_t* __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt64::Equals(System.UInt64)
 bool UInt64_Equals_m7822 (uint64_t* __this, uint64_t ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.UInt64::Parse(System.String,System.IFormatProvider)
 uint64_t UInt64_Parse_m7823 (Object_t * __this/* static, unused */, String_t* ___s, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt64::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Boolean,System.UInt64&,System.Exception&)
 bool UInt64_Parse_m7824 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, bool ___tryParse, uint64_t* ___result, Exception_t71 ** ___exc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.UInt64::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
 uint64_t UInt64_Parse_m7825 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt64::TryParse(System.String,System.UInt64&)
 bool UInt64_TryParse_m7826 (Object_t * __this/* static, unused */, String_t* ___s, uint64_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt64::ToString()
 String_t* UInt64_ToString_m7827 (uint64_t* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt64::ToString(System.IFormatProvider)
 String_t* UInt64_ToString_m6405 (uint64_t* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt64::ToString(System.String)
 String_t* UInt64_ToString_m7828 (uint64_t* __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt64::ToString(System.String,System.IFormatProvider)
 String_t* UInt64_ToString_m7829 (uint64_t* __this, String_t* ___format, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
