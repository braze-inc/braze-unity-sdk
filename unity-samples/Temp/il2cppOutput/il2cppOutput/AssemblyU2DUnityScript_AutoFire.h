#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t141;
// UnityEngine.Transform
struct Transform_t258;
// PerFrameRaycast
struct PerFrameRaycast_t376;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// AutoFire
struct  AutoFire_t401  : public MonoBehaviour_t2
{
	// UnityEngine.GameObject AutoFire::bulletPrefab
	GameObject_t141 * ___bulletPrefab_2;
	// UnityEngine.Transform AutoFire::spawnPoint
	Transform_t258 * ___spawnPoint_3;
	// System.Single AutoFire::frequency
	float ___frequency_4;
	// System.Single AutoFire::coneAngle
	float ___coneAngle_5;
	// System.Boolean AutoFire::firing
	bool ___firing_6;
	// System.Single AutoFire::damagePerSecond
	float ___damagePerSecond_7;
	// System.Single AutoFire::forcePerSecond
	float ___forcePerSecond_8;
	// System.Single AutoFire::hitSoundVolume
	float ___hitSoundVolume_9;
	// UnityEngine.GameObject AutoFire::muzzleFlashFront
	GameObject_t141 * ___muzzleFlashFront_10;
	// System.Single AutoFire::lastFireTime
	float ___lastFireTime_11;
	// PerFrameRaycast AutoFire::raycast
	PerFrameRaycast_t376 * ___raycast_12;
};
