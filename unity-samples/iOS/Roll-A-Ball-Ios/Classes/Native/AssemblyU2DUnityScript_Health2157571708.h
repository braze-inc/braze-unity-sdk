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
// SignalSender
struct SignalSender_t3492948765;
// UnityEngine.ParticleEmitter
struct ParticleEmitter_t3425549877;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Health
struct  Health_t2157571708  : public MonoBehaviour_t3012272455
{
public:
	// System.Single Health::maxHealth
	float ___maxHealth_2;
	// System.Single Health::health
	float ___health_3;
	// System.Single Health::regenerateSpeed
	float ___regenerateSpeed_4;
	// System.Boolean Health::invincible
	bool ___invincible_5;
	// System.Boolean Health::dead
	bool ___dead_6;
	// UnityEngine.GameObject Health::damagePrefab
	GameObject_t4012695102 * ___damagePrefab_7;
	// UnityEngine.Transform Health::damageEffectTransform
	Transform_t284553113 * ___damageEffectTransform_8;
	// System.Single Health::damageEffectMultiplier
	float ___damageEffectMultiplier_9;
	// System.Boolean Health::damageEffectCentered
	bool ___damageEffectCentered_10;
	// UnityEngine.GameObject Health::scorchMarkPrefab
	GameObject_t4012695102 * ___scorchMarkPrefab_11;
	// UnityEngine.GameObject Health::scorchMark
	GameObject_t4012695102 * ___scorchMark_12;
	// SignalSender Health::damageSignals
	SignalSender_t3492948765 * ___damageSignals_13;
	// SignalSender Health::dieSignals
	SignalSender_t3492948765 * ___dieSignals_14;
	// System.Single Health::lastDamageTime
	float ___lastDamageTime_15;
	// UnityEngine.ParticleEmitter Health::damageEffect
	ParticleEmitter_t3425549877 * ___damageEffect_16;
	// System.Single Health::damageEffectCenterYOffset
	float ___damageEffectCenterYOffset_17;
	// System.Single Health::colliderRadiusHeuristic
	float ___colliderRadiusHeuristic_18;

public:
	inline static int32_t get_offset_of_maxHealth_2() { return static_cast<int32_t>(offsetof(Health_t2157571708, ___maxHealth_2)); }
	inline float get_maxHealth_2() const { return ___maxHealth_2; }
	inline float* get_address_of_maxHealth_2() { return &___maxHealth_2; }
	inline void set_maxHealth_2(float value)
	{
		___maxHealth_2 = value;
	}

	inline static int32_t get_offset_of_health_3() { return static_cast<int32_t>(offsetof(Health_t2157571708, ___health_3)); }
	inline float get_health_3() const { return ___health_3; }
	inline float* get_address_of_health_3() { return &___health_3; }
	inline void set_health_3(float value)
	{
		___health_3 = value;
	}

	inline static int32_t get_offset_of_regenerateSpeed_4() { return static_cast<int32_t>(offsetof(Health_t2157571708, ___regenerateSpeed_4)); }
	inline float get_regenerateSpeed_4() const { return ___regenerateSpeed_4; }
	inline float* get_address_of_regenerateSpeed_4() { return &___regenerateSpeed_4; }
	inline void set_regenerateSpeed_4(float value)
	{
		___regenerateSpeed_4 = value;
	}

	inline static int32_t get_offset_of_invincible_5() { return static_cast<int32_t>(offsetof(Health_t2157571708, ___invincible_5)); }
	inline bool get_invincible_5() const { return ___invincible_5; }
	inline bool* get_address_of_invincible_5() { return &___invincible_5; }
	inline void set_invincible_5(bool value)
	{
		___invincible_5 = value;
	}

	inline static int32_t get_offset_of_dead_6() { return static_cast<int32_t>(offsetof(Health_t2157571708, ___dead_6)); }
	inline bool get_dead_6() const { return ___dead_6; }
	inline bool* get_address_of_dead_6() { return &___dead_6; }
	inline void set_dead_6(bool value)
	{
		___dead_6 = value;
	}

	inline static int32_t get_offset_of_damagePrefab_7() { return static_cast<int32_t>(offsetof(Health_t2157571708, ___damagePrefab_7)); }
	inline GameObject_t4012695102 * get_damagePrefab_7() const { return ___damagePrefab_7; }
	inline GameObject_t4012695102 ** get_address_of_damagePrefab_7() { return &___damagePrefab_7; }
	inline void set_damagePrefab_7(GameObject_t4012695102 * value)
	{
		___damagePrefab_7 = value;
		Il2CppCodeGenWriteBarrier(&___damagePrefab_7, value);
	}

	inline static int32_t get_offset_of_damageEffectTransform_8() { return static_cast<int32_t>(offsetof(Health_t2157571708, ___damageEffectTransform_8)); }
	inline Transform_t284553113 * get_damageEffectTransform_8() const { return ___damageEffectTransform_8; }
	inline Transform_t284553113 ** get_address_of_damageEffectTransform_8() { return &___damageEffectTransform_8; }
	inline void set_damageEffectTransform_8(Transform_t284553113 * value)
	{
		___damageEffectTransform_8 = value;
		Il2CppCodeGenWriteBarrier(&___damageEffectTransform_8, value);
	}

