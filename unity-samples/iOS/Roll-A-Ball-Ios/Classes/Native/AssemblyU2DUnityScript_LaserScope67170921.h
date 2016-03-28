#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.LineRenderer
struct LineRenderer_t305781060;
// PerFrameRaycast
struct PerFrameRaycast_t448786905;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LaserScope
struct  LaserScope_t67170921  : public MonoBehaviour_t3012272455
{
public:
	// System.Single LaserScope::scrollSpeed
	float ___scrollSpeed_2;
	// System.Single LaserScope::pulseSpeed
	float ___pulseSpeed_3;
	// System.Single LaserScope::noiseSize
	float ___noiseSize_4;
	// System.Single LaserScope::maxWidth
	float ___maxWidth_5;
	// System.Single LaserScope::minWidth
	float ___minWidth_6;
	// UnityEngine.GameObject LaserScope::pointer
	GameObject_t4012695102 * ___pointer_7;
	// UnityEngine.LineRenderer LaserScope::lRenderer
	LineRenderer_t305781060 * ___lRenderer_8;
	// System.Single LaserScope::aniTime
	float ___aniTime_9;
	// System.Single LaserScope::aniDir
	float ___aniDir_10;
	// PerFrameRaycast LaserScope::raycast
	PerFrameRaycast_t448786905 * ___raycast_11;

public:
	inline static int32_t get_offset_of_scrollSpeed_2() { return static_cast<int32_t>(offsetof(LaserScope_t67170921, ___scrollSpeed_2)); }
	inline float get_scrollSpeed_2() const { return ___scrollSpeed_2; }
	inline float* get_address_of_scrollSpeed_2() { return &___scrollSpeed_2; }
	inline void set_scrollSpeed_2(float value)
	{
		___scrollSpeed_2 = value;
	}

	inline static int32_t get_offset_of_pulseSpeed_3() { return static_cast<int32_t>(offsetof(LaserScope_t67170921, ___pulseSpeed_3)); }
	inline float get_pulseSpeed_3() const { return ___pulseSpeed_3; }
	inline float* get_address_of_pulseSpeed_3() { return &___pulseSpeed_3; }
	inline void set_pulseSpeed_3(float value)
	{
		___pulseSpeed_3 = value;
	}

	inline static int32_t get_offset_of_noiseSize_4() { return static_cast<int32_t>(offsetof(LaserScope_t67170921, ___noiseSize_4)); }
	inline float get_noiseSize_4() const { return ___noiseSize_4; }
	inline float* get_address_of_noiseSize_4() { return &___noiseSize_4; }
	inline void set_noiseSize_4(float value)
	{
		___noiseSize_4 = value;
	}

	inline static int32_t get_offset_of_maxWidth_5() { return static_cast<int32_t>(offsetof(LaserScope_t67170921, ___maxWidth_5)); }
	inline float get_maxWidth_5() const { return ___maxWidth_5; }
	inline float* get_address_of_maxWidth_5() { return &___maxWidth_5; }
	inline void set_maxWidth_5(float value)
	{
		___maxWidth_5 = value;
	}

	inline static int32_t get_offset_of_minWidth_6() { return static_cast<int32_t>(offsetof(LaserScope_t67170921, ___minWidth_6)); }
	inline float get_minWidth_6() const { return ___minWidth_6; }
	inline float* get_address_of_minWidth_6() { return &___minWidth_6; }
	inline void set_minWidth_6(float value)
	{
		___minWidth_6 = value;
	}

	inline static int32_t get_offset_of_pointer_7() { return static_cast<int32_t>(offsetof(LaserScope_t67170921, ___pointer_7)); }
	inline GameObject_t4012695102 * get_pointer_7() const { return ___pointer_7; }
	inline GameObject_t4012695102 ** get_address_of_pointer_7() { return &___pointer_7; }
	inline void set_pointer_7(GameObject_t4012695102 * value)
	{
		___pointer_7 = value;
		Il2CppCodeGenWriteBarrier(&___pointer_7, value);
	}

	inline static int32_t get_offset_of_lRenderer_8() { return static_cast<int32_t>(offsetof(LaserScope_t67170921, ___lRenderer_8)); }
	inline LineRenderer_t305781060 * get_lRenderer_8() const { return ___lRenderer_8; }
	inline LineRenderer_t305781060 ** get_address_of_lRenderer_8() { return &___lRenderer_8; }
	inline void set_lRenderer_8(LineRenderer_t305781060 * value)
	{
		___lRenderer_8 = value;
		Il2CppCodeGenWriteBarrier(&___lRenderer_8, value);
	}

	inline static int32_t get_offset_of_aniTime_9() { return static_cast<int32_t>(offsetof(LaserScope_t67170921, ___aniTime_9)); }
	inline float get_aniTime_9() const { return ___aniTime_9; }
	inline float* get_address_of_aniTime_9() { return &___aniTime_9; }
	inline void set_aniTime_9(float value)
	{
		___aniTime_9 = value;
	}

	inline static int32_t get_offset_of_aniDir_10() { return static_cast<int32_t>(offsetof(LaserScope_t67170921, ___aniDir_10)); }
	inline float get_aniDir_10() const { return ___aniDir_10; }
	inline float* get_address_of_aniDir_10() { return &___aniDir_10; }
	inline void set_aniDir_10(float value)
	{
		___aniDir_10 = value;
	}

	inline static int32_t get_offset_of_raycast_11() { return static_cast<int32_t>(offsetof(LaserScope_t67170921, ___raycast_11)); }
	inline PerFrameRaycast_t448786905 * get_raycast_11() const { return ___raycast_11; }
	inline PerFrameRaycast_t448786905 ** get_address_of_raycast_11() { return &___raycast_11; }
	inline void set_raycast_11(PerFrameRaycast_t448786905 * value)
	{
		___raycast_11 = value;
		Il2CppCodeGenWriteBarrier(&___raycast_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
