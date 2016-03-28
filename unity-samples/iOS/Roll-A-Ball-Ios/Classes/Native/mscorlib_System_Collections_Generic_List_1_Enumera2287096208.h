#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Experimental.Director.Playable>
struct List_1_t4201313216;
// UnityEngine.Experimental.Director.Playable
struct Playable_t3404354247;

#include "mscorlib_System_ValueType4014882752.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<UnityEngine.Experimental.Director.Playable>
struct  Enumerator_t2287096208 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t4201313216 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Playable_t3404354247 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2287096208, ___l_0)); }
	inline List_1_t4201313216 * get_l_0() const { return ___l_0; }
	inline List_1_t4201313216 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t4201313216 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier(&___l_0, value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2287096208, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2287096208, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2287096208, ___current_3)); }
	inline Playable_t3404354247 * get_current_3() const { return ___current_3; }
	inline Playable_t3404354247 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Playable_t3404354247 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier(&___current_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
