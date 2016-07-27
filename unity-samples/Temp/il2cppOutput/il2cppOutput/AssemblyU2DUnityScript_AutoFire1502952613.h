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
// UnityEngine.Transform
struct Transform_t284553113;
// PerFrameRaycast
struct PerFrameRaycast_t448786905;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AutoFire
struct  AutoFire_t1502952613  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject AutoFire::bulletPrefab
	GameObject_t4012695102 * ___bulletPrefab_2;
	// UnityEngine.Transform AutoFire::spawnPoint
	Transform_t284553113 * ___spawnPoint_3;
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
	GameObject_t4012695102 * ___muzzleFlashFront_10;
	// System.Single AutoFire::lastFireTime
	float ___lastFireTime_11;
	// PerFrameRaycast AutoFire::raycast
	PerFrameRaycast_t448786905 * ___raycast_12;

public:
	inline static int32_t get_offset_of_bulletPrefab_2() { return static_cast<int32_t>(offsetof(AutoFire_t1502952613, ___bulletPrefab_2)); }
	inline GameObject_t4012695102 * get_bulletPrefab_2() const { return ___bulletPrefab_2; }
	inline GameObject_t4012695102 ** get_address_of_bulletPrefab_2() { return &___bulletPrefab_2; }
	inline void set_bulletPrefab_2(GameObject_t4012695102 * value)
	{
		___bulletPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___bulletPrefab_2, value);
	}

	inline static int32_t get_offset_of_spawnPoint_3() { return static_cast<int32_t>(offsetof(AutoFire_t1502952613, ___spawnPoint_3)); }
	inline Transform_t284553113 * get_spawnPoint_3() const { return ___spawnPoint_3; }
	inline Transform_t284553113 ** get_address_of_spawnPoint_3() { return &___spawnPoint_3; }
	inline void set_spawnPoint_3(Transform_t284553113 * value)
	{
		___spawnPoint_3 = value;
		Il2CppCodeGenWriteBarrier(&___spawnPoint_3, value);
	}

	inline static int32_t get_offset_of_frequency_4() { return static_cast<int32_t>(offsetof(AutoFire_t1502952613, ___frequency_4)); }
	inline float get_frequency_4() const { return ___frequency_4; }
	inline float* get_address_of_frequency_4() { return &___frequency_4; }
	inline void set_frequency_4(float value)
	{
		___frequency_4 = value;
	}

	inline static int32_t get_offset_of_coneAngle_5() { return static_cast<int32_t>(offsetof(AutoFire_t1502952613, ___coneAngle_5)); }
	inline float get_coneAngle_5() const { return ___coneAngle_5; }
	inline float* get_address_of_coneAngle_5() { return &___coneAngle_5; }
	inline void set_coneAngle_5(float value)
	{
		___coneAngle_5 = value;
	}

	inline static int32_t get_offset_of_firing_6() { return static_cast<int32_t>(offsetof(AutoFire_t1502952613, ___firing_6)); }
	inline bool get_firing_6() const { return ___firing_6; }
	inline bool* get_address_of_firing_6() { return &___firing_6; }
	inline void set_firing_6(bool value)
	{
		___firing_6 = value;
	}

	inline static int32_t get_offset_of_damagePerSecond_7() { return static_cast<int32_t>(offsetof(AutoFire_t1502952613, ___damagePerSecond_7)); }
	inline float get_damagePerSecond_7() const { return ___damagePerSecond_7; }
	inline float* get_address_of_damagePerSecond_7() { return &___damagePerSecond_7; }
	inline void set_damagePerSecond_7(float value)
	{
		___damagePerSecond_7 = value;
	}

	inline static int32_t get_offset_of_forcePerSecond_8() { return static_cast<int32_t>(offsetof(AutoFire_t1502952613, ___forcePerSecond_8)); }
	inline float get_forcePerSecond_8() const { return ___forcePerSecond_8; }
	inline float* get_address_of_forcePerSecond_8() { return &___forcePerSecond_8; }
	inline void set_forcePerSecond_8(float value)
	{
		___forcePerSecond_8 = value;
	}

	inline static int32_t get_offset_of_hitSoundVolume_9() { return static_cast<int32_t>(offsetof(AutoFire_t1502952613, ___hitSoundVolume_9)); }
	inline float get_hitSoundVolume_9() const { return ___hitSoundVolume_9; }
	inline float* get_address_of_hitSoundVolume_9() { return &___hitSoundVolume_9; }
	inline void set_hitSoundVolume_9(float value)
	{
		___hitSoundVolume_9 = value;
	}

	inline static int32_t get_offset_of_muzzleFlashFront_10() { return static_cast<int32_t>(offsetof(AutoFire_t1502952613, ___muzzleFlashFront_10)); }
	inline GameObject_t4012695102 * get_muzzleFlashFront_10() const { return ___muzzleFlashFront_10; }
	inline GameObject_t4012695102 ** get_address_of_muzzleFlashFront_10() { return &___muzzleFlashFront_10; }
	inline void set_muzzleFlashFront_10(GameObject_t4012695102 * value)
	{
		___muzzleFlashFront_10 = value;
		Il2CppCodeGenWriteBarrier(&___muzzleFlashFront_10, value);
	}

	inline static int32_t get_offset_of_lastFireTime_11() { return static_cast<int32_t>(offsetof(AutoFire_t1502952613, ___lastFireTime_11)); }
	inline float get_lastFireTime_11() const { return ___lastFireTime_11; }
	inline float* get_address_of_lastFireTime_11() { return &___lastFireTime_11; }
	inline void set_lastFireTime_11(float value)
	{
		___lastFireTime_11 = value;
	}

	inline static int32_t get_offset_of_raycast_12() { return static_cast<int32_t>(offsetof(AutoFire_t1502952613, ___raycast_12)); }
	inline PerFrameRaycast_t448786905 * get_raycast_12() const { return ___raycast_12; }
	inline PerFrameRaycast_t448786905 ** get_address_of_raycast_12() { return &___raycast_12; }
	inline void set_raycast_12(PerFrameRaycast_t448786905 * value)
	{
		___raycast_12 = value;
		Il2CppCodeGenWriteBarrier(&___raycast_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
