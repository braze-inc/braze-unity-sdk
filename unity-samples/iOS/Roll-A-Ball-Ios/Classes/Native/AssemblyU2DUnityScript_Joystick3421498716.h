#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Joystick[]
struct JoystickU5BU5D_t642532789;
// UnityEngine.GUITexture
struct GUITexture_t63494093;
// Boundary
struct Boundary_t2244299850;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Joystick
struct  Joystick_t3421498716  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean Joystick::touchPad
	bool ___touchPad_5;
	// UnityEngine.Rect Joystick::touchZone
	Rect_t1525428817  ___touchZone_6;
	// System.Single Joystick::deadZone
	float ___deadZone_7;
	// System.Boolean Joystick::normalize
	bool ___normalize_8;
	// UnityEngine.Vector2 Joystick::position
	Vector2_t3525329788  ___position_9;
	// System.Int32 Joystick::tapCount
	int32_t ___tapCount_10;
	// System.Int32 Joystick::lastFingerId
	int32_t ___lastFingerId_11;
	// System.Single Joystick::tapTimeWindow
	float ___tapTimeWindow_12;
	// UnityEngine.Vector2 Joystick::fingerDownPos
	Vector2_t3525329788  ___fingerDownPos_13;
	// System.Single Joystick::fingerDownTime
	float ___fingerDownTime_14;
	// System.Single Joystick::firstDeltaTime
	float ___firstDeltaTime_15;
	// UnityEngine.GUITexture Joystick::gui
	GUITexture_t63494093 * ___gui_16;
	// UnityEngine.Rect Joystick::defaultRect
	Rect_t1525428817  ___defaultRect_17;
	// Boundary Joystick::guiBoundary
	Boundary_t2244299850 * ___guiBoundary_18;
	// UnityEngine.Vector2 Joystick::guiTouchOffset
	Vector2_t3525329788  ___guiTouchOffset_19;
	// UnityEngine.Vector2 Joystick::guiCenter
	Vector2_t3525329788  ___guiCenter_20;

