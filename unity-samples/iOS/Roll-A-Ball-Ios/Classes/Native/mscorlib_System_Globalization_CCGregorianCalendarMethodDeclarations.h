#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.CCGregorianCalendar
struct CCGregorianCalendar_t1911;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Boolean System.Globalization.CCGregorianCalendar::is_leap_year(System.Int32)
 bool CCGregorianCalendar_is_leap_year_m9297 (Object_t * __this/* static, unused */, int32_t ___year, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CCGregorianCalendar::fixed_from_dmy(System.Int32,System.Int32,System.Int32)
 int32_t CCGregorianCalendar_fixed_from_dmy_m9298 (Object_t * __this/* static, unused */, int32_t ___day, int32_t ___month, int32_t ___year, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CCGregorianCalendar::year_from_fixed(System.Int32)
 int32_t CCGregorianCalendar_year_from_fixed_m9299 (Object_t * __this/* static, unused */, int32_t ___date, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CCGregorianCalendar::my_from_fixed(System.Int32&,System.Int32&,System.Int32)
 void CCGregorianCalendar_my_from_fixed_m9300 (Object_t * __this/* static, unused */, int32_t* ___month, int32_t* ___year, int32_t ___date, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.CCGregorianCalendar::dmy_from_fixed(System.Int32&,System.Int32&,System.Int32&,System.Int32)
 void CCGregorianCalendar_dmy_from_fixed_m9301 (Object_t * __this/* static, unused */, int32_t* ___day, int32_t* ___month, int32_t* ___year, int32_t ___date, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CCGregorianCalendar::month_from_fixed(System.Int32)
 int32_t CCGregorianCalendar_month_from_fixed_m9302 (Object_t * __this/* static, unused */, int32_t ___date, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CCGregorianCalendar::day_from_fixed(System.Int32)
 int32_t CCGregorianCalendar_day_from_fixed_m9303 (Object_t * __this/* static, unused */, int32_t ___date, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CCGregorianCalendar::GetDayOfMonth(System.DateTime)
 int32_t CCGregorianCalendar_GetDayOfMonth_m9304 (Object_t * __this/* static, unused */, DateTime_t850  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CCGregorianCalendar::GetMonth(System.DateTime)
 int32_t CCGregorianCalendar_GetMonth_m9305 (Object_t * __this/* static, unused */, DateTime_t850  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.CCGregorianCalendar::GetYear(System.DateTime)
 int32_t CCGregorianCalendar_GetYear_m9306 (Object_t * __this/* static, unused */, DateTime_t850  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
