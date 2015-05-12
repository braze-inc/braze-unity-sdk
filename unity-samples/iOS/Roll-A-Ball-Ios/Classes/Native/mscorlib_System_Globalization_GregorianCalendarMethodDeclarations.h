#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.GregorianCalendar
struct GregorianCalendar_t1917;
// System.Int32[]
struct Int32U5BU5D_t1196;
// System.Globalization.GregorianCalendarTypes
#include "mscorlib_System_Globalization_GregorianCalendarTypes.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.DayOfWeek
#include "mscorlib_System_DayOfWeek.h"

// System.Void System.Globalization.GregorianCalendar::.ctor(System.Globalization.GregorianCalendarTypes)
 void GregorianCalendar__ctor_m9414 (GregorianCalendar_t1917 * __this, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.GregorianCalendar::.ctor()
 void GregorianCalendar__ctor_m9415 (GregorianCalendar_t1917 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Globalization.GregorianCalendar::get_Eras()
 Int32U5BU5D_t1196* GregorianCalendar_get_Eras_m9416 (GregorianCalendar_t1917 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.GregorianCalendar::set_CalendarType(System.Globalization.GregorianCalendarTypes)
 void GregorianCalendar_set_CalendarType_m9417 (GregorianCalendar_t1917 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.GregorianCalendar::GetDayOfMonth(System.DateTime)
 int32_t GregorianCalendar_GetDayOfMonth_m9418 (GregorianCalendar_t1917 * __this, DateTime_t850  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DayOfWeek System.Globalization.GregorianCalendar::GetDayOfWeek(System.DateTime)
 int32_t GregorianCalendar_GetDayOfWeek_m9419 (GregorianCalendar_t1917 * __this, DateTime_t850  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.GregorianCalendar::GetEra(System.DateTime)
 int32_t GregorianCalendar_GetEra_m9420 (GregorianCalendar_t1917 * __this, DateTime_t850  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.GregorianCalendar::GetMonth(System.DateTime)
 int32_t GregorianCalendar_GetMonth_m9421 (GregorianCalendar_t1917 * __this, DateTime_t850  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.GregorianCalendar::GetYear(System.DateTime)
 int32_t GregorianCalendar_GetYear_m9422 (GregorianCalendar_t1917 * __this, DateTime_t850  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
