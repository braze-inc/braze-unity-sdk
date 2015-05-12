#pragma once
#include <stdint.h>
// UnityEngine.Rigidbody
struct Rigidbody_t402;
// UnityEngine.AnimationClip
struct AnimationClip_t403;
// UnityEngine.Transform
struct Transform_t193;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// SpiderAnimationTest
struct SpiderAnimationTest_t412  : public MonoBehaviour_t2
{
	// UnityEngine.Rigidbody SpiderAnimationTest::rigid
	Rigidbody_t402 * ___rigid_2;
	// UnityEngine.AnimationClip SpiderAnimationTest::forwardAnim
	AnimationClip_t403 * ___forwardAnim_3;
	// UnityEngine.AnimationClip SpiderAnimationTest::backAnim
	AnimationClip_t403 * ___backAnim_4;
	// UnityEngine.AnimationClip SpiderAnimationTest::leftAnim
	AnimationClip_t403 * ___leftAnim_5;
	// UnityEngine.AnimationClip SpiderAnimationTest::rightAnim
	AnimationClip_t403 * ___rightAnim_6;
	// System.Single SpiderAnimationTest::walking
	float ___walking_7;
	// System.Single SpiderAnimationTest::angle
	float ___angle_8;
	// UnityEngine.Transform SpiderAnimationTest::tr
	Transform_t193 * ___tr_9;
};
