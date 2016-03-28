#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
struct DispatcherKey_t3258056537;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t1056575496;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
struct  KeyValuePair_2_t2938271131 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	DispatcherKey_t3258056537 * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Dispatcher_t1056575496 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2938271131, ___key_0)); }
	inline DispatcherKey_t3258056537 * get_key_0() const { return ___key_0; }
	inline DispatcherKey_t3258056537 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(DispatcherKey_t3258056537 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier(&___key_0, value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2938271131, ___value_1)); }
	inline Dispatcher_t1056575496 * get_value_1() const { return ___value_1; }
	inline Dispatcher_t1056575496 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Dispatcher_t1056575496 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
