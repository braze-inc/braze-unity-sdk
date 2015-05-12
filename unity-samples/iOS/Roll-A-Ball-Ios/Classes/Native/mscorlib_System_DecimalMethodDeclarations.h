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
struct IFormatProvider_t1162;
// System.Int32[]
struct Int32U5BU5D_t1185;
// System.String
struct String_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1737;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"

// System.Void System.Decimal::.ctor(System.Int32,System.Int32,System.Int32,System.Boolean,System.Byte)
 void Decimal__ctor_m8106 (Decimal_t5 * __this, int32_t ___lo, int32_t ___mid, int32_t ___hi, bool ___isNegative, uint8_t ___scale, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Int32)
 void Decimal__ctor_m1080 (Decimal_t5 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.UInt32)
 void Decimal__ctor_m8107 (Decimal_t5 * __this, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Int64)
 void Decimal__ctor_m8108 (Decimal_t5 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.UInt64)
 void Decimal__ctor_m8109 (Decimal_t5 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Single)
 void Decimal__ctor_m8110 (Decimal_t5 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Double)
 void Decimal__ctor_m8111 (Decimal_t5 * __this, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.cctor()
 void Decimal__cctor_m8112 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Decimal::System.IConvertible.ToType(System.Type,System.IFormatProvider)
 Object_t * Decimal_System_IConvertible_ToType_m8113 (Decimal_t5 * __this, Type_t * ___targetType, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::System.IConvertible.ToBoolean(System.IFormatProvider)
 bool Decimal_System_IConvertible_ToBoolean_m8114 (Decimal_t5 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Decimal::System.IConvertible.ToByte(System.IFormatProvider)
 uint8_t Decimal_System_IConvertible_ToByte_m8115 (Decimal_t5 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Decimal::System.IConvertible.ToChar(System.IFormatProvider)
 uint16_t Decimal_System_IConvertible_ToChar_m8116 (Decimal_t5 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Decimal::System.IConvertible.ToDateTime(System.IFormatProvider)
 DateTime_t837  Decimal_System_IConvertible_ToDateTime_m8117 (Decimal_t5 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::System.IConvertible.ToDecimal(System.IFormatProvider)
 Decimal_t5  Decimal_System_IConvertible_ToDecimal_m8118 (Decimal_t5 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Decimal::System.IConvertible.ToDouble(System.IFormatProvider)
 double Decimal_System_IConvertible_ToDouble_m8119 (Decimal_t5 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Decimal::System.IConvertible.ToInt16(System.IFormatProvider)
 int16_t Decimal_System_IConvertible_ToInt16_m8120 (Decimal_t5 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::System.IConvertible.ToInt32(System.IFormatProvider)
 int32_t Decimal_System_IConvertible_ToInt32_m8121 (Decimal_t5 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Decimal::System.IConvertible.ToInt64(System.IFormatProvider)
 int64_t Decimal_System_IConvertible_ToInt64_m8122 (Decimal_t5 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Decimal::System.IConvertible.ToSByte(System.IFormatProvider)
 int8_t Decimal_System_IConvertible_ToSByte_m8123 (Decimal_t5 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Decimal::System.IConvertible.ToSingle(System.IFormatProvider)
 float Decimal_System_IConvertible_ToSingle_m8124 (Decimal_t5 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Decimal::System.IConvertible.ToUInt16(System.IFormatProvider)
 uint16_t Decimal_System_IConvertible_ToUInt16_m8125 (Decimal_t5 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Decimal::System.IConvertible.ToUInt32(System.IFormatProvider)
 uint32_t Decimal_System_IConvertible_ToUInt32_m8126 (Decimal_t5 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Decimal::System.IConvertible.ToUInt64(System.IFormatProvider)
 uint64_t Decimal_System_IConvertible_ToUInt64_m8127 (Decimal_t5 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Decimal::GetBits(System.Decimal)
 Int32U5BU5D_t1185* Decimal_GetBits_m8128 (Object_t * __this/* static, unused */, Decimal_t5  ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Add(System.Decimal,System.Decimal)
 Decimal_t5  Decimal_Add_m8129 (Object_t * __this/* static, unused */, Decimal_t5  ___d1, Decimal_t5  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Subtract(System.Decimal,System.Decimal)
 Decimal_t5  Decimal_Subtract_m8130 (Object_t * __this/* static, unused */, Decimal_t5  ___d1, Decimal_t5  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::GetHashCode()
 int32_t Decimal_GetHashCode_m8131 (Decimal_t5 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Decimal::u64(System.Decimal)
 uint64_t Decimal_u64_m8132 (Object_t * __this/* static, unused */, Decimal_t5  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Decimal::s64(System.Decimal)
 int64_t Decimal_s64_m8133 (Object_t * __this/* static, unused */, Decimal_t5  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::Equals(System.Decimal,System.Decimal)
 bool Decimal_Equals_m8134 (Object_t * __this/* static, unused */, Decimal_t5  ___d1, Decimal_t5  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::Equals(System.Object)
 bool Decimal_Equals_m8135 (Decimal_t5 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::IsZero()
 bool Decimal_IsZero_m8136 (Decimal_t5 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Floor(System.Decimal)
 Decimal_t5  Decimal_Floor_m8137 (Object_t * __this/* static, unused */, Decimal_t5  ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Multiply(System.Decimal,System.Decimal)
 Decimal_t5  Decimal_Multiply_m8138 (Object_t * __this/* static, unused */, Decimal_t5  ___d1, Decimal_t5  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Divide(System.Decimal,System.Decimal)
 Decimal_t5  Decimal_Divide_m8139 (Object_t * __this/* static, unused */, Decimal_t5  ___d1, Decimal_t5  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::Compare(System.Decimal,System.Decimal)
 int32_t Decimal_Compare_m8140 (Object_t * __this/* static, unused */, Decimal_t5  ___d1, Decimal_t5  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::CompareTo(System.Object)
 int32_t Decimal_CompareTo_m8141 (Decimal_t5 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::CompareTo(System.Decimal)
 int32_t Decimal_CompareTo_m8142 (Decimal_t5 * __this, Decimal_t5  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::Equals(System.Decimal)
 bool Decimal_Equals_m8143 (Decimal_t5 * __this, Decimal_t5  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Parse(System.String)
 Decimal_t5  Decimal_Parse_m8144 (Object_t * __this/* static, unused */, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Parse(System.String,System.IFormatProvider)
 Decimal_t5  Decimal_Parse_m8145 (Object_t * __this/* static, unused */, String_t* ___s, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::ThrowAtPos(System.Int32)
 void Decimal_ThrowAtPos_m8146 (Object_t * __this/* static, unused */, int32_t ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::ThrowInvalidExp()
 void Decimal_ThrowInvalidExp_m8147 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::stripStyles(System.String,System.Globalization.NumberStyles,System.Globalization.NumberFormatInfo,System.Int32&,System.Boolean&,System.Boolean&,System.Int32&,System.Boolean)
 String_t* Decimal_stripStyles_m8148 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___style, NumberFormatInfo_t1737 * ___nfi, int32_t* ___decPos, bool* ___isNegative, bool* ___expFlag, int32_t* ___exp, bool ___throwex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
 Decimal_t5  Decimal_Parse_m8149 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::PerformParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Decimal&,System.Boolean)
 bool Decimal_PerformParse_m8150 (Object_t * __this/* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, Decimal_t5 * ___res, bool ___throwex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::ToString(System.String,System.IFormatProvider)
 String_t* Decimal_ToString_m8151 (Decimal_t5 * __this, String_t* ___format, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::ToString()
 String_t* Decimal_ToString_m413 (Decimal_t5 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::ToString(System.IFormatProvider)
 String_t* Decimal_ToString_m8152 (Decimal_t5 * __this, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimal2UInt64(System.Decimal&,System.UInt64&)
 int32_t Decimal_decimal2UInt64_m8153 (Object_t * __this/* static, unused */, Decimal_t5 * ___val, uint64_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimal2Int64(System.Decimal&,System.Int64&)
 int32_t Decimal_decimal2Int64_m8154 (Object_t * __this/* static, unused */, Decimal_t5 * ___val, int64_t* ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalIncr(System.Decimal&,System.Decimal&)
 int32_t Decimal_decimalIncr_m8155 (Object_t * __this/* static, unused */, Decimal_t5 * ___d1, Decimal_t5 * ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::string2decimal(System.Decimal&,System.String,System.UInt32,System.Int32)
 int32_t Decimal_string2decimal_m8156 (Object_t * __this/* static, unused */, Decimal_t5 * ___val, String_t* ___sDigits, uint32_t ___decPos, int32_t ___sign, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalSetExponent(System.Decimal&,System.Int32)
 int32_t Decimal_decimalSetExponent_m8157 (Object_t * __this/* static, unused */, Decimal_t5 * ___val, int32_t ___exp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Decimal::decimal2double(System.Decimal&)
 double Decimal_decimal2double_m8158 (Object_t * __this/* static, unused */, Decimal_t5 * ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::decimalFloorAndTrunc(System.Decimal&,System.Int32)
 void Decimal_decimalFloorAndTrunc_m8159 (Object_t * __this/* static, unused */, Decimal_t5 * ___val, int32_t ___floorFlag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalMult(System.Decimal&,System.Decimal&)
 int32_t Decimal_decimalMult_m8160 (Object_t * __this/* static, unused */, Decimal_t5 * ___pd1, Decimal_t5 * ___pd2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalDiv(System.Decimal&,System.Decimal&,System.Decimal&)
 int32_t Decimal_decimalDiv_m8161 (Object_t * __this/* static, unused */, Decimal_t5 * ___pc, Decimal_t5 * ___pa, Decimal_t5 * ___pb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalCompare(System.Decimal&,System.Decimal&)
 int32_t Decimal_decimalCompare_m8162 (Object_t * __this/* static, unused */, Decimal_t5 * ___d1, Decimal_t5 * ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Increment(System.Decimal)
 Decimal_t5  Decimal_op_Increment_m8163 (Object_t * __this/* static, unused */, Decimal_t5  ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Subtraction(System.Decimal,System.Decimal)
 Decimal_t5  Decimal_op_Subtraction_m8164 (Object_t * __this/* static, unused */, Decimal_t5  ___d1, Decimal_t5  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Multiply(System.Decimal,System.Decimal)
 Decimal_t5  Decimal_op_Multiply_m8165 (Object_t * __this/* static, unused */, Decimal_t5  ___d1, Decimal_t5  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Division(System.Decimal,System.Decimal)
 Decimal_t5  Decimal_op_Division_m8166 (Object_t * __this/* static, unused */, Decimal_t5  ___d1, Decimal_t5  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Decimal::op_Explicit(System.Decimal)
 uint8_t Decimal_op_Explicit_m8167 (Object_t * __this/* static, unused */, Decimal_t5  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Decimal::op_Explicit(System.Decimal)
 int8_t Decimal_op_Explicit_m8168 (Object_t * __this/* static, unused */, Decimal_t5  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Decimal::op_Explicit(System.Decimal)
 int16_t Decimal_op_Explicit_m8169 (Object_t * __this/* static, unused */, Decimal_t5  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Decimal::op_Explicit(System.Decimal)
 uint16_t Decimal_op_Explicit_m8170 (Object_t * __this/* static, unused */, Decimal_t5  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::op_Explicit(System.Decimal)
 int32_t Decimal_op_Explicit_m8171 (Object_t * __this/* static, unused */, Decimal_t5  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Decimal::op_Explicit(System.Decimal)
 uint32_t Decimal_op_Explicit_m8172 (Object_t * __this/* static, unused */, Decimal_t5  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Decimal::op_Explicit(System.Decimal)
 int64_t Decimal_op_Explicit_m8173 (Object_t * __this/* static, unused */, Decimal_t5  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Decimal::op_Explicit(System.Decimal)
 uint64_t Decimal_op_Explicit_m8174 (Object_t * __this/* static, unused */, Decimal_t5  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Byte)
 Decimal_t5  Decimal_op_Implicit_m8175 (Object_t * __this/* static, unused */, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.SByte)
 Decimal_t5  Decimal_op_Implicit_m8176 (Object_t * __this/* static, unused */, int8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Int16)
 Decimal_t5  Decimal_op_Implicit_m8177 (Object_t * __this/* static, unused */, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.UInt16)
 Decimal_t5  Decimal_op_Implicit_m8178 (Object_t * __this/* static, unused */, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Int32)
 Decimal_t5  Decimal_op_Implicit_m8179 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.UInt32)
 Decimal_t5  Decimal_op_Implicit_m8180 (Object_t * __this/* static, unused */, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Int64)
 Decimal_t5  Decimal_op_Implicit_m8181 (Object_t * __this/* static, unused */, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.UInt64)
 Decimal_t5  Decimal_op_Implicit_m8182 (Object_t * __this/* static, unused */, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Explicit(System.Single)
 Decimal_t5  Decimal_op_Explicit_m8183 (Object_t * __this/* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Explicit(System.Double)
 Decimal_t5  Decimal_op_Explicit_m8184 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Decimal::op_Explicit(System.Decimal)
 float Decimal_op_Explicit_m8185 (Object_t * __this/* static, unused */, Decimal_t5  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Decimal::op_Explicit(System.Decimal)
 double Decimal_op_Explicit_m8186 (Object_t * __this/* static, unused */, Decimal_t5  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_Inequality(System.Decimal,System.Decimal)
 bool Decimal_op_Inequality_m8187 (Object_t * __this/* static, unused */, Decimal_t5  ___d1, Decimal_t5  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_Equality(System.Decimal,System.Decimal)
 bool Decimal_op_Equality_m5319 (Object_t * __this/* static, unused */, Decimal_t5  ___d1, Decimal_t5  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_GreaterThan(System.Decimal,System.Decimal)
 bool Decimal_op_GreaterThan_m8188 (Object_t * __this/* static, unused */, Decimal_t5  ___d1, Decimal_t5  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_LessThan(System.Decimal,System.Decimal)
 bool Decimal_op_LessThan_m8189 (Object_t * __this/* static, unused */, Decimal_t5  ___d1, Decimal_t5  ___d2, MethodInfo* method) IL2CPP_METHOD_ATTR;
