#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1749;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t1196;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IFormatProvider
struct IFormatProvider_t1173;

// System.Void System.Globalization.NumberFormatInfo::.ctor(System.Int32,System.Boolean)
 void NumberFormatInfo__ctor_m9423 (NumberFormatInfo_t1749 * __this, int32_t ___lcid, bool ___read_only, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::.ctor(System.Boolean)
 void NumberFormatInfo__ctor_m9424 (NumberFormatInfo_t1749 * __this, bool ___read_only, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::.ctor()
 void NumberFormatInfo__ctor_m9425 (NumberFormatInfo_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::.cctor()
 void NumberFormatInfo__cctor_m9426 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_CurrencyDecimalDigits()
 int32_t NumberFormatInfo_get_CurrencyDecimalDigits_m9427 (NumberFormatInfo_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_CurrencyDecimalSeparator()
 String_t* NumberFormatInfo_get_CurrencyDecimalSeparator_m9428 (NumberFormatInfo_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_CurrencyGroupSeparator()
 String_t* NumberFormatInfo_get_CurrencyGroupSeparator_m9429 (NumberFormatInfo_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.NumberFormatInfo::get_RawCurrencyGroupSizes()
 Int32U5BU5D_t1196* NumberFormatInfo_get_RawCurrencyGroupSizes_m9430 (NumberFormatInfo_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_CurrencyNegativePattern()
 int32_t NumberFormatInfo_get_CurrencyNegativePattern_m9431 (NumberFormatInfo_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_CurrencyPositivePattern()
 int32_t NumberFormatInfo_get_CurrencyPositivePattern_m9432 (NumberFormatInfo_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_CurrencySymbol()
 String_t* NumberFormatInfo_get_CurrencySymbol_m9433 (NumberFormatInfo_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_CurrentInfo()
 NumberFormatInfo_t1749 * NumberFormatInfo_get_CurrentInfo_m9434 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_InvariantInfo()
 NumberFormatInfo_t1749 * NumberFormatInfo_get_InvariantInfo_m9435 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NaNSymbol()
 String_t* NumberFormatInfo_get_NaNSymbol_m9436 (NumberFormatInfo_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NegativeInfinitySymbol()
 String_t* NumberFormatInfo_get_NegativeInfinitySymbol_m9437 (NumberFormatInfo_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NegativeSign()
 String_t* NumberFormatInfo_get_NegativeSign_m9438 (NumberFormatInfo_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_NumberDecimalDigits()
 int32_t NumberFormatInfo_get_NumberDecimalDigits_m9439 (NumberFormatInfo_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NumberDecimalSeparator()
 String_t* NumberFormatInfo_get_NumberDecimalSeparator_m9440 (NumberFormatInfo_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NumberGroupSeparator()
 String_t* NumberFormatInfo_get_NumberGroupSeparator_m9441 (NumberFormatInfo_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.NumberFormatInfo::get_RawNumberGroupSizes()
 Int32U5BU5D_t1196* NumberFormatInfo_get_RawNumberGroupSizes_m9442 (NumberFormatInfo_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_NumberNegativePattern()
 int32_t NumberFormatInfo_get_NumberNegativePattern_m9443 (NumberFormatInfo_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::set_NumberNegativePattern(System.Int32)
 void NumberFormatInfo_set_NumberNegativePattern_m9444 (NumberFormatInfo_t1749 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_PercentDecimalDigits()
 int32_t NumberFormatInfo_get_PercentDecimalDigits_m9445 (NumberFormatInfo_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PercentDecimalSeparator()
 String_t* NumberFormatInfo_get_PercentDecimalSeparator_m9446 (NumberFormatInfo_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PercentGroupSeparator()
 String_t* NumberFormatInfo_get_PercentGroupSeparator_m9447 (NumberFormatInfo_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.NumberFormatInfo::get_RawPercentGroupSizes()
 Int32U5BU5D_t1196* NumberFormatInfo_get_RawPercentGroupSizes_m9448 (NumberFormatInfo_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_PercentNegativePattern()
 int32_t NumberFormatInfo_get_PercentNegativePattern_m9449 (NumberFormatInfo_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_PercentPositivePattern()
 int32_t NumberFormatInfo_get_PercentPositivePattern_m9450 (NumberFormatInfo_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PercentSymbol()
 String_t* NumberFormatInfo_get_PercentSymbol_m9451 (NumberFormatInfo_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PerMilleSymbol()
 String_t* NumberFormatInfo_get_PerMilleSymbol_m9452 (NumberFormatInfo_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PositiveInfinitySymbol()
 String_t* NumberFormatInfo_get_PositiveInfinitySymbol_m9453 (NumberFormatInfo_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PositiveSign()
 String_t* NumberFormatInfo_get_PositiveSign_m9454 (NumberFormatInfo_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.NumberFormatInfo::GetFormat(System.Type)
 Object_t * NumberFormatInfo_GetFormat_m9455 (NumberFormatInfo_t1749 * __this, Type_t * ___formatType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.NumberFormatInfo::Clone()
 Object_t * NumberFormatInfo_Clone_m9456 (NumberFormatInfo_t1749 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::GetInstance(System.IFormatProvider)
 NumberFormatInfo_t1749 * NumberFormatInfo_GetInstance_m9457 (Object_t * __this/* static, unused */, Object_t * ___formatProvider, MethodInfo* method) IL2CPP_METHOD_ATTR;
