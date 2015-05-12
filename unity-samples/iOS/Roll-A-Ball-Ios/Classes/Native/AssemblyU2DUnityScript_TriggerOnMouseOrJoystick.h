#pragma once
#include <stdint.h>
// SignalSender
struct SignalSender_t392;
// Joystick[]
struct JoystickU5BU5D_t424;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// TriggerOnMouseOrJoystick
struct TriggerOnMouseOrJoystick_t425  : public MonoBehaviour_t2
{
	// SignalSender TriggerOnMouseOrJoystick::mouseDownSignals
	SignalSender_t392 * ___mouseDownSignals_2;
	// SignalSender TriggerOnMouseOrJoystick::mouseUpSignals
	SignalSender_t392 * ___mouseUpSignals_3;
	// System.Boolean TriggerOnMouseOrJoystick::state
	bool ___state_4;
	// Joystick[] TriggerOnMouseOrJoystick::joysticks
	JoystickU5BU5D_t424* ___joysticks_5;
};
