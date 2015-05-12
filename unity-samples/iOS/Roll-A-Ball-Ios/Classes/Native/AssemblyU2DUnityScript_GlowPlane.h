#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t179;
// UnityEngine.Material
struct Material_t401;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// GlowPlane
struct GlowPlane_t380  : public MonoBehaviour_t2
{
	// UnityEngine.Transform GlowPlane::playerTransform
	Transform_t179 * ___playerTransform_2;
	// UnityEngine.Vector3 GlowPlane::pos
	Vector3_t188  ___pos_3;
	// UnityEngine.Vector3 GlowPlane::scale
	Vector3_t188  ___scale_4;
	// System.Single GlowPlane::minGlow
	float ___minGlow_5;
	// System.Single GlowPlane::maxGlow
	float ___maxGlow_6;
	// UnityEngine.Color GlowPlane::glowColor
	Color_t341  ___glowColor_7;
	// UnityEngine.Material GlowPlane::mat
	Material_t401 * ___mat_8;
};
