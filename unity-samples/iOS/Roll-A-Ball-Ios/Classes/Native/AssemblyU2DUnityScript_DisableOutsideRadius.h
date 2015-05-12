#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t154;
// UnityEngine.SphereCollider
struct SphereCollider_t386;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// DisableOutsideRadius
struct DisableOutsideRadius_t387  : public MonoBehaviour_t2
{
	// UnityEngine.GameObject DisableOutsideRadius::target
	GameObject_t154 * ___target_2;
	// UnityEngine.SphereCollider DisableOutsideRadius::sphereCollider
	SphereCollider_t386 * ___sphereCollider_3;
	// System.Single DisableOutsideRadius::activeRadius
	float ___activeRadius_4;
};
