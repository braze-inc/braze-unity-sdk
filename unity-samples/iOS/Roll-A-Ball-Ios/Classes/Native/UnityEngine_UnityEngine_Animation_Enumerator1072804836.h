#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animation
struct Animation_t350396337;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animation/Enumerator
struct  Enumerator_t1072804842  : public Il2CppObject
{
public:
	// UnityEngine.Animation UnityEngine.Animation/Enumerator::m_Outer
	Animation_t350396337 * ___m_Outer_0;
	// System.Int32 UnityEngine.Animation/Enumerator::m_CurrentIndex
	int32_t ___m_CurrentIndex_1;

public:
	inline static int32_t get_offset_of_m_Outer_0() { return static_cast<int32_t>(offsetof(Enumerator_t1072804842, ___m_Outer_0)); }
	inline Animation_t350396337 * get_m_Outer_0() const { return ___m_Outer_0; }
	inline Animation_t350396337 ** get_address_of_m_Outer_0() { return &___m_Outer_0; }
	inline void set_m_Outer_0(Animation_t350396337 * value)
	{
		___m_Outer_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Outer_0, value);
	}

	inline static int32_t get_offset_of_m_CurrentIndex_1() { return static_cast<int32_t>(offsetof(Enumerator_t1072804842, ___m_CurrentIndex_1)); }
	inline int32_t get_m_CurrentIndex_1() const { return ___m_CurrentIndex_1; }
	inline int32_t* get_address_of_m_CurrentIndex_1() { return &___m_CurrentIndex_1; }
	inline void set_m_CurrentIndex_1(int32_t value)
	{
		___m_CurrentIndex_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
