#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.NumberFormatter
struct NumberFormatter_t2283;
// System.Globalization.CultureInfo
struct CultureInfo_t1065;
// System.Threading.Thread
struct Thread_t2047;
// System.String
struct String_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1737;
// System.IFormatProvider
struct IFormatProvider_t1162;
// System.Text.StringBuilder
struct StringBuilder_t80;
// System.Int32[]
struct Int32U5BU5D_t1185;
// System.Decimal
#include "mscorlib_System_Decimal.h"

// System.Void System.NumberFormatter::.ctor(System.Threading.Thread)
 void NumberFormatter__ctor_m11794 (NumberFormatter_t2283 * __this, Thread_t2047 * ___current, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::.cctor()
 void NumberFormatter__cctor_m11795 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::GetFormatterTables(System.UInt64*&,System.Int32*&,System.Char*&,System.Char*&,System.Int64*&,System.Int32*&)
 void NumberFormatter_GetFormatterTables_m11796 (Object_t * __this/* static, unused */, uint64_t** ___MantissaBitsTable, int32_t** ___TensExponentTable, uint16_t** ___DigitLowerTable, uint16_t** ___DigitUpperTable, int64_t** ___TenPowersList, int32_t** ___DecHexDigits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.NumberFormatter::GetTenPowerOf(System.Int32)
 int64_t NumberFormatter_GetTenPowerOf_m11797 (Object_t * __this/* static, unused */, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitDecHexDigits(System.UInt32)
 void NumberFormatter_InitDecHexDigits_m11798 (NumberFormatter_t2283 * __this, uint32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitDecHexDigits(System.UInt64)
 void NumberFormatter_InitDecHexDigits_m11799 (NumberFormatter_t2283 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitDecHexDigits(System.UInt32,System.UInt64)
 void NumberFormatter_InitDecHexDigits_m11800 (NumberFormatter_t2283 * __this, uint32_t ___hi, uint64_t ___lo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.NumberFormatter::FastToDecHex(System.Int32)
 uint32_t NumberFormatter_FastToDecHex_m11801 (Object_t * __this/* static, unused */, int32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.NumberFormatter::ToDecHex(System.Int32)
 uint32_t NumberFormatter_ToDecHex_m11802 (Object_t * __this/* static, unused */, int32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::FastDecHexLen(System.Int32)
 int32_t NumberFormatter_FastDecHexLen_m11803 (Object_t * __this/* static, unused */, int32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::DecHexLen(System.UInt32)
 int32_t NumberFormatter_DecHexLen_m11804 (Object_t * __this/* static, unused */, uint32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::DecHexLen()
 int32_t NumberFormatter_DecHexLen_m11805 (NumberFormatter_t2283 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::ScaleOrder(System.Int64)
 int32_t NumberFormatter_ScaleOrder_m11806 (Object_t * __this/* static, unused */, int64_t ___hi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::InitialFloatingPrecision()
 int32_t NumberFormatter_InitialFloatingPrecision_m11807 (NumberFormatter_t2283 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::ParsePrecision(System.String)
 int32_t NumberFormatter_ParsePrecision_m11808 (Object_t * __this/* static, unused */, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String)
 void NumberFormatter_Init_m11809 (NumberFormatter_t2283 * __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::InitHex(System.UInt64)
 void NumberFormatter_InitHex_m11810 (NumberFormatter_t2283 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Int32,System.Int32)
 void NumberFormatter_Init_m11811 (NumberFormatter_t2283 * __this, String_t* ___format, int32_t ___value, int32_t ___defPrecision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.UInt32,System.Int32)
 void NumberFormatter_Init_m11812 (NumberFormatter_t2283 * __this, String_t* ___format, uint32_t ___value, int32_t ___defPrecision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Int64)
 void NumberFormatter_Init_m11813 (NumberFormatter_t2283 * __this, String_t* ___format, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.UInt64)
 void NumberFormatter_Init_m11814 (NumberFormatter_t2283 * __this, String_t* ___format, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Double,System.Int32)
 void NumberFormatter_Init_m11815 (NumberFormatter_t2283 * __this, String_t* ___format, double ___value, int32_t ___defPrecision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Init(System.String,System.Decimal)
 void NumberFormatter_Init_m11816 (NumberFormatter_t2283 * __this, String_t* ___format, Decimal_t5  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::ResetCharBuf(System.Int32)
 void NumberFormatter_ResetCharBuf_m11817 (NumberFormatter_t2283 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Resize(System.Int32)
 void NumberFormatter_Resize_m11818 (NumberFormatter_t2283 * __this, int32_t ___len, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Append(System.Char)
 void NumberFormatter_Append_m11819 (NumberFormatter_t2283 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Append(System.Char,System.Int32)
 void NumberFormatter_Append_m11820 (NumberFormatter_t2283 * __this, uint16_t ___c, int32_t ___cnt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Append(System.String)
 void NumberFormatter_Append_m11821 (NumberFormatter_t2283 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.NumberFormatter::GetNumberFormatInstance(System.IFormatProvider)
 NumberFormatInfo_t1737 * NumberFormatter_GetNumberFormatInstance_m11822 (NumberFormatter_t2283 * __this, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::set_CurrentCulture(System.Globalization.CultureInfo)
 void NumberFormatter_set_CurrentCulture_m11823 (NumberFormatter_t2283 * __this, CultureInfo_t1065 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::get_IntegerDigits()
 int32_t NumberFormatter_get_IntegerDigits_m11824 (NumberFormatter_t2283 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::get_DecimalDigits()
 int32_t NumberFormatter_get_DecimalDigits_m11825 (NumberFormatter_t2283 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::get_IsFloatingSource()
 bool NumberFormatter_get_IsFloatingSource_m11826 (NumberFormatter_t2283 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::get_IsZero()
 bool NumberFormatter_get_IsZero_m11827 (NumberFormatter_t2283 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::get_IsZeroInteger()
 bool NumberFormatter_get_IsZeroInteger_m11828 (NumberFormatter_t2283 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::RoundPos(System.Int32)
 void NumberFormatter_RoundPos_m11829 (NumberFormatter_t2283 * __this, int32_t ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::RoundDecimal(System.Int32)
 bool NumberFormatter_RoundDecimal_m11830 (NumberFormatter_t2283 * __this, int32_t ___decimals, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::RoundBits(System.Int32)
 bool NumberFormatter_RoundBits_m11831 (NumberFormatter_t2283 * __this, int32_t ___shift, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::RemoveTrailingZeros()
 void NumberFormatter_RemoveTrailingZeros_m11832 (NumberFormatter_t2283 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AddOneToDecHex()
 void NumberFormatter_AddOneToDecHex_m11833 (NumberFormatter_t2283 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.NumberFormatter::AddOneToDecHex(System.UInt32)
 uint32_t NumberFormatter_AddOneToDecHex_m11834 (Object_t * __this/* static, unused */, uint32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::CountTrailingZeros()
 int32_t NumberFormatter_CountTrailingZeros_m11835 (NumberFormatter_t2283 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.NumberFormatter::CountTrailingZeros(System.UInt32)
 int32_t NumberFormatter_CountTrailingZeros_m11836 (Object_t * __this/* static, unused */, uint32_t ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.NumberFormatter System.NumberFormatter::GetInstance()
 NumberFormatter_t2283 * NumberFormatter_GetInstance_m11837 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Release()
 void NumberFormatter_Release_m11838 (NumberFormatter_t2283 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::SetThreadCurrentCulture(System.Globalization.CultureInfo)
 void NumberFormatter_SetThreadCurrentCulture_m11839 (Object_t * __this/* static, unused */, CultureInfo_t1065 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.SByte,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m11840 (Object_t * __this/* static, unused */, String_t* ___format, int8_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Byte,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m11841 (Object_t * __this/* static, unused */, String_t* ___format, uint8_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt16,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m11842 (Object_t * __this/* static, unused */, String_t* ___format, uint16_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Int16,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m11843 (Object_t * __this/* static, unused */, String_t* ___format, int16_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt32,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m11844 (Object_t * __this/* static, unused */, String_t* ___format, uint32_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Int32,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m11845 (Object_t * __this/* static, unused */, String_t* ___format, int32_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt64,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m11846 (Object_t * __this/* static, unused */, String_t* ___format, uint64_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Int64,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m11847 (Object_t * __this/* static, unused */, String_t* ___format, int64_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Single,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m11848 (Object_t * __this/* static, unused */, String_t* ___format, float ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Double,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m11849 (Object_t * __this/* static, unused */, String_t* ___format, double ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Decimal,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m11850 (Object_t * __this/* static, unused */, String_t* ___format, Decimal_t5  ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.UInt32,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m11851 (Object_t * __this/* static, unused */, uint32_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Int32,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m11852 (Object_t * __this/* static, unused */, int32_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.UInt64,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m11853 (Object_t * __this/* static, unused */, uint64_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Int64,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m11854 (Object_t * __this/* static, unused */, int64_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Single,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m11855 (Object_t * __this/* static, unused */, float ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Double,System.IFormatProvider)
 String_t* NumberFormatter_NumberToString_m11856 (Object_t * __this/* static, unused */, double ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FastIntegerToString(System.Int32,System.IFormatProvider)
 String_t* NumberFormatter_FastIntegerToString_m11857 (NumberFormatter_t2283 * __this, int32_t ___value, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::IntegerToString(System.String,System.IFormatProvider)
 String_t* NumberFormatter_IntegerToString_m11858 (NumberFormatter_t2283 * __this, String_t* ___format, Object_t * ___fp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_NumberToString_m11859 (NumberFormatter_t2283 * __this, String_t* ___format, NumberFormatInfo_t1737 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatCurrency(System.Int32,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatCurrency_m11860 (NumberFormatter_t2283 * __this, int32_t ___precision, NumberFormatInfo_t1737 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatDecimal(System.Int32,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatDecimal_m11861 (NumberFormatter_t2283 * __this, int32_t ___precision, NumberFormatInfo_t1737 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatHexadecimal(System.Int32)
 String_t* NumberFormatter_FormatHexadecimal_m11862 (NumberFormatter_t2283 * __this, int32_t ___precision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatFixedPoint(System.Int32,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatFixedPoint_m11863 (NumberFormatter_t2283 * __this, int32_t ___precision, NumberFormatInfo_t1737 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatRoundtrip(System.Double,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatRoundtrip_m11864 (NumberFormatter_t2283 * __this, double ___origval, NumberFormatInfo_t1737 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatRoundtrip(System.Single,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatRoundtrip_m11865 (NumberFormatter_t2283 * __this, float ___origval, NumberFormatInfo_t1737 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatGeneral(System.Int32,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatGeneral_m11866 (NumberFormatter_t2283 * __this, int32_t ___precision, NumberFormatInfo_t1737 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatNumber(System.Int32,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatNumber_m11867 (NumberFormatter_t2283 * __this, int32_t ___precision, NumberFormatInfo_t1737 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatPercent(System.Int32,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatPercent_m11868 (NumberFormatter_t2283 * __this, int32_t ___precision, NumberFormatInfo_t1737 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatExponential(System.Int32,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatExponential_m11869 (NumberFormatter_t2283 * __this, int32_t ___precision, NumberFormatInfo_t1737 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatExponential(System.Int32,System.Globalization.NumberFormatInfo,System.Int32)
 String_t* NumberFormatter_FormatExponential_m11870 (NumberFormatter_t2283 * __this, int32_t ___precision, NumberFormatInfo_t1737 * ___nfi, int32_t ___expDigits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::FormatCustom(System.String,System.Globalization.NumberFormatInfo)
 String_t* NumberFormatter_FormatCustom_m11871 (NumberFormatter_t2283 * __this, String_t* ___format, NumberFormatInfo_t1737 * ___nfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::ZeroTrimEnd(System.Text.StringBuilder,System.Boolean)
 void NumberFormatter_ZeroTrimEnd_m11872 (Object_t * __this/* static, unused */, StringBuilder_t80 * ___sb, bool ___canEmpty, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.NumberFormatter::IsZeroOnly(System.Text.StringBuilder)
 bool NumberFormatter_IsZeroOnly_m11873 (Object_t * __this/* static, unused */, StringBuilder_t80 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendNonNegativeNumber(System.Text.StringBuilder,System.Int32)
 void NumberFormatter_AppendNonNegativeNumber_m11874 (Object_t * __this/* static, unused */, StringBuilder_t80 * ___sb, int32_t ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendIntegerString(System.Int32,System.Text.StringBuilder)
 void NumberFormatter_AppendIntegerString_m11875 (NumberFormatter_t2283 * __this, int32_t ___minLength, StringBuilder_t80 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendIntegerString(System.Int32)
 void NumberFormatter_AppendIntegerString_m11876 (NumberFormatter_t2283 * __this, int32_t ___minLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDecimalString(System.Int32,System.Text.StringBuilder)
 void NumberFormatter_AppendDecimalString_m11877 (NumberFormatter_t2283 * __this, int32_t ___precision, StringBuilder_t80 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDecimalString(System.Int32)
 void NumberFormatter_AppendDecimalString_m11878 (NumberFormatter_t2283 * __this, int32_t ___precision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendIntegerStringWithGroupSeparator(System.Int32[],System.String)
 void NumberFormatter_AppendIntegerStringWithGroupSeparator_m11879 (NumberFormatter_t2283 * __this, Int32U5BU5D_t1185* ___groups, String_t* ___groupSeparator, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendExponent(System.Globalization.NumberFormatInfo,System.Int32,System.Int32)
 void NumberFormatter_AppendExponent_m11880 (NumberFormatter_t2283 * __this, NumberFormatInfo_t1737 * ___nfi, int32_t ___exponent, int32_t ___minDigits, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendOneDigit(System.Int32)
 void NumberFormatter_AppendOneDigit_m11881 (NumberFormatter_t2283 * __this, int32_t ___start, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::FastAppendDigits(System.Int32,System.Boolean)
 void NumberFormatter_FastAppendDigits_m11882 (NumberFormatter_t2283 * __this, int32_t ___val, bool ___force, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDigits(System.Int32,System.Int32)
 void NumberFormatter_AppendDigits_m11883 (NumberFormatter_t2283 * __this, int32_t ___start, int32_t ___end, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::AppendDigits(System.Int32,System.Int32,System.Text.StringBuilder)
 void NumberFormatter_AppendDigits_m11884 (NumberFormatter_t2283 * __this, int32_t ___start, int32_t ___end, StringBuilder_t80 * ___sb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Multiply10(System.Int32)
 void NumberFormatter_Multiply10_m11885 (NumberFormatter_t2283 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.NumberFormatter::Divide10(System.Int32)
 void NumberFormatter_Divide10_m11886 (NumberFormatter_t2283 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.NumberFormatter System.NumberFormatter::GetClone()
 NumberFormatter_t2283 * NumberFormatter_GetClone_m11887 (NumberFormatter_t2283 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
