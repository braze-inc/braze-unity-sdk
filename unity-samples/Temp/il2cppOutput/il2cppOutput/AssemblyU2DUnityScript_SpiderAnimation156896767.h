#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// MovementMotor
struct MovementMotor_t3089009894;
// UnityEngine.AnimationClip
struct AnimationClip_t57566497;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
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

// SpiderAnimation
struct  SpiderAnimation_t156896767  : public MonoBehaviour_t3012272455
{
public:
	// MovementMotor SpiderAnimation::motor
	MovementMotor_t3089009894 * ___motor_2;
	// UnityEngine.AnimationClip SpiderAnimation::activateAnim
	AnimationClip_t57566497 * ___activateAnim_3;
	// UnityEngine.AnimationClip SpiderAnimation::forwardAnim
	AnimationClip_t57566497 * ___forwardAnim_4;
	// UnityEngine.AnimationClip SpiderAnimation::backAnim
	AnimationClip_t57566497 * ___backAnim_5;
	// UnityEngine.AnimationClip SpiderAnimation::leftAnim
	AnimationClip_t57566497 * ___leftAnim_6;
	// UnityEngine.AnimationClip SpiderAnimation::rightAnim
	AnimationClip_t57566497 * ___rightAnim_7;
	// UnityEngine.AudioSource SpiderAnimation::audioSource
	AudioSource_t3628549054 * ___audioSource_8;
	// SignalSender SpiderAnimation::footstepSignals
	SignalSender_t3492948765 * ___footstepSignals_9;
	// System.Boolean SpiderAnimation::skiddingSounds
	bool ___skiddingSounds_10;
	// System.Boolean SpiderAnimation::footstepSounds
	bool ___footstepSounds_11;
	// UnityEngine.Transform SpiderAnimation::tr
	Transform_t284553113 * ___tr_12;
	// System.Single SpiderAnimation::lastFootstepTime
	float ___lastFootstepTime_13;
	// System.Single SpiderAnimation::lastAnimTime
	float ___lastAnimTime_14;

public:
	inline static int32_t get_offset_of_motor_2() { return static_cast<int32_t>(offsetof(SpiderAnimation_t156896767, ___motor_2)); }
	inline MovementMotor_t3089009894 * get_motor_2() const { return ___motor_2; }
	inline MovementMotor_t3089009894 ** get_address_of_motor_2() { return &___motor_2; }
	inline void set_motor_2(MovementMotor_t3089009894 * value)
	{
		___motor_2 = value;
		Il2CppCodeGenWriteBarrier(&___motor_2, value);
	}

	inline static int32_t get_offset_of_activateAnim_3() { return static_cast<int32_t>(offsetof(SpiderAnimation_t156896767, ___activateAnim_3)); }
	inline AnimationClip_t57566497 * get_activateAnim_3() const { return ___activateAnim_3; }
	inline AnimationClip_t57566497 ** get_address_of_activateAnim_3() { return &___activateAnim_3; }
	inline void set_activateAnim_3(AnimationClip_t57566497 * value)
	{
		___activateAnim_3 = value;
		Il2CppCodeGenWriteBarrier(&___activateAnim_3, value);
	}

	inline static int32_t get_offset_of_forwardAnim_4() { return static_cast<int32_t>(offsetof(SpiderAnimation_t156896767, ___forwardAnim_4)); }
	inline AnimationClip_t57566497 * get_forwardAnim_4() const { return ___forwardAnim_4; }
	inline AnimationClip_t57566497 ** get_address_of_forwardAnim_4() { return &___forwardAnim_4; }
	inline void set_forwardAnim_4(AnimationClip_t57566497 * value)
	{
		___forwardAnim_4 = value;
		Il2CppCodeGenWriteBarrier(&___forwardAnim_4, value);
	}

	inline static int32_t get_offset_of_backAnim_5() { return static_cast<int32_t>(offsetof(SpiderAnimation_t156896767, ___backAnim_5)); }
	inline AnimationClip_t57566497 * get_backAnim_5() const { return ___backAnim_5; }
	inline AnimationClip_t57566497 ** get_address_of_backAnim_5() { return &___backAnim_5; }
	inline void set_backAnim_5(AnimationClip_t57566497 * value)
	{
		___backAnim_5 = value;
		Il2CppCodeGenWriteBarrier(&___backAnim_5, value);
	}

