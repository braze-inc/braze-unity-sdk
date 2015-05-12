#pragma once
#include <stdint.h>
// Health
struct Health_t447;
// UnityEngine.Material
struct Material_t413;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// HealthFlash
struct HealthFlash_t451  : public MonoBehaviour_t2
{
	// Health HealthFlash::playerHealth
	Health_t447 * ___playerHealth_2;
	// UnityEngine.Material HealthFlash::healthMaterial
	Material_t413 * ___healthMaterial_3;
	// System.Single HealthFlash::healthBlink
	float ___healthBlink_4;
	// System.Single HealthFlash::oneOverMaxHealth
	float ___oneOverMaxHealth_5;
};
