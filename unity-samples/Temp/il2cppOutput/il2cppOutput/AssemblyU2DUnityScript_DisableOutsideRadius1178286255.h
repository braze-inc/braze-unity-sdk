#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.SphereCollider
struct SphereCollider_t4081809230;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DisableOutsideRadius
struct  DisableOutsideRadius_t1178286255  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject DisableOutsideRadius::target
	GameObject_t4012695102 * ___target_2;
	// UnityEngine.SphereCollider DisableOutsideRadius::sphereCollider
	SphereCollider_t4081809230 * ___sphereCollider_3;
	// System.Single DisableOutsideRadius::activeRadius
	float ___activeRadius_4;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(DisableOutsideRadius_t1178286255, ___target_2)); }
	inline GameObject_t4012695102 * get_target_2() const { return ___target_2; }
	inline GameObject_t4012695102 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(GameObject_t4012695102 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_sphereCollider_3() { return static_cast<int32_t>(offsetof(DisableOutsideRadius_t1178286255, ___sphereCollider_3)); }
	inline SphereCollider_t4081809230 * get_sphereCollider_3() const { return ___sphereCollider_3; }
	inline SphereCollider_t4081809230 ** get_address_of_sphereCollider_3() { return &___sphereCollider_3; }
	inline void set_sphereCollider_3(SphereCollider_t4081809230 * value)
	{
		___sphereCollider_3 = value;
		Il2CppCodeGenWriteBarrier(&___sphereCollider_3, value);
	}

	inline static int32_t get_offset_of_activeRadius_4() { return static_cast<int32_t>(offsetof(DisableOutsideRadius_t1178286255, ___activeRadius_4)); }
	inline float get_activeRadius_4() const { return ___activeRadius_4; }
	inline float* get_address_of_activeRadius_4() { return &___activeRadius_4; }
	inline void set_activeRadius_4(float value)
	{
		___activeRadius_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
