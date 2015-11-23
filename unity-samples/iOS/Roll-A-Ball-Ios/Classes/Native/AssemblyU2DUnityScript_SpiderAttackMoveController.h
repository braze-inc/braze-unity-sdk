#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MovementMotor
struct MovementMotor_t347;
// UnityEngine.Renderer
struct Renderer_t256;
// UnityEngine.AudioSource
struct AudioSource_t348;
// SelfIlluminationBlink[]
struct SelfIlluminationBlinkU5BU5D_t349;
// GlowPlane
struct GlowPlane_t350;
// UnityEngine.GameObject
struct GameObject_t141;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t2;
// AI
struct AI_t341;
// UnityEngine.Transform
struct Transform_t258;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// SpiderAttackMoveController
struct  SpiderAttackMoveController_t346  : public MonoBehaviour_t2
{
	// MovementMotor SpiderAttackMoveController::motor
	MovementMotor_t347 * ___motor_2;
	// System.Single SpiderAttackMoveController::targetDistanceMin
	float ___targetDistanceMin_3;
	// System.Single SpiderAttackMoveController::targetDistanceMax
	float ___targetDistanceMax_4;
	// System.Single SpiderAttackMoveController::proximityDistance
	float ___proximityDistance_5;
	// System.Single SpiderAttackMoveController::damageRadius
	float ___damageRadius_6;
	// System.Single SpiderAttackMoveController::proximityBuildupTime
	float ___proximityBuildupTime_7;
	// System.Single SpiderAttackMoveController::proximityOfNoReturn
	float ___proximityOfNoReturn_8;
	// System.Single SpiderAttackMoveController::damageAmount
	float ___damageAmount_9;
	// UnityEngine.Renderer SpiderAttackMoveController::proximityRenderer
	Renderer_t256 * ___proximityRenderer_10;
	// UnityEngine.AudioSource SpiderAttackMoveController::audioSource
	AudioSource_t348 * ___audioSource_11;
	// SelfIlluminationBlink[] SpiderAttackMoveController::blinkComponents
	SelfIlluminationBlinkU5BU5D_t349* ___blinkComponents_12;
	// GlowPlane SpiderAttackMoveController::blinkPlane
	GlowPlane_t350 * ___blinkPlane_13;
	// UnityEngine.GameObject SpiderAttackMoveController::intentionalExplosion
	GameObject_t141 * ___intentionalExplosion_14;
	// UnityEngine.MonoBehaviour SpiderAttackMoveController::animationBehaviour
	MonoBehaviour_t2 * ___animationBehaviour_15;
	// AI SpiderAttackMoveController::ai
	AI_t341 * ___ai_16;
	// UnityEngine.Transform SpiderAttackMoveController::character
	Transform_t258 * ___character_17;
	// UnityEngine.Transform SpiderAttackMoveController::player
	Transform_t258 * ___player_18;
	// System.Boolean SpiderAttackMoveController::inRange
	bool ___inRange_19;
	// System.Single SpiderAttackMoveController::nextRaycastTime
	float ___nextRaycastTime_20;
	// System.Single SpiderAttackMoveController::lastRaycastSuccessfulTime
	float ___lastRaycastSuccessfulTime_21;
	// System.Single SpiderAttackMoveController::proximityLevel
	float ___proximityLevel_22;
	// System.Single SpiderAttackMoveController::lastBlinkTime
	float ___lastBlinkTime_23;
	// System.Single SpiderAttackMoveController::noticeTime
	float ___noticeTime_24;
};
