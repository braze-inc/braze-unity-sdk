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

// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan763862892.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.TimeSpan::.ctor(System.Int64)
extern "C"  void TimeSpan__ctor_m477860848 (TimeSpan_t763862892 * __this, int64_t ___ticks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32)
extern "C"  void TimeSpan__ctor_m4160332047 (TimeSpan_t763862892 * __this, int32_t ___hours, int32_t ___minutes, int32_t ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void TimeSpan__ctor_m3191091631 (TimeSpan_t763862892 * __this, int32_t ___days, int32_t ___hours, int32_t ___minutes, int32_t ___seconds, int32_t ___milliseconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.cctor()
extern "C"  void TimeSpan__cctor_m2918891343 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.TimeSpan::CalculateTicks(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int64_t TimeSpan_CalculateTicks_m897131370 (Il2CppObject * __this /* static, unused */, int32_t ___days, int32_t ___hours, int32_t ___minutes, int32_t ___seconds, int32_t ___milliseconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Days()
extern "C"  int32_t TimeSpan_get_Days_m1311834346 (TimeSpan_t763862892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Hours()
extern "C"  int32_t TimeSpan_get_Hours_m1664362814 (TimeSpan_t763862892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Milliseconds()
extern "C"  int32_t TimeSpan_get_Milliseconds_m424744421 (TimeSpan_t763862892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Minutes()
extern "C"  int32_t TimeSpan_get_Minutes_m1876674446 (TimeSpan_t763862892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::get_Seconds()
extern "C"  int32_t TimeSpan_get_Seconds_m4185591086 (TimeSpan_t763862892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.TimeSpan::get_Ticks()
extern "C"  int64_t TimeSpan_get_Ticks_m315930342 (TimeSpan_t763862892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalDays()
extern "C"  double TimeSpan_get_TotalDays_m3523943921 (TimeSpan_t763862892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalHours()
extern "C"  double TimeSpan_get_TotalHours_m1520282903 (TimeSpan_t763862892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalMilliseconds()
extern "C"  double TimeSpan_get_TotalMilliseconds_m4053613548 (TimeSpan_t763862892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalMinutes()
extern "C"  double TimeSpan_get_TotalMinutes_m854833447 (TimeSpan_t763862892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalSeconds()
extern "C"  double TimeSpan_get_TotalSeconds_m3163750087 (TimeSpan_t763862892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Add(System.TimeSpan)
extern "C"  TimeSpan_t763862892  TimeSpan_Add_m1523355138 (TimeSpan_t763862892 * __this, TimeSpan_t763862892  ___ts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::Compare(System.TimeSpan,System.TimeSpan)
extern "C"  int32_t TimeSpan_Compare_m206019349 (Il2CppObject * __this /* static, unused */, TimeSpan_t763862892  ___t1, TimeSpan_t763862892  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::CompareTo(System.Object)
extern "C"  int32_t TimeSpan_CompareTo_m4037254268 (TimeSpan_t763862892 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::CompareTo(System.TimeSpan)
extern "C"  int32_t TimeSpan_CompareTo_m2960988804 (TimeSpan_t763862892 * __this, TimeSpan_t763862892  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::Equals(System.TimeSpan)
extern "C"  bool TimeSpan_Equals_m3271948249 (TimeSpan_t763862892 * __this, TimeSpan_t763862892  ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Duration()
extern "C"  TimeSpan_t763862892  TimeSpan_Duration_m4177061277 (TimeSpan_t763862892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::Equals(System.Object)
extern "C"  bool TimeSpan_Equals_m2969422609 (TimeSpan_t763862892 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromDays(System.Double)
extern "C"  TimeSpan_t763862892  TimeSpan_FromDays_m2307041176 (Il2CppObject * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromHours(System.Double)
extern "C"  TimeSpan_t763862892  TimeSpan_FromHours_m3804628420 (Il2CppObject * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromMinutes(System.Double)
extern "C"  TimeSpan_t763862892  TimeSpan_FromMinutes_m785017204 (Il2CppObject * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromSeconds(System.Double)
extern "C"  TimeSpan_t763862892  TimeSpan_FromSeconds_m1904297940 (Il2CppObject * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromMilliseconds(System.Double)
extern "C"  TimeSpan_t763862892  TimeSpan_FromMilliseconds_m1386660477 (Il2CppObject * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::From(System.Double,System.Int64)
extern "C"  TimeSpan_t763862892  TimeSpan_From_m739812553 (Il2CppObject * __this /* static, unused */, double ___value, int64_t ___tickMultiplicator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan::GetHashCode()
extern "C"  int32_t TimeSpan_GetHashCode_m3188156777 (TimeSpan_t763862892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Negate()
extern "C"  TimeSpan_t763862892  TimeSpan_Negate_m3511877003 (TimeSpan_t763862892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Subtract(System.TimeSpan)
extern "C"  TimeSpan_t763862892  TimeSpan_Subtract_m1410255071 (TimeSpan_t763862892 * __this, TimeSpan_t763862892  ___ts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TimeSpan::ToString()
extern "C"  String_t* TimeSpan_ToString_m2803989647 (TimeSpan_t763862892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::op_Addition(System.TimeSpan,System.TimeSpan)
extern "C"  TimeSpan_t763862892  TimeSpan_op_Addition_m141072959 (Il2CppObject * __this /* static, unused */, TimeSpan_t763862892  ___t1, TimeSpan_t763862892  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_Equality(System.TimeSpan,System.TimeSpan)
extern "C"  bool TimeSpan_op_Equality_m2213378780 (Il2CppObject * __this /* static, unused */, TimeSpan_t763862892  ___t1, TimeSpan_t763862892  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_GreaterThan(System.TimeSpan,System.TimeSpan)
extern "C"  bool TimeSpan_op_GreaterThan_m3920451985 (Il2CppObject * __this /* static, unused */, TimeSpan_t763862892  ___t1, TimeSpan_t763862892  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_GreaterThanOrEqual(System.TimeSpan,System.TimeSpan)
extern "C"  bool TimeSpan_op_GreaterThanOrEqual_m2152983360 (Il2CppObject * __this /* static, unused */, TimeSpan_t763862892  ___t1, TimeSpan_t763862892  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_Inequality(System.TimeSpan,System.TimeSpan)
extern "C"  bool TimeSpan_op_Inequality_m2184437271 (Il2CppObject * __this /* static, unused */, TimeSpan_t763862892  ___t1, TimeSpan_t763862892  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_LessThan(System.TimeSpan,System.TimeSpan)
extern "C"  bool TimeSpan_op_LessThan_m4265983228 (Il2CppObject * __this /* static, unused */, TimeSpan_t763862892  ___t1, TimeSpan_t763862892  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_LessThanOrEqual(System.TimeSpan,System.TimeSpan)
extern "C"  bool TimeSpan_op_LessThanOrEqual_m271837557 (Il2CppObject * __this /* static, unused */, TimeSpan_t763862892  ___t1, TimeSpan_t763862892  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::op_Subtraction(System.TimeSpan,System.TimeSpan)
extern "C"  TimeSpan_t763862892  TimeSpan_op_Subtraction_m3686790579 (Il2CppObject * __this /* static, unused */, TimeSpan_t763862892  ___t1, TimeSpan_t763862892  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct TimeSpan_t763862892;
struct TimeSpan_t763862892_marshaled_pinvoke;

extern "C" void TimeSpan_t763862892_marshal_pinvoke(const TimeSpan_t763862892& unmarshaled, TimeSpan_t763862892_marshaled_pinvoke& marshaled);
extern "C" void TimeSpan_t763862892_marshal_pinvoke_back(const TimeSpan_t763862892_marshaled_pinvoke& marshaled, TimeSpan_t763862892& unmarshaled);
extern "C" void TimeSpan_t763862892_marshal_pinvoke_cleanup(TimeSpan_t763862892_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct TimeSpan_t763862892;
struct TimeSpan_t763862892_marshaled_com;

extern "C" void TimeSpan_t763862892_marshal_com(const TimeSpan_t763862892& unmarshaled, TimeSpan_t763862892_marshaled_com& marshaled);
extern "C" void TimeSpan_t763862892_marshal_com_back(const TimeSpan_t763862892_marshaled_com& marshaled, TimeSpan_t763862892& unmarshaled);
extern "C" void TimeSpan_t763862892_marshal_com_cleanup(TimeSpan_t763862892_marshaled_com& marshaled);
