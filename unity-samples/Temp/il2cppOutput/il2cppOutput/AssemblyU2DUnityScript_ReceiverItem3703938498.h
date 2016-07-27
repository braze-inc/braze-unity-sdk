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
// System.String
struct String_t;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ReceiverItem
struct  ReceiverItem_t3703938498  : public Il2CppObject
{
public:
	// UnityEngine.GameObject ReceiverItem::receiver
	GameObject_t4012695102 * ___receiver_0;
	// System.String ReceiverItem::action
	String_t* ___action_1;
	// System.Single ReceiverItem::delay
	float ___delay_2;

public:
	inline static int32_t get_offset_of_receiver_0() { return static_cast<int32_t>(offsetof(ReceiverItem_t3703938498, ___receiver_0)); }
	inline GameObject_t4012695102 * get_receiver_0() const { return ___receiver_0; }
	inline GameObject_t4012695102 ** get_address_of_receiver_0() { return &___receiver_0; }
	inline void set_receiver_0(GameObject_t4012695102 * value)
	{
		___receiver_0 = value;
		Il2CppCodeGenWriteBarrier(&___receiver_0, value);
	}

	inline static int32_t get_offset_of_action_1() { return static_cast<int32_t>(offsetof(ReceiverItem_t3703938498, ___action_1)); }
	inline String_t* get_action_1() const { return ___action_1; }
	inline String_t** get_address_of_action_1() { return &___action_1; }
	inline void set_action_1(String_t* value)
	{
		___action_1 = value;
		Il2CppCodeGenWriteBarrier(&___action_1, value);
	}

	inline static int32_t get_offset_of_delay_2() { return static_cast<int32_t>(offsetof(ReceiverItem_t3703938498, ___delay_2)); }
	inline float get_delay_2() const { return ___delay_2; }
	inline float* get_address_of_delay_2() { return &___delay_2; }
	inline void set_delay_2(float value)
	{
		___delay_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
