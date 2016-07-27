#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.TimeZone
struct TimeZone_t764070862;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeZone
struct  TimeZone_t764070862  : public Il2CppObject
{
public:

public:
};

struct TimeZone_t764070862_StaticFields
{
public:
	// System.TimeZone System.TimeZone::currentTimeZone
	TimeZone_t764070862 * ___currentTimeZone_0;

public:
	inline static int32_t get_offset_of_currentTimeZone_0() { return static_cast<int32_t>(offsetof(TimeZone_t764070862_StaticFields, ___currentTimeZone_0)); }
	inline TimeZone_t764070862 * get_currentTimeZone_0() const { return ___currentTimeZone_0; }
	inline TimeZone_t764070862 ** get_address_of_currentTimeZone_0() { return &___currentTimeZone_0; }
	inline void set_currentTimeZone_0(TimeZone_t764070862 * value)
	{
		___currentTimeZone_0 = value;
		Il2CppCodeGenWriteBarrier(&___currentTimeZone_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
