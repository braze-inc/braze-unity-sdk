#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t258;
// UnityEngine.Material
struct Material_t370;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Color.h"

// GlowPlane
struct  GlowPlane_t350  : public MonoBehaviour_t2
{
	// UnityEngine.Transform GlowPlane::playerTransform
	Transform_t258 * ___playerTransform_2;
	// UnityEngine.Vector3 GlowPlane::pos
	Vector3_t259  ___pos_3;
	// UnityEngine.Vector3 GlowPlane::scale
	Vector3_t259  ___scale_4;
	// System.Single GlowPlane::minGlow
	float ___minGlow_5;
	// System.Single GlowPlane::maxGlow
	float ___maxGlow_6;
	// UnityEngine.Color GlowPlane::glowColor
	Color_t65  ___glowColor_7;
	// UnityEngine.Material GlowPlane::mat
	Material_t370 * ___mat_8;
};
