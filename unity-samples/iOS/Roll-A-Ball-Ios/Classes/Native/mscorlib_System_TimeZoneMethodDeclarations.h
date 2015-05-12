#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.TimeZone
struct TimeZone_t2293;
// System.Globalization.DaylightTime
struct DaylightTime_t1904;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.TimeZone::.ctor()
 void TimeZone__ctor_m11964 (TimeZone_t2293 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZone::.cctor()
 void TimeZone__cctor_m11965 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZone System.TimeZone::get_CurrentTimeZone()
 TimeZone_t2293 * TimeZone_get_CurrentTimeZone_m11966 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.TimeZone::GetDaylightChanges(System.Int32)
// System.TimeSpan System.TimeZone::GetUtcOffset(System.DateTime)
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime)
 bool TimeZone_IsDaylightSavingTime_m11967 (TimeZone_t2293 * __this, DateTime_t837  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime,System.Globalization.DaylightTime)
 bool TimeZone_IsDaylightSavingTime_m11968 (Object_t * __this/* static, unused */, DateTime_t837  ___time, DaylightTime_t1904 * ___daylightTimes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZone::ToLocalTime(System.DateTime)
 DateTime_t837  TimeZone_ToLocalTime_m11969 (TimeZone_t2293 * __this, DateTime_t837  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZone::ToUniversalTime(System.DateTime)
 DateTime_t837  TimeZone_ToUniversalTime_m11970 (TimeZone_t2293 * __this, DateTime_t837  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime)
 TimeSpan_t1620  TimeZone_GetLocalTimeDiff_m11971 (TimeZone_t2293 * __this, DateTime_t837  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime,System.TimeSpan)
 TimeSpan_t1620  TimeZone_GetLocalTimeDiff_m11972 (TimeZone_t2293 * __this, DateTime_t837  ___time, TimeSpan_t1620  ___utc_offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
