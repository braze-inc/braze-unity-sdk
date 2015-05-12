#pragma once
#include <stdint.h>
// SignalSender
struct SignalSender_t404;
// Joystick[]
struct JoystickU5BU5D_t436;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TriggerOnMouseOrJoystick
struct TriggerOnMouseOrJoystick_t437  : public MonoBehaviour_t2
{
	// SignalSender TriggerOnMouseOrJoystick::mouseDownSignals
	SignalSender_t404 * ___mouseDownSignals_2;
	// SignalSender TriggerOnMouseOrJoystick::mouseUpSignals
	SignalSender_t404 * ___mouseUpSignals_3;
	// System.Boolean TriggerOnMouseOrJoystick::state
	bool ___state_4;
	// Joystick[] TriggerOnMouseOrJoystick::joysticks
	JoystickU5BU5D_t436* ___joysticks_5;
};
