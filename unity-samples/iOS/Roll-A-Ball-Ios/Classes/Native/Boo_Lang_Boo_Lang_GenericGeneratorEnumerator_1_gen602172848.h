#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.GenericGeneratorEnumerator`1<System.Object>
struct  GenericGeneratorEnumerator_1_t602172848  : public Il2CppObject
{
public:
	// T Boo.Lang.GenericGeneratorEnumerator`1::_current
	Il2CppObject * ____current_0;
	// System.Int32 Boo.Lang.GenericGeneratorEnumerator`1::_state
	int32_t ____state_1;

public:
	inline static int32_t get_offset_of__current_0() { return static_cast<int32_t>(offsetof(GenericGeneratorEnumerator_1_t602172848, ____current_0)); }
	inline Il2CppObject * get__current_0() const { return ____current_0; }
	inline Il2CppObject ** get_address_of__current_0() { return &____current_0; }
	inline void set__current_0(Il2CppObject * value)
	{
		____current_0 = value;
		Il2CppCodeGenWriteBarrier(&____current_0, value);
	}

	inline static int32_t get_offset_of__state_1() { return static_cast<int32_t>(offsetof(GenericGeneratorEnumerator_1_t602172848, ____state_1)); }
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
