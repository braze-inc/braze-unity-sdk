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
// UnityEngine.Renderer
struct Renderer_t1092684080;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// SelfIlluminationBlink[]
struct SelfIlluminationBlinkU5BU5D_t2698012444;
// GlowPlane
struct GlowPlane_t2977432751;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3012272455;
// AI
struct AI_t2088;
// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpiderAttackMoveController
struct  SpiderAttackMoveController_t617548122  : public MonoBehaviour_t3012272455
{
public:
	// MovementMotor SpiderAttackMoveController::motor
	MovementMotor_t3089009894 * ___motor_2;
	// System.Single SpiderAttackMoveController::targetDistanceMin
	float ___targetDistanceMin_3;
	// System.Single SpiderAttackMoveController::targetDistanceMax
	float ___targetDistanceMax_4;
	// System.Single SpiderAttackMoveController::proximityDistance
	float ___proximityDistance_5;
	// System.Single SpiderAttackMoveController::damageRadius
	float ___damageRadius_6;
	// System.Single SpiderAttackMoveController::proximityBuildupTime
	float ___proximityBuildupTime_7;
	// System.Single SpiderAttackMoveController::proximityOfNoReturn
	float ___proximityOfNoReturn_8;
	// System.Single SpiderAttackMoveController::damageAmount
	float ___damageAmount_9;
	// UnityEngine.Renderer SpiderAttackMoveController::proximityRenderer
	Renderer_t1092684080 * ___proximityRenderer_10;
	// UnityEngine.AudioSource SpiderAttackMoveController::audioSource
	AudioSource_t3628549054 * ___audioSource_11;
	// SelfIlluminationBlink[] SpiderAttackMoveController::blinkComponents
	SelfIlluminationBlinkU5BU5D_t2698012444* ___blinkComponents_12;
	// GlowPlane SpiderAttackMoveController::blinkPlane
	GlowPlane_t2977432751 * ___blinkPlane_13;
	// UnityEngine.GameObject SpiderAttackMoveController::intentionalExplosion
	GameObject_t4012695102 * ___intentionalExplosion_14;
	// UnityEngine.MonoBehaviour SpiderAttackMoveController::animationBehaviour
	MonoBehaviour_t3012272455 * ___animationBehaviour_15;
	// AI SpiderAttackMoveController::ai
	AI_t2088 * ___ai_16;
	// UnityEngine.Transform SpiderAttackMoveController::character
	Transform_t284553113 * ___character_17;
	// UnityEngine.Transform SpiderAttackMoveController::player
	Transform_t284553113 * ___player_18;
	// System.Boolean SpiderAttackMoveController::inRange
	bool ___inRange_19;
	// System.Single SpiderAttackMoveController::nextRaycastTime
	float ___nextRaycastTime_20;
	// System.Single SpiderAttackMoveController::lastRaycastSuccessfulTime
	float ___lastRaycastSuccessfulTime_21;
	// System.Single SpiderAttackMoveController::proximityLevel
	float ___proximityLevel_22;
	// System.Single SpiderAttackMoveController::lastBlinkTime
	float ___lastBlinkTime_23;
	// System.Single SpiderAttackMoveController::noticeTime
	float ___noticeTime_24;

public:
	inline static int32_t get_offset_of_motor_2() { return static_cast<int32_t>(offsetof(SpiderAttackMoveController_t617548122, ___motor_2)); }
	inline MovementMotor_t3089009894 * get_motor_2() const { return ___motor_2; }
	inline MovementMotor_t3089009894 ** get_address_of_motor_2() { return &___motor_2; }
	inline void set_motor_2(MovementMotor_t3089009894 * value)
	{
		___motor_2 = value;
		Il2CppCodeGenWriteBarrier(&___motor_2, value);
	}

	inline static int32_t get_offset_of_targetDistanceMin_3() { return static_cast<int32_t>(offsetof(SpiderAttackMoveController_t617548122, ___targetDistanceMin_3)); }
	inline float get_targetDistanceMin_3() const { return ___targetDistanceMin_3; }
	inline float* get_address_of_targetDistanceMin_3() { return &___targetDistanceMin_3; }
	inline void set_targetDistanceMin_3(float value)
	{
		___targetDistanceMin_3 = value;
	}

	inline static int32_t get_offset_of_targetDistanceMax_4() { return static_cast<int32_t>(offsetof(SpiderAttackMoveController_t617548122, ___targetDistanceMax_4)); }
	inline float get_targetDistanceMax_4() const { return ___targetDistanceMax_4; }
	inline float* get_address_of_targetDistanceMax_4() { return &___targetDistanceMax_4; }
	inline void set_targetDistanceMax_4(float value)
	{
		___targetDistanceMax_4 = value;
	}

	inline static int32_t get_offset_of_proximityDistance_5() { return static_cast<int32_t>(offsetof(SpiderAttackMoveController_t617548122, ___proximityDistance_5)); }
	inline float get_proximityDistance_5() const { return ___proximityDistance_5; }
	inline float* get_address_of_proximityDistance_5() { return &___proximityDistance_5; }
	inline void set_proximityDistance_5(float value)
	{
		___proximityDistance_5 = value;
	}