	inline static int32_t get_offset_of_damageEffectMultiplier_9() { return static_cast<int32_t>(offsetof(Health_t2157571708, ___damageEffectMultiplier_9)); }
	inline float get_damageEffectMultiplier_9() const { return ___damageEffectMultiplier_9; }
	inline float* get_address_of_damageEffectMultiplier_9() { return &___damageEffectMultiplier_9; }
	inline void set_damageEffectMultiplier_9(float value)
	{
		___damageEffectMultiplier_9 = value;
	}

	inline static int32_t get_offset_of_damageEffectCentered_10() { return static_cast<int32_t>(offsetof(Health_t2157571708, ___damageEffectCentered_10)); }
	inline bool get_damageEffectCentered_10() const { return ___damageEffectCentered_10; }
	inline bool* get_address_of_damageEffectCentered_10() { return &___damageEffectCentered_10; }
	inline void set_damageEffectCentered_10(bool value)
	{
		___damageEffectCentered_10 = value;
	}

	inline static int32_t get_offset_of_scorchMarkPrefab_11() { return static_cast<int32_t>(offsetof(Health_t2157571708, ___scorchMarkPrefab_11)); }
	inline GameObject_t4012695102 * get_scorchMarkPrefab_11() const { return ___scorchMarkPrefab_11; }
	inline GameObject_t4012695102 ** get_address_of_scorchMarkPrefab_11() { return &___scorchMarkPrefab_11; }
	inline void set_scorchMarkPrefab_11(GameObject_t4012695102 * value)
	{
		___scorchMarkPrefab_11 = value;
		Il2CppCodeGenWriteBarrier(&___scorchMarkPrefab_11, value);
	}

	inline static int32_t get_offset_of_scorchMark_12() { return static_cast<int32_t>(offsetof(Health_t2157571708, ___scorchMark_12)); }
	inline GameObject_t4012695102 * get_scorchMark_12() const { return ___scorchMark_12; }
	inline GameObject_t4012695102 ** get_address_of_scorchMark_12() { return &___scorchMark_12; }
	inline void set_scorchMark_12(GameObject_t4012695102 * value)
	{
		___scorchMark_12 = value;
		Il2CppCodeGenWriteBarrier(&___scorchMark_12, value);
	}

	inline static int32_t get_offset_of_damageSignals_13() { return static_cast<int32_t>(offsetof(Health_t2157571708, ___damageSignals_13)); }
	inline SignalSender_t3492948765 * get_damageSignals_13() const { return ___damageSignals_13; }
	inline SignalSender_t3492948765 ** get_address_of_damageSignals_13() { return &___damageSignals_13; }
	inline void set_damageSignals_13(SignalSender_t3492948765 * value)
	{
		___damageSignals_13 = value;
		Il2CppCodeGenWriteBarrier(&___damageSignals_13, value);
	}

	inline static int32_t get_offset_of_dieSignals_14() { return static_cast<int32_t>(offsetof(Health_t2157571708, ___dieSignals_14)); }
	inline SignalSender_t3492948765 * get_dieSignals_14() const { return ___dieSignals_14; }
	inline SignalSender_t3492948765 ** get_address_of_dieSignals_14() { return &___dieSignals_14; }
	inline void set_dieSignals_14(SignalSender_t3492948765 * value)
	{
		___dieSignals_14 = value;
		Il2CppCodeGenWriteBarrier(&___dieSignals_14, value);
	}

	inline static int32_t get_offset_of_lastDamageTime_15() { return static_cast<int32_t>(offsetof(Health_t2157571708, ___lastDamageTime_15)); }
	inline float get_lastDamageTime_15() const { return ___lastDamageTime_15; }
	inline float* get_address_of_lastDamageTime_15() { return &___lastDamageTime_15; }
	inline void set_lastDamageTime_15(float value)
	{
		___lastDamageTime_15 = value;
	}

	inline static int32_t get_offset_of_damageEffect_16() { return static_cast<int32_t>(offsetof(Health_t2157571708, ___damageEffect_16)); }
	inline ParticleEmitter_t3425549877 * get_damageEffect_16() const { return ___damageEffect_16; }
	inline ParticleEmitter_t3425549877 ** get_address_of_damageEffect_16() { return &___damageEffect_16; }
	inline void set_damageEffect_16(ParticleEmitter_t3425549877 * value)
	{
		___damageEffect_16 = value;
		Il2CppCodeGenWriteBarrier(&___damageEffect_16, value);
	}

	inline static int32_t get_offset_of_damageEffectCenterYOffset_17() { return static_cast<int32_t>(offsetof(Health_t2157571708, ___damageEffectCenterYOffset_17)); }
	inline float get_damageEffectCenterYOffset_17() const { return ___damageEffectCenterYOffset_17; }
	inline float* get_address_of_damageEffectCenterYOffset_17() { return &___damageEffectCenterYOffset_17; }
	inline void set_damageEffectCenterYOffset_17(float value)
	{
		___damageEffectCenterYOffset_17 = value;
	}

	inline static int32_t get_offset_of_colliderRadiusHeuristic_18() { return static_cast<int32_t>(offsetof(Health_t2157571708, ___colliderRadiusHeuristic_18)); }
	inline float get_colliderRadiusHeuristic_18() const { return ___colliderRadiusHeuristic_18; }
	inline float* get_address_of_colliderRadiusHeuristic_18() { return &___colliderRadiusHeuristic_18; }
	inline void set_colliderRadiusHeuristic_18(float value)
	{
		___colliderRadiusHeuristic_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
