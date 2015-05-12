#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1737;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t1185;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IFormatProvider
struct IFormatProvider_t1162;

// System.Void System.Globalization.NumberFormatInfo::.ctor(System.Int32,System.Boolean)
 void NumberFormatInfo__ctor_m9328 (NumberFormatInfo_t1737 * __this, int32_t ___lcid, bool ___read_only, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::.ctor(System.Boolean)
 void NumberFormatInfo__ctor_m9329 (NumberFormatInfo_t1737 * __this, bool ___read_only, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::.ctor()
 void NumberFormatInfo__ctor_m9330 (NumberFormatInfo_t1737 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::.cctor()
 void NumberFormatInfo__cctor_m9331 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_CurrencyDecimalDigits()
 int32_t NumberFormatInfo_get_CurrencyDecimalDigits_m9332 (NumberFormatInfo_t1737 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_CurrencyDecimalSeparator()
 String_t* NumberFormatInfo_get_CurrencyDecimalSeparator_m9333 (NumberFormatInfo_t1737 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_CurrencyGroupSeparator()
 String_t* NumberFormatInfo_get_CurrencyGroupSeparator_m9334 (NumberFormatInfo_t1737 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.NumberFormatInfo::get_RawCurrencyGroupSizes()
 Int32U5BU5D_t1185* NumberFormatInfo_get_RawCurrencyGroupSizes_m9335 (NumberFormatInfo_t1737 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_CurrencyNegativePattern()
 int32_t NumberFormatInfo_get_CurrencyNegativePattern_m9336 (NumberFormatInfo_t1737 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_CurrencyPositivePattern()
 int32_t NumberFormatInfo_get_CurrencyPositivePattern_m9337 (NumberFormatInfo_t1737 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_CurrencySymbol()
 String_t* NumberFormatInfo_get_CurrencySymbol_m9338 (NumberFormatInfo_t1737 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_CurrentInfo()
 NumberFormatInfo_t1737 * NumberFormatInfo_get_CurrentInfo_m9339 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_InvariantInfo()
 NumberFormatInfo_t1737 * NumberFormatInfo_get_InvariantInfo_m9340 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NaNSymbol()
 String_t* NumberFormatInfo_get_NaNSymbol_m9341 (NumberFormatInfo_t1737 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NegativeInfinitySymbol()
 String_t* NumberFormatInfo_get_NegativeInfinitySymbol_m9342 (NumberFormatInfo_t1737 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NegativeSign()
 String_t* NumberFormatInfo_get_NegativeSign_m9343 (NumberFormatInfo_t1737 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_NumberDecimalDigits()
 int32_t NumberFormatInfo_get_NumberDecimalDigits_m9344 (NumberFormatInfo_t1737 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NumberDecimalSeparator()
 String_t* NumberFormatInfo_get_NumberDecimalSeparator_m9345 (NumberFormatInfo_t1737 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NumberGroupSeparator()
 String_t* NumberFormatInfo_get_NumberGroupSeparator_m9346 (NumberFormatInfo_t1737 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.NumberFormatInfo::get_RawNumberGroupSizes()
 Int32U5BU5D_t1185* NumberFormatInfo_get_RawNumberGroupSizes_m9347 (NumberFormatInfo_t1737 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_NumberNegativePattern()
 int32_t NumberFormatInfo_get_NumberNegativePattern_m9348 (NumberFormatInfo_t1737 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.NumberFormatInfo::set_NumberNegativePattern(System.Int32)
 void NumberFormatInfo_set_NumberNegativePattern_m9349 (NumberFormatInfo_t1737 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_PercentDecimalDigits()
 int32_t NumberFormatInfo_get_PercentDecimalDigits_m9350 (NumberFormatInfo_t1737 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PercentDecimalSeparator()
 String_t* NumberFormatInfo_get_PercentDecimalSeparator_m9351 (NumberFormatInfo_t1737 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PercentGroupSeparator()
 String_t* NumberFormatInfo_get_PercentGroupSeparator_m9352 (NumberFormatInfo_t1737 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.NumberFormatInfo::get_RawPercentGroupSizes()
 Int32U5BU5D_t1185* NumberFormatInfo_get_RawPercentGroupSizes_m9353 (NumberFormatInfo_t1737 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_PercentNegativePattern()
 int32_t NumberFormatInfo_get_PercentNegativePattern_m9354 (NumberFormatInfo_t1737 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.NumberFormatInfo::get_PercentPositivePattern()
 int32_t NumberFormatInfo_get_PercentPositivePattern_m9355 (NumberFormatInfo_t1737 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PercentSymbol()
 String_t* NumberFormatInfo_get_PercentSymbol_m9356 (NumberFormatInfo_t1737 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PerMilleSymbol()
 String_t* NumberFormatInfo_get_PerMilleSymbol_m9357 (NumberFormatInfo_t1737 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PositiveInfinitySymbol()
 String_t* NumberFormatInfo_get_PositiveInfinitySymbol_m9358 (NumberFormatInfo_t1737 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PositiveSign()
 String_t* NumberFormatInfo_get_PositiveSign_m9359 (NumberFormatInfo_t1737 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.NumberFormatInfo::GetFormat(System.Type)
 Object_t * NumberFormatInfo_GetFormat_m9360 (NumberFormatInfo_t1737 * __this, Type_t * ___formatType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.NumberFormatInfo::Clone()
 Object_t * NumberFormatInfo_Clone_m9361 (NumberFormatInfo_t1737 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::GetInstance(System.IFormatProvider)
 NumberFormatInfo_t1737 * NumberFormatInfo_GetInstance_m9362 (Object_t * __this/* static, unused */, Object_t * ___formatProvider, MethodInfo* method) IL2CPP_METHOD_ATTR;
