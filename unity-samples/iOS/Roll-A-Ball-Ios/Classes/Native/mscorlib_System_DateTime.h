#pragma once
#include <stdint.h>
// System.String[]
struct StringU5BU5D_t3;
// System.Int32[]
struct Int32U5BU5D_t1185;
// System.Object
struct Object_t;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.DateTimeKind
#include "mscorlib_System_DateTimeKind.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.DateTime
struct DateTime_t837 
{
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t1620  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;
};
struct DateTime_t837_StaticFields{
	// System.DateTime System.DateTime::MaxValue
	DateTime_t837  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t837  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t3* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t3* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t3* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t3* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t3* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t3* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t3* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t1185* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t1185* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	Object_t * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;
};
