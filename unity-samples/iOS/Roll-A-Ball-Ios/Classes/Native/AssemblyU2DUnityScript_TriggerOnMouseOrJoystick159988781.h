#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SignalSender
struct SignalSender_t3492948765;
// Joystick[]
struct JoystickU5BU5D_t642532789;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TriggerOnMouseOrJoystick
struct  TriggerOnMouseOrJoystick_t159988781  : public MonoBehaviour_t3012272455
{
public:
	// SignalSender TriggerOnMouseOrJoystick::mouseDownSignals
	SignalSender_t3492948765 * ___mouseDownSignals_2;
	// SignalSender TriggerOnMouseOrJoystick::mouseUpSignals
	SignalSender_t3492948765 * ___mouseUpSignals_3;
	// System.Boolean TriggerOnMouseOrJoystick::state
	bool ___state_4;
	// Joystick[] TriggerOnMouseOrJoystick::joysticks
	JoystickU5BU5D_t642532789* ___joysticks_5;

public:
	inline static int32_t get_offset_of_mouseDownSignals_2() { return static_cast<int32_t>(offsetof(TriggerOnMouseOrJoystick_t159988781, ___mouseDownSignals_2)); }
	inline SignalSender_t3492948765 * get_mouseDownSignals_2() const { return ___mouseDownSignals_2; }
	inline SignalSender_t3492948765 ** get_address_of_mouseDownSignals_2() { return &___mouseDownSignals_2; }
	inline void set_mouseDownSignals_2(SignalSender_t3492948765 * value)
	{
		___mouseDownSignals_2 = value;
		Il2CppCodeGenWriteBarrier(&___mouseDownSignals_2, value);
	}

	inline static int32_t get_offset_of_mouseUpSignals_3() { return static_cast<int32_t>(offsetof(TriggerOnMouseOrJoystick_t159988781, ___mouseUpSignals_3)); }
	inline SignalSender_t3492948765 * get_mouseUpSignals_3() const { return ___mouseUpSignals_3; }
	inline SignalSender_t3492948765 ** get_address_of_mouseUpSignals_3() { return &___mouseUpSignals_3; }
	inline void set_mouseUpSignals_3(SignalSender_t3492948765 * value)
	{
		___mouseUpSignals_3 = value;
		Il2CppCodeGenWriteBarrier(&___mouseUpSignals_3, value);
	}

	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(TriggerOnMouseOrJoystick_t159988781, ___state_4)); }
	inline bool get_state_4() const { return ___state_4; }
	inline bool* get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(bool value)
	{
		___state_4 = value;
	}

	inline static int32_t get_offset_of_joysticks_5() { return static_cast<int32_t>(offsetof(TriggerOnMouseOrJoystick_t159988781, ___joysticks_5)); }
	inline JoystickU5BU5D_t642532789* get_joysticks_5() const { return ___joysticks_5; }
	inline JoystickU5BU5D_t642532789** get_address_of_joysticks_5() { return &___joysticks_5; }
	inline void set_joysticks_5(JoystickU5BU5D_t642532789* value)
	{
		___joysticks_5 = value;
		Il2CppCodeGenWriteBarrier(&___joysticks_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
