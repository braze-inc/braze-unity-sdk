#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.HashSet`1/PrimeHelper<Appboy.Models.CardCategory>
struct  PrimeHelper_t3920311607  : public Il2CppObject
{
public:

public:
};

struct PrimeHelper_t3920311607_StaticFields
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1/PrimeHelper::primes_table
	Int32U5BU5D_t1809983122* ___primes_table_0;

public:
	inline static int32_t get_offset_of_primes_table_0() { return static_cast<int32_t>(offsetof(PrimeHelper_t3920311607_StaticFields, ___primes_table_0)); }
	inline Int32U5BU5D_t1809983122* get_primes_table_0() const { return ___primes_table_0; }
	inline Int32U5BU5D_t1809983122** get_address_of_primes_table_0() { return &___primes_table_0; }
	inline void set_primes_table_0(Int32U5BU5D_t1809983122* value)
	{
		___primes_table_0 = value;
		Il2CppCodeGenWriteBarrier(&___primes_table_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
