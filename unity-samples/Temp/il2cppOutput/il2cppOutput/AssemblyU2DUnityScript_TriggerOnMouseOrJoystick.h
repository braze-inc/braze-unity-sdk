#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SignalSender
struct SignalSender_t361;
// Joystick[]
struct JoystickU5BU5D_t392;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// TriggerOnMouseOrJoystick
struct  TriggerOnMouseOrJoystick_t391  : public MonoBehaviour_t2
{
	// SignalSender TriggerOnMouseOrJoystick::mouseDownSignals
	SignalSender_t361 * ___mouseDownSignals_2;
	// SignalSender TriggerOnMouseOrJoystick::mouseUpSignals
	SignalSender_t361 * ___mouseUpSignals_3;
	// System.Boolean TriggerOnMouseOrJoystick::state
	bool ___state_4;
	// Joystick[] TriggerOnMouseOrJoystick::joysticks
	JoystickU5BU5D_t392* ___joysticks_5;
};
