#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Globalization.DaylightTime
struct DaylightTime_t1904;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Globalization.DaylightTime::.ctor(System.DateTime,System.DateTime,System.TimeSpan)
 void DaylightTime__ctor_m9315 (DaylightTime_t1904 * __this, DateTime_t837  ___start, DateTime_t837  ___end, TimeSpan_t1620  ___delta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Globalization.DaylightTime::get_Start()
 DateTime_t837  DaylightTime_get_Start_m9316 (DaylightTime_t1904 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Globalization.DaylightTime::get_End()
 DateTime_t837  DaylightTime_get_End_m9317 (DaylightTime_t1904 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Globalization.DaylightTime::get_Delta()
 TimeSpan_t1620  DaylightTime_get_Delta_m9318 (DaylightTime_t1904 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
