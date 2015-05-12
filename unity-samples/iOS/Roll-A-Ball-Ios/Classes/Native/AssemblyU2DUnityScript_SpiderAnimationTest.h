#pragma once
#include <stdint.h>
// UnityEngine.Rigidbody
struct Rigidbody_t390;
// UnityEngine.AnimationClip
struct AnimationClip_t391;
// UnityEngine.Transform
struct Transform_t179;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SpiderAnimationTest
struct SpiderAnimationTest_t400  : public MonoBehaviour_t2
{
	// UnityEngine.Rigidbody SpiderAnimationTest::rigid
	Rigidbody_t390 * ___rigid_2;
	// UnityEngine.AnimationClip SpiderAnimationTest::forwardAnim
	AnimationClip_t391 * ___forwardAnim_3;
	// UnityEngine.AnimationClip SpiderAnimationTest::backAnim
	AnimationClip_t391 * ___backAnim_4;
	// UnityEngine.AnimationClip SpiderAnimationTest::leftAnim
	AnimationClip_t391 * ___leftAnim_5;
	// UnityEngine.AnimationClip SpiderAnimationTest::rightAnim
	AnimationClip_t391 * ___rightAnim_6;
	// System.Single SpiderAnimationTest::walking
	float ___walking_7;
	// System.Single SpiderAnimationTest::angle
	float ___angle_8;
	// UnityEngine.Transform SpiderAnimationTest::tr
	Transform_t179 * ___tr_9;
};
