#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Decimal
struct Decimal_t5;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IFormatProvider
struct IFormatProvider_t1173;
// System.Int32[]
struct Int32U5BU5D_t1196;
// System.String
struct String_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1749;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"

// System.Void System.Decimal::.ctor(System.Int32,System.Int32,System.Int32,System.Boolean,System.Byte)
 void Decimal__ctor_m8201 (Decimal_t5 * __this, int32_t ___lo, int32_t ___mid, int32_t ___hi, bool ___isNegative, uint8_t ___scale, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Int32)
 void Decimal__ctor_m1186 (Decimal_t5 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.UInt32)
 void Decimal__ctor_m8202 (Decimal_t5 * __this, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Int64)
 void Decimal__ctor_m8203 (Decimal_t5 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.UInt64)
 void Decimal__ctor_m8204 (Decimal_t5 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Single)
 void Decimal__ctor_m8205 (Decimal_t5 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Double)
 void Decimal__ctor_m8206 (Decimal_t5 * __this, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.cctor()
 void Decimal__cctor_m8207 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Decimal::System.IConvertible.ToType(System.Type,System.IFormatProvider)
 Object_t * Decimal_System_IConvertible_ToType_m8208 (Decimal_t5 * __this, Type_t * ___targetType, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::System.IConvertible.ToBoolean(System.IFormatProvider)
 bool Decimal_System_IConvertible_ToBoolean_m8209 (Decimal_t5 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Decimal::System.IConvertible.ToByte(System.IFormatProvider)
 uint8_t Decimal_System_IConvertible_ToByte_m8210 (Decimal_t5 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Decimal::System.IConvertible.ToChar(System.IFormatProvider)
 uint16_t Decimal_System_IConvertible_ToChar_m8211 (Decimal_t5 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Decimal::System.IConvertible.ToDateTime(System.IFormatProvider)
 DateTime_t850  Decimal_System_IConvertible_ToDateTime_m8212 (Decimal_t5 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::System.IConvertible.ToDecimal(System.IFormatProvider)
 Decimal_t5  Decimal_System_IConvertible_ToDecimal_m8213 (Decimal_t5 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Decimal::System.IConvertible.ToDouble(System.IFormatProvider)
 double Decimal_System_IConvertible_ToDouble_m8214 (Decimal_t5 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Decimal::System.IConvertible.ToInt16(System.IFormatProvider)
 int16_t Decimal_System_IConvertible_ToInt16_m8215 (Decimal_t5 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::System.IConvertible.ToInt32(System.IFormatProvider)
 int32_t Decimal_System_IConvertible_ToInt32_m8216 (Decimal_t5 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Decimal::System.IConvertible.ToInt64(System.IFormatProvider)
 int64_t Decimal_System_IConvertible_ToInt64_m8217 (Decimal_t5 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Decimal::System.IConvertible.ToSByte(System.IFormatProvider)
 int8_t Decimal_System_IConvertible_ToSByte_m8218 (Decimal_t5 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Decimal::System.IConvertible.ToSingle(System.IFormatProvider)
 float Decimal_System_IConvertible_ToSingle_m8219 (Decimal_t5 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Decimal::System.IConvertible.ToUInt16(System.IFormatProvider)
 uint16_t Decimal_System_IConvertible_ToUInt16_m8220 (Decimal_t5 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Decimal::System.IConvertible.ToUInt32(System.IFormatProvider)
 uint32_t Decimal_System_IConvertible_ToUInt32_m8221 (Decimal_t5 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Decimal::System.IConvertible.ToUInt64(System.IFormatProvider)
 uint64_t Decimal_System_IConvertible_ToUInt64_m8222 (Decimal_t5 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Decimal::GetBits(System.Decimal)
 Int32U5BU5D_t1196* Decimal_GetBits_m8223 (Object_t * __this/* static, unused */, Decimal_t5  ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Add(System.Decimal,System.Decimal)
 Decimal_t5  Decimal_Add_m8224 (Object_t * __this/* static, unused */, Decimal_t5  ___d1, Decimal_t5  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Subtract(System.Decimal,System.Decimal)
 Decimal_t5  Decimal_Subtract_m8225 (Object_t * __this/* static, unused */, Decimal_t5  ___d1, Decimal_t5  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::GetHashCode()
 int32_t Decimal_GetHashCode_m8226 (Decimal_t5 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Decimal::u64(System.Decimal)
 uint64_t Decimal_u64_m8227 (Object_t * __this/* static, unused */, Decimal_t5  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Decimal::s64(System.Decimal)
 int64_t Decimal_s64_m8228 (Object_t * __this/* static, unused */, Decimal_t5  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::Equals(System.Decimal,System.Decimal)
 bool Decimal_Equals_m8229 (Object_t * __this/* static, unused */, Decimal_t5  ___d1, Decimal_t5  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::Equals(System.Object)
 bool Decimal_Equals_m8230 (Decimal_t5 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::IsZero()
 bool Decimal_IsZero_m8231 (Decimal_t5 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Floor(System.Decimal)
 Decimal_t5  Decimal_Floor_m8232 (Object_t * __this/* static, unused */, Decimal_t5  ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Multiply(System.Decimal,System.Decimal)
 Decimal_t5  Decimal_Multiply_m8233 (Object_t * __this/* static, unused */, Decimal_t5  ___d1, Decimal_t5  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Divide(System.Decimal,System.Decimal)
 Decimal_t5  Decimal_Divide_m8234 (Object_t * __this/* static, unused */, Decimal_t5  ___d1, Decimal_t5  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::Compare(System.Decimal,System.Decimal)
 int32_t Decimal_Compare_m8235 (Object_t * __this/* static, unused */, Decimal_t5  ___d1, Decimal_t5  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::CompareTo(System.Object)
 int32_t Decimal_CompareTo_m8236 (Decimal_t5 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::CompareTo(System.Decimal)
 int32_t Decimal_CompareTo_m8237 (Decimal_t5 * __this, Decimal_t5  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::Equals(System.Decimal)
 bool Decimal_Equals_m8238 (Decimal_t5 * __this, Decimal_t5  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Parse(System.String)
 Decimal_t5  Decimal_Parse_m8239 (Object_t * __this/* static, unused */, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Parse(System.String,System.IFormatProvider)
 Decimal_t5  Decimal_Parse_m8240 (Object_t * __this/* static, unused */, String_t* ___s, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::ThrowAtPos(System.Int32)
 void Decimal_ThrowAtPos_m8241 (Object_t * __this/* static, unused */, int32_t ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::ThrowInvalidExp()
 void Decimal_ThrowInvalidExp_m8242 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::stripStyles(System.String,System.Globalization.NumberStyles,System.Globalization.NumberFormatInfo,System.Int32&,System.Boolean&,System.Boolean&,System.Int32&,System.Boolean)
 String_t* Decimal_stripStyles_m8243 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___style, NumberFormatInfo_t1749 * ___nfi, int32_t* ___decPos, bool* ___isNegative, bool* ___expFlag, int32_t* ___exp, bool ___throwex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
 Decimal_t5  Decimal_Parse_m8244 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::PerformParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Decimal&,System.Boolean)
 bool Decimal_PerformParse_m8245 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, Decimal_t5 * ___res, bool ___throwex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::ToString(System.String,System.IFormatProvider)
 String_t* Decimal_ToString_m8246 (Decimal_t5 * __this, String_t* ___format, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::ToString()
 String_t* Decimal_ToString_m470 (Decimal_t5 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::ToString(System.IFormatProvider)
 String_t* Decimal_ToString_m8247 (Decimal_t5 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimal2UInt64(System.Decimal&,System.UInt64&)
 int32_t Decimal_decimal2UInt64_m8248 (Object_t * __this/* static, unused */, Decimal_t5 * ___val, uint64_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimal2Int64(System.Decimal&,System.Int64&)
 int32_t Decimal_decimal2Int64_m8249 (Object_t * __this/* static, unused */, Decimal_t5 * ___val, int64_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalIncr(System.Decimal&,System.Decimal&)
 int32_t Decimal_decimalIncr_m8250 (Object_t * __this/* static, unused */, Decimal_t5 * ___d1, Decimal_t5 * ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::string2decimal(System.Decimal&,System.String,System.UInt32,System.Int32)
 int32_t Decimal_string2decimal_m8251 (Object_t * __this/* static, unused */, Decimal_t5 * ___val, String_t* ___sDigits, uint32_t ___decPos, int32_t ___sign, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalSetExponent(System.Decimal&,System.Int32)
 int32_t Decimal_decimalSetExponent_m8252 (Object_t * __this/* static, unused */, Decimal_t5 * ___val, int32_t ___exp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Decimal::decimal2double(System.Decimal&)
 double Decimal_decimal2double_m8253 (Object_t * __this/* static, unused */, Decimal_t5 * ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::decimalFloorAndTrunc(System.Decimal&,System.Int32)
 void Decimal_decimalFloorAndTrunc_m8254 (Object_t * __this/* static, unused */, Decimal_t5 * ___val, int32_t ___floorFlag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalMult(System.Decimal&,System.Decimal&)
 int32_t Decimal_decimalMult_m8255 (Object_t * __this/* static, unused */, Decimal_t5 * ___pd1, Decimal_t5 * ___pd2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalDiv(System.Decimal&,System.Decimal&,System.Decimal&)
 int32_t Decimal_decimalDiv_m8256 (Object_t * __this/* static, unused */, Decimal_t5 * ___pc, Decimal_t5 * ___pa, Decimal_t5 * ___pb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalCompare(System.Decimal&,System.Decimal&)
 int32_t Decimal_decimalCompare_m8257 (Object_t * __this/* static, unused */, Decimal_t5 * ___d1, Decimal_t5 * ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Increment(System.Decimal)
 Decimal_t5  Decimal_op_Increment_m8258 (Object_t * __this/* static, unused */, Decimal_t5  ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Subtraction(System.Decimal,System.Decimal)
 Decimal_t5  Decimal_op_Subtraction_m8259 (Object_t * __this/* static, unused */, Decimal_t5  ___d1, Decimal_t5  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Multiply(System.Decimal,System.Decimal)
 Decimal_t5  Decimal_op_Multiply_m8260 (Object_t * __this/* static, unused */, Decimal_t5  ___d1, Decimal_t5  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Division(System.Decimal,System.Decimal)
 Decimal_t5  Decimal_op_Division_m8261 (Object_t * __this/* static, unused */, Decimal_t5  ___d1, Decimal_t5  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Decimal::op_Explicit(System.Decimal)
 uint8_t Decimal_op_Explicit_m8262 (Object_t * __this/* static, unused */, Decimal_t5  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Decimal::op_Explicit(System.Decimal)
 int8_t Decimal_op_Explicit_m8263 (Object_t * __this/* static, unused */, Decimal_t5  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Decimal::op_Explicit(System.Decimal)
 int16_t Decimal_op_Explicit_m8264 (Object_t * __this/* static, unused */, Decimal_t5  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Decimal::op_Explicit(System.Decimal)
 uint16_t Decimal_op_Explicit_m8265 (Object_t * __this/* static, unused */, Decimal_t5  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::op_Explicit(System.Decimal)
 int32_t Decimal_op_Explicit_m8266 (Object_t * __this/* static, unused */, Decimal_t5  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Decimal::op_Explicit(System.Decimal)
 uint32_t Decimal_op_Explicit_m8267 (Object_t * __this/* static, unused */, Decimal_t5  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Decimal::op_Explicit(System.Decimal)
 int64_t Decimal_op_Explicit_m8268 (Object_t * __this/* static, unused */, Decimal_t5  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Decimal::op_Explicit(System.Decimal)
 uint64_t Decimal_op_Explicit_m8269 (Object_t * __this/* static, unused */, Decimal_t5  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Byte)
 Decimal_t5  Decimal_op_Implicit_m8270 (Object_t * __this/* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.SByte)
 Decimal_t5  Decimal_op_Implicit_m8271 (Object_t * __this/* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Int16)
 Decimal_t5  Decimal_op_Implicit_m8272 (Object_t * __this/* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.UInt16)
 Decimal_t5  Decimal_op_Implicit_m8273 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Int32)
 Decimal_t5  Decimal_op_Implicit_m8274 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.UInt32)
 Decimal_t5  Decimal_op_Implicit_m8275 (Object_t * __this/* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Int64)
 Decimal_t5  Decimal_op_Implicit_m8276 (Object_t * __this/* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.UInt64)
 Decimal_t5  Decimal_op_Implicit_m8277 (Object_t * __this/* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Explicit(System.Single)
 Decimal_t5  Decimal_op_Explicit_m8278 (Object_t * __this/* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Explicit(System.Double)
 Decimal_t5  Decimal_op_Explicit_m8279 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Decimal::op_Explicit(System.Decimal)
 float Decimal_op_Explicit_m8280 (Object_t * __this/* static, unused */, Decimal_t5  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Decimal::op_Explicit(System.Decimal)
 double Decimal_op_Explicit_m8281 (Object_t * __this/* static, unused */, Decimal_t5  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_Inequality(System.Decimal,System.Decimal)
 bool Decimal_op_Inequality_m8282 (Object_t * __this/* static, unused */, Decimal_t5  ___d1, Decimal_t5  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_Equality(System.Decimal,System.Decimal)
 bool Decimal_op_Equality_m5413 (Object_t * __this/* static, unused */, Decimal_t5  ___d1, Decimal_t5  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_GreaterThan(System.Decimal,System.Decimal)
 bool Decimal_op_GreaterThan_m8283 (Object_t * __this/* static, unused */, Decimal_t5  ___d1, Decimal_t5  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_LessThan(System.Decimal,System.Decimal)
 bool Decimal_op_LessThan_m8284 (Object_t * __this/* static, unused */, Decimal_t5  ___d1, Decimal_t5  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
