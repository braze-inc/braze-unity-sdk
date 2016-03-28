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

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExplosionPart
struct  ExplosionPart_t2172627080  : public Il2CppObject
{
public:
	// UnityEngine.GameObject ExplosionPart::gameObject
	GameObject_t4012695102 * ___gameObject_0;
	// System.Single ExplosionPart::delay
	float ___delay_1;
	// System.Boolean ExplosionPart::hqOnly
	bool ___hqOnly_2;
	// System.Single ExplosionPart::yOffset
	float ___yOffset_3;

public:
	inline static int32_t get_offset_of_gameObject_0() { return static_cast<int32_t>(offsetof(ExplosionPart_t2172627080, ___gameObject_0)); }
	inline GameObject_t4012695102 * get_gameObject_0() const { return ___gameObject_0; }
	inline GameObject_t4012695102 ** get_address_of_gameObject_0() { return &___gameObject_0; }
	inline void set_gameObject_0(GameObject_t4012695102 * value)
	{
		___gameObject_0 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_0, value);
	}

	inline static int32_t get_offset_of_delay_1() { return static_cast<int32_t>(offsetof(ExplosionPart_t2172627080, ___delay_1)); }
	inline float get_delay_1() const { return ___delay_1; }
	inline float* get_address_of_delay_1() { return &___delay_1; }
	inline void set_delay_1(float value)
	{
		___delay_1 = value;
	}

	inline static int32_t get_offset_of_hqOnly_2() { return static_cast<int32_t>(offsetof(ExplosionPart_t2172627080, ___hqOnly_2)); }
	inline bool get_hqOnly_2() const { return ___hqOnly_2; }
	inline bool* get_address_of_hqOnly_2() { return &___hqOnly_2; }
	inline void set_hqOnly_2(bool value)
	{
		___hqOnly_2 = value;
	}

	inline static int32_t get_offset_of_yOffset_3() { return static_cast<int32_t>(offsetof(ExplosionPart_t2172627080, ___yOffset_3)); }
	inline float get_yOffset_3() const { return ___yOffset_3; }
	inline float* get_address_of_yOffset_3() { return &___yOffset_3; }
	inline void set_yOffset_3(float value)
	{
		___yOffset_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
