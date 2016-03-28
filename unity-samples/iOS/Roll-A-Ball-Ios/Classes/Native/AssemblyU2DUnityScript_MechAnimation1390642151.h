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
// UnityEngine.AnimationClip
struct AnimationClip_t57566497;
// SignalSender
struct SignalSender_t3492948765;
// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MechAnimation
struct  MechAnimation_t1390642151  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Rigidbody MechAnimation::rigid
	Rigidbody_t1972007546 * ___rigid_2;
	// UnityEngine.AnimationClip MechAnimation::idle
	AnimationClip_t57566497 * ___idle_3;
	// UnityEngine.AnimationClip MechAnimation::walk
	AnimationClip_t57566497 * ___walk_4;
	// UnityEngine.AnimationClip MechAnimation::turnLeft
	AnimationClip_t57566497 * ___turnLeft_5;
	// UnityEngine.AnimationClip MechAnimation::turnRight
	AnimationClip_t57566497 * ___turnRight_6;
	// SignalSender MechAnimation::footstepSignals
	SignalSender_t3492948765 * ___footstepSignals_7;
	// UnityEngine.Transform MechAnimation::tr
	Transform_t284553113 * ___tr_8;
	// System.Single MechAnimation::lastFootstepTime
	float ___lastFootstepTime_9;
	// System.Single MechAnimation::lastAnimTime
	float ___lastAnimTime_10;

public:
	inline static int32_t get_offset_of_rigid_2() { return static_cast<int32_t>(offsetof(MechAnimation_t1390642151, ___rigid_2)); }
	inline Rigidbody_t1972007546 * get_rigid_2() const { return ___rigid_2; }
	inline Rigidbody_t1972007546 ** get_address_of_rigid_2() { return &___rigid_2; }
	inline void set_rigid_2(Rigidbody_t1972007546 * value)
	{
		___rigid_2 = value;
		Il2CppCodeGenWriteBarrier(&___rigid_2, value);
	}

	inline static int32_t get_offset_of_idle_3() { return static_cast<int32_t>(offsetof(MechAnimation_t1390642151, ___idle_3)); }
	inline AnimationClip_t57566497 * get_idle_3() const { return ___idle_3; }
	inline AnimationClip_t57566497 ** get_address_of_idle_3() { return &___idle_3; }
	inline void set_idle_3(AnimationClip_t57566497 * value)
	{
		___idle_3 = value;
		Il2CppCodeGenWriteBarrier(&___idle_3, value);
	}

	inline static int32_t get_offset_of_walk_4() { return static_cast<int32_t>(offsetof(MechAnimation_t1390642151, ___walk_4)); }
	inline AnimationClip_t57566497 * get_walk_4() const { return ___walk_4; }
	inline AnimationClip_t57566497 ** get_address_of_walk_4() { return &___walk_4; }
	inline void set_walk_4(AnimationClip_t57566497 * value)
	{
		___walk_4 = value;
		Il2CppCodeGenWriteBarrier(&___walk_4, value);
	}

	inline static int32_t get_offset_of_turnLeft_5() { return static_cast<int32_t>(offsetof(MechAnimation_t1390642151, ___turnLeft_5)); }
	inline AnimationClip_t57566497 * get_turnLeft_5() const { return ___turnLeft_5; }
	inline AnimationClip_t57566497 ** get_address_of_turnLeft_5() { return &___turnLeft_5; }
	inline void set_turnLeft_5(AnimationClip_t57566497 * value)
	{
		___turnLeft_5 = value;
		Il2CppCodeGenWriteBarrier(&___turnLeft_5, value);
	}

	inline static int32_t get_offset_of_turnRight_6() { return static_cast<int32_t>(offsetof(MechAnimation_t1390642151, ___turnRight_6)); }
	inline AnimationClip_t57566497 * get_turnRight_6() const { return ___turnRight_6; }
	inline AnimationClip_t57566497 ** get_address_of_turnRight_6() { return &___turnRight_6; }
	inline void set_turnRight_6(AnimationClip_t57566497 * value)
	{
		___turnRight_6 = value;
		Il2CppCodeGenWriteBarrier(&___turnRight_6, value);
	}

	inline static int32_t get_offset_of_footstepSignals_7() { return static_cast<int32_t>(offsetof(MechAnimation_t1390642151, ___footstepSignals_7)); }
	inline SignalSender_t3492948765 * get_footstepSignals_7() const { return ___footstepSignals_7; }
	inline SignalSender_t3492948765 ** get_address_of_footstepSignals_7() { return &___footstepSignals_7; }
	inline void set_footstepSignals_7(SignalSender_t3492948765 * value)
	{
		___footstepSignals_7 = value;
		Il2CppCodeGenWriteBarrier(&___footstepSignals_7, value);
	}

	inline static int32_t get_offset_of_tr_8() { return static_cast<int32_t>(offsetof(MechAnimation_t1390642151, ___tr_8)); }
	inline Transform_t284553113 * get_tr_8() const { return ___tr_8; }
	inline Transform_t284553113 ** get_address_of_tr_8() { return &___tr_8; }
	inline void set_tr_8(Transform_t284553113 * value)
	{
		___tr_8 = value;
		Il2CppCodeGenWriteBarrier(&___tr_8, value);
	}

	inline static int32_t get_offset_of_lastFootstepTime_9() { return static_cast<int32_t>(offsetof(MechAnimation_t1390642151, ___lastFootstepTime_9)); }
	inline float get_lastFootstepTime_9() const { return ___lastFootstepTime_9; }
	inline float* get_address_of_lastFootstepTime_9() { return &___lastFootstepTime_9; }
	inline void set_lastFootstepTime_9(float value)
	{
		___lastFootstepTime_9 = value;
	}

	inline static int32_t get_offset_of_lastAnimTime_10() { return static_cast<int32_t>(offsetof(MechAnimation_t1390642151, ___lastAnimTime_10)); }
	inline float get_lastAnimTime_10() const { return ___lastAnimTime_10; }
	inline float* get_address_of_lastAnimTime_10() { return &___lastAnimTime_10; }
	inline void set_lastAnimTime_10(float value)
	{
		___lastAnimTime_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
