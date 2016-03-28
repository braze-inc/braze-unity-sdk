#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GlowPlaneAngleFade
struct  GlowPlaneAngleFade_t3896513024  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Transform GlowPlaneAngleFade::cameraTransform
	Transform_t284553113 * ___cameraTransform_2;
	// UnityEngine.Color GlowPlaneAngleFade::glowColor
	Color_t1588175760  ___glowColor_3;
	// System.Single GlowPlaneAngleFade::dot
	float ___dot_4;

public:
	inline static int32_t get_offset_of_cameraTransform_2() { return static_cast<int32_t>(offsetof(GlowPlaneAngleFade_t3896513024, ___cameraTransform_2)); }
	inline Transform_t284553113 * get_cameraTransform_2() const { return ___cameraTransform_2; }
	inline Transform_t284553113 ** get_address_of_cameraTransform_2() { return &___cameraTransform_2; }
	inline void set_cameraTransform_2(Transform_t284553113 * value)
	{
		___cameraTransform_2 = value;
		Il2CppCodeGenWriteBarrier(&___cameraTransform_2, value);
	}

	inline static int32_t get_offset_of_glowColor_3() { return static_cast<int32_t>(offsetof(GlowPlaneAngleFade_t3896513024, ___glowColor_3)); }
	inline Color_t1588175760  get_glowColor_3() const { return ___glowColor_3; }
	inline Color_t1588175760 * get_address_of_glowColor_3() { return &___glowColor_3; }
	inline void set_glowColor_3(Color_t1588175760  value)
	{
		___glowColor_3 = value;
	}

	inline static int32_t get_offset_of_dot_4() { return static_cast<int32_t>(offsetof(GlowPlaneAngleFade_t3896513024, ___dot_4)); }
	inline float get_dot_4() const { return ___dot_4; }
	inline float* get_address_of_dot_4() { return &___dot_4; }
	inline void set_dot_4(float value)
	{
		___dot_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
