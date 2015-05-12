#pragma once
#include <stdint.h>
// MovementMotor
struct MovementMotor_t389;
// UnityEngine.Transform
struct Transform_t193;
// UnityEngine.GameObject
struct GameObject_t154;
// UnityEngine.Camera
struct Camera_t186;
// Joystick
struct Joystick_t441;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// PlayerMoveController
struct PlayerMoveController_t443  : public MonoBehaviour_t2
{
	// MovementMotor PlayerMoveController::motor
	MovementMotor_t389 * ___motor_2;
	// UnityEngine.Transform PlayerMoveController::character
	Transform_t193 * ___character_3;
	// UnityEngine.GameObject PlayerMoveController::cursorPrefab
	GameObject_t154 * ___cursorPrefab_4;
	// UnityEngine.GameObject PlayerMoveController::joystickPrefab
	GameObject_t154 * ___joystickPrefab_5;
	// System.Single PlayerMoveController::cameraSmoothing
	float ___cameraSmoothing_6;
	// System.Single PlayerMoveController::cameraPreview
	float ___cameraPreview_7;
	// System.Single PlayerMoveController::cursorPlaneHeight
	float ___cursorPlaneHeight_8;
	// System.Single PlayerMoveController::cursorFacingCamera
	float ___cursorFacingCamera_9;
	// System.Single PlayerMoveController::cursorSmallerWithDistance
	float ___cursorSmallerWithDistance_10;
	// System.Single PlayerMoveController::cursorSmallerWhenClose
	float ___cursorSmallerWhenClose_11;
	// UnityEngine.Camera PlayerMoveController::mainCamera
	Camera_t186 * ___mainCamera_12;
	// UnityEngine.Transform PlayerMoveController::cursorObject
	Transform_t193 * ___cursorObject_13;
	// Joystick PlayerMoveController::joystickLeft
	Joystick_t441 * ___joystickLeft_14;
	// Joystick PlayerMoveController::joystickRight
	Joystick_t441 * ___joystickRight_15;
	// UnityEngine.Transform PlayerMoveController::mainCameraTransform
	Transform_t193 * ___mainCameraTransform_16;
	// UnityEngine.Vector3 PlayerMoveController::cameraVelocity
	Vector3_t202  ___cameraVelocity_17;
	// UnityEngine.Vector3 PlayerMoveController::cameraOffset
	Vector3_t202  ___cameraOffset_18;
	// UnityEngine.Vector3 PlayerMoveController::initOffsetToPlayer
	Vector3_t202  ___initOffsetToPlayer_19;
	// UnityEngine.Vector3 PlayerMoveController::cursorScreenPosition
	Vector3_t202  ___cursorScreenPosition_20;
	// UnityEngine.Plane PlayerMoveController::playerMovementPlane
	Plane_t444  ___playerMovementPlane_21;
	// UnityEngine.GameObject PlayerMoveController::joystickRightGO
	GameObject_t154 * ___joystickRightGO_22;
	// UnityEngine.Quaternion PlayerMoveController::screenMovementSpace
	Quaternion_t427  ___screenMovementSpace_23;
	// UnityEngine.Vector3 PlayerMoveController::screenMovementForward
	Vector3_t202  ___screenMovementForward_24;
	// UnityEngine.Vector3 PlayerMoveController::screenMovementRight
	Vector3_t202  ___screenMovementRight_25;
};
