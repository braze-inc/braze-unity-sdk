#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Health
struct Health_t403;
// UnityEngine.Material
struct Material_t370;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// HealthFlash
struct  HealthFlash_t406  : public MonoBehaviour_t2
{
	// Health HealthFlash::playerHealth
	Health_t403 * ___playerHealth_2;
	// UnityEngine.Material HealthFlash::healthMaterial
	Material_t370 * ___healthMaterial_3;
	// System.Single HealthFlash::healthBlink
	float ___healthBlink_4;
	// System.Single HealthFlash::oneOverMaxHealth
	float ___oneOverMaxHealth_5;
};