	inline static int32_t get_offset_of_leftAnim_6() { return static_cast<int32_t>(offsetof(SpiderAnimation_t156896767, ___leftAnim_6)); }
	inline AnimationClip_t57566497 * get_leftAnim_6() const { return ___leftAnim_6; }
	inline AnimationClip_t57566497 ** get_address_of_leftAnim_6() { return &___leftAnim_6; }
	inline void set_leftAnim_6(AnimationClip_t57566497 * value)
	{
		___leftAnim_6 = value;
		Il2CppCodeGenWriteBarrier(&___leftAnim_6, value);
	}

	inline static int32_t get_offset_of_rightAnim_7() { return static_cast<int32_t>(offsetof(SpiderAnimation_t156896767, ___rightAnim_7)); }
	inline AnimationClip_t57566497 * get_rightAnim_7() const { return ___rightAnim_7; }
	inline AnimationClip_t57566497 ** get_address_of_rightAnim_7() { return &___rightAnim_7; }
	inline void set_rightAnim_7(AnimationClip_t57566497 * value)
	{
		___rightAnim_7 = value;
		Il2CppCodeGenWriteBarrier(&___rightAnim_7, value);
	}

	inline static int32_t get_offset_of_audioSource_8() { return static_cast<int32_t>(offsetof(SpiderAnimation_t156896767, ___audioSource_8)); }
	inline AudioSource_t3628549054 * get_audioSource_8() const { return ___audioSource_8; }
	inline AudioSource_t3628549054 ** get_address_of_audioSource_8() { return &___audioSource_8; }
	inline void set_audioSource_8(AudioSource_t3628549054 * value)
	{
		___audioSource_8 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_8, value);
	}

	inline static int32_t get_offset_of_footstepSignals_9() { return static_cast<int32_t>(offsetof(SpiderAnimation_t156896767, ___footstepSignals_9)); }
	inline SignalSender_t3492948765 * get_footstepSignals_9() const { return ___footstepSignals_9; }
	inline SignalSender_t3492948765 ** get_address_of_footstepSignals_9() { return &___footstepSignals_9; }
	inline void set_footstepSignals_9(SignalSender_t3492948765 * value)
	{
		___footstepSignals_9 = value;
		Il2CppCodeGenWriteBarrier(&___footstepSignals_9, value);
	}

	inline static int32_t get_offset_of_skiddingSounds_10() { return static_cast<int32_t>(offsetof(SpiderAnimation_t156896767, ___skiddingSounds_10)); }
	inline bool get_skiddingSounds_10() const { return ___skiddingSounds_10; }
	inline bool* get_address_of_skiddingSounds_10() { return &___skiddingSounds_10; }
	inline void set_skiddingSounds_10(bool value)
	{
		___skiddingSounds_10 = value;
	}

	inline static int32_t get_offset_of_footstepSounds_11() { return static_cast<int32_t>(offsetof(SpiderAnimation_t156896767, ___footstepSounds_11)); }
	inline bool get_footstepSounds_11() const { return ___footstepSounds_11; }
	inline bool* get_address_of_footstepSounds_11() { return &___footstepSounds_11; }
	inline void set_footstepSounds_11(bool value)
	{
		___footstepSounds_11 = value;
	}

	inline static int32_t get_offset_of_tr_12() { return static_cast<int32_t>(offsetof(SpiderAnimation_t156896767, ___tr_12)); }
	inline Transform_t284553113 * get_tr_12() const { return ___tr_12; }
	inline Transform_t284553113 ** get_address_of_tr_12() { return &___tr_12; }
	inline void set_tr_12(Transform_t284553113 * value)
	{
		___tr_12 = value;
		Il2CppCodeGenWriteBarrier(&___tr_12, value);
	}

	inline static int32_t get_offset_of_lastFootstepTime_13() { return static_cast<int32_t>(offsetof(SpiderAnimation_t156896767, ___lastFootstepTime_13)); }
	inline float get_lastFootstepTime_13() const { return ___lastFootstepTime_13; }
	inline float* get_address_of_lastFootstepTime_13() { return &___lastFootstepTime_13; }
	inline void set_lastFootstepTime_13(float value)
	{
		___lastFootstepTime_13 = value;
	}

	inline static int32_t get_offset_of_lastAnimTime_14() { return static_cast<int32_t>(offsetof(SpiderAnimation_t156896767, ___lastAnimTime_14)); }
	inline float get_lastAnimTime_14() const { return ___lastAnimTime_14; }
	inline float* get_address_of_lastAnimTime_14() { return &___lastAnimTime_14; }
	inline void set_lastAnimTime_14(float value)
	{
		___lastAnimTime_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
