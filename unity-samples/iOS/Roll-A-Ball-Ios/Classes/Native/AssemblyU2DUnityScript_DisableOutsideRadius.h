#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t141;
// UnityEngine.SphereCollider
struct SphereCollider_t344;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// DisableOutsideRadius
struct  DisableOutsideRadius_t343  : public MonoBehaviour_t2
{
	// UnityEngine.GameObject DisableOutsideRadius::target
	GameObject_t141 * ___target_2;
	// UnityEngine.SphereCollider DisableOutsideRadius::sphereCollider
	SphereCollider_t344 * ___sphereCollider_3;
	// System.Single DisableOutsideRadius::activeRadius
	float ___activeRadius_4;
};
