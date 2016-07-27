#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CodeBasedAssertionExample
struct  CodeBasedAssertionExample_t2923185614  : public MonoBehaviour_t3012272455
{
public:
	// System.Single CodeBasedAssertionExample::FloatField
	float ___FloatField_2;
	// UnityEngine.GameObject CodeBasedAssertionExample::goReference
	GameObject_t4012695102 * ___goReference_3;

public:
	inline static int32_t get_offset_of_FloatField_2() { return static_cast<int32_t>(offsetof(CodeBasedAssertionExample_t2923185614, ___FloatField_2)); }
	inline float get_FloatField_2() const { return ___FloatField_2; }
	inline float* get_address_of_FloatField_2() { return &___FloatField_2; }
	inline void set_FloatField_2(float value)
	{
		___FloatField_2 = value;
	}

	inline static int32_t get_offset_of_goReference_3() { return static_cast<int32_t>(offsetof(CodeBasedAssertionExample_t2923185614, ___goReference_3)); }
	inline GameObject_t4012695102 * get_goReference_3() const { return ___goReference_3; }
	inline GameObject_t4012695102 ** get_address_of_goReference_3() { return &___goReference_3; }
	inline void set_goReference_3(GameObject_t4012695102 * value)
	{
		___goReference_3 = value;
		Il2CppCodeGenWriteBarrier(&___goReference_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
