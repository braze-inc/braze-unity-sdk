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
// SignalSender
struct SignalSender_t3492948765;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpawnObject
struct  SpawnObject_t3845415546  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject SpawnObject::objectToSpawn
	GameObject_t4012695102 * ___objectToSpawn_2;
	// SignalSender SpawnObject::onDestroyedSignals
	SignalSender_t3492948765 * ___onDestroyedSignals_3;
	// UnityEngine.GameObject SpawnObject::spawned
	GameObject_t4012695102 * ___spawned_4;

public:
	inline static int32_t get_offset_of_objectToSpawn_2() { return static_cast<int32_t>(offsetof(SpawnObject_t3845415546, ___objectToSpawn_2)); }
	inline GameObject_t4012695102 * get_objectToSpawn_2() const { return ___objectToSpawn_2; }
	inline GameObject_t4012695102 ** get_address_of_objectToSpawn_2() { return &___objectToSpawn_2; }
	inline void set_objectToSpawn_2(GameObject_t4012695102 * value)
	{
		___objectToSpawn_2 = value;
		Il2CppCodeGenWriteBarrier(&___objectToSpawn_2, value);
	}

	inline static int32_t get_offset_of_onDestroyedSignals_3() { return static_cast<int32_t>(offsetof(SpawnObject_t3845415546, ___onDestroyedSignals_3)); }
	inline SignalSender_t3492948765 * get_onDestroyedSignals_3() const { return ___onDestroyedSignals_3; }
	inline SignalSender_t3492948765 ** get_address_of_onDestroyedSignals_3() { return &___onDestroyedSignals_3; }
	inline void set_onDestroyedSignals_3(SignalSender_t3492948765 * value)
	{
		___onDestroyedSignals_3 = value;
		Il2CppCodeGenWriteBarrier(&___onDestroyedSignals_3, value);
	}

	inline static int32_t get_offset_of_spawned_4() { return static_cast<int32_t>(offsetof(SpawnObject_t3845415546, ___spawned_4)); }
	inline GameObject_t4012695102 * get_spawned_4() const { return ___spawned_4; }
	inline GameObject_t4012695102 ** get_address_of_spawned_4() { return &___spawned_4; }
	inline void set_spawned_4(GameObject_t4012695102 * value)
	{
		___spawned_4 = value;
		Il2CppCodeGenWriteBarrier(&___spawned_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
