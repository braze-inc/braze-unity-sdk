#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3012272455;
// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AI
struct  AI_t2088  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.MonoBehaviour AI::behaviourOnSpotted
	MonoBehaviour_t3012272455 * ___behaviourOnSpotted_2;
	// UnityEngine.AudioClip AI::soundOnSpotted
	AudioClip_t3714538611 * ___soundOnSpotted_3;
	// UnityEngine.MonoBehaviour AI::behaviourOnLostTrack
	MonoBehaviour_t3012272455 * ___behaviourOnLostTrack_4;
	// UnityEngine.Transform AI::character
	Transform_t284553113 * ___character_5;
	// UnityEngine.Transform AI::player
	Transform_t284553113 * ___player_6;
	// System.Boolean AI::insideInterestArea
	bool ___insideInterestArea_7;

public:
	inline static int32_t get_offset_of_behaviourOnSpotted_2() { return static_cast<int32_t>(offsetof(AI_t2088, ___behaviourOnSpotted_2)); }
	inline MonoBehaviour_t3012272455 * get_behaviourOnSpotted_2() const { return ___behaviourOnSpotted_2; }
	inline MonoBehaviour_t3012272455 ** get_address_of_behaviourOnSpotted_2() { return &___behaviourOnSpotted_2; }
	inline void set_behaviourOnSpotted_2(MonoBehaviour_t3012272455 * value)
	{
		___behaviourOnSpotted_2 = value;
		Il2CppCodeGenWriteBarrier(&___behaviourOnSpotted_2, value);
	}

	inline static int32_t get_offset_of_soundOnSpotted_3() { return static_cast<int32_t>(offsetof(AI_t2088, ___soundOnSpotted_3)); }
	inline AudioClip_t3714538611 * get_soundOnSpotted_3() const { return ___soundOnSpotted_3; }
	inline AudioClip_t3714538611 ** get_address_of_soundOnSpotted_3() { return &___soundOnSpotted_3; }
	inline void set_soundOnSpotted_3(AudioClip_t3714538611 * value)
	{
		___soundOnSpotted_3 = value;
		Il2CppCodeGenWriteBarrier(&___soundOnSpotted_3, value);
	}

	inline static int32_t get_offset_of_behaviourOnLostTrack_4() { return static_cast<int32_t>(offsetof(AI_t2088, ___behaviourOnLostTrack_4)); }
	inline MonoBehaviour_t3012272455 * get_behaviourOnLostTrack_4() const { return ___behaviourOnLostTrack_4; }
	inline MonoBehaviour_t3012272455 ** get_address_of_behaviourOnLostTrack_4() { return &___behaviourOnLostTrack_4; }
	inline void set_behaviourOnLostTrack_4(MonoBehaviour_t3012272455 * value)
	{
		___behaviourOnLostTrack_4 = value;
		Il2CppCodeGenWriteBarrier(&___behaviourOnLostTrack_4, value);
	}

	inline static int32_t get_offset_of_character_5() { return static_cast<int32_t>(offsetof(AI_t2088, ___character_5)); }
	inline Transform_t284553113 * get_character_5() const { return ___character_5; }
	inline Transform_t284553113 ** get_address_of_character_5() { return &___character_5; }
	inline void set_character_5(Transform_t284553113 * value)
	{
		___character_5 = value;
		Il2CppCodeGenWriteBarrier(&___character_5, value);
	}

	inline static int32_t get_offset_of_player_6() { return static_cast<int32_t>(offsetof(AI_t2088, ___player_6)); }
	inline Transform_t284553113 * get_player_6() const { return ___player_6; }
	inline Transform_t284553113 ** get_address_of_player_6() { return &___player_6; }
	inline void set_player_6(Transform_t284553113 * value)
	{
		___player_6 = value;
		Il2CppCodeGenWriteBarrier(&___player_6, value);
	}

	inline static int32_t get_offset_of_insideInterestArea_7() { return static_cast<int32_t>(offsetof(AI_t2088, ___insideInterestArea_7)); }
	inline bool get_insideInterestArea_7() const { return ___insideInterestArea_7; }
	inline bool* get_address_of_insideInterestArea_7() { return &___insideInterestArea_7; }
	inline void set_insideInterestArea_7(bool value)
	{
		___insideInterestArea_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
