#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.TimeSpan
struct TimeSpan_t1620;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.TimeSpan::.ctor(System.Int64)
 void TimeSpan__ctor_m11927 (TimeSpan_t1620 * __this, int64_t ___ticks, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32)
 void TimeSpan__ctor_m11928 (TimeSpan_t1620 * __this, int32_t ___hours, int32_t ___minutes, int32_t ___seconds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
 void TimeSpan__ctor_m11929 (TimeSpan_t1620 * __this, int32_t ___days, int32_t ___hours, int32_t ___minutes, int32_t ___seconds, int32_t ___milliseconds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.cctor()
 void TimeSpan__cctor_m11930 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.TimeSpan::CalculateTicks(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
 int64_t TimeSpan_CalculateTicks_m11931 (Object_t * __this/* static, unused */, int32_t ___days, int32_t ___hours, int32_t ___minutes, int32_t ___seconds, int32_t ___milliseconds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Days()
 int32_t TimeSpan_get_Days_m11932 (TimeSpan_t1620 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Hours()
 int32_t TimeSpan_get_Hours_m11933 (TimeSpan_t1620 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Milliseconds()
 int32_t TimeSpan_get_Milliseconds_m11934 (TimeSpan_t1620 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Minutes()
 int32_t TimeSpan_get_Minutes_m11935 (TimeSpan_t1620 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Seconds()
 int32_t TimeSpan_get_Seconds_m11936 (TimeSpan_t1620 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.TimeSpan::get_Ticks()
 int64_t TimeSpan_get_Ticks_m11937 (TimeSpan_t1620 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalDays()
 double TimeSpan_get_TotalDays_m11938 (TimeSpan_t1620 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalHours()
 double TimeSpan_get_TotalHours_m11939 (TimeSpan_t1620 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalMilliseconds()
 double TimeSpan_get_TotalMilliseconds_m11940 (TimeSpan_t1620 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalMinutes()
 double TimeSpan_get_TotalMinutes_m11941 (TimeSpan_t1620 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalSeconds()
 double TimeSpan_get_TotalSeconds_m11942 (TimeSpan_t1620 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Add(System.TimeSpan)
 TimeSpan_t1620  TimeSpan_Add_m11943 (TimeSpan_t1620 * __this, TimeSpan_t1620  ___ts, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::Compare(System.TimeSpan,System.TimeSpan)
 int32_t TimeSpan_Compare_m11944 (Object_t * __this/* static, unused */, TimeSpan_t1620  ___t1, TimeSpan_t1620  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::CompareTo(System.Object)
 int32_t TimeSpan_CompareTo_m11945 (TimeSpan_t1620 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::CompareTo(System.TimeSpan)
 int32_t TimeSpan_CompareTo_m11946 (TimeSpan_t1620 * __this, TimeSpan_t1620  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::Equals(System.TimeSpan)
 bool TimeSpan_Equals_m11947 (TimeSpan_t1620 * __this, TimeSpan_t1620  ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Duration()
 TimeSpan_t1620  TimeSpan_Duration_m11948 (TimeSpan_t1620 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::Equals(System.Object)
 bool TimeSpan_Equals_m11949 (TimeSpan_t1620 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromMinutes(System.Double)
 TimeSpan_t1620  TimeSpan_FromMinutes_m11950 (Object_t * __this/* static, unused */, double ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::From(System.Double,System.Int64)
 TimeSpan_t1620  TimeSpan_From_m11951 (Object_t * __this/* static, unused */, double ___value, int64_t ___tickMultiplicator, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::GetHashCode()
 int32_t TimeSpan_GetHashCode_m11952 (TimeSpan_t1620 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Negate()
 TimeSpan_t1620  TimeSpan_Negate_m11953 (TimeSpan_t1620 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Subtract(System.TimeSpan)
 TimeSpan_t1620  TimeSpan_Subtract_m11954 (TimeSpan_t1620 * __this, TimeSpan_t1620  ___ts, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TimeSpan::ToString()
 String_t* TimeSpan_ToString_m11955 (TimeSpan_t1620 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::op_Addition(System.TimeSpan,System.TimeSpan)
 TimeSpan_t1620  TimeSpan_op_Addition_m11956 (Object_t * __this/* static, unused */, TimeSpan_t1620  ___t1, TimeSpan_t1620  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_Equality(System.TimeSpan,System.TimeSpan)
 bool TimeSpan_op_Equality_m11957 (Object_t * __this/* static, unused */, TimeSpan_t1620  ___t1, TimeSpan_t1620  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_GreaterThan(System.TimeSpan,System.TimeSpan)
 bool TimeSpan_op_GreaterThan_m11958 (Object_t * __this/* static, unused */, TimeSpan_t1620  ___t1, TimeSpan_t1620  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_GreaterThanOrEqual(System.TimeSpan,System.TimeSpan)
 bool TimeSpan_op_GreaterThanOrEqual_m11959 (Object_t * __this/* static, unused */, TimeSpan_t1620  ___t1, TimeSpan_t1620  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_Inequality(System.TimeSpan,System.TimeSpan)
 bool TimeSpan_op_Inequality_m11960 (Object_t * __this/* static, unused */, TimeSpan_t1620  ___t1, TimeSpan_t1620  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_LessThan(System.TimeSpan,System.TimeSpan)
 bool TimeSpan_op_LessThan_m11961 (Object_t * __this/* static, unused */, TimeSpan_t1620  ___t1, TimeSpan_t1620  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_LessThanOrEqual(System.TimeSpan,System.TimeSpan)
 bool TimeSpan_op_LessThanOrEqual_m11962 (Object_t * __this/* static, unused */, TimeSpan_t1620  ___t1, TimeSpan_t1620  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::op_Subtraction(System.TimeSpan,System.TimeSpan)
 TimeSpan_t1620  TimeSpan_op_Subtraction_m11963 (Object_t * __this/* static, unused */, TimeSpan_t1620  ___t1, TimeSpan_t1620  ___t2, MethodInfo* method) IL2CPP_METHOD_ATTR;
