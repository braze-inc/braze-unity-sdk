#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t3875263730;
// System.Globalization.DaylightTime
struct DaylightTime_t3128077661;

#include "mscorlib_System_TimeZone764070862.h"
#include "mscorlib_System_TimeSpan763862892.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CurrentSystemTimeZone
struct  CurrentSystemTimeZone_t1373630646  : public TimeZone_t764070862
{
public:
	// System.String System.CurrentSystemTimeZone::m_standardName
	String_t* ___m_standardName_1;
	// System.String System.CurrentSystemTimeZone::m_daylightName
	String_t* ___m_daylightName_2;
	// System.Collections.Hashtable System.CurrentSystemTimeZone::m_CachedDaylightChanges
	Hashtable_t3875263730 * ___m_CachedDaylightChanges_3;
	// System.Int64 System.CurrentSystemTimeZone::m_ticksOffset
	int64_t ___m_ticksOffset_4;
	// System.TimeSpan System.CurrentSystemTimeZone::utcOffsetWithOutDLS
	TimeSpan_t763862892  ___utcOffsetWithOutDLS_5;
	// System.TimeSpan System.CurrentSystemTimeZone::utcOffsetWithDLS
	TimeSpan_t763862892  ___utcOffsetWithDLS_6;

public:
	inline static int32_t get_offset_of_m_standardName_1() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1373630646, ___m_standardName_1)); }
	inline String_t* get_m_standardName_1() const { return ___m_standardName_1; }
	inline String_t** get_address_of_m_standardName_1() { return &___m_standardName_1; }
	inline void set_m_standardName_1(String_t* value)
	{
		___m_standardName_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_standardName_1, value);
	}

	inline static int32_t get_offset_of_m_daylightName_2() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1373630646, ___m_daylightName_2)); }
	inline String_t* get_m_daylightName_2() const { return ___m_daylightName_2; }
	inline String_t** get_address_of_m_daylightName_2() { return &___m_daylightName_2; }
	inline void set_m_daylightName_2(String_t* value)
	{
		___m_daylightName_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_daylightName_2, value);
	}

	inline static int32_t get_offset_of_m_CachedDaylightChanges_3() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1373630646, ___m_CachedDaylightChanges_3)); }
	inline Hashtable_t3875263730 * get_m_CachedDaylightChanges_3() const { return ___m_CachedDaylightChanges_3; }
	inline Hashtable_t3875263730 ** get_address_of_m_CachedDaylightChanges_3() { return &___m_CachedDaylightChanges_3; }
	inline void set_m_CachedDaylightChanges_3(Hashtable_t3875263730 * value)
	{
		___m_CachedDaylightChanges_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_CachedDaylightChanges_3, value);
	}

	inline static int32_t get_offset_of_m_ticksOffset_4() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1373630646, ___m_ticksOffset_4)); }
	inline int64_t get_m_ticksOffset_4() const { return ___m_ticksOffset_4; }
	inline int64_t* get_address_of_m_ticksOffset_4() { return &___m_ticksOffset_4; }
	inline void set_m_ticksOffset_4(int64_t value)
	{
		___m_ticksOffset_4 = value;
	}

	inline static int32_t get_offset_of_utcOffsetWithOutDLS_5() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1373630646, ___utcOffsetWithOutDLS_5)); }
	inline TimeSpan_t763862892  get_utcOffsetWithOutDLS_5() const { return ___utcOffsetWithOutDLS_5; }
	inline TimeSpan_t763862892 * get_address_of_utcOffsetWithOutDLS_5() { return &___utcOffsetWithOutDLS_5; }
	inline void set_utcOffsetWithOutDLS_5(TimeSpan_t763862892  value)
	{
		___utcOffsetWithOutDLS_5 = value;
	}

	inline static int32_t get_offset_of_utcOffsetWithDLS_6() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1373630646, ___utcOffsetWithDLS_6)); }
	inline TimeSpan_t763862892  get_utcOffsetWithDLS_6() const { return ___utcOffsetWithDLS_6; }
	inline TimeSpan_t763862892 * get_address_of_utcOffsetWithDLS_6() { return &___utcOffsetWithDLS_6; }
	inline void set_utcOffsetWithDLS_6(TimeSpan_t763862892  value)
	{
		___utcOffsetWithDLS_6 = value;
	}
};

struct CurrentSystemTimeZone_t1373630646_StaticFields
{
public:
	// System.Int32 System.CurrentSystemTimeZone::this_year
	int32_t ___this_year_7;
	// System.Globalization.DaylightTime System.CurrentSystemTimeZone::this_year_dlt
	DaylightTime_t3128077661 * ___this_year_dlt_8;

public:
	inline static int32_t get_offset_of_this_year_7() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1373630646_StaticFields, ___this_year_7)); }
	inline int32_t get_this_year_7() const { return ___this_year_7; }
	inline int32_t* get_address_of_this_year_7() { return &___this_year_7; }
	inline void set_this_year_7(int32_t value)
	{
		___this_year_7 = value;
	}

	inline static int32_t get_offset_of_this_year_dlt_8() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t1373630646_StaticFields, ___this_year_dlt_8)); }
	inline DaylightTime_t3128077661 * get_this_year_dlt_8() const { return ___this_year_dlt_8; }
	inline DaylightTime_t3128077661 ** get_address_of_this_year_dlt_8() { return &___this_year_dlt_8; }
	inline void set_this_year_dlt_8(DaylightTime_t3128077661 * value)
	{
		___this_year_dlt_8 = value;
		Il2CppCodeGenWriteBarrier(&___this_year_dlt_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
