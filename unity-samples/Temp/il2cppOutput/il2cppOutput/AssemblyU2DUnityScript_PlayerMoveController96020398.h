#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MovementMotor
struct MovementMotor_t3089009894;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Camera
struct Camera_t3533968274;
// Joystick
struct Joystick_t3421498716;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Plane1600081545.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerMoveController
struct  PlayerMoveController_t96020398  : public MonoBehaviour_t3012272455
{
public:
	// MovementMotor PlayerMoveController::motor
	MovementMotor_t3089009894 * ___motor_2;
	// UnityEngine.Transform PlayerMoveController::character
	Transform_t284553113 * ___character_3;
	// UnityEngine.GameObject PlayerMoveController::cursorPrefab
	GameObject_t4012695102 * ___cursorPrefab_4;
	// UnityEngine.GameObject PlayerMoveController::joystickPrefab
	GameObject_t4012695102 * ___joystickPrefab_5;
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
	Camera_t3533968274 * ___mainCamera_12;
	// UnityEngine.Transform PlayerMoveController::cursorObject
	Transform_t284553113 * ___cursorObject_13;
	// Joystick PlayerMoveController::joystickLeft
	Joystick_t3421498716 * ___joystickLeft_14;
	// Joystick PlayerMoveController::joystickRight
	Joystick_t3421498716 * ___joystickRight_15;
	// UnityEngine.Transform PlayerMoveController::mainCameraTransform
	Transform_t284553113 * ___mainCameraTransform_16;
	// UnityEngine.Vector3 PlayerMoveController::cameraVelocity
	Vector3_t3525329789  ___cameraVelocity_17;
	// UnityEngine.Vector3 PlayerMoveController::cameraOffset
	Vector3_t3525329789  ___cameraOffset_18;
	// UnityEngine.Vector3 PlayerMoveController::initOffsetToPlayer
	Vector3_t3525329789  ___initOffsetToPlayer_19;
	// UnityEngine.Vector3 PlayerMoveController::cursorScreenPosition
	Vector3_t3525329789  ___cursorScreenPosition_20;
	// UnityEngine.Plane PlayerMoveController::playerMovementPlane
	Plane_t1600081545  ___playerMovementPlane_21;
	// UnityEngine.GameObject PlayerMoveController::joystickRightGO
	GameObject_t4012695102 * ___joystickRightGO_22;
	// UnityEngine.Quaternion PlayerMoveController::screenMovementSpace
	Quaternion_t1891715979  ___screenMovementSpace_23;
	// UnityEngine.Vector3 PlayerMoveController::screenMovementForward
	Vector3_t3525329789  ___screenMovementForward_24;
	// UnityEngine.Vector3 PlayerMoveController::screenMovementRight
	Vector3_t3525329789  ___screenMovementRight_25;

public:
	inline static int32_t get_offset_of_motor_2() { return static_cast<int32_t>(offsetof(PlayerMoveController_t96020398, ___motor_2)); }
	inline MovementMotor_t3089009894 * get_motor_2() const { return ___motor_2; }
	inline MovementMotor_t3089009894 ** get_address_of_motor_2() { return &___motor_2; }
	inline void set_motor_2(MovementMotor_t3089009894 * value)
	{
		___motor_2 = value;
		Il2CppCodeGenWriteBarrier(&___motor_2, value);
	}

	inline static int32_t get_offset_of_character_3() { return static_cast<int32_t>(offsetof(PlayerMoveController_t96020398, ___character_3)); }
	inline Transform_t284553113 * get_character_3() const { return ___character_3; }
	inline Transform_t284553113 ** get_address_of_character_3() { return &___character_3; }
	inline void set_character_3(Transform_t284553113 * value)
	{
		___character_3 = value;
		Il2CppCodeGenWriteBarrier(&___character_3, value);
	}