	inline static int32_t get_offset_of_damageRadius_6() { return static_cast<int32_t>(offsetof(SpiderAttackMoveController_t617548122, ___damageRadius_6)); }
	inline float get_damageRadius_6() const { return ___damageRadius_6; }
	inline float* get_address_of_damageRadius_6() { return &___damageRadius_6; }
	inline void set_damageRadius_6(float value)
	{
		___damageRadius_6 = value;
	}

	inline static int32_t get_offset_of_proximityBuildupTime_7() { return static_cast<int32_t>(offsetof(SpiderAttackMoveController_t617548122, ___proximityBuildupTime_7)); }
	inline float get_proximityBuildupTime_7() const { return ___proximityBuildupTime_7; }
	inline float* get_address_of_proximityBuildupTime_7() { return &___proximityBuildupTime_7; }
	inline void set_proximityBuildupTime_7(float value)
	{
		___proximityBuildupTime_7 = value;
	}

	inline static int32_t get_offset_of_proximityOfNoReturn_8() { return static_cast<int32_t>(offsetof(SpiderAttackMoveController_t617548122, ___proximityOfNoReturn_8)); }
	inline float get_proximityOfNoReturn_8() const { return ___proximityOfNoReturn_8; }
	inline float* get_address_of_proximityOfNoReturn_8() { return &___proximityOfNoReturn_8; }
	inline void set_proximityOfNoReturn_8(float value)
	{
		___proximityOfNoReturn_8 = value;
	}

	inline static int32_t get_offset_of_damageAmount_9() { return static_cast<int32_t>(offsetof(SpiderAttackMoveController_t617548122, ___damageAmount_9)); }
	inline float get_damageAmount_9() const { return ___damageAmount_9; }
	inline float* get_address_of_damageAmount_9() { return &___damageAmount_9; }
	inline void set_damageAmount_9(float value)
	{
		___damageAmount_9 = value;
	}

	inline static int32_t get_offset_of_proximityRenderer_10() { return static_cast<int32_t>(offsetof(SpiderAttackMoveController_t617548122, ___proximityRenderer_10)); }
	inline Renderer_t1092684080 * get_proximityRenderer_10() const { return ___proximityRenderer_10; }
	inline Renderer_t1092684080 ** get_address_of_proximityRenderer_10() { return &___proximityRenderer_10; }
	inline void set_proximityRenderer_10(Renderer_t1092684080 * value)
	{
		___proximityRenderer_10 = value;
		Il2CppCodeGenWriteBarrier(&___proximityRenderer_10, value);
	}

