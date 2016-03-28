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
#include "UnityEngine_UnityEngine_RaycastHit46221527.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PerFrameRaycast
struct  PerFrameRaycast_t448786905  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.RaycastHit PerFrameRaycast::hitInfo
	RaycastHit_t46221527  ___hitInfo_2;
	// UnityEngine.Transform PerFrameRaycast::tr
	Transform_t284553113 * ___tr_3;

public:
	inline static int32_t get_offset_of_hitInfo_2() { return static_cast<int32_t>(offsetof(PerFrameRaycast_t448786905, ___hitInfo_2)); }
	inline RaycastHit_t46221527  get_hitInfo_2() const { return ___hitInfo_2; }
	inline RaycastHit_t46221527 * get_address_of_hitInfo_2() { return &___hitInfo_2; }
	inline void set_hitInfo_2(RaycastHit_t46221527  value)
	{
		___hitInfo_2 = value;
	}

	inline static int32_t get_offset_of_tr_3() { return static_cast<int32_t>(offsetof(PerFrameRaycast_t448786905, ___tr_3)); }
	inline Transform_t284553113 * get_tr_3() const { return ___tr_3; }
	inline Transform_t284553113 ** get_address_of_tr_3() { return &___tr_3; }
	inline void set_tr_3(Transform_t284553113 * value)
	{
		___tr_3 = value;
		Il2CppCodeGenWriteBarrier(&___tr_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
