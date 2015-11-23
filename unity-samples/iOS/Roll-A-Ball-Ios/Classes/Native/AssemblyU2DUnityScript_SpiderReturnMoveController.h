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
// AI
struct AI_t341;
// UnityEngine.Transform
struct Transform_t258;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t2;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// SpiderReturnMoveController
struct  SpiderReturnMoveController_t351  : public MonoBehaviour_t2
{
	// MovementMotor SpiderReturnMoveController::motor
	MovementMotor_t347 * ___motor_2;
	// AI SpiderReturnMoveController::ai
	AI_t341 * ___ai_3;
	// UnityEngine.Transform SpiderReturnMoveController::character
	Transform_t258 * ___character_4;
	// UnityEngine.Vector3 SpiderReturnMoveController::spawnPos
	Vector3_t259  ___spawnPos_5;
	// UnityEngine.MonoBehaviour SpiderReturnMoveController::animationBehaviour
	MonoBehaviour_t2 * ___animationBehaviour_6;
};
