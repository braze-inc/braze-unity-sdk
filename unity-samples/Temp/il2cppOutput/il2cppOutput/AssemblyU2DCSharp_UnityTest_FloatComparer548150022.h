#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_UnityTest_ComparerBaseGeneric_1_g548484913.h"
#include "AssemblyU2DCSharp_UnityTest_FloatComparer_CompareTy266847924.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityTest.FloatComparer
struct  FloatComparer_t548150022  : public ComparerBaseGeneric_1_t548484913
{
public:
	// UnityTest.FloatComparer/CompareTypes UnityTest.FloatComparer::compareTypes
	int32_t ___compareTypes_14;
	// System.Double UnityTest.FloatComparer::floatingPointError
	double ___floatingPointError_15;

public:
	inline static int32_t get_offset_of_compareTypes_14() { return static_cast<int32_t>(offsetof(FloatComparer_t548150022, ___compareTypes_14)); }
	inline int32_t get_compareTypes_14() const { return ___compareTypes_14; }
	inline int32_t* get_address_of_compareTypes_14() { return &___compareTypes_14; }
	inline void set_compareTypes_14(int32_t value)
	{
		___compareTypes_14 = value;
	}

	inline static int32_t get_offset_of_floatingPointError_15() { return static_cast<int32_t>(offsetof(FloatComparer_t548150022, ___floatingPointError_15)); }
	inline double get_floatingPointError_15() const { return ___floatingPointError_15; }
	inline double* get_address_of_floatingPointError_15() { return &___floatingPointError_15; }
	inline void set_floatingPointError_15(double value)
	{
		___floatingPointError_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
