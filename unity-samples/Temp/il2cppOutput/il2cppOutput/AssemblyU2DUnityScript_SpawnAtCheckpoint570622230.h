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

// SpawnAtCheckpoint
struct  SpawnAtCheckpoint_t570622230  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Transform SpawnAtCheckpoint::checkpoint
	Transform_t284553113 * ___checkpoint_2;

public:
	inline static int32_t get_offset_of_checkpoint_2() { return static_cast<int32_t>(offsetof(SpawnAtCheckpoint_t570622230, ___checkpoint_2)); }
	inline Transform_t284553113 * get_checkpoint_2() const { return ___checkpoint_2; }
	inline Transform_t284553113 ** get_address_of_checkpoint_2() { return &___checkpoint_2; }
	inline void set_checkpoint_2(Transform_t284553113 * value)
	{
		___checkpoint_2 = value;
		Il2CppCodeGenWriteBarrier(&___checkpoint_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
