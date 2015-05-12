#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Enum
struct Enum_t83;
// System.Object
struct Object_t;
// System.IFormatProvider
struct IFormatProvider_t1162;
// System.Type
struct Type_t;
// System.Array
struct Array_t;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t414;
// System.String[]
struct StringU5BU5D_t3;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.TypeCode
#include "mscorlib_System_TypeCode.h"

// System.Void System.Enum::.ctor()
 void Enum__ctor_m8270 (Object_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Enum::.cctor()
 void Enum__cctor_m8271 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Enum::System.IConvertible.ToBoolean(System.IFormatProvider)
 bool Enum_System_IConvertible_ToBoolean_m472 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Enum::System.IConvertible.ToByte(System.IFormatProvider)
 uint8_t Enum_System_IConvertible_ToByte_m473 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Enum::System.IConvertible.ToChar(System.IFormatProvider)
 uint16_t Enum_System_IConvertible_ToChar_m474 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Enum::System.IConvertible.ToDateTime(System.IFormatProvider)
 DateTime_t837  Enum_System_IConvertible_ToDateTime_m475 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Enum::System.IConvertible.ToDecimal(System.IFormatProvider)
 Decimal_t5  Enum_System_IConvertible_ToDecimal_m476 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Enum::System.IConvertible.ToDouble(System.IFormatProvider)
 double Enum_System_IConvertible_ToDouble_m477 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Enum::System.IConvertible.ToInt16(System.IFormatProvider)
 int16_t Enum_System_IConvertible_ToInt16_m478 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Enum::System.IConvertible.ToInt32(System.IFormatProvider)
 int32_t Enum_System_IConvertible_ToInt32_m479 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Enum::System.IConvertible.ToInt64(System.IFormatProvider)
 int64_t Enum_System_IConvertible_ToInt64_m480 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Enum::System.IConvertible.ToSByte(System.IFormatProvider)
 int8_t Enum_System_IConvertible_ToSByte_m481 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Enum::System.IConvertible.ToSingle(System.IFormatProvider)
 float Enum_System_IConvertible_ToSingle_m482 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::System.IConvertible.ToType(System.Type,System.IFormatProvider)
 Object_t * Enum_System_IConvertible_ToType_m484 (Object_t * __this, Type_t * ___targetType, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Enum::System.IConvertible.ToUInt16(System.IFormatProvider)
 uint16_t Enum_System_IConvertible_ToUInt16_m485 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Enum::System.IConvertible.ToUInt32(System.IFormatProvider)
 uint32_t Enum_System_IConvertible_ToUInt32_m486 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Enum::System.IConvertible.ToUInt64(System.IFormatProvider)
 uint64_t Enum_System_IConvertible_ToUInt64_m487 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.Enum::GetTypeCode()
 int32_t Enum_GetTypeCode_m489 (Object_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::get_value()
 Object_t * Enum_get_value_m8272 (Object_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::get_Value()
 Object_t * Enum_get_Value_m8273 (Object_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Enum::FindPosition(System.Object,System.Array)
 int32_t Enum_FindPosition_m8274 (Object_t * __this/* static, unused */, Object_t * ___value, Array_t * ___values, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Enum::GetName(System.Type,System.Object)
 String_t* Enum_GetName_m8275 (Object_t * __this/* static, unused */, Type_t * ___enumType, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Enum::IsDefined(System.Type,System.Object)
 bool Enum_IsDefined_m6602 (Object_t * __this/* static, unused */, Type_t * ___enumType, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Enum::get_underlying_type(System.Type)
 Type_t * Enum_get_underlying_type_m8276 (Object_t * __this/* static, unused */, Type_t * ___enumType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Enum::GetUnderlyingType(System.Type)
 Type_t * Enum_GetUnderlyingType_m8277 (Object_t * __this/* static, unused */, Type_t * ___enumType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Enum::FindName(System.Collections.Hashtable,System.String[],System.String,System.Boolean)
 int32_t Enum_FindName_m8278 (Object_t * __this/* static, unused */, Hashtable_t414 * ___name_hash, StringU5BU5D_t3* ___names, String_t* ___name, bool ___ignoreCase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Enum::GetValue(System.Object,System.TypeCode)
 uint64_t Enum_GetValue_m8279 (Object_t * __this/* static, unused */, Object_t * ___value, int32_t ___typeCode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::Parse(System.Type,System.String,System.Boolean)
 Object_t * Enum_Parse_m462 (Object_t * __this/* static, unused */, Type_t * ___enumType, String_t* ___value, bool ___ignoreCase, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Enum::compare_value_to(System.Object)
 int32_t Enum_compare_value_to_m8280 (Object_t * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Enum::CompareTo(System.Object)
 int32_t Enum_CompareTo_m488 (Object_t * __this, Object_t * ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Enum::ToString()
 String_t* Enum_ToString_m470 (Object_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Enum::ToString(System.IFormatProvider)
 String_t* Enum_ToString_m483 (Object_t * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Enum::ToString(System.String)
 String_t* Enum_ToString_m8281 (Object_t * __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Enum::ToString(System.String,System.IFormatProvider)
 String_t* Enum_ToString_m471 (Object_t * __this, String_t* ___format, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::ToObject(System.Type,System.Byte)
 Object_t * Enum_ToObject_m8282 (Object_t * __this/* static, unused */, Type_t * ___enumType, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::ToObject(System.Type,System.Int16)
 Object_t * Enum_ToObject_m8283 (Object_t * __this/* static, unused */, Type_t * ___enumType, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::ToObject(System.Type,System.Int32)
 Object_t * Enum_ToObject_m8284 (Object_t * __this/* static, unused */, Type_t * ___enumType, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::ToObject(System.Type,System.Int64)
 Object_t * Enum_ToObject_m8285 (Object_t * __this/* static, unused */, Type_t * ___enumType, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::ToObject(System.Type,System.Object)
 Object_t * Enum_ToObject_m8286 (Object_t * __this/* static, unused */, Type_t * ___enumType, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::ToObject(System.Type,System.SByte)
 Object_t * Enum_ToObject_m8287 (Object_t * __this/* static, unused */, Type_t * ___enumType, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::ToObject(System.Type,System.UInt16)
 Object_t * Enum_ToObject_m8288 (Object_t * __this/* static, unused */, Type_t * ___enumType, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::ToObject(System.Type,System.UInt32)
 Object_t * Enum_ToObject_m8289 (Object_t * __this/* static, unused */, Type_t * ___enumType, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Enum::ToObject(System.Type,System.UInt64)
 Object_t * Enum_ToObject_m8290 (Object_t * __this/* static, unused */, Type_t * ___enumType, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Enum::Equals(System.Object)
 bool Enum_Equals_m468 (Object_t * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Enum::get_hashcode()
 int32_t Enum_get_hashcode_m8291 (Object_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Enum::GetHashCode()
 int32_t Enum_GetHashCode_m469 (Object_t * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Enum::FormatSpecifier_X(System.Type,System.Object,System.Boolean)
 String_t* Enum_FormatSpecifier_X_m8292 (Object_t * __this/* static, unused */, Type_t * ___enumType, Object_t * ___value, bool ___upper, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Enum::FormatFlags(System.Type,System.Object)
 String_t* Enum_FormatFlags_m8293 (Object_t * __this/* static, unused */, Type_t * ___enumType, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Enum::Format(System.Type,System.Object,System.String)
 String_t* Enum_Format_m8294 (Object_t * __this/* static, unused */, Type_t * ___enumType, Object_t * ___value, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