	inline static int32_t get_offset_of_audioSource_11() { return static_cast<int32_t>(offsetof(SpiderAttackMoveController_t617548122, ___audioSource_11)); }
	inline AudioSource_t3628549054 * get_audioSource_11() const { return ___audioSource_11; }
	inline AudioSource_t3628549054 ** get_address_of_audioSource_11() { return &___audioSource_11; }
	inline void set_audioSource_11(AudioSource_t3628549054 * value)
	{
		___audioSource_11 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_11, value);
	}

	inline static int32_t get_offset_of_blinkComponents_12() { return static_cast<int32_t>(offsetof(SpiderAttackMoveController_t617548122, ___blinkComponents_12)); }
	inline SelfIlluminationBlinkU5BU5D_t2698012444* get_blinkComponents_12() const { return ___blinkComponents_12; }
	inline SelfIlluminationBlinkU5BU5D_t2698012444** get_address_of_blinkComponents_12() { return &___blinkComponents_12; }
	inline void set_blinkComponents_12(SelfIlluminationBlinkU5BU5D_t2698012444* value)
	{
		___blinkComponents_12 = value;
		Il2CppCodeGenWriteBarrier(&___blinkComponents_12, value);
	}

	inline static int32_t get_offset_of_blinkPlane_13() { return static_cast<int32_t>(offsetof(SpiderAttackMoveController_t617548122, ___blinkPlane_13)); }
	inline GlowPlane_t2977432751 * get_blinkPlane_13() const { return ___blinkPlane_13; }
	inline GlowPlane_t2977432751 ** get_address_of_blinkPlane_13() { return &___blinkPlane_13; }
	inline void set_blinkPlane_13(GlowPlane_t2977432751 * value)
	{
		___blinkPlane_13 = value;
		Il2CppCodeGenWriteBarrier(&___blinkPlane_13, value);
	}

	inline static int32_t get_offset_of_intentionalExplosion_14() { return static_cast<int32_t>(offsetof(SpiderAttackMoveController_t617548122, ___intentionalExplosion_14)); }
	inline GameObject_t4012695102 * get_intentionalExplosion_14() const { return ___intentionalExplosion_14; }
	inline GameObject_t4012695102 ** get_address_of_intentionalExplosion_14() { return &___intentionalExplosion_14; }
	inline void set_intentionalExplosion_14(GameObject_t4012695102 * value)
	{
		___intentionalExplosion_14 = value;
		Il2CppCodeGenWriteBarrier(&___intentionalExplosion_14, value);
	}

	inline static int32_t get_offset_of_animationBehaviour_15() { return static_cast<int32_t>(offsetof(SpiderAttackMoveController_t617548122, ___animationBehaviour_15)); }
	inline MonoBehaviour_t3012272455 * get_animationBehaviour_15() const { return ___animationBehaviour_15; }
	inline MonoBehaviour_t3012272455 ** get_address_of_animationBehaviour_15() { return &___animationBehaviour_15; }
	inline void set_animationBehaviour_15(MonoBehaviour_t3012272455 * value)
	{
		___animationBehaviour_15 = value;
		Il2CppCodeGenWriteBarrier(&___animationBehaviour_15, value);
	}

	inline static int32_t get_offset_of_ai_16() { return static_cast<int32_t>(offsetof(SpiderAttackMoveController_t617548122, ___ai_16)); }
	inline AI_t2088 * get_ai_16() const { return ___ai_16; }
	inline AI_t2088 ** get_address_of_ai_16() { return &___ai_16; }
	inline void set_ai_16(AI_t2088 * value)
	{
		___ai_16 = value;
		Il2CppCodeGenWriteBarrier(&___ai_16, value);
	}

	inline static int32_t get_offset_of_character_17() { return static_cast<int32_t>(offsetof(SpiderAttackMoveController_t617548122, ___character_17)); }
	inline Transform_t284553113 * get_character_17() const { return ___character_17; }
	inline Transform_t284553113 ** get_address_of_character_17() { return &___character_17; }
	inline void set_character_17(Transform_t284553113 * value)
	{
		___character_17 = value;
		Il2CppCodeGenWriteBarrier(&___character_17, value);
	}

	inline static int32_t get_offset_of_player_18() { return static_cast<int32_t>(offsetof(SpiderAttackMoveController_t617548122, ___player_18)); }
	inline Transform_t284553113 * get_player_18() const { return ___player_18; }
	inline Transform_t284553113 ** get_address_of_player_18() { return &___player_18; }
	inline void set_player_18(Transform_t284553113 * value)
	{
		___player_18 = value;
		Il2CppCodeGenWriteBarrier(&___player_18, value);
	}

	inline static int32_t get_offset_of_inRange_19() { return static_cast<int32_t>(offsetof(SpiderAttackMoveController_t617548122, ___inRange_19)); }
	inline bool get_inRange_19() const { return ___inRange_19; }
	inline bool* get_address_of_inRange_19() { return &___inRange_19; }
	inline void set_inRange_19(bool value)
	{
		___inRange_19 = value;
	}

	inline static int32_t get_offset_of_nextRaycastTime_20() { return static_cast<int32_t>(offsetof(SpiderAttackMoveController_t617548122, ___nextRaycastTime_20)); }
	inline float get_nextRaycastTime_20() const { return ___nextRaycastTime_20; }
	inline float* get_address_of_nextRaycastTime_20() { return &___nextRaycastTime_20; }
	inline void set_nextRaycastTime_20(float value)
	{
		___nextRaycastTime_20 = value;
	}

	inline static int32_t get_offset_of_lastRaycastSuccessfulTime_21() { return static_cast<int32_t>(offsetof(SpiderAttackMoveController_t617548122, ___lastRaycastSuccessfulTime_21)); }
	inline float get_lastRaycastSuccessfulTime_21() const { return ___lastRaycastSuccessfulTime_21; }
	inline float* get_address_of_lastRaycastSuccessfulTime_21() { return &___lastRaycastSuccessfulTime_21; }
	inline void set_lastRaycastSuccessfulTime_21(float value)
	{
		___lastRaycastSuccessfulTime_21 = value;
	}

	inline static int32_t get_offset_of_proximityLevel_22() { return static_cast<int32_t>(offsetof(SpiderAttackMoveController_t617548122, ___proximityLevel_22)); }
	inline float get_proximityLevel_22() const { return ___proximityLevel_22; }
	inline float* get_address_of_proximityLevel_22() { return &___proximityLevel_22; }
	inline void set_proximityLevel_22(float value)
	{
		___proximityLevel_22 = value;
	}

	inline static int32_t get_offset_of_lastBlinkTime_23() { return static_cast<int32_t>(offsetof(SpiderAttackMoveController_t617548122, ___lastBlinkTime_23)); }
	inline float get_lastBlinkTime_23() const { return ___lastBlinkTime_23; }
	inline float* get_address_of_lastBlinkTime_23() { return &___lastBlinkTime_23; }
	inline void set_lastBlinkTime_23(float value)
	{
		___lastBlinkTime_23 = value;
	}

	inline static int32_t get_offset_of_noticeTime_24() { return static_cast<int32_t>(offsetof(SpiderAttackMoveController_t617548122, ___noticeTime_24)); }
	inline float get_noticeTime_24() const { return ___noticeTime_24; }
	inline float* get_address_of_noticeTime_24() { return &___noticeTime_24; }
	inline void set_noticeTime_24(float value)
	{
		___noticeTime_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
