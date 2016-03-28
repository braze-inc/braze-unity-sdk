#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Event
struct Event_t1590224583;
struct Event_t1590224583_marshaled_pinvoke;

#include "mscorlib_System_ValueType4014882752.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp3429487928.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
struct  KeyValuePair_2_t3112817125 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Event_t1590224583 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3112817125, ___key_0)); }
	inline Event_t1590224583 * get_key_0() const { return ___key_0; }
	inline Event_t1590224583 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Event_t1590224583 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3112817125, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
