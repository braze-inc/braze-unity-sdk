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

// System.Globalization.GregorianCalendar
struct GregorianCalendar_t4078054522;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Globalization_GregorianCalendarType466930443.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_DayOfWeek4050023580.h"

// System.Void System.Globalization.GregorianCalendar::.ctor(System.Globalization.GregorianCalendarTypes)
extern "C"  void GregorianCalendar__ctor_m2553712055 (GregorianCalendar_t4078054522 * __this, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.GregorianCalendar::.ctor()
extern "C"  void GregorianCalendar__ctor_m1867739610 (GregorianCalendar_t4078054522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.GregorianCalendar::get_Eras()
extern "C"  Int32U5BU5D_t1809983122* GregorianCalendar_get_Eras_m1588180428 (GregorianCalendar_t4078054522 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.GregorianCalendar::set_CalendarType(System.Globalization.GregorianCalendarTypes)
extern "C"  void GregorianCalendar_set_CalendarType_m158688434 (GregorianCalendar_t4078054522 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.GregorianCalendar::GetDayOfMonth(System.DateTime)
extern "C"  int32_t GregorianCalendar_GetDayOfMonth_m4091932953 (GregorianCalendar_t4078054522 * __this, DateTime_t339033936  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DayOfWeek System.Globalization.GregorianCalendar::GetDayOfWeek(System.DateTime)
extern "C"  int32_t GregorianCalendar_GetDayOfWeek_m3196705338 (GregorianCalendar_t4078054522 * __this, DateTime_t339033936  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.GregorianCalendar::GetEra(System.DateTime)
extern "C"  int32_t GregorianCalendar_GetEra_m1048758548 (GregorianCalendar_t4078054522 * __this, DateTime_t339033936  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.GregorianCalendar::GetMonth(System.DateTime)
extern "C"  int32_t GregorianCalendar_GetMonth_m2408004904 (GregorianCalendar_t4078054522 * __this, DateTime_t339033936  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.GregorianCalendar::GetYear(System.DateTime)
extern "C"  int32_t GregorianCalendar_GetYear_m3821818313 (GregorianCalendar_t4078054522 * __this, DateTime_t339033936  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
