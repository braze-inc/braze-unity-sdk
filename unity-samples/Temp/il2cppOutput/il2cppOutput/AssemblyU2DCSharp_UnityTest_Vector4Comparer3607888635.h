#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_UnityTest_VectorComparerBase_1_g3917783770.h"
#include "AssemblyU2DCSharp_UnityTest_Vector4Comparer_Compar1255533983.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityTest.Vector4Comparer
struct  Vector4Comparer_t3607888635  : public VectorComparerBase_1_t3917783770
{
public:
	// UnityTest.Vector4Comparer/CompareType UnityTest.Vector4Comparer::compareType
	int32_t ___compareType_14;
	// System.Double UnityTest.Vector4Comparer::floatingPointError
	double ___floatingPointError_15;

public:
	inline static int32_t get_offset_of_compareType_14() { return static_cast<int32_t>(offsetof(Vector4Comparer_t3607888635, ___compareType_14)); }
	inline int32_t get_compareType_14() const { return ___compareType_14; }
	inline int32_t* get_address_of_compareType_14() { return &___compareType_14; }
	inline void set_compareType_14(int32_t value)
	{
		___compareType_14 = value;
	}

	inline static int32_t get_offset_of_floatingPointError_15() { return static_cast<int32_t>(offsetof(Vector4Comparer_t3607888635, ___floatingPointError_15)); }
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
