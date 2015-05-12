#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t140;
// UnityEngine.Transform
struct Transform_t179;
// PerFrameRaycast
struct PerFrameRaycast_t408;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// AutoFire
struct AutoFire_t433  : public MonoBehaviour_t2
{
	// UnityEngine.GameObject AutoFire::bulletPrefab
	GameObject_t140 * ___bulletPrefab_2;
	// UnityEngine.Transform AutoFire::spawnPoint
	Transform_t179 * ___spawnPoint_3;
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
	GameObject_t140 * ___muzzleFlashFront_10;
	// System.Single AutoFire::lastFireTime
	float ___lastFireTime_11;
	// PerFrameRaycast AutoFire::raycast
	PerFrameRaycast_t408 * ___raycast_12;
};
