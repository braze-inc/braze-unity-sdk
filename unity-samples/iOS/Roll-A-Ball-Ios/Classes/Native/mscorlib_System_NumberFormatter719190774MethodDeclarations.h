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

// System.NumberFormatter
struct NumberFormatter_t719190774;
// System.Threading.Thread
struct Thread_t1674723085;
// System.String
struct String_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t3411951076;
// System.IFormatProvider
struct IFormatProvider_t3436592966;
// System.Globalization.CultureInfo
struct CultureInfo_t3603717042;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Threading_Thread1674723085.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Decimal1688557254.h"
#include "mscorlib_System_Globalization_CultureInfo3603717042.h"
#include "mscorlib_System_Globalization_NumberFormatInfo3411951076.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"

// System.Void System.NumberFormatter::.ctor(System.Threading.Thread)
extern "C"  void NumberFormatter__ctor_m2111196867 (NumberFormatter_t719190774 * __this, Thread_t1674723085 * ___current, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::.cctor()
extern "C"  void NumberFormatter__cctor_m1125188925 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::GetFormatterTables(System.UInt64*&,System.Int32*&,System.Char*&,System.Char*&,System.Int64*&,System.Int32*&)
extern "C"  void NumberFormatter_GetFormatterTables_m1004885150 (Il2CppObject * __this /* static, unused */, uint64_t** ___MantissaBitsTable, int32_t** ___TensExponentTable, uint16_t** ___DigitLowerTable, uint16_t** ___DigitUpperTable, int64_t** ___TenPowersList, int32_t** ___DecHexDigits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.NumberFormatter::GetTenPowerOf(System.Int32)
extern "C"  int64_t NumberFormatter_GetTenPowerOf_m3223700535 (Il2CppObject * __this /* static, unused */, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitDecHexDigits(System.UInt32)
extern "C"  void NumberFormatter_InitDecHexDigits_m2164786199 (NumberFormatter_t719190774 * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitDecHexDigits(System.UInt64)
extern "C"  void NumberFormatter_InitDecHexDigits_m2164789144 (NumberFormatter_t719190774 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitDecHexDigits(System.UInt32,System.UInt64)
extern "C"  void NumberFormatter_InitDecHexDigits_m3289945484 (NumberFormatter_t719190774 * __this, uint32_t ___hi, uint64_t ___lo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.NumberFormatter::FastToDecHex(System.Int32)
extern "C"  uint32_t NumberFormatter_FastToDecHex_m84047568 (Il2CppObject * __this /* static, unused */, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.NumberFormatter::ToDecHex(System.Int32)
extern "C"  uint32_t NumberFormatter_ToDecHex_m2775434836 (Il2CppObject * __this /* static, unused */, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::FastDecHexLen(System.Int32)
extern "C"  int32_t NumberFormatter_FastDecHexLen_m3326717411 (Il2CppObject * __this /* static, unused */, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::DecHexLen(System.UInt32)
extern "C"  int32_t NumberFormatter_DecHexLen_m1305612716 (Il2CppObject * __this /* static, unused */, uint32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::DecHexLen()
extern "C"  int32_t NumberFormatter_DecHexLen_m1385571854 (NumberFormatter_t719190774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::ScaleOrder(System.Int64)
extern "C"  int32_t NumberFormatter_ScaleOrder_m2668614822 (Il2CppObject * __this /* static, unused */, int64_t ___hi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::InitialFloatingPrecision()
extern "C"  int32_t NumberFormatter_InitialFloatingPrecision_m1576619940 (NumberFormatter_t719190774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::ParsePrecision(System.String)
extern "C"  int32_t NumberFormatter_ParsePrecision_m1776481127 (Il2CppObject * __this /* static, unused */, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String)
extern "C"  void NumberFormatter_Init_m796042654 (NumberFormatter_t719190774 * __this, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitHex(System.UInt64)
extern "C"  void NumberFormatter_InitHex_m673436066 (NumberFormatter_t719190774 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Int32,System.Int32)
extern "C"  void NumberFormatter_Init_m1761120638 (NumberFormatter_t719190774 * __this, String_t* ___format, int32_t ___value, int32_t ___defPrecision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.UInt32,System.Int32)
extern "C"  void NumberFormatter_Init_m3900055237 (NumberFormatter_t719190774 * __this, String_t* ___format, uint32_t ___value, int32_t ___defPrecision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Int64)
extern "C"  void NumberFormatter_Init_m1120342906 (NumberFormatter_t719190774 * __this, String_t* ___format, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.UInt64)
extern "C"  void NumberFormatter_Init_m1368030931 (NumberFormatter_t719190774 * __this, String_t* ___format, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Double,System.Int32)
extern "C"  void NumberFormatter_Init_m3795683709 (NumberFormatter_t719190774 * __this, String_t* ___format, double ___value, int32_t ___defPrecision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Decimal)
extern "C"  void NumberFormatter_Init_m2948152342 (NumberFormatter_t719190774 * __this, String_t* ___format, Decimal_t1688557254  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::ResetCharBuf(System.Int32)
extern "C"  void NumberFormatter_ResetCharBuf_m213960083 (NumberFormatter_t719190774 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Resize(System.Int32)
extern "C"  void NumberFormatter_Resize_m3447745305 (NumberFormatter_t719190774 * __this, int32_t ___len, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Append(System.Char)
extern "C"  void NumberFormatter_Append_m4118762351 (NumberFormatter_t719190774 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Append(System.Char,System.Int32)
extern "C"  void NumberFormatter_Append_m4153218504 (NumberFormatter_t719190774 * __this, uint16_t ___c, int32_t ___cnt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Append(System.String)
extern "C"  void NumberFormatter_Append_m4139947796 (NumberFormatter_t719190774 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.NumberFormatter::GetNumberFormatInstance(System.IFormatProvider)
extern "C"  NumberFormatInfo_t3411951076 * NumberFormatter_GetNumberFormatInstance_m958950318 (NumberFormatter_t719190774 * __this, Il2CppObject * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::set_CurrentCulture(System.Globalization.CultureInfo)
extern "C"  void NumberFormatter_set_CurrentCulture_m2767449398 (NumberFormatter_t719190774 * __this, CultureInfo_t3603717042 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::get_IntegerDigits()
extern "C"  int32_t NumberFormatter_get_IntegerDigits_m1728967757 (NumberFormatter_t719190774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::get_DecimalDigits()
extern "C"  int32_t NumberFormatter_get_DecimalDigits_m799523680 (NumberFormatter_t719190774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::get_IsFloatingSource()
extern "C"  bool NumberFormatter_get_IsFloatingSource_m3965742250 (NumberFormatter_t719190774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::get_IsZero()
extern "C"  bool NumberFormatter_get_IsZero_m1430003665 (NumberFormatter_t719190774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::get_IsZeroInteger()
extern "C"  bool NumberFormatter_get_IsZeroInteger_m1771268559 (NumberFormatter_t719190774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::RoundPos(System.Int32)
extern "C"  void NumberFormatter_RoundPos_m2974247947 (NumberFormatter_t719190774 * __this, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::RoundDecimal(System.Int32)
extern "C"  bool NumberFormatter_RoundDecimal_m3262983754 (NumberFormatter_t719190774 * __this, int32_t ___decimals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::RoundBits(System.Int32)
extern "C"  bool NumberFormatter_RoundBits_m1678805201 (NumberFormatter_t719190774 * __this, int32_t ___shift, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::RemoveTrailingZeros()
extern "C"  void NumberFormatter_RemoveTrailingZeros_m3741390329 (NumberFormatter_t719190774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AddOneToDecHex()
extern "C"  void NumberFormatter_AddOneToDecHex_m3773408269 (NumberFormatter_t719190774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.NumberFormatter::AddOneToDecHex(System.UInt32)
extern "C"  uint32_t NumberFormatter_AddOneToDecHex_m2213293842 (Il2CppObject * __this /* static, unused */, uint32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::CountTrailingZeros()
extern "C"  int32_t NumberFormatter_CountTrailingZeros_m208778992 (NumberFormatter_t719190774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::CountTrailingZeros(System.UInt32)
extern "C"  int32_t NumberFormatter_CountTrailingZeros_m3607920650 (Il2CppObject * __this /* static, unused */, uint32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.NumberFormatter System.NumberFormatter::GetInstance()
extern "C"  NumberFormatter_t719190774 * NumberFormatter_GetInstance_m1116912880 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Release()
extern "C"  void NumberFormatter_Release_m2318208149 (NumberFormatter_t719190774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::SetThreadCurrentCulture(System.Globalization.CultureInfo)
extern "C"  void NumberFormatter_SetThreadCurrentCulture_m27395807 (Il2CppObject * __this /* static, unused */, CultureInfo_t3603717042 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.SByte,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m1767037120 (Il2CppObject * __this /* static, unused */, String_t* ___format, int8_t ___value, Il2CppObject * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Byte,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m3732580729 (Il2CppObject * __this /* static, unused */, String_t* ___format, uint8_t ___value, Il2CppObject * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt16,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m575932624 (Il2CppObject * __this /* static, unused */, String_t* ___format, uint16_t ___value, Il2CppObject * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Int16,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m1355610105 (Il2CppObject * __this /* static, unused */, String_t* ___format, int16_t ___value, Il2CppObject * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt32,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m356875018 (Il2CppObject * __this /* static, unused */, String_t* ___format, uint32_t ___value, Il2CppObject * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Int32,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m1136552499 (Il2CppObject * __this /* static, unused */, String_t* ___format, int32_t ___value, Il2CppObject * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt64,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m590483049 (Il2CppObject * __this /* static, unused */, String_t* ___format, uint64_t ___value, Il2CppObject * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Int64,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m1370160530 (Il2CppObject * __this /* static, unused */, String_t* ___format, int64_t ___value, Il2CppObject * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Single,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m332247865 (Il2CppObject * __this /* static, unused */, String_t* ___format, float ___value, Il2CppObject * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Double,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m2024857538 (Il2CppObject * __this /* static, unused */, String_t* ___format, double ___value, Il2CppObject * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Decimal,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m1355083638 (Il2CppObject * __this /* static, unused */, String_t* ___format, Decimal_t1688557254  ___value, Il2CppObject * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.UInt32,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m3444731974 (Il2CppObject * __this /* static, unused */, uint32_t ___value, Il2CppObject * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Int32,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m266329463 (Il2CppObject * __this /* static, unused */, int32_t ___value, Il2CppObject * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.UInt64,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m3678340005 (Il2CppObject * __this /* static, unused */, uint64_t ___value, Il2CppObject * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Int64,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m499937494 (Il2CppObject * __this /* static, unused */, int64_t ___value, Il2CppObject * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Single,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m3420104821 (Il2CppObject * __this /* static, unused */, float ___value, Il2CppObject * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Double,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m817747198 (Il2CppObject * __this /* static, unused */, double ___value, Il2CppObject * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FastIntegerToString(System.Int32,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_FastIntegerToString_m2015857610 (NumberFormatter_t719190774 * __this, int32_t ___value, Il2CppObject * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::IntegerToString(System.String,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_IntegerToString_m2916421959 (NumberFormatter_t719190774 * __this, String_t* ___format, Il2CppObject * ___fp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Globalization.NumberFormatInfo)
extern "C"  String_t* NumberFormatter_NumberToString_m913039240 (NumberFormatter_t719190774 * __this, String_t* ___format, NumberFormatInfo_t3411951076 * ___nfi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatCurrency(System.Int32,System.Globalization.NumberFormatInfo)
extern "C"  String_t* NumberFormatter_FormatCurrency_m852663042 (NumberFormatter_t719190774 * __this, int32_t ___precision, NumberFormatInfo_t3411951076 * ___nfi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatDecimal(System.Int32,System.Globalization.NumberFormatInfo)
extern "C"  String_t* NumberFormatter_FormatDecimal_m1996938888 (NumberFormatter_t719190774 * __this, int32_t ___precision, NumberFormatInfo_t3411951076 * ___nfi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatHexadecimal(System.Int32)
extern "C"  String_t* NumberFormatter_FormatHexadecimal_m386310032 (NumberFormatter_t719190774 * __this, int32_t ___precision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatFixedPoint(System.Int32,System.Globalization.NumberFormatInfo)
extern "C"  String_t* NumberFormatter_FormatFixedPoint_m336450221 (NumberFormatter_t719190774 * __this, int32_t ___precision, NumberFormatInfo_t3411951076 * ___nfi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatRoundtrip(System.Double,System.Globalization.NumberFormatInfo)
extern "C"  String_t* NumberFormatter_FormatRoundtrip_m3567733037 (NumberFormatter_t719190774 * __this, double ___origval, NumberFormatInfo_t3411951076 * ___nfi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatRoundtrip(System.Single,System.Globalization.NumberFormatInfo)
extern "C"  String_t* NumberFormatter_FormatRoundtrip_m850933974 (NumberFormatter_t719190774 * __this, float ___origval, NumberFormatInfo_t3411951076 * ___nfi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatGeneral(System.Int32,System.Globalization.NumberFormatInfo)
extern "C"  String_t* NumberFormatter_FormatGeneral_m273745567 (NumberFormatter_t719190774 * __this, int32_t ___precision, NumberFormatInfo_t3411951076 * ___nfi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatNumber(System.Int32,System.Globalization.NumberFormatInfo)
extern "C"  String_t* NumberFormatter_FormatNumber_m2900015482 (NumberFormatter_t719190774 * __this, int32_t ___precision, NumberFormatInfo_t3411951076 * ___nfi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatPercent(System.Int32,System.Globalization.NumberFormatInfo)
extern "C"  String_t* NumberFormatter_FormatPercent_m3733675388 (NumberFormatter_t719190774 * __this, int32_t ___precision, NumberFormatInfo_t3411951076 * ___nfi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatExponential(System.Int32,System.Globalization.NumberFormatInfo)
extern "C"  String_t* NumberFormatter_FormatExponential_m3503259900 (NumberFormatter_t719190774 * __this, int32_t ___precision, NumberFormatInfo_t3411951076 * ___nfi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatExponential(System.Int32,System.Globalization.NumberFormatInfo,System.Int32)
extern "C"  String_t* NumberFormatter_FormatExponential_m1641420123 (NumberFormatter_t719190774 * __this, int32_t ___precision, NumberFormatInfo_t3411951076 * ___nfi, int32_t ___expDigits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatCustom(System.String,System.Globalization.NumberFormatInfo)
extern "C"  String_t* NumberFormatter_FormatCustom_m619514485 (NumberFormatter_t719190774 * __this, String_t* ___format, NumberFormatInfo_t3411951076 * ___nfi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::ZeroTrimEnd(System.Text.StringBuilder,System.Boolean)
extern "C"  void NumberFormatter_ZeroTrimEnd_m858705010 (Il2CppObject * __this /* static, unused */, StringBuilder_t3822575854 * ___sb, bool ___canEmpty, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::IsZeroOnly(System.Text.StringBuilder)
extern "C"  bool NumberFormatter_IsZeroOnly_m898090390 (Il2CppObject * __this /* static, unused */, StringBuilder_t3822575854 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendNonNegativeNumber(System.Text.StringBuilder,System.Int32)
extern "C"  void NumberFormatter_AppendNonNegativeNumber_m3168612876 (Il2CppObject * __this /* static, unused */, StringBuilder_t3822575854 * ___sb, int32_t ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendIntegerString(System.Int32,System.Text.StringBuilder)
extern "C"  void NumberFormatter_AppendIntegerString_m666371448 (NumberFormatter_t719190774 * __this, int32_t ___minLength, StringBuilder_t3822575854 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendIntegerString(System.Int32)
extern "C"  void NumberFormatter_AppendIntegerString_m2478096468 (NumberFormatter_t719190774 * __this, int32_t ___minLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDecimalString(System.Int32,System.Text.StringBuilder)
extern "C"  void NumberFormatter_AppendDecimalString_m1754328651 (NumberFormatter_t719190774 * __this, int32_t ___precision, StringBuilder_t3822575854 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDecimalString(System.Int32)
extern "C"  void NumberFormatter_AppendDecimalString_m3838413543 (NumberFormatter_t719190774 * __this, int32_t ___precision, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendIntegerStringWithGroupSeparator(System.Int32[],System.String)
extern "C"  void NumberFormatter_AppendIntegerStringWithGroupSeparator_m4148804442 (NumberFormatter_t719190774 * __this, Int32U5BU5D_t1809983122* ___groups, String_t* ___groupSeparator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendExponent(System.Globalization.NumberFormatInfo,System.Int32,System.Int32)
extern "C"  void NumberFormatter_AppendExponent_m163214555 (NumberFormatter_t719190774 * __this, NumberFormatInfo_t3411951076 * ___nfi, int32_t ___exponent, int32_t ___minDigits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendOneDigit(System.Int32)
extern "C"  void NumberFormatter_AppendOneDigit_m4047621190 (NumberFormatter_t719190774 * __this, int32_t ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::FastAppendDigits(System.Int32,System.Boolean)
extern "C"  void NumberFormatter_FastAppendDigits_m4132924828 (NumberFormatter_t719190774 * __this, int32_t ___val, bool ___force, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDigits(System.Int32,System.Int32)
extern "C"  void NumberFormatter_AppendDigits_m3761533234 (NumberFormatter_t719190774 * __this, int32_t ___start, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDigits(System.Int32,System.Int32,System.Text.StringBuilder)
extern "C"  void NumberFormatter_AppendDigits_m860372182 (NumberFormatter_t719190774 * __this, int32_t ___start, int32_t ___end, StringBuilder_t3822575854 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Multiply10(System.Int32)
extern "C"  void NumberFormatter_Multiply10_m4265073128 (NumberFormatter_t719190774 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Divide10(System.Int32)
extern "C"  void NumberFormatter_Divide10_m1709051645 (NumberFormatter_t719190774 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.NumberFormatter System.NumberFormatter::GetClone()
extern "C"  NumberFormatter_t719190774 * NumberFormatter_GetClone_m2531844292 (NumberFormatter_t719190774 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
