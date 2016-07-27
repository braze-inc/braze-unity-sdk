#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimpleBullet
struct  SimpleBullet_t2595441012  : public MonoBehaviour_t3012272455
{
public:
	// System.Single SimpleBullet::speed
	float ___speed_2;
	// System.Single SimpleBullet::lifeTime
	float ___lifeTime_3;
	// System.Single SimpleBullet::dist
	float ___dist_4;
	// System.Single SimpleBullet::spawnTime
	float ___spawnTime_5;
	// UnityEngine.Transform SimpleBullet::tr
	Transform_t284553113 * ___tr_6;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(SimpleBullet_t2595441012, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_lifeTime_3() { return static_cast<int32_t>(offsetof(SimpleBullet_t2595441012, ___lifeTime_3)); }
	inline float get_lifeTime_3() const { return ___lifeTime_3; }
	inline float* get_address_of_lifeTime_3() { return &___lifeTime_3; }
	inline void set_lifeTime_3(float value)
	{
		___lifeTime_3 = value;
	}

	inline static int32_t get_offset_of_dist_4() { return static_cast<int32_t>(offsetof(SimpleBullet_t2595441012, ___dist_4)); }
	inline float get_dist_4() const { return ___dist_4; }
	inline float* get_address_of_dist_4() { return &___dist_4; }
	inline void set_dist_4(float value)
	{
		___dist_4 = value;
	}

	inline static int32_t get_offset_of_spawnTime_5() { return static_cast<int32_t>(offsetof(SimpleBullet_t2595441012, ___spawnTime_5)); }
	inline float get_spawnTime_5() const { return ___spawnTime_5; }
	inline float* get_address_of_spawnTime_5() { return &___spawnTime_5; }
	inline void set_spawnTime_5(float value)
	{
		___spawnTime_5 = value;
	}

	inline static int32_t get_offset_of_tr_6() { return static_cast<int32_t>(offsetof(SimpleBullet_t2595441012, ___tr_6)); }
	inline Transform_t284553113 * get_tr_6() const { return ___tr_6; }
	inline Transform_t284553113 ** get_address_of_tr_6() { return &___tr_6; }
	inline void set_tr_6(Transform_t284553113 * value)
	{
		___tr_6 = value;
		Il2CppCodeGenWriteBarrier(&___tr_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