	inline static int32_t get_offset_of_cursorPrefab_4() { return static_cast<int32_t>(offsetof(PlayerMoveController_t96020398, ___cursorPrefab_4)); }
	inline GameObject_t4012695102 * get_cursorPrefab_4() const { return ___cursorPrefab_4; }
	inline GameObject_t4012695102 ** get_address_of_cursorPrefab_4() { return &___cursorPrefab_4; }
	inline void set_cursorPrefab_4(GameObject_t4012695102 * value)
	{
		___cursorPrefab_4 = value;
		Il2CppCodeGenWriteBarrier(&___cursorPrefab_4, value);
	}

	inline static int32_t get_offset_of_joystickPrefab_5() { return static_cast<int32_t>(offsetof(PlayerMoveController_t96020398, ___joystickPrefab_5)); }
	inline GameObject_t4012695102 * get_joystickPrefab_5() const { return ___joystickPrefab_5; }
	inline GameObject_t4012695102 ** get_address_of_joystickPrefab_5() { return &___joystickPrefab_5; }
	inline void set_joystickPrefab_5(GameObject_t4012695102 * value)
	{
		___joystickPrefab_5 = value;
		Il2CppCodeGenWriteBarrier(&___joystickPrefab_5, value);
	}

	inline static int32_t get_offset_of_cameraSmoothing_6() { return static_cast<int32_t>(offsetof(PlayerMoveController_t96020398, ___cameraSmoothing_6)); }
	inline float get_cameraSmoothing_6() const { return ___cameraSmoothing_6; }
	inline float* get_address_of_cameraSmoothing_6() { return &___cameraSmoothing_6; }
	inline void set_cameraSmoothing_6(float value)
	{
		___cameraSmoothing_6 = value;
	}

	inline static int32_t get_offset_of_cameraPreview_7() { return static_cast<int32_t>(offsetof(PlayerMoveController_t96020398, ___cameraPreview_7)); }
	inline float get_cameraPreview_7() const { return ___cameraPreview_7; }
	inline float* get_address_of_cameraPreview_7() { return &___cameraPreview_7; }
	inline void set_cameraPreview_7(float value)
	{
		___cameraPreview_7 = value;
	}

	inline static int32_t get_offset_of_cursorPlaneHeight_8() { return static_cast<int32_t>(offsetof(PlayerMoveController_t96020398, ___cursorPlaneHeight_8)); }
	inline float get_cursorPlaneHeight_8() const { return ___cursorPlaneHeight_8; }
	inline float* get_address_of_cursorPlaneHeight_8() { return &___cursorPlaneHeight_8; }
	inline void set_cursorPlaneHeight_8(float value)
	{
		___cursorPlaneHeight_8 = value;
	}

	inline static int32_t get_offset_of_cursorFacingCamera_9() { return static_cast<int32_t>(offsetof(PlayerMoveController_t96020398, ___cursorFacingCamera_9)); }
	inline float get_cursorFacingCamera_9() const { return ___cursorFacingCamera_9; }
	inline float* get_address_of_cursorFacingCamera_9() { return &___cursorFacingCamera_9; }
	inline void set_cursorFacingCamera_9(float value)
	{
		___cursorFacingCamera_9 = value;
	}

	inline static int32_t get_offset_of_cursorSmallerWithDistance_10() { return static_cast<int32_t>(offsetof(PlayerMoveController_t96020398, ___cursorSmallerWithDistance_10)); }
	inline float get_cursorSmallerWithDistance_10() const { return ___cursorSmallerWithDistance_10; }
	inline float* get_address_of_cursorSmallerWithDistance_10() { return &___cursorSmallerWithDistance_10; }
	inline void set_cursorSmallerWithDistance_10(float value)
	{
		___cursorSmallerWithDistance_10 = value;
	}

	inline static int32_t get_offset_of_cursorSmallerWhenClose_11() { return static_cast<int32_t>(offsetof(PlayerMoveController_t96020398, ___cursorSmallerWhenClose_11)); }
	inline float get_cursorSmallerWhenClose_11() const { return ___cursorSmallerWhenClose_11; }
	inline float* get_address_of_cursorSmallerWhenClose_11() { return &___cursorSmallerWhenClose_11; }
	inline void set_cursorSmallerWhenClose_11(float value)
	{
		___cursorSmallerWhenClose_11 = value;
	}

