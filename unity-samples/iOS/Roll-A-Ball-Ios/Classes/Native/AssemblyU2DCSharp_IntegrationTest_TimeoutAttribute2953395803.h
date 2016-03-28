#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Attribute498693649.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IntegrationTest/TimeoutAttribute
struct  TimeoutAttribute_t2953395803  : public Attribute_t498693649
{
public:
	// System.Single IntegrationTest/TimeoutAttribute::timeout
	float ___timeout_0;

public:
	inline static int32_t get_offset_of_timeout_0() { return static_cast<int32_t>(offsetof(TimeoutAttribute_t2953395803, ___timeout_0)); }
	inline float get_timeout_0() const { return ___timeout_0; }
	inline float* get_address_of_timeout_0() { return &___timeout_0; }
	inline void set_timeout_0(float value)
	{
		___timeout_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
