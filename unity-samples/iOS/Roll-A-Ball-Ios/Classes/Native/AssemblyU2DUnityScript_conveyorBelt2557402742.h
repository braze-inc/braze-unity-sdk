#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t1886596500;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// conveyorBelt
struct  conveyorBelt_t2557402742  : public MonoBehaviour_t3012272455
{
public:
	// System.Single conveyorBelt::scrollSpeed
	float ___scrollSpeed_2;
	// UnityEngine.Material conveyorBelt::mat
	Material_t1886596500 * ___mat_3;

public:
	inline static int32_t get_offset_of_scrollSpeed_2() { return static_cast<int32_t>(offsetof(conveyorBelt_t2557402742, ___scrollSpeed_2)); }
	inline float get_scrollSpeed_2() const { return ___scrollSpeed_2; }
	inline float* get_address_of_scrollSpeed_2() { return &___scrollSpeed_2; }
	inline void set_scrollSpeed_2(float value)
	{
		___scrollSpeed_2 = value;
	}

	inline static int32_t get_offset_of_mat_3() { return static_cast<int32_t>(offsetof(conveyorBelt_t2557402742, ___mat_3)); }
	inline Material_t1886596500 * get_mat_3() const { return ___mat_3; }
	inline Material_t1886596500 ** get_address_of_mat_3() { return &___mat_3; }
	inline void set_mat_3(Material_t1886596500 * value)
	{
		___mat_3 = value;
		Il2CppCodeGenWriteBarrier(&___mat_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
