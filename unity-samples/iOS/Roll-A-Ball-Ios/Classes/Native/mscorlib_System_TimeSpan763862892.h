#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType4014882752.h"
#include "mscorlib_System_TimeSpan763862892.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t763862892 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t763862892, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t763862892_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t763862892  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t763862892  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t763862892  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t763862892_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t763862892  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t763862892 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t763862892  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t763862892_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t763862892  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t763862892 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t763862892  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t763862892_StaticFields, ___Zero_2)); }
	inline TimeSpan_t763862892  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t763862892 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t763862892  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.TimeSpan
struct TimeSpan_t763862892_marshaled_pinvoke
{
	int64_t ____ticks_3;
};
// Native definition for marshalling of: System.TimeSpan
struct TimeSpan_t763862892_marshaled_com
{
	int64_t ____ticks_3;
};