	inline static int32_t get_offset_of_mainCamera_12() { return static_cast<int32_t>(offsetof(PlayerMoveController_t96020398, ___mainCamera_12)); }
	inline Camera_t3533968274 * get_mainCamera_12() const { return ___mainCamera_12; }
	inline Camera_t3533968274 ** get_address_of_mainCamera_12() { return &___mainCamera_12; }
	inline void set_mainCamera_12(Camera_t3533968274 * value)
	{
		___mainCamera_12 = value;
		Il2CppCodeGenWriteBarrier(&___mainCamera_12, value);
	}

	inline static int32_t get_offset_of_cursorObject_13() { return static_cast<int32_t>(offsetof(PlayerMoveController_t96020398, ___cursorObject_13)); }
	inline Transform_t284553113 * get_cursorObject_13() const { return ___cursorObject_13; }
	inline Transform_t284553113 ** get_address_of_cursorObject_13() { return &___cursorObject_13; }
	inline void set_cursorObject_13(Transform_t284553113 * value)
	{
		___cursorObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___cursorObject_13, value);
	}

	inline static int32_t get_offset_of_joystickLeft_14() { return static_cast<int32_t>(offsetof(PlayerMoveController_t96020398, ___joystickLeft_14)); }
	inline Joystick_t3421498716 * get_joystickLeft_14() const { return ___joystickLeft_14; }
	inline Joystick_t3421498716 ** get_address_of_joystickLeft_14() { return &___joystickLeft_14; }
	inline void set_joystickLeft_14(Joystick_t3421498716 * value)
	{
		___joystickLeft_14 = value;
		Il2CppCodeGenWriteBarrier(&___joystickLeft_14, value);
	}

	inline static int32_t get_offset_of_joystickRight_15() { return static_cast<int32_t>(offsetof(PlayerMoveController_t96020398, ___joystickRight_15)); }
	inline Joystick_t3421498716 * get_joystickRight_15() const { return ___joystickRight_15; }
	inline Joystick_t3421498716 ** get_address_of_joystickRight_15() { return &___joystickRight_15; }
	inline void set_joystickRight_15(Joystick_t3421498716 * value)
	{
		___joystickRight_15 = value;
		Il2CppCodeGenWriteBarrier(&___joystickRight_15, value);
	}

	inline static int32_t get_offset_of_mainCameraTransform_16() { return static_cast<int32_t>(offsetof(PlayerMoveController_t96020398, ___mainCameraTransform_16)); }
	inline Transform_t284553113 * get_mainCameraTransform_16() const { return ___mainCameraTransform_16; }
	inline Transform_t284553113 ** get_address_of_mainCameraTransform_16() { return &___mainCameraTransform_16; }
	inline void set_mainCameraTransform_16(Transform_t284553113 * value)
	{
		___mainCameraTransform_16 = value;
		Il2CppCodeGenWriteBarrier(&___mainCameraTransform_16, value);
	}

	inline static int32_t get_offset_of_cameraVelocity_17() { return static_cast<int32_t>(offsetof(PlayerMoveController_t96020398, ___cameraVelocity_17)); }
	inline Vector3_t3525329789  get_cameraVelocity_17() const { return ___cameraVelocity_17; }
	inline Vector3_t3525329789 * get_address_of_cameraVelocity_17() { return &___cameraVelocity_17; }
	inline void set_cameraVelocity_17(Vector3_t3525329789  value)
	{
		___cameraVelocity_17 = value;
	}

	inline static int32_t get_offset_of_cameraOffset_18() { return static_cast<int32_t>(offsetof(PlayerMoveController_t96020398, ___cameraOffset_18)); }
	inline Vector3_t3525329789  get_cameraOffset_18() const { return ___cameraOffset_18; }
	inline Vector3_t3525329789 * get_address_of_cameraOffset_18() { return &___cameraOffset_18; }
	inline void set_cameraOffset_18(Vector3_t3525329789  value)
	{
		___cameraOffset_18 = value;
	}

	inline static int32_t get_offset_of_initOffsetToPlayer_19() { return static_cast<int32_t>(offsetof(PlayerMoveController_t96020398, ___initOffsetToPlayer_19)); }
	inline Vector3_t3525329789  get_initOffsetToPlayer_19() const { return ___initOffsetToPlayer_19; }
	inline Vector3_t3525329789 * get_address_of_initOffsetToPlayer_19() { return &___initOffsetToPlayer_19; }
	inline void set_initOffsetToPlayer_19(Vector3_t3525329789  value)
	{
		___initOffsetToPlayer_19 = value;
	}

	inline static int32_t get_offset_of_cursorScreenPosition_20() { return static_cast<int32_t>(offsetof(PlayerMoveController_t96020398, ___cursorScreenPosition_20)); }
	inline Vector3_t3525329789  get_cursorScreenPosition_20() const { return ___cursorScreenPosition_20; }
	inline Vector3_t3525329789 * get_address_of_cursorScreenPosition_20() { return &___cursorScreenPosition_20; }
	inline void set_cursorScreenPosition_20(Vector3_t3525329789  value)
	{
		___cursorScreenPosition_20 = value;
	}

	inline static int32_t get_offset_of_playerMovementPlane_21() { return static_cast<int32_t>(offsetof(PlayerMoveController_t96020398, ___playerMovementPlane_21)); }
	inline Plane_t1600081545  get_playerMovementPlane_21() const { return ___playerMovementPlane_21; }
	inline Plane_t1600081545 * get_address_of_playerMovementPlane_21() { return &___playerMovementPlane_21; }
	inline void set_playerMovementPlane_21(Plane_t1600081545  value)
	{
		___playerMovementPlane_21 = value;
	}

	inline static int32_t get_offset_of_joystickRightGO_22() { return static_cast<int32_t>(offsetof(PlayerMoveController_t96020398, ___joystickRightGO_22)); }
	inline GameObject_t4012695102 * get_joystickRightGO_22() const { return ___joystickRightGO_22; }
	inline GameObject_t4012695102 ** get_address_of_joystickRightGO_22() { return &___joystickRightGO_22; }
	inline void set_joystickRightGO_22(GameObject_t4012695102 * value)
	{
		___joystickRightGO_22 = value;
		Il2CppCodeGenWriteBarrier(&___joystickRightGO_22, value);
	}

	inline static int32_t get_offset_of_screenMovementSpace_23() { return static_cast<int32_t>(offsetof(PlayerMoveController_t96020398, ___screenMovementSpace_23)); }
	inline Quaternion_t1891715979  get_screenMovementSpace_23() const { return ___screenMovementSpace_23; }
	inline Quaternion_t1891715979 * get_address_of_screenMovementSpace_23() { return &___screenMovementSpace_23; }
	inline void set_screenMovementSpace_23(Quaternion_t1891715979  value)
	{
		___screenMovementSpace_23 = value;
	}

	inline static int32_t get_offset_of_screenMovementForward_24() { return static_cast<int32_t>(offsetof(PlayerMoveController_t96020398, ___screenMovementForward_24)); }
	inline Vector3_t3525329789  get_screenMovementForward_24() const { return ___screenMovementForward_24; }
	inline Vector3_t3525329789 * get_address_of_screenMovementForward_24() { return &___screenMovementForward_24; }
	inline void set_screenMovementForward_24(Vector3_t3525329789  value)
	{
		___screenMovementForward_24 = value;
	}

	inline static int32_t get_offset_of_screenMovementRight_25() { return static_cast<int32_t>(offsetof(PlayerMoveController_t96020398, ___screenMovementRight_25)); }
	inline Vector3_t3525329789  get_screenMovementRight_25() const { return ___screenMovementRight_25; }
	inline Vector3_t3525329789 * get_address_of_screenMovementRight_25() { return &___screenMovementRight_25; }
	inline void set_screenMovementRight_25(Vector3_t3525329789  value)
	{
		___screenMovementRight_25 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
