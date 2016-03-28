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

// System.Nullable`1<System.TimeSpan>
struct  Nullable_1_t3649900800 
{
public:
	// T System.Nullable`1::value
	TimeSpan_t763862892  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3649900800, ___value_0)); }
	inline TimeSpan_t763862892  get_value_0() const { return ___value_0; }
	inline TimeSpan_t763862892 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(TimeSpan_t763862892  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3649900800, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
