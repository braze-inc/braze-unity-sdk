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

// System.CurrentSystemTimeZone
struct CurrentSystemTimeZone_t1373630646;
// System.Object
struct Il2CppObject;
// System.Int64[]
struct Int64U5BU5D_t753178071;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Globalization.DaylightTime
struct DaylightTime_t3128077661;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_TimeSpan763862892.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_Globalization_DaylightTime3128077661.h"

// System.Void System.CurrentSystemTimeZone::.ctor()
extern "C"  void CurrentSystemTimeZone__ctor_m1114897456 (CurrentSystemTimeZone_t1373630646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::.ctor(System.Int64)
extern "C"  void CurrentSystemTimeZone__ctor_m4151899394 (CurrentSystemTimeZone_t1373630646 * __this, int64_t ___lnow0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C"  void CurrentSystemTimeZone_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m167746118 (CurrentSystemTimeZone_t1373630646 * __this, Il2CppObject * ___sender0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.CurrentSystemTimeZone::GetTimeZoneData(System.Int32,System.Int64[]&,System.String[]&)
extern "C"  bool CurrentSystemTimeZone_GetTimeZoneData_m615725030 (Il2CppObject * __this /* static, unused */, int32_t ___year0, Int64U5BU5D_t753178071** ___data1, StringU5BU5D_t2956870243** ___names2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightChanges(System.Int32)
extern "C"  DaylightTime_t3128077661 * CurrentSystemTimeZone_GetDaylightChanges_m2350299512 (CurrentSystemTimeZone_t1373630646 * __this, int32_t ___year0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.CurrentSystemTimeZone::GetUtcOffset(System.DateTime)
extern "C"  TimeSpan_t763862892  CurrentSystemTimeZone_GetUtcOffset_m376788806 (CurrentSystemTimeZone_t1373630646 * __this, DateTime_t339033936  ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::OnDeserialization(System.Globalization.DaylightTime)
extern "C"  void CurrentSystemTimeZone_OnDeserialization_m3995478209 (CurrentSystemTimeZone_t1373630646 * __this, DaylightTime_t3128077661 * ___dlt0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightTimeFromData(System.Int64[])
extern "C"  DaylightTime_t3128077661 * CurrentSystemTimeZone_GetDaylightTimeFromData_m3433378959 (CurrentSystemTimeZone_t1373630646 * __this, Int64U5BU5D_t753178071* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
