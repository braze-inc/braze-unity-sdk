#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.AnimationClip
struct AnimationClip_t57566497;
// MoveAnimation[]
struct MoveAnimationU5BU5D_t2132259266;
// SignalSender
struct SignalSender_t3492948765;
// MoveAnimation
struct MoveAnimation_t3488672403;
// UnityEngine.Animation
struct Animation_t350396337;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerAnimation
struct  PlayerAnimation_t2714436995  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Rigidbody PlayerAnimation::rigid
	Rigidbody_t1972007546 * ___rigid_2;
	// UnityEngine.Transform PlayerAnimation::rootBone
	Transform_t284553113 * ___rootBone_3;
	// UnityEngine.Transform PlayerAnimation::upperBodyBone
	Transform_t284553113 * ___upperBodyBone_4;
	// System.Single PlayerAnimation::maxIdleSpeed
	float ___maxIdleSpeed_5;
	// System.Single PlayerAnimation::minWalkSpeed
	float ___minWalkSpeed_6;
	// UnityEngine.AnimationClip PlayerAnimation::idle
	AnimationClip_t57566497 * ___idle_7;
	// UnityEngine.AnimationClip PlayerAnimation::turn
	AnimationClip_t57566497 * ___turn_8;
	// UnityEngine.AnimationClip PlayerAnimation::shootAdditive
	AnimationClip_t57566497 * ___shootAdditive_9;
	// MoveAnimation[] PlayerAnimation::moveAnimations
	MoveAnimationU5BU5D_t2132259266* ___moveAnimations_10;
	// SignalSender PlayerAnimation::footstepSignals
	SignalSender_t3492948765 * ___footstepSignals_11;
	// UnityEngine.Transform PlayerAnimation::tr
	Transform_t284553113 * ___tr_12;
	// UnityEngine.Vector3 PlayerAnimation::lastPosition
	Vector3_t3525329789  ___lastPosition_13;
	// UnityEngine.Vector3 PlayerAnimation::velocity
	Vector3_t3525329789  ___velocity_14;
	// UnityEngine.Vector3 PlayerAnimation::localVelocity
	Vector3_t3525329789  ___localVelocity_15;
	// System.Single PlayerAnimation::speed
	float ___speed_16;
	// System.Single PlayerAnimation::angle
	float ___angle_17;
	// System.Single PlayerAnimation::lowerBodyDeltaAngle
	float ___lowerBodyDeltaAngle_18;
	// System.Single PlayerAnimation::idleWeight
	float ___idleWeight_19;
	// UnityEngine.Vector3 PlayerAnimation::lowerBodyForwardTarget
	Vector3_t3525329789  ___lowerBodyForwardTarget_20;
	// UnityEngine.Vector3 PlayerAnimation::lowerBodyForward
	Vector3_t3525329789  ___lowerBodyForward_21;
	// MoveAnimation PlayerAnimation::bestAnimation
	MoveAnimation_t3488672403 * ___bestAnimation_22;
	// System.Single PlayerAnimation::lastFootstepTime
	float ___lastFootstepTime_23;
	// System.Single PlayerAnimation::lastAnimTime
	float ___lastAnimTime_24;
	// UnityEngine.Animation PlayerAnimation::animationComponent
	Animation_t350396337 * ___animationComponent_25;

