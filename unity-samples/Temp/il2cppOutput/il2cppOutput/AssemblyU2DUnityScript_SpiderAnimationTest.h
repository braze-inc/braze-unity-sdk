#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t359;
// UnityEngine.AnimationClip
struct AnimationClip_t360;
// UnityEngine.Transform
struct Transform_t258;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// SpiderAnimationTest
struct  SpiderAnimationTest_t368  : public MonoBehaviour_t2
{
	// UnityEngine.Rigidbody SpiderAnimationTest::rigid
	Rigidbody_t359 * ___rigid_2;
	// UnityEngine.AnimationClip SpiderAnimationTest::forwardAnim
	AnimationClip_t360 * ___forwardAnim_3;
	// UnityEngine.AnimationClip SpiderAnimationTest::backAnim
	AnimationClip_t360 * ___backAnim_4;
	// UnityEngine.AnimationClip SpiderAnimationTest::leftAnim
	AnimationClip_t360 * ___leftAnim_5;
	// UnityEngine.AnimationClip SpiderAnimationTest::rightAnim
	AnimationClip_t360 * ___rightAnim_6;
	// System.Single SpiderAnimationTest::walking
	float ___walking_7;
	// System.Single SpiderAnimationTest::angle
	float ___angle_8;
	// UnityEngine.Transform SpiderAnimationTest::tr
	Transform_t258 * ___tr_9;
};
