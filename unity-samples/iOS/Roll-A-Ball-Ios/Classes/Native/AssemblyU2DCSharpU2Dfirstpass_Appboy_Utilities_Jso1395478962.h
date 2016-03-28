#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.StringBuilder
struct StringBuilder_t3822575854;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Appboy.Utilities.Json/Serializer
struct  Serializer_t1395478962  : public Il2CppObject
{
public:
	// System.Text.StringBuilder Appboy.Utilities.Json/Serializer::builder
	StringBuilder_t3822575854 * ___builder_0;

public:
	inline static int32_t get_offset_of_builder_0() { return static_cast<int32_t>(offsetof(Serializer_t1395478962, ___builder_0)); }
	inline StringBuilder_t3822575854 * get_builder_0() const { return ___builder_0; }
	inline StringBuilder_t3822575854 ** get_address_of_builder_0() { return &___builder_0; }
	inline void set_builder_0(StringBuilder_t3822575854 * value)
	{
		___builder_0 = value;
		Il2CppCodeGenWriteBarrier(&___builder_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
