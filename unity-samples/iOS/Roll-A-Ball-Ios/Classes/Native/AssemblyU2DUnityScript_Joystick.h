#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Joystick[]
struct JoystickU5BU5D_t392;
// UnityEngine.GUITexture
struct GUITexture_t397;
// Boundary
struct Boundary_t394;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// Joystick
struct  Joystick_t395  : public MonoBehaviour_t2
{
	// System.Boolean Joystick::touchPad
	bool ___touchPad_5;
	// UnityEngine.Rect Joystick::touchZone
	Rect_t396  ___touchZone_6;
	// System.Single Joystick::deadZone
	float ___deadZone_7;
	// System.Boolean Joystick::normalize
	bool ___normalize_8;
	// UnityEngine.Vector2 Joystick::position
	Vector2_t231  ___position_9;
	// System.Int32 Joystick::tapCount
	int32_t ___tapCount_10;
	// System.Int32 Joystick::lastFingerId
	int32_t ___lastFingerId_11;
	// System.Single Joystick::tapTimeWindow
	float ___tapTimeWindow_12;
	// UnityEngine.Vector2 Joystick::fingerDownPos
	Vector2_t231  ___fingerDownPos_13;
	// System.Single Joystick::fingerDownTime
	float ___fingerDownTime_14;
	// System.Single Joystick::firstDeltaTime
	float ___firstDeltaTime_15;
	// UnityEngine.GUITexture Joystick::gui
	GUITexture_t397 * ___gui_16;
	// UnityEngine.Rect Joystick::defaultRect
	Rect_t396  ___defaultRect_17;
	// Boundary Joystick::guiBoundary
	Boundary_t394 * ___guiBoundary_18;
	// UnityEngine.Vector2 Joystick::guiTouchOffset
	Vector2_t231  ___guiTouchOffset_19;
	// UnityEngine.Vector2 Joystick::guiCenter
	Vector2_t231  ___guiCenter_20;
};
struct Joystick_t395_StaticFields{
	// Joystick[] Joystick::joysticks
	JoystickU5BU5D_t392* ___joysticks_2;
	// System.Boolean Joystick::enumeratedJoysticks
	bool ___enumeratedJoysticks_3;
	// System.Single Joystick::tapTimeDelta
	float ___tapTimeDelta_4;
};
