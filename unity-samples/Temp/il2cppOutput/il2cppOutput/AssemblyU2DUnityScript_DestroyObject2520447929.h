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

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DestroyObject
struct  DestroyObject_t2520447929  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject DestroyObject::objectToDestroy
	GameObject_t4012695102 * ___objectToDestroy_2;

public:
	inline static int32_t get_offset_of_objectToDestroy_2() { return static_cast<int32_t>(offsetof(DestroyObject_t2520447929, ___objectToDestroy_2)); }
	inline GameObject_t4012695102 * get_objectToDestroy_2() const { return ___objectToDestroy_2; }
	inline GameObject_t4012695102 ** get_address_of_objectToDestroy_2() { return &___objectToDestroy_2; }
	inline void set_objectToDestroy_2(GameObject_t4012695102 * value)
	{
		___objectToDestroy_2 = value;
		Il2CppCodeGenWriteBarrier(&___objectToDestroy_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