public:
	inline static int32_t get_offset_of_rigid_2() { return static_cast<int32_t>(offsetof(PlayerAnimation_t2714436995, ___rigid_2)); }
	inline Rigidbody_t1972007546 * get_rigid_2() const { return ___rigid_2; }
	inline Rigidbody_t1972007546 ** get_address_of_rigid_2() { return &___rigid_2; }
	inline void set_rigid_2(Rigidbody_t1972007546 * value)
	{
		___rigid_2 = value;
		Il2CppCodeGenWriteBarrier(&___rigid_2, value);
	}

	inline static int32_t get_offset_of_rootBone_3() { return static_cast<int32_t>(offsetof(PlayerAnimation_t2714436995, ___rootBone_3)); }
	inline Transform_t284553113 * get_rootBone_3() const { return ___rootBone_3; }
	inline Transform_t284553113 ** get_address_of_rootBone_3() { return &___rootBone_3; }
	inline void set_rootBone_3(Transform_t284553113 * value)
	{
		___rootBone_3 = value;
		Il2CppCodeGenWriteBarrier(&___rootBone_3, value);
	}

	inline static int32_t get_offset_of_upperBodyBone_4() { return static_cast<int32_t>(offsetof(PlayerAnimation_t2714436995, ___upperBodyBone_4)); }
	inline Transform_t284553113 * get_upperBodyBone_4() const { return ___upperBodyBone_4; }
	inline Transform_t284553113 ** get_address_of_upperBodyBone_4() { return &___upperBodyBone_4; }
	inline void set_upperBodyBone_4(Transform_t284553113 * value)
	{
		___upperBodyBone_4 = value;
		Il2CppCodeGenWriteBarrier(&___upperBodyBone_4, value);
	}

	inline static int32_t get_offset_of_maxIdleSpeed_5() { return static_cast<int32_t>(offsetof(PlayerAnimation_t2714436995, ___maxIdleSpeed_5)); }
	inline float get_maxIdleSpeed_5() const { return ___maxIdleSpeed_5; }
	inline float* get_address_of_maxIdleSpeed_5() { return &___maxIdleSpeed_5; }
	inline void set_maxIdleSpeed_5(float value)
	{
		___maxIdleSpeed_5 = value;
	}

	inline static int32_t get_offset_of_minWalkSpeed_6() { return static_cast<int32_t>(offsetof(PlayerAnimation_t2714436995, ___minWalkSpeed_6)); }
	inline float get_minWalkSpeed_6() const { return ___minWalkSpeed_6; }
	inline float* get_address_of_minWalkSpeed_6() { return &___minWalkSpeed_6; }
	inline void set_minWalkSpeed_6(float value)
	{
		___minWalkSpeed_6 = value;
	}

	inline static int32_t get_offset_of_idle_7() { return static_cast<int32_t>(offsetof(PlayerAnimation_t2714436995, ___idle_7)); }
	inline AnimationClip_t57566497 * get_idle_7() const { return ___idle_7; }
	inline AnimationClip_t57566497 ** get_address_of_idle_7() { return &___idle_7; }
	inline void set_idle_7(AnimationClip_t57566497 * value)
	{
		___idle_7 = value;
		Il2CppCodeGenWriteBarrier(&___idle_7, value);
	}

	inline static int32_t get_offset_of_turn_8() { return static_cast<int32_t>(offsetof(PlayerAnimation_t2714436995, ___turn_8)); }
	inline AnimationClip_t57566497 * get_turn_8() const { return ___turn_8; }
	inline AnimationClip_t57566497 ** get_address_of_turn_8() { return &___turn_8; }
	inline void set_turn_8(AnimationClip_t57566497 * value)
	{
		___turn_8 = value;
		Il2CppCodeGenWriteBarrier(&___turn_8, value);
	}

	inline static int32_t get_offset_of_shootAdditive_9() { return static_cast<int32_t>(offsetof(PlayerAnimation_t2714436995, ___shootAdditive_9)); }
	inline AnimationClip_t57566497 * get_shootAdditive_9() const { return ___shootAdditive_9; }
	inline AnimationClip_t57566497 ** get_address_of_shootAdditive_9() { return &___shootAdditive_9; }
	inline void set_shootAdditive_9(AnimationClip_t57566497 * value)
	{
		___shootAdditive_9 = value;
		Il2CppCodeGenWriteBarrier(&___shootAdditive_9, value);
	}

	inline static int32_t get_offset_of_moveAnimations_10() { return static_cast<int32_t>(offsetof(PlayerAnimation_t2714436995, ___moveAnimations_10)); }
	inline MoveAnimationU5BU5D_t2132259266* get_moveAnimations_10() const { return ___moveAnimations_10; }
	inline MoveAnimationU5BU5D_t2132259266** get_address_of_moveAnimations_10() { return &___moveAnimations_10; }
	inline void set_moveAnimations_10(MoveAnimationU5BU5D_t2132259266* value)
	{
		___moveAnimations_10 = value;
		Il2CppCodeGenWriteBarrier(&___moveAnimations_10, value);
	}

	inline static int32_t get_offset_of_footstepSignals_11() { return static_cast<int32_t>(offsetof(PlayerAnimation_t2714436995, ___footstepSignals_11)); }
	inline SignalSender_t3492948765 * get_footstepSignals_11() const { return ___footstepSignals_11; }
	inline SignalSender_t3492948765 ** get_address_of_footstepSignals_11() { return &___footstepSignals_11; }
	inline void set_footstepSignals_11(SignalSender_t3492948765 * value)
	{
		___footstepSignals_11 = value;
		Il2CppCodeGenWriteBarrier(&___footstepSignals_11, value);
	}

	inline static int32_t get_offset_of_tr_12() { return static_cast<int32_t>(offsetof(PlayerAnimation_t2714436995, ___tr_12)); }
	inline Transform_t284553113 * get_tr_12() const { return ___tr_12; }
	inline Transform_t284553113 ** get_address_of_tr_12() { return &___tr_12; }
	inline void set_tr_12(Transform_t284553113 * value)
	{
		___tr_12 = value;
		Il2CppCodeGenWriteBarrier(&___tr_12, value);
	}

	inline static int32_t get_offset_of_lastPosition_13() { return static_cast<int32_t>(offsetof(PlayerAnimation_t2714436995, ___lastPosition_13)); }
	inline Vector3_t3525329789  get_lastPosition_13() const { return ___lastPosition_13; }
	inline Vector3_t3525329789 * get_address_of_lastPosition_13() { return &___lastPosition_13; }
	inline void set_lastPosition_13(Vector3_t3525329789  value)
	{
		___lastPosition_13 = value;
	}

	inline static int32_t get_offset_of_velocity_14() { return static_cast<int32_t>(offsetof(PlayerAnimation_t2714436995, ___velocity_14)); }
	inline Vector3_t3525329789  get_velocity_14() const { return ___velocity_14; }
	inline Vector3_t3525329789 * get_address_of_velocity_14() { return &___velocity_14; }
	inline void set_velocity_14(Vector3_t3525329789  value)
	{
		___velocity_14 = value;
	}

	inline static int32_t get_offset_of_localVelocity_15() { return static_cast<int32_t>(offsetof(PlayerAnimation_t2714436995, ___localVelocity_15)); }
	inline Vector3_t3525329789  get_localVelocity_15() const { return ___localVelocity_15; }
	inline Vector3_t3525329789 * get_address_of_localVelocity_15() { return &___localVelocity_15; }
	inline void set_localVelocity_15(Vector3_t3525329789  value)
	{
		___localVelocity_15 = value;
	}

	inline static int32_t get_offset_of_speed_16() { return static_cast<int32_t>(offsetof(PlayerAnimation_t2714436995, ___speed_16)); }
	inline float get_speed_16() const { return ___speed_16; }
	inline float* get_address_of_speed_16() { return &___speed_16; }
	inline void set_speed_16(float value)
	{
		___speed_16 = value;
	}

	inline static int32_t get_offset_of_angle_17() { return static_cast<int32_t>(offsetof(PlayerAnimation_t2714436995, ___angle_17)); }
	inline float get_angle_17() const { return ___angle_17; }
	inline float* get_address_of_angle_17() { return &___angle_17; }
	inline void set_angle_17(float value)
	{
		___angle_17 = value;
	}

	inline static int32_t get_offset_of_lowerBodyDeltaAngle_18() { return static_cast<int32_t>(offsetof(PlayerAnimation_t2714436995, ___lowerBodyDeltaAngle_18)); }
	inline float get_lowerBodyDeltaAngle_18() const { return ___lowerBodyDeltaAngle_18; }
	inline float* get_address_of_lowerBodyDeltaAngle_18() { return &___lowerBodyDeltaAngle_18; }
	inline void set_lowerBodyDeltaAngle_18(float value)
	{
		___lowerBodyDeltaAngle_18 = value;
	}

	inline static int32_t get_offset_of_idleWeight_19() { return static_cast<int32_t>(offsetof(PlayerAnimation_t2714436995, ___idleWeight_19)); }
	inline float get_idleWeight_19() const { return ___idleWeight_19; }
	inline float* get_address_of_idleWeight_19() { return &___idleWeight_19; }
	inline void set_idleWeight_19(float value)
	{
		___idleWeight_19 = value;
	}

	inline static int32_t get_offset_of_lowerBodyForwardTarget_20() { return static_cast<int32_t>(offsetof(PlayerAnimation_t2714436995, ___lowerBodyForwardTarget_20)); }
	inline Vector3_t3525329789  get_lowerBodyForwardTarget_20() const { return ___lowerBodyForwardTarget_20; }
	inline Vector3_t3525329789 * get_address_of_lowerBodyForwardTarget_20() { return &___lowerBodyForwardTarget_20; }
	inline void set_lowerBodyForwardTarget_20(Vector3_t3525329789  value)
	{
		___lowerBodyForwardTarget_20 = value;
	}

	inline static int32_t get_offset_of_lowerBodyForward_21() { return static_cast<int32_t>(offsetof(PlayerAnimation_t2714436995, ___lowerBodyForward_21)); }
	inline Vector3_t3525329789  get_lowerBodyForward_21() const { return ___lowerBodyForward_21; }
	inline Vector3_t3525329789 * get_address_of_lowerBodyForward_21() { return &___lowerBodyForward_21; }
	inline void set_lowerBodyForward_21(Vector3_t3525329789  value)
	{
		___lowerBodyForward_21 = value;
	}

	inline static int32_t get_offset_of_bestAnimation_22() { return static_cast<int32_t>(offsetof(PlayerAnimation_t2714436995, ___bestAnimation_22)); }
	inline MoveAnimation_t3488672403 * get_bestAnimation_22() const { return ___bestAnimation_22; }
	inline MoveAnimation_t3488672403 ** get_address_of_bestAnimation_22() { return &___bestAnimation_22; }
	inline void set_bestAnimation_22(MoveAnimation_t3488672403 * value)
	{
		___bestAnimation_22 = value;
		Il2CppCodeGenWriteBarrier(&___bestAnimation_22, value);
	}

	inline static int32_t get_offset_of_lastFootstepTime_23() { return static_cast<int32_t>(offsetof(PlayerAnimation_t2714436995, ___lastFootstepTime_23)); }
	inline float get_lastFootstepTime_23() const { return ___lastFootstepTime_23; }
	inline float* get_address_of_lastFootstepTime_23() { return &___lastFootstepTime_23; }
	inline void set_lastFootstepTime_23(float value)
	{
		___lastFootstepTime_23 = value;
	}

	inline static int32_t get_offset_of_lastAnimTime_24() { return static_cast<int32_t>(offsetof(PlayerAnimation_t2714436995, ___lastAnimTime_24)); }
	inline float get_lastAnimTime_24() const { return ___lastAnimTime_24; }
	inline float* get_address_of_lastAnimTime_24() { return &___lastAnimTime_24; }
	inline void set_lastAnimTime_24(float value)
	{
		___lastAnimTime_24 = value;
	}

	inline static int32_t get_offset_of_animationComponent_25() { return static_cast<int32_t>(offsetof(PlayerAnimation_t2714436995, ___animationComponent_25)); }
	inline Animation_t350396337 * get_animationComponent_25() const { return ___animationComponent_25; }
	inline Animation_t350396337 ** get_address_of_animationComponent_25() { return &___animationComponent_25; }
	inline void set_animationComponent_25(Animation_t350396337 * value)
	{
		___animationComponent_25 = value;
		Il2CppCodeGenWriteBarrier(&___animationComponent_25, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
