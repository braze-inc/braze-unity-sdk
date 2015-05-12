#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t154;
// UnityEngine.Transform
struct Transform_t193;
// SignalSender
struct SignalSender_t404;
// UnityEngine.ParticleEmitter
struct ParticleEmitter_t450;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Health
struct Health_t447  : public MonoBehaviour_t2
{
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
	GameObject_t154 * ___damagePrefab_7;
	// UnityEngine.Transform Health::damageEffectTransform
	Transform_t193 * ___damageEffectTransform_8;
	// System.Single Health::damageEffectMultiplier
	float ___damageEffectMultiplier_9;
	// System.Boolean Health::damageEffectCentered
	bool ___damageEffectCentered_10;
	// UnityEngine.GameObject Health::scorchMarkPrefab
	GameObject_t154 * ___scorchMarkPrefab_11;
	// UnityEngine.GameObject Health::scorchMark
	GameObject_t154 * ___scorchMark_12;
	// SignalSender Health::damageSignals
	SignalSender_t404 * ___damageSignals_13;
	// SignalSender Health::dieSignals
	SignalSender_t404 * ___dieSignals_14;
	// System.Single Health::lastDamageTime
	float ___lastDamageTime_15;
	// UnityEngine.ParticleEmitter Health::damageEffect
	ParticleEmitter_t450 * ___damageEffect_16;
	// System.Single Health::damageEffectCenterYOffset
	float ___damageEffectCenterYOffset_17;
	// System.Single Health::colliderRadiusHeuristic
	float ___colliderRadiusHeuristic_18;
};
