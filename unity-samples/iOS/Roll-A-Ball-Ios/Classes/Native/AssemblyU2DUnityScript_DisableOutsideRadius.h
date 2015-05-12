#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t140;
// UnityEngine.SphereCollider
struct SphereCollider_t374;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// DisableOutsideRadius
struct DisableOutsideRadius_t375  : public MonoBehaviour_t2
{
	// UnityEngine.GameObject DisableOutsideRadius::target
	GameObject_t140 * ___target_2;
	// UnityEngine.SphereCollider DisableOutsideRadius::sphereCollider
	SphereCollider_t374 * ___sphereCollider_3;
	// System.Single DisableOutsideRadius::activeRadius
	float ___activeRadius_4;
};
