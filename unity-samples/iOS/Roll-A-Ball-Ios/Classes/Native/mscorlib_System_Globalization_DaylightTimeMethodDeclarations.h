#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.DaylightTime
struct DaylightTime_t1916;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Globalization.DaylightTime::.ctor(System.DateTime,System.DateTime,System.TimeSpan)
 void DaylightTime__ctor_m9410 (DaylightTime_t1916 * __this, DateTime_t850  ___start, DateTime_t850  ___end, TimeSpan_t1632  ___delta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Globalization.DaylightTime::get_Start()
 DateTime_t850  DaylightTime_get_Start_m9411 (DaylightTime_t1916 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Globalization.DaylightTime::get_End()
 DateTime_t850  DaylightTime_get_End_m9412 (DaylightTime_t1916 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Globalization.DaylightTime::get_Delta()
 TimeSpan_t1632  DaylightTime_get_Delta_m9413 (DaylightTime_t1916 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
