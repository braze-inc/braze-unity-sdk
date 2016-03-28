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

// System.TimeZone
struct TimeZone_t764070862;
// System.Globalization.DaylightTime
struct DaylightTime_t3128077661;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_Globalization_DaylightTime3128077661.h"
#include "mscorlib_System_TimeSpan763862892.h"

// System.Void System.TimeZone::.ctor()
extern "C"  void TimeZone__ctor_m26653180 (TimeZone_t764070862 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZone::.cctor()
extern "C"  void TimeZone__cctor_m344152369 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZone System.TimeZone::get_CurrentTimeZone()
extern "C"  TimeZone_t764070862 * TimeZone_get_CurrentTimeZone_m2986247742 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime)
extern "C"  bool TimeZone_IsDaylightSavingTime_m3245775367 (TimeZone_t764070862 * __this, DateTime_t339033936  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime,System.Globalization.DaylightTime)
extern "C"  bool TimeZone_IsDaylightSavingTime_m4018955392 (Il2CppObject * __this /* static, unused */, DateTime_t339033936  ___time, DaylightTime_t3128077661 * ___daylightTimes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZone::ToLocalTime(System.DateTime)
extern "C"  DateTime_t339033936  TimeZone_ToLocalTime_m2341401576 (TimeZone_t764070862 * __this, DateTime_t339033936  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZone::ToUniversalTime(System.DateTime)
extern "C"  DateTime_t339033936  TimeZone_ToUniversalTime_m1686398088 (TimeZone_t764070862 * __this, DateTime_t339033936  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime)
extern "C"  TimeSpan_t763862892  TimeZone_GetLocalTimeDiff_m1562801158 (TimeZone_t764070862 * __this, DateTime_t339033936  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime,System.TimeSpan)
extern "C"  TimeSpan_t763862892  TimeZone_GetLocalTimeDiff_m290923612 (TimeZone_t764070862 * __this, DateTime_t339033936  ___time, TimeSpan_t763862892  ___utc_offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
