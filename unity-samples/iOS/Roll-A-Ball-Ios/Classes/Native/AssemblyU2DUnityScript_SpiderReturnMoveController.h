#pragma once
#include <stdint.h>
// MovementMotor
struct MovementMotor_t389;
// AI
struct AI_t384;
// UnityEngine.Transform
struct Transform_t193;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t2;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// SpiderReturnMoveController
struct SpiderReturnMoveController_t394  : public MonoBehaviour_t2
{
	// MovementMotor SpiderReturnMoveController::motor
	MovementMotor_t389 * ___motor_2;
	// AI SpiderReturnMoveController::ai
	AI_t384 * ___ai_3;
	// UnityEngine.Transform SpiderReturnMoveController::character
	Transform_t193 * ___character_4;
	// UnityEngine.Vector3 SpiderReturnMoveController::spawnPos
	Vector3_t202  ___spawnPos_5;
	// UnityEngine.MonoBehaviour SpiderReturnMoveController::animationBehaviour
	MonoBehaviour_t2 * ___animationBehaviour_6;
};
