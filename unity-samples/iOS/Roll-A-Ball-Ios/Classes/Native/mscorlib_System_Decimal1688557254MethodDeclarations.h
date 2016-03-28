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

// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.IFormatProvider
struct IFormatProvider_t3436592966;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.String
struct String_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t3411951076;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Decimal1688557254.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Globalization_NumberStyles3988678145.h"
#include "mscorlib_System_Globalization_NumberFormatInfo3411951076.h"

// System.Void System.Decimal::.ctor(System.Int32,System.Int32,System.Int32,System.Boolean,System.Byte)
extern "C"  void Decimal__ctor_m2513372273 (Decimal_t1688557254 * __this, int32_t ___lo, int32_t ___mid, int32_t ___hi, bool ___isNegative, uint8_t ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Int32)
extern "C"  void Decimal__ctor_m3224507889 (Decimal_t1688557254 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.UInt32)
extern "C"  void Decimal__ctor_m2172724314 (Decimal_t1688557254 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Int64)
extern "C"  void Decimal__ctor_m3224510834 (Decimal_t1688557254 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.UInt64)
extern "C"  void Decimal__ctor_m2172727259 (Decimal_t1688557254 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Single)
extern "C"  void Decimal__ctor_m1313518859 (Decimal_t1688557254 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.ctor(System.Double)
extern "C"  void Decimal__ctor_m1063956130 (Decimal_t1688557254 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::.cctor()
extern "C"  void Decimal__cctor_m2694156045 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Decimal::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C"  Il2CppObject * Decimal_System_IConvertible_ToType_m3174931036 (Decimal_t1688557254 * __this, Type_t * ___targetType, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C"  bool Decimal_System_IConvertible_ToBoolean_m632609316 (Decimal_t1688557254 * __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Decimal::System.IConvertible.ToByte(System.IFormatProvider)
extern "C"  uint8_t Decimal_System_IConvertible_ToByte_m852949524 (Decimal_t1688557254 * __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Decimal::System.IConvertible.ToChar(System.IFormatProvider)
extern "C"  uint16_t Decimal_System_IConvertible_ToChar_m224793940 (Decimal_t1688557254 * __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Decimal::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C"  DateTime_t339033936  Decimal_System_IConvertible_ToDateTime_m126860468 (Decimal_t1688557254 * __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C"  Decimal_t1688557254  Decimal_System_IConvertible_ToDecimal_m1811804854 (Decimal_t1688557254 * __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Decimal::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C"  double Decimal_System_IConvertible_ToDouble_m2491245620 (Decimal_t1688557254 * __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Decimal::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C"  int16_t Decimal_System_IConvertible_ToInt16_m2684098812 (Decimal_t1688557254 * __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C"  int32_t Decimal_System_IConvertible_ToInt32_m1063784048 (Decimal_t1688557254 * __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Decimal::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C"  int64_t Decimal_System_IConvertible_ToInt64_m3667452590 (Decimal_t1688557254 * __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Decimal::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C"  int8_t Decimal_System_IConvertible_ToSByte_m3132034058 (Decimal_t1688557254 * __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Decimal::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C"  float Decimal_System_IConvertible_ToSingle_m2991266196 (Decimal_t1688557254 * __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Decimal::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C"  uint16_t Decimal_System_IConvertible_ToUInt16_m2878718708 (Decimal_t1688557254 * __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Decimal::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C"  uint32_t Decimal_System_IConvertible_ToUInt32_m2170362164 (Decimal_t1688557254 * __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Decimal::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C"  uint64_t Decimal_System_IConvertible_ToUInt64_m2861402004 (Decimal_t1688557254 * __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Decimal::GetBits(System.Decimal)
extern "C"  Int32U5BU5D_t1809983122* Decimal_GetBits_m3135740910 (Il2CppObject * __this /* static, unused */, Decimal_t1688557254  ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Add(System.Decimal,System.Decimal)
extern "C"  Decimal_t1688557254  Decimal_Add_m228744192 (Il2CppObject * __this /* static, unused */, Decimal_t1688557254  ___d1, Decimal_t1688557254  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Subtract(System.Decimal,System.Decimal)
extern "C"  Decimal_t1688557254  Decimal_Subtract_m4038646005 (Il2CppObject * __this /* static, unused */, Decimal_t1688557254  ___d1, Decimal_t1688557254  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::GetHashCode()
extern "C"  int32_t Decimal_GetHashCode_m3725649587 (Decimal_t1688557254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Decimal::u64(System.Decimal)
extern "C"  uint64_t Decimal_u64_m2792266019 (Il2CppObject * __this /* static, unused */, Decimal_t1688557254  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Decimal::s64(System.Decimal)
extern "C"  int64_t Decimal_s64_m2409928640 (Il2CppObject * __this /* static, unused */, Decimal_t1688557254  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::Equals(System.Decimal,System.Decimal)
extern "C"  bool Decimal_Equals_m1154754945 (Il2CppObject * __this /* static, unused */, Decimal_t1688557254  ___d1, Decimal_t1688557254  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::Equals(System.Object)
extern "C"  bool Decimal_Equals_m3414174927 (Decimal_t1688557254 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::IsZero()
extern "C"  bool Decimal_IsZero_m379800408 (Decimal_t1688557254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Floor(System.Decimal)
extern "C"  Decimal_t1688557254  Decimal_Floor_m2586872671 (Il2CppObject * __this /* static, unused */, Decimal_t1688557254  ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Multiply(System.Decimal,System.Decimal)
extern "C"  Decimal_t1688557254  Decimal_Multiply_m201714661 (Il2CppObject * __this /* static, unused */, Decimal_t1688557254  ___d1, Decimal_t1688557254  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Divide(System.Decimal,System.Decimal)
extern "C"  Decimal_t1688557254  Decimal_Divide_m555230192 (Il2CppObject * __this /* static, unused */, Decimal_t1688557254  ___d1, Decimal_t1688557254  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::Compare(System.Decimal,System.Decimal)
extern "C"  int32_t Decimal_Compare_m2326407199 (Il2CppObject * __this /* static, unused */, Decimal_t1688557254  ___d1, Decimal_t1688557254  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::CompareTo(System.Object)
extern "C"  int32_t Decimal_CompareTo_m2551434482 (Decimal_t1688557254 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::CompareTo(System.Decimal)
extern "C"  int32_t Decimal_CompareTo_m2260095952 (Decimal_t1688557254 * __this, Decimal_t1688557254  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::Equals(System.Decimal)
extern "C"  bool Decimal_Equals_m3235245971 (Decimal_t1688557254 * __this, Decimal_t1688557254  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Parse(System.String)
extern "C"  Decimal_t1688557254  Decimal_Parse_m4269067114 (Il2CppObject * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Parse(System.String,System.IFormatProvider)
extern "C"  Decimal_t1688557254  Decimal_Parse_m3786250826 (Il2CppObject * __this /* static, unused */, String_t* ___s, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::ThrowAtPos(System.Int32)
extern "C"  void Decimal_ThrowAtPos_m2498186320 (Il2CppObject * __this /* static, unused */, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::ThrowInvalidExp()
extern "C"  void Decimal_ThrowInvalidExp_m2882909866 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::stripStyles(System.String,System.Globalization.NumberStyles,System.Globalization.NumberFormatInfo,System.Int32&,System.Boolean&,System.Boolean&,System.Int32&,System.Boolean)
extern "C"  String_t* Decimal_stripStyles_m1011490529 (Il2CppObject * __this /* static, unused */, String_t* ___s, int32_t ___style, NumberFormatInfo_t3411951076 * ___nfi, int32_t* ___decPos, bool* ___isNegative, bool* ___expFlag, int32_t* ___exp, bool ___throwex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C"  Decimal_t1688557254  Decimal_Parse_m2075137301 (Il2CppObject * __this /* static, unused */, String_t* ___s, int32_t ___style, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::PerformParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Decimal&,System.Boolean)
extern "C"  bool Decimal_PerformParse_m2251733520 (Il2CppObject * __this /* static, unused */, String_t* ___s, int32_t ___style, Il2CppObject * ___provider, Decimal_t1688557254 * ___res, bool ___throwex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* Decimal_ToString_m3542473445 (Decimal_t1688557254 * __this, String_t* ___format, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::ToString()
extern "C"  String_t* Decimal_ToString_m143310003 (Decimal_t1688557254 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Decimal::ToString(System.IFormatProvider)
extern "C"  String_t* Decimal_ToString_m1778338145 (Decimal_t1688557254 * __this, Il2CppObject * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimal2UInt64(System.Decimal&,System.UInt64&)
extern "C"  int32_t Decimal_decimal2UInt64_m3964664210 (Il2CppObject * __this /* static, unused */, Decimal_t1688557254 * ___val, uint64_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimal2Int64(System.Decimal&,System.Int64&)
extern "C"  int32_t Decimal_decimal2Int64_m4033216548 (Il2CppObject * __this /* static, unused */, Decimal_t1688557254 * ___val, int64_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalIncr(System.Decimal&,System.Decimal&)
extern "C"  int32_t Decimal_decimalIncr_m877616783 (Il2CppObject * __this /* static, unused */, Decimal_t1688557254 * ___d1, Decimal_t1688557254 * ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::string2decimal(System.Decimal&,System.String,System.UInt32,System.Int32)
extern "C"  int32_t Decimal_string2decimal_m3618231257 (Il2CppObject * __this /* static, unused */, Decimal_t1688557254 * ___val, String_t* ___sDigits, uint32_t ___decPos, int32_t ___sign, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalSetExponent(System.Decimal&,System.Int32)
extern "C"  int32_t Decimal_decimalSetExponent_m618812921 (Il2CppObject * __this /* static, unused */, Decimal_t1688557254 * ___val, int32_t ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Decimal::decimal2double(System.Decimal&)
extern "C"  double Decimal_decimal2double_m128837253 (Il2CppObject * __this /* static, unused */, Decimal_t1688557254 * ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Decimal::decimalFloorAndTrunc(System.Decimal&,System.Int32)
extern "C"  void Decimal_decimalFloorAndTrunc_m1954139757 (Il2CppObject * __this /* static, unused */, Decimal_t1688557254 * ___val, int32_t ___floorFlag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalMult(System.Decimal&,System.Decimal&)
extern "C"  int32_t Decimal_decimalMult_m3364322611 (Il2CppObject * __this /* static, unused */, Decimal_t1688557254 * ___pd1, Decimal_t1688557254 * ___pd2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalDiv(System.Decimal&,System.Decimal&,System.Decimal&)
extern "C"  int32_t Decimal_decimalDiv_m3855399918 (Il2CppObject * __this /* static, unused */, Decimal_t1688557254 * ___pc, Decimal_t1688557254 * ___pa, Decimal_t1688557254 * ___pb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::decimalCompare(System.Decimal&,System.Decimal&)
extern "C"  int32_t Decimal_decimalCompare_m57377858 (Il2CppObject * __this /* static, unused */, Decimal_t1688557254 * ___d1, Decimal_t1688557254 * ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Increment(System.Decimal)
extern "C"  Decimal_t1688557254  Decimal_op_Increment_m1999568348 (Il2CppObject * __this /* static, unused */, Decimal_t1688557254  ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Subtraction(System.Decimal,System.Decimal)
extern "C"  Decimal_t1688557254  Decimal_op_Subtraction_m1143274995 (Il2CppObject * __this /* static, unused */, Decimal_t1688557254  ___d1, Decimal_t1688557254  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Multiply(System.Decimal,System.Decimal)
extern "C"  Decimal_t1688557254  Decimal_op_Multiply_m3464599935 (Il2CppObject * __this /* static, unused */, Decimal_t1688557254  ___d1, Decimal_t1688557254  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Division(System.Decimal,System.Decimal)
extern "C"  Decimal_t1688557254  Decimal_op_Division_m3950902742 (Il2CppObject * __this /* static, unused */, Decimal_t1688557254  ___d1, Decimal_t1688557254  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Decimal::op_Explicit(System.Decimal)
extern "C"  uint8_t Decimal_op_Explicit_m444543858 (Il2CppObject * __this /* static, unused */, Decimal_t1688557254  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Decimal::op_Explicit(System.Decimal)
extern "C"  int8_t Decimal_op_Explicit_m3069219439 (Il2CppObject * __this /* static, unused */, Decimal_t1688557254  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Decimal::op_Explicit(System.Decimal)
extern "C"  int16_t Decimal_op_Explicit_m1899223848 (Il2CppObject * __this /* static, unused */, Decimal_t1688557254  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Decimal::op_Explicit(System.Decimal)
extern "C"  uint16_t Decimal_op_Explicit_m1178707977 (Il2CppObject * __this /* static, unused */, Decimal_t1688557254  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Decimal::op_Explicit(System.Decimal)
extern "C"  int32_t Decimal_op_Explicit_m2040523874 (Il2CppObject * __this /* static, unused */, Decimal_t1688557254  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Decimal::op_Explicit(System.Decimal)
extern "C"  uint32_t Decimal_op_Explicit_m1320008003 (Il2CppObject * __this /* static, unused */, Decimal_t1688557254  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Decimal::op_Explicit(System.Decimal)
extern "C"  int64_t Decimal_op_Explicit_m3678935617 (Il2CppObject * __this /* static, unused */, Decimal_t1688557254  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Decimal::op_Explicit(System.Decimal)
extern "C"  uint64_t Decimal_op_Explicit_m2958419746 (Il2CppObject * __this /* static, unused */, Decimal_t1688557254  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Byte)
extern "C"  Decimal_t1688557254  Decimal_op_Implicit_m394719939 (Il2CppObject * __this /* static, unused */, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.SByte)
extern "C"  Decimal_t1688557254  Decimal_op_Implicit_m4082450700 (Il2CppObject * __this /* static, unused */, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Int16)
extern "C"  Decimal_t1688557254  Decimal_op_Implicit_m3836579315 (Il2CppObject * __this /* static, unused */, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.UInt16)
extern "C"  Decimal_t1688557254  Decimal_op_Implicit_m3967123276 (Il2CppObject * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Int32)
extern "C"  Decimal_t1688557254  Decimal_op_Implicit_m3836581113 (Il2CppObject * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.UInt32)
extern "C"  Decimal_t1688557254  Decimal_op_Implicit_m3967125074 (Il2CppObject * __this /* static, unused */, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.Int64)
extern "C"  Decimal_t1688557254  Decimal_op_Implicit_m3836584058 (Il2CppObject * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Implicit(System.UInt64)
extern "C"  Decimal_t1688557254  Decimal_op_Implicit_m3967128019 (Il2CppObject * __this /* static, unused */, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Explicit(System.Single)
extern "C"  Decimal_t1688557254  Decimal_op_Explicit_m1480046292 (Il2CppObject * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Decimal::op_Explicit(System.Double)
extern "C"  Decimal_t1688557254  Decimal_op_Explicit_m1230483563 (Il2CppObject * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Decimal::op_Explicit(System.Decimal)
extern "C"  float Decimal_op_Explicit_m2130641906 (Il2CppObject * __this /* static, unused */, Decimal_t1688557254  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Decimal::op_Explicit(System.Decimal)
extern "C"  double Decimal_op_Explicit_m2624557563 (Il2CppObject * __this /* static, unused */, Decimal_t1688557254  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_Inequality(System.Decimal,System.Decimal)
extern "C"  bool Decimal_op_Inequality_m4269318701 (Il2CppObject * __this /* static, unused */, Decimal_t1688557254  ___d1, Decimal_t1688557254  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_Equality(System.Decimal,System.Decimal)
extern "C"  bool Decimal_op_Equality_m4013483186 (Il2CppObject * __this /* static, unused */, Decimal_t1688557254  ___d1, Decimal_t1688557254  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_GreaterThan(System.Decimal,System.Decimal)
extern "C"  bool Decimal_op_GreaterThan_m2234430307 (Il2CppObject * __this /* static, unused */, Decimal_t1688557254  ___d1, Decimal_t1688557254  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Decimal::op_LessThan(System.Decimal,System.Decimal)
extern "C"  bool Decimal_op_LessThan_m3506122450 (Il2CppObject * __this /* static, unused */, Decimal_t1688557254  ___d1, Decimal_t1688557254  ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Decimal_t1688557254;
struct Decimal_t1688557254_marshaled_pinvoke;

extern "C" void Decimal_t1688557254_marshal_pinvoke(const Decimal_t1688557254& unmarshaled, Decimal_t1688557254_marshaled_pinvoke& marshaled);
extern "C" void Decimal_t1688557254_marshal_pinvoke_back(const Decimal_t1688557254_marshaled_pinvoke& marshaled, Decimal_t1688557254& unmarshaled);
extern "C" void Decimal_t1688557254_marshal_pinvoke_cleanup(Decimal_t1688557254_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Decimal_t1688557254;
struct Decimal_t1688557254_marshaled_com;

extern "C" void Decimal_t1688557254_marshal_com(const Decimal_t1688557254& unmarshaled, Decimal_t1688557254_marshaled_com& marshaled);
extern "C" void Decimal_t1688557254_marshal_com_back(const Decimal_t1688557254_marshaled_com& marshaled, Decimal_t1688557254& unmarshaled);
extern "C" void Decimal_t1688557254_marshal_com_cleanup(Decimal_t1688557254_marshaled_com& marshaled);
