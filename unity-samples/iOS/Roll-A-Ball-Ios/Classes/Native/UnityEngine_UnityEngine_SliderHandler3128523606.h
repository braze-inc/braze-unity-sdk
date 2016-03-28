#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUIStyle
struct GUIStyle_t1006925219;

#include "mscorlib_System_ValueType4014882752.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SliderHandler
struct  SliderHandler_t3128523606 
{
public:
	// UnityEngine.Rect UnityEngine.SliderHandler::position
	Rect_t1525428817  ___position_0;
	// System.Single UnityEngine.SliderHandler::currentValue
	float ___currentValue_1;
	// System.Single UnityEngine.SliderHandler::size
	float ___size_2;
	// System.Single UnityEngine.SliderHandler::start
	float ___start_3;
	// System.Single UnityEngine.SliderHandler::end
	float ___end_4;
	// UnityEngine.GUIStyle UnityEngine.SliderHandler::slider
	GUIStyle_t1006925219 * ___slider_5;
	// UnityEngine.GUIStyle UnityEngine.SliderHandler::thumb
	GUIStyle_t1006925219 * ___thumb_6;
	// System.Boolean UnityEngine.SliderHandler::horiz
	bool ___horiz_7;
	// System.Int32 UnityEngine.SliderHandler::id
	int32_t ___id_8;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(SliderHandler_t3128523606, ___position_0)); }
	inline Rect_t1525428817  get_position_0() const { return ___position_0; }
	inline Rect_t1525428817 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Rect_t1525428817  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_currentValue_1() { return static_cast<int32_t>(offsetof(SliderHandler_t3128523606, ___currentValue_1)); }
	inline float get_currentValue_1() const { return ___currentValue_1; }
	inline float* get_address_of_currentValue_1() { return &___currentValue_1; }
	inline void set_currentValue_1(float value)
	{
		___currentValue_1 = value;
	}

	inline static int32_t get_offset_of_size_2() { return static_cast<int32_t>(offsetof(SliderHandler_t3128523606, ___size_2)); }
	inline float get_size_2() const { return ___size_2; }
	inline float* get_address_of_size_2() { return &___size_2; }
	inline void set_size_2(float value)
	{
		___size_2 = value;
	}

	inline static int32_t get_offset_of_start_3() { return static_cast<int32_t>(offsetof(SliderHandler_t3128523606, ___start_3)); }
	inline float get_start_3() const { return ___start_3; }
	inline float* get_address_of_start_3() { return &___start_3; }
	inline void set_start_3(float value)
	{
		___start_3 = value;
	}

	inline static int32_t get_offset_of_end_4() { return static_cast<int32_t>(offsetof(SliderHandler_t3128523606, ___end_4)); }
	inline float get_end_4() const { return ___end_4; }
	inline float* get_address_of_end_4() { return &___end_4; }
	inline void set_end_4(float value)
	{
		___end_4 = value;
	}

	inline static int32_t get_offset_of_slider_5() { return static_cast<int32_t>(offsetof(SliderHandler_t3128523606, ___slider_5)); }
	inline GUIStyle_t1006925219 * get_slider_5() const { return ___slider_5; }
	inline GUIStyle_t1006925219 ** get_address_of_slider_5() { return &___slider_5; }
	inline void set_slider_5(GUIStyle_t1006925219 * value)
	{
		___slider_5 = value;
		Il2CppCodeGenWriteBarrier(&___slider_5, value);
	}

	inline static int32_t get_offset_of_thumb_6() { return static_cast<int32_t>(offsetof(SliderHandler_t3128523606, ___thumb_6)); }
	inline GUIStyle_t1006925219 * get_thumb_6() const { return ___thumb_6; }
	inline GUIStyle_t1006925219 ** get_address_of_thumb_6() { return &___thumb_6; }
	inline void set_thumb_6(GUIStyle_t1006925219 * value)
	{
		___thumb_6 = value;
		Il2CppCodeGenWriteBarrier(&___thumb_6, value);
	}

	inline static int32_t get_offset_of_horiz_7() { return static_cast<int32_t>(offsetof(SliderHandler_t3128523606, ___horiz_7)); }
	inline bool get_horiz_7() const { return ___horiz_7; }
	inline bool* get_address_of_horiz_7() { return &___horiz_7; }
	inline void set_horiz_7(bool value)
	{
		___horiz_7 = value;
	}

	inline static int32_t get_offset_of_id_8() { return static_cast<int32_t>(offsetof(SliderHandler_t3128523606, ___id_8)); }
	inline int32_t get_id_8() const { return ___id_8; }
	inline int32_t* get_address_of_id_8() { return &___id_8; }
	inline void set_id_8(int32_t value)
	{
		___id_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
