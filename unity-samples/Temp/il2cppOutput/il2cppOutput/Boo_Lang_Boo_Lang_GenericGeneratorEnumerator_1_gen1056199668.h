#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t1291133240;
struct WaitForSeconds_t1291133240_marshaled_pinvoke;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.GenericGeneratorEnumerator`1<UnityEngine.WaitForSeconds>
struct  GenericGeneratorEnumerator_1_t1056199668  : public Il2CppObject
{
public:
	// T Boo.Lang.GenericGeneratorEnumerator`1::_current
	WaitForSeconds_t1291133240 * ____current_0;
	// System.Int32 Boo.Lang.GenericGeneratorEnumerator`1::_state
	int32_t ____state_1;

public:
	inline static int32_t get_offset_of__current_0() { return static_cast<int32_t>(offsetof(GenericGeneratorEnumerator_1_t1056199668, ____current_0)); }
	inline WaitForSeconds_t1291133240 * get__current_0() const { return ____current_0; }
	inline WaitForSeconds_t1291133240 ** get_address_of__current_0() { return &____current_0; }
	inline void set__current_0(WaitForSeconds_t1291133240 * value)
	{
		____current_0 = value;
		Il2CppCodeGenWriteBarrier(&____current_0, value);
	}

	inline static int32_t get_offset_of__state_1() { return static_cast<int32_t>(offsetof(GenericGeneratorEnumerator_1_t1056199668, ____state_1)); }
	inline int32_t get__state_1() const { return ____state_1; }
	inline int32_t* get_address_of__state_1() { return &____state_1; }
	inline void set__state_1(int32_t value)
	{
		____state_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