public:
	inline static int32_t get_offset_of_touchPad_5() { return static_cast<int32_t>(offsetof(Joystick_t3421498716, ___touchPad_5)); }
	inline bool get_touchPad_5() const { return ___touchPad_5; }
	inline bool* get_address_of_touchPad_5() { return &___touchPad_5; }
	inline void set_touchPad_5(bool value)
	{
		___touchPad_5 = value;
	}

	inline static int32_t get_offset_of_touchZone_6() { return static_cast<int32_t>(offsetof(Joystick_t3421498716, ___touchZone_6)); }
	inline Rect_t1525428817  get_touchZone_6() const { return ___touchZone_6; }
	inline Rect_t1525428817 * get_address_of_touchZone_6() { return &___touchZone_6; }
	inline void set_touchZone_6(Rect_t1525428817  value)
	{
		___touchZone_6 = value;
	}

	inline static int32_t get_offset_of_deadZone_7() { return static_cast<int32_t>(offsetof(Joystick_t3421498716, ___deadZone_7)); }
	inline float get_deadZone_7() const { return ___deadZone_7; }
	inline float* get_address_of_deadZone_7() { return &___deadZone_7; }
	inline void set_deadZone_7(float value)
	{
		___deadZone_7 = value;
	}

	inline static int32_t get_offset_of_normalize_8() { return static_cast<int32_t>(offsetof(Joystick_t3421498716, ___normalize_8)); }
	inline bool get_normalize_8() const { return ___normalize_8; }
	inline bool* get_address_of_normalize_8() { return &___normalize_8; }
	inline void set_normalize_8(bool value)
	{
		___normalize_8 = value;
	}

	inline static int32_t get_offset_of_position_9() { return static_cast<int32_t>(offsetof(Joystick_t3421498716, ___position_9)); }
	inline Vector2_t3525329788  get_position_9() const { return ___position_9; }
	inline Vector2_t3525329788 * get_address_of_position_9() { return &___position_9; }
	inline void set_position_9(Vector2_t3525329788  value)
	{
		___position_9 = value;
	}

	inline static int32_t get_offset_of_tapCount_10() { return static_cast<int32_t>(offsetof(Joystick_t3421498716, ___tapCount_10)); }
	inline int32_t get_tapCount_10() const { return ___tapCount_10; }
	inline int32_t* get_address_of_tapCount_10() { return &___tapCount_10; }
	inline void set_tapCount_10(int32_t value)
	{
		___tapCount_10 = value;
	}

	inline static int32_t get_offset_of_lastFingerId_11() { return static_cast<int32_t>(offsetof(Joystick_t3421498716, ___lastFingerId_11)); }
	inline int32_t get_lastFingerId_11() const { return ___lastFingerId_11; }
	inline int32_t* get_address_of_lastFingerId_11() { return &___lastFingerId_11; }
	inline void set_lastFingerId_11(int32_t value)
	{
		___lastFingerId_11 = value;
	}

	inline static int32_t get_offset_of_tapTimeWindow_12() { return static_cast<int32_t>(offsetof(Joystick_t3421498716, ___tapTimeWindow_12)); }
	inline float get_tapTimeWindow_12() const { return ___tapTimeWindow_12; }
	inline float* get_address_of_tapTimeWindow_12() { return &___tapTimeWindow_12; }
	inline void set_tapTimeWindow_12(float value)
	{
		___tapTimeWindow_12 = value;
	}

	inline static int32_t get_offset_of_fingerDownPos_13() { return static_cast<int32_t>(offsetof(Joystick_t3421498716, ___fingerDownPos_13)); }
	inline Vector2_t3525329788  get_fingerDownPos_13() const { return ___fingerDownPos_13; }
	inline Vector2_t3525329788 * get_address_of_fingerDownPos_13() { return &___fingerDownPos_13; }
	inline void set_fingerDownPos_13(Vector2_t3525329788  value)
	{
		___fingerDownPos_13 = value;
	}

	inline static int32_t get_offset_of_fingerDownTime_14() { return static_cast<int32_t>(offsetof(Joystick_t3421498716, ___fingerDownTime_14)); }
	inline float get_fingerDownTime_14() const { return ___fingerDownTime_14; }
	inline float* get_address_of_fingerDownTime_14() { return &___fingerDownTime_14; }
	inline void set_fingerDownTime_14(float value)
	{
		___fingerDownTime_14 = value;
	}

	inline static int32_t get_offset_of_firstDeltaTime_15() { return static_cast<int32_t>(offsetof(Joystick_t3421498716, ___firstDeltaTime_15)); }
	inline float get_firstDeltaTime_15() const { return ___firstDeltaTime_15; }
	inline float* get_address_of_firstDeltaTime_15() { return &___firstDeltaTime_15; }
	inline void set_firstDeltaTime_15(float value)
	{
		___firstDeltaTime_15 = value;
	}

	inline static int32_t get_offset_of_gui_16() { return static_cast<int32_t>(offsetof(Joystick_t3421498716, ___gui_16)); }
	inline GUITexture_t63494093 * get_gui_16() const { return ___gui_16; }
	inline GUITexture_t63494093 ** get_address_of_gui_16() { return &___gui_16; }
	inline void set_gui_16(GUITexture_t63494093 * value)
	{
		___gui_16 = value;
		Il2CppCodeGenWriteBarrier(&___gui_16, value);
	}

	inline static int32_t get_offset_of_defaultRect_17() { return static_cast<int32_t>(offsetof(Joystick_t3421498716, ___defaultRect_17)); }
	inline Rect_t1525428817  get_defaultRect_17() const { return ___defaultRect_17; }
	inline Rect_t1525428817 * get_address_of_defaultRect_17() { return &___defaultRect_17; }
	inline void set_defaultRect_17(Rect_t1525428817  value)
	{
		___defaultRect_17 = value;
	}

	inline static int32_t get_offset_of_guiBoundary_18() { return static_cast<int32_t>(offsetof(Joystick_t3421498716, ___guiBoundary_18)); }
	inline Boundary_t2244299850 * get_guiBoundary_18() const { return ___guiBoundary_18; }
	inline Boundary_t2244299850 ** get_address_of_guiBoundary_18() { return &___guiBoundary_18; }
	inline void set_guiBoundary_18(Boundary_t2244299850 * value)
	{
		___guiBoundary_18 = value;
		Il2CppCodeGenWriteBarrier(&___guiBoundary_18, value);
	}

	inline static int32_t get_offset_of_guiTouchOffset_19() { return static_cast<int32_t>(offsetof(Joystick_t3421498716, ___guiTouchOffset_19)); }
	inline Vector2_t3525329788  get_guiTouchOffset_19() const { return ___guiTouchOffset_19; }
	inline Vector2_t3525329788 * get_address_of_guiTouchOffset_19() { return &___guiTouchOffset_19; }
	inline void set_guiTouchOffset_19(Vector2_t3525329788  value)
	{
		___guiTouchOffset_19 = value;
	}

	inline static int32_t get_offset_of_guiCenter_20() { return static_cast<int32_t>(offsetof(Joystick_t3421498716, ___guiCenter_20)); }
	inline Vector2_t3525329788  get_guiCenter_20() const { return ___guiCenter_20; }
	inline Vector2_t3525329788 * get_address_of_guiCenter_20() { return &___guiCenter_20; }
	inline void set_guiCenter_20(Vector2_t3525329788  value)
	{
		___guiCenter_20 = value;
	}
};

struct Joystick_t3421498716_StaticFields
{
public:
	// Joystick[] Joystick::joysticks
	JoystickU5BU5D_t642532789* ___joysticks_2;
	// System.Boolean Joystick::enumeratedJoysticks
	bool ___enumeratedJoysticks_3;
	// System.Single Joystick::tapTimeDelta
	float ___tapTimeDelta_4;

public:
	inline static int32_t get_offset_of_joysticks_2() { return static_cast<int32_t>(offsetof(Joystick_t3421498716_StaticFields, ___joysticks_2)); }
	inline JoystickU5BU5D_t642532789* get_joysticks_2() const { return ___joysticks_2; }
	inline JoystickU5BU5D_t642532789** get_address_of_joysticks_2() { return &___joysticks_2; }
	inline void set_joysticks_2(JoystickU5BU5D_t642532789* value)
	{
		___joysticks_2 = value;
		Il2CppCodeGenWriteBarrier(&___joysticks_2, value);
	}

	inline static int32_t get_offset_of_enumeratedJoysticks_3() { return static_cast<int32_t>(offsetof(Joystick_t3421498716_StaticFields, ___enumeratedJoysticks_3)); }
	inline bool get_enumeratedJoysticks_3() const { return ___enumeratedJoysticks_3; }
	inline bool* get_address_of_enumeratedJoysticks_3() { return &___enumeratedJoysticks_3; }
	inline void set_enumeratedJoysticks_3(bool value)
	{
		___enumeratedJoysticks_3 = value;
	}

	inline static int32_t get_offset_of_tapTimeDelta_4() { return static_cast<int32_t>(offsetof(Joystick_t3421498716_StaticFields, ___tapTimeDelta_4)); }
	inline float get_tapTimeDelta_4() const { return ___tapTimeDelta_4; }
	inline float* get_address_of_tapTimeDelta_4() { return &___tapTimeDelta_4; }
	inline void set_tapTimeDelta_4(float value)
	{
		___tapTimeDelta_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
