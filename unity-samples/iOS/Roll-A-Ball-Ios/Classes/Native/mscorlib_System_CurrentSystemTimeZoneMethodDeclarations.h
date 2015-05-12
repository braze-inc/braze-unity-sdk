#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.CurrentSystemTimeZone
struct CurrentSystemTimeZone_t2294;
// System.Object
struct Object_t;
// System.Int64[]
struct Int64U5BU5D_t1748;
// System.String[]
struct StringU5BU5D_t3;
// System.Globalization.DaylightTime
struct DaylightTime_t1904;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.CurrentSystemTimeZone::.ctor()
 void CurrentSystemTimeZone__ctor_m11973 (CurrentSystemTimeZone_t2294 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::.ctor(System.Int64)
 void CurrentSystemTimeZone__ctor_m11974 (CurrentSystemTimeZone_t2294 * __this, int64_t ___lnow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
 void CurrentSystemTimeZone_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m11975 (CurrentSystemTimeZone_t2294 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.CurrentSystemTimeZone::GetTimeZoneData(System.Int32,System.Int64[]&,System.String[]&)
 bool CurrentSystemTimeZone_GetTimeZoneData_m11976 (Object_t * __this/* static, unused */, int32_t ___year, Int64U5BU5D_t1748** ___data, StringU5BU5D_t3** ___names, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightChanges(System.Int32)
 DaylightTime_t1904 * CurrentSystemTimeZone_GetDaylightChanges_m11977 (CurrentSystemTimeZone_t2294 * __this, int32_t ___year, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.CurrentSystemTimeZone::GetUtcOffset(System.DateTime)
 TimeSpan_t1620  CurrentSystemTimeZone_GetUtcOffset_m11978 (CurrentSystemTimeZone_t2294 * __this, DateTime_t837  ___time, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::OnDeserialization(System.Globalization.DaylightTime)
 void CurrentSystemTimeZone_OnDeserialization_m11979 (CurrentSystemTimeZone_t2294 * __this, DaylightTime_t1904 * ___dlt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightTimeFromData(System.Int64[])
 DaylightTime_t1904 * CurrentSystemTimeZone_GetDaylightTimeFromData_m11980 (CurrentSystemTimeZone_t2294 * __this, Int64U5BU5D_t1748* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
