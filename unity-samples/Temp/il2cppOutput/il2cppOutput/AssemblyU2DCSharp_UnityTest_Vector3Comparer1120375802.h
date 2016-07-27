#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_UnityTest_VectorComparerBase_1_g3917783769.h"
#include "AssemblyU2DCSharp_UnityTest_Vector3Comparer_Compar1255533983.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityTest.Vector3Comparer
struct  Vector3Comparer_t1120375802  : public VectorComparerBase_1_t3917783769
{
public:
	// UnityTest.Vector3Comparer/CompareType UnityTest.Vector3Comparer::compareType
	int32_t ___compareType_14;
	// System.Double UnityTest.Vector3Comparer::floatingPointError
	double ___floatingPointError_15;

public:
	inline static int32_t get_offset_of_compareType_14() { return static_cast<int32_t>(offsetof(Vector3Comparer_t1120375802, ___compareType_14)); }
	inline int32_t get_compareType_14() const { return ___compareType_14; }
	inline int32_t* get_address_of_compareType_14() { return &___compareType_14; }
	inline void set_compareType_14(int32_t value)
	{
		___compareType_14 = value;
	}

	inline static int32_t get_offset_of_floatingPointError_15() { return static_cast<int32_t>(offsetof(Vector3Comparer_t1120375802, ___floatingPointError_15)); }
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
