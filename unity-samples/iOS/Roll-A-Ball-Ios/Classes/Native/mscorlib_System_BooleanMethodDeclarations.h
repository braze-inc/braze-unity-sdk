#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Boolean
struct Boolean_t64;
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
// System.TypeCode
#include "mscorlib_System_TypeCode.h"

// System.Void System.Boolean::.cctor()
 void Boolean__cctor_m8190 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Boolean::System.IConvertible.ToType(System.Type,System.IFormatProvider)
 Object_t * Boolean_System_IConvertible_ToType_m8191 (bool* __this, Type_t * ___targetType, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Boolean::System.IConvertible.ToBoolean(System.IFormatProvider)
 bool Boolean_System_IConvertible_ToBoolean_m8192 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Boolean::System.IConvertible.ToByte(System.IFormatProvider)
 uint8_t Boolean_System_IConvertible_ToByte_m8193 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Boolean::System.IConvertible.ToChar(System.IFormatProvider)
 uint16_t Boolean_System_IConvertible_ToChar_m8194 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Boolean::System.IConvertible.ToDateTime(System.IFormatProvider)
 DateTime_t837  Boolean_System_IConvertible_ToDateTime_m8195 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Boolean::System.IConvertible.ToDecimal(System.IFormatProvider)
 Decimal_t5  Boolean_System_IConvertible_ToDecimal_m8196 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Boolean::System.IConvertible.ToDouble(System.IFormatProvider)
 double Boolean_System_IConvertible_ToDouble_m8197 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Boolean::System.IConvertible.ToInt16(System.IFormatProvider)
 int16_t Boolean_System_IConvertible_ToInt16_m8198 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Boolean::System.IConvertible.ToInt32(System.IFormatProvider)
 int32_t Boolean_System_IConvertible_ToInt32_m8199 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Boolean::System.IConvertible.ToInt64(System.IFormatProvider)
 int64_t Boolean_System_IConvertible_ToInt64_m8200 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Boolean::System.IConvertible.ToSByte(System.IFormatProvider)
 int8_t Boolean_System_IConvertible_ToSByte_m8201 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Boolean::System.IConvertible.ToSingle(System.IFormatProvider)
 float Boolean_System_IConvertible_ToSingle_m8202 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Boolean::System.IConvertible.ToUInt16(System.IFormatProvider)
 uint16_t Boolean_System_IConvertible_ToUInt16_m8203 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Boolean::System.IConvertible.ToUInt32(System.IFormatProvider)
 uint32_t Boolean_System_IConvertible_ToUInt32_m8204 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Boolean::System.IConvertible.ToUInt64(System.IFormatProvider)
 uint64_t Boolean_System_IConvertible_ToUInt64_m8205 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Boolean::CompareTo(System.Object)
 int32_t Boolean_CompareTo_m8206 (bool* __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Boolean::Equals(System.Object)
 bool Boolean_Equals_m8207 (bool* __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Boolean::CompareTo(System.Boolean)
 int32_t Boolean_CompareTo_m8208 (bool* __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Boolean::Equals(System.Boolean)
 bool Boolean_Equals_m8209 (bool* __this, bool ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Boolean::GetHashCode()
 int32_t Boolean_GetHashCode_m8210 (bool* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Boolean::Parse(System.String)
 bool Boolean_Parse_m8211 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Boolean::TryParse(System.String,System.Boolean&)
 bool Boolean_TryParse_m502 (Object_t * __this/* static, unused */, String_t* ___value, bool* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Boolean::ToString()
 String_t* Boolean_ToString_m8212 (bool* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.Boolean::GetTypeCode()
 int32_t Boolean_GetTypeCode_m8213 (bool* __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Boolean::ToString(System.IFormatProvider)
 String_t* Boolean_ToString_m8214 (bool* __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
