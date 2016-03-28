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

// System.Globalization.DaylightTime
struct DaylightTime_t3128077661;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_TimeSpan763862892.h"

// System.Void System.Globalization.DaylightTime::.ctor(System.DateTime,System.DateTime,System.TimeSpan)
extern "C"  void DaylightTime__ctor_m3056331743 (DaylightTime_t3128077661 * __this, DateTime_t339033936  ___start, DateTime_t339033936  ___end, TimeSpan_t763862892  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Globalization.DaylightTime::get_Start()
extern "C"  DateTime_t339033936  DaylightTime_get_Start_m3918072881 (DaylightTime_t3128077661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Globalization.DaylightTime::get_End()
extern "C"  DateTime_t339033936  DaylightTime_get_End_m1152979434 (DaylightTime_t3128077661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Globalization.DaylightTime::get_Delta()
extern "C"  TimeSpan_t763862892  DaylightTime_get_Delta_m2790906475 (DaylightTime_t3128077661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
