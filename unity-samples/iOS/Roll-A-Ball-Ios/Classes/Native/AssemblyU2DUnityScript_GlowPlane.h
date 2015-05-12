#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t193;
// UnityEngine.Material
struct Material_t413;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// GlowPlane
struct GlowPlane_t392  : public MonoBehaviour_t2
{
	// UnityEngine.Transform GlowPlane::playerTransform
	Transform_t193 * ___playerTransform_2;
	// UnityEngine.Vector3 GlowPlane::pos
	Vector3_t202  ___pos_3;
	// UnityEngine.Vector3 GlowPlane::scale
	Vector3_t202  ___scale_4;
	// System.Single GlowPlane::minGlow
	float ___minGlow_5;
	// System.Single GlowPlane::maxGlow
	float ___maxGlow_6;
	// UnityEngine.Color GlowPlane::glowColor
	Color_t12  ___glowColor_7;
	// UnityEngine.Material GlowPlane::mat
	Material_t413 * ___mat_8;
};
