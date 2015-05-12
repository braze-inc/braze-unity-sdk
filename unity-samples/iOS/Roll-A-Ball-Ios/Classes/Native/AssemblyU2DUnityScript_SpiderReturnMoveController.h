#pragma once
#include <stdint.h>
// MovementMotor
struct MovementMotor_t377;
// AI
struct AI_t372;
// UnityEngine.Transform
struct Transform_t179;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t2;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// SpiderReturnMoveController
struct SpiderReturnMoveController_t382  : public MonoBehaviour_t2
{
	// MovementMotor SpiderReturnMoveController::motor
	MovementMotor_t377 * ___motor_2;
	// AI SpiderReturnMoveController::ai
	AI_t372 * ___ai_3;
	// UnityEngine.Transform SpiderReturnMoveController::character
	Transform_t179 * ___character_4;
	// UnityEngine.Vector3 SpiderReturnMoveController::spawnPos
	Vector3_t188  ___spawnPos_5;
	// UnityEngine.MonoBehaviour SpiderReturnMoveController::animationBehaviour
	MonoBehaviour_t2 * ___animationBehaviour_6;
};
