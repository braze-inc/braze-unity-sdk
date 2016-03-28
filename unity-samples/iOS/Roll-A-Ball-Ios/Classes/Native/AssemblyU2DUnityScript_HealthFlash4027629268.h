#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Health
struct Health_t2157571708;
// UnityEngine.Material
struct Material_t1886596500;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HealthFlash
struct  HealthFlash_t4027629268  : public MonoBehaviour_t3012272455
{
public:
	// Health HealthFlash::playerHealth
	Health_t2157571708 * ___playerHealth_2;
	// UnityEngine.Material HealthFlash::healthMaterial
	Material_t1886596500 * ___healthMaterial_3;
	// System.Single HealthFlash::healthBlink
	float ___healthBlink_4;
	// System.Single HealthFlash::oneOverMaxHealth
	float ___oneOverMaxHealth_5;

public:
	inline static int32_t get_offset_of_playerHealth_2() { return static_cast<int32_t>(offsetof(HealthFlash_t4027629268, ___playerHealth_2)); }
	inline Health_t2157571708 * get_playerHealth_2() const { return ___playerHealth_2; }
	inline Health_t2157571708 ** get_address_of_playerHealth_2() { return &___playerHealth_2; }
	inline void set_playerHealth_2(Health_t2157571708 * value)
	{
		___playerHealth_2 = value;
		Il2CppCodeGenWriteBarrier(&___playerHealth_2, value);
	}

	inline static int32_t get_offset_of_healthMaterial_3() { return static_cast<int32_t>(offsetof(HealthFlash_t4027629268, ___healthMaterial_3)); }
	inline Material_t1886596500 * get_healthMaterial_3() const { return ___healthMaterial_3; }
	inline Material_t1886596500 ** get_address_of_healthMaterial_3() { return &___healthMaterial_3; }
	inline void set_healthMaterial_3(Material_t1886596500 * value)
	{
		___healthMaterial_3 = value;
		Il2CppCodeGenWriteBarrier(&___healthMaterial_3, value);
	}

	inline static int32_t get_offset_of_healthBlink_4() { return static_cast<int32_t>(offsetof(HealthFlash_t4027629268, ___healthBlink_4)); }
	inline float get_healthBlink_4() const { return ___healthBlink_4; }
	inline float* get_address_of_healthBlink_4() { return &___healthBlink_4; }
	inline void set_healthBlink_4(float value)
	{
		___healthBlink_4 = value;
	}

	inline static int32_t get_offset_of_oneOverMaxHealth_5() { return static_cast<int32_t>(offsetof(HealthFlash_t4027629268, ___oneOverMaxHealth_5)); }
	inline float get_oneOverMaxHealth_5() const { return ___oneOverMaxHealth_5; }
	inline float* get_address_of_oneOverMaxHealth_5() { return &___oneOverMaxHealth_5; }
	inline void set_oneOverMaxHealth_5(float value)
	{
		___oneOverMaxHealth_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
