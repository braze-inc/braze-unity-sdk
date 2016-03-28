#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.HashSet`1<Appboy.Models.CardCategory>
struct HashSet_1_t7921132;

#include "mscorlib_System_ValueType4014882752.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Models_CardCa1604199757.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.HashSet`1/Enumerator<Appboy.Models.CardCategory>
struct  Enumerator_t486941718 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::hashset
	HashSet_1_t7921132 * ___hashset_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::stamp
	int32_t ___stamp_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::current
	int32_t ___current_3;

public:
	inline static int32_t get_offset_of_hashset_0() { return static_cast<int32_t>(offsetof(Enumerator_t486941718, ___hashset_0)); }
	inline HashSet_1_t7921132 * get_hashset_0() const { return ___hashset_0; }
	inline HashSet_1_t7921132 ** get_address_of_hashset_0() { return &___hashset_0; }
	inline void set_hashset_0(HashSet_1_t7921132 * value)
	{
		___hashset_0 = value;
		Il2CppCodeGenWriteBarrier(&___hashset_0, value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t486941718, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t486941718, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t486941718, ___current_3)); }
	inline int32_t get_current_3() const { return ___current_3; }
	inline int32_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(int32_t value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
