#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t1912;
// System.String[]
struct StringU5BU5D_t3;
// System.String
struct String_t;
// System.Globalization.Calendar
struct Calendar_t1908;
// System.IFormatProvider
struct IFormatProvider_t1173;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.DayOfWeek
#include "mscorlib_System_DayOfWeek.h"

// System.Void System.Globalization.DateTimeFormatInfo::.ctor(System.Boolean)
 void DateTimeFormatInfo__ctor_m9369 (DateTimeFormatInfo_t1912 * __this, bool ___read_only, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::.ctor()
 void DateTimeFormatInfo__ctor_m9370 (DateTimeFormatInfo_t1912 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::.cctor()
 void DateTimeFormatInfo__cctor_m9371 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::GetInstance(System.IFormatProvider)
 DateTimeFormatInfo_t1912 * DateTimeFormatInfo_GetInstance_m9372 (Object_t * __this/* static, unused */, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.DateTimeFormatInfo::get_IsReadOnly()
 bool DateTimeFormatInfo_get_IsReadOnly_m9373 (DateTimeFormatInfo_t1912 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::ReadOnly(System.Globalization.DateTimeFormatInfo)
 DateTimeFormatInfo_t1912 * DateTimeFormatInfo_ReadOnly_m9374 (Object_t * __this/* static, unused */, DateTimeFormatInfo_t1912 * ___dtfi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.DateTimeFormatInfo::Clone()
 Object_t * DateTimeFormatInfo_Clone_m9375 (DateTimeFormatInfo_t1912 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Globalization.DateTimeFormatInfo::GetFormat(System.Type)
 Object_t * DateTimeFormatInfo_GetFormat_m9376 (DateTimeFormatInfo_t1912 * __this, Type_t * ___formatType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetAbbreviatedMonthName(System.Int32)
 String_t* DateTimeFormatInfo_GetAbbreviatedMonthName_m9377 (DateTimeFormatInfo_t1912 * __this, int32_t ___month, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetEraName(System.Int32)
 String_t* DateTimeFormatInfo_GetEraName_m9378 (DateTimeFormatInfo_t1912 * __this, int32_t ___era, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetMonthName(System.Int32)
 String_t* DateTimeFormatInfo_GetMonthName_m9379 (DateTimeFormatInfo_t1912 * __this, int32_t ___month, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawAbbreviatedDayNames()
 StringU5BU5D_t3* DateTimeFormatInfo_get_RawAbbreviatedDayNames_m9380 (DateTimeFormatInfo_t1912 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawAbbreviatedMonthNames()
 StringU5BU5D_t3* DateTimeFormatInfo_get_RawAbbreviatedMonthNames_m9381 (DateTimeFormatInfo_t1912 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawDayNames()
 StringU5BU5D_t3* DateTimeFormatInfo_get_RawDayNames_m9382 (DateTimeFormatInfo_t1912 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::get_RawMonthNames()
 StringU5BU5D_t3* DateTimeFormatInfo_get_RawMonthNames_m9383 (DateTimeFormatInfo_t1912 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_AMDesignator()
 String_t* DateTimeFormatInfo_get_AMDesignator_m9384 (DateTimeFormatInfo_t1912 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_PMDesignator()
 String_t* DateTimeFormatInfo_get_PMDesignator_m9385 (DateTimeFormatInfo_t1912 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_DateSeparator()
 String_t* DateTimeFormatInfo_get_DateSeparator_m9386 (DateTimeFormatInfo_t1912 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_TimeSeparator()
 String_t* DateTimeFormatInfo_get_TimeSeparator_m9387 (DateTimeFormatInfo_t1912 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_LongDatePattern()
 String_t* DateTimeFormatInfo_get_LongDatePattern_m9388 (DateTimeFormatInfo_t1912 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_ShortDatePattern()
 String_t* DateTimeFormatInfo_get_ShortDatePattern_m9389 (DateTimeFormatInfo_t1912 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_ShortTimePattern()
 String_t* DateTimeFormatInfo_get_ShortTimePattern_m9390 (DateTimeFormatInfo_t1912 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_LongTimePattern()
 String_t* DateTimeFormatInfo_get_LongTimePattern_m9391 (DateTimeFormatInfo_t1912 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_MonthDayPattern()
 String_t* DateTimeFormatInfo_get_MonthDayPattern_m9392 (DateTimeFormatInfo_t1912 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_YearMonthPattern()
 String_t* DateTimeFormatInfo_get_YearMonthPattern_m9393 (DateTimeFormatInfo_t1912 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_FullDateTimePattern()
 String_t* DateTimeFormatInfo_get_FullDateTimePattern_m9394 (DateTimeFormatInfo_t1912 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::get_CurrentInfo()
 DateTimeFormatInfo_t1912 * DateTimeFormatInfo_get_CurrentInfo_m9395 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::get_InvariantInfo()
 DateTimeFormatInfo_t1912 * DateTimeFormatInfo_get_InvariantInfo_m9396 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.Calendar System.Globalization.DateTimeFormatInfo::get_Calendar()
 Calendar_t1908 * DateTimeFormatInfo_get_Calendar_m9397 (DateTimeFormatInfo_t1912 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::set_Calendar(System.Globalization.Calendar)
 void DateTimeFormatInfo_set_Calendar_m9398 (DateTimeFormatInfo_t1912 * __this, Calendar_t1908 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_RFC1123Pattern()
 String_t* DateTimeFormatInfo_get_RFC1123Pattern_m9399 (DateTimeFormatInfo_t1912 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_RoundtripPattern()
 String_t* DateTimeFormatInfo_get_RoundtripPattern_m9400 (DateTimeFormatInfo_t1912 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_SortableDateTimePattern()
 String_t* DateTimeFormatInfo_get_SortableDateTimePattern_m9401 (DateTimeFormatInfo_t1912 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::get_UniversalSortableDateTimePattern()
 String_t* DateTimeFormatInfo_get_UniversalSortableDateTimePattern_m9402 (DateTimeFormatInfo_t1912 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::GetAllDateTimePatternsInternal()
 StringU5BU5D_t3* DateTimeFormatInfo_GetAllDateTimePatternsInternal_m9403 (DateTimeFormatInfo_t1912 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::FillAllDateTimePatterns()
 void DateTimeFormatInfo_FillAllDateTimePatterns_m9404 (DateTimeFormatInfo_t1912 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::GetAllRawDateTimePatterns(System.Char)
 StringU5BU5D_t3* DateTimeFormatInfo_GetAllRawDateTimePatterns_m9405 (DateTimeFormatInfo_t1912 * __this, uint16_t ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetDayName(System.DayOfWeek)
 String_t* DateTimeFormatInfo_GetDayName_m9406 (DateTimeFormatInfo_t1912 * __this, int32_t ___dayofweek, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.DateTimeFormatInfo::GetAbbreviatedDayName(System.DayOfWeek)
 String_t* DateTimeFormatInfo_GetAbbreviatedDayName_m9407 (DateTimeFormatInfo_t1912 * __this, int32_t ___dayofweek, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.DateTimeFormatInfo::FillInvariantPatterns()
 void DateTimeFormatInfo_FillInvariantPatterns_m9408 (DateTimeFormatInfo_t1912 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Globalization.DateTimeFormatInfo::PopulateCombinedList(System.String[],System.String[])
 StringU5BU5D_t3* DateTimeFormatInfo_PopulateCombinedList_m9409 (DateTimeFormatInfo_t1912 * __this, StringU5BU5D_t3* ___dates, StringU5BU5D_t3* ___times, MethodInfo* method) IL2CPP_METHOD_ATTR;
