#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Collections.Generic.HashSet`1/Link<System.Object>[]
struct LinkU5BU5D_t808175634;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3161373071;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.HashSet`1<System.Object>
struct  HashSet_1_t3535795091  : public Il2CppObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::table
	Int32U5BU5D_t1809983122* ___table_0;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1::links
	LinkU5BU5D_t808175634* ___links_1;
	// T[] System.Collections.Generic.HashSet`1::slots
	ObjectU5BU5D_t11523773* ___slots_2;
	// System.Int32 System.Collections.Generic.HashSet`1::touched
	int32_t ___touched_3;
	// System.Int32 System.Collections.Generic.HashSet`1::empty_slot
	int32_t ___empty_slot_4;
	// System.Int32 System.Collections.Generic.HashSet`1::count
	int32_t ___count_5;
	// System.Int32 System.Collections.Generic.HashSet`1::threshold
	int32_t ___threshold_6;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::comparer
	Il2CppObject* ___comparer_7;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::si
	SerializationInfo_t2995724695 * ___si_8;
	// System.Int32 System.Collections.Generic.HashSet`1::generation
	int32_t ___generation_9;

public:
	inline static int32_t get_offset_of_table_0() { return static_cast<int32_t>(offsetof(HashSet_1_t3535795091, ___table_0)); }
	inline Int32U5BU5D_t1809983122* get_table_0() const { return ___table_0; }
	inline Int32U5BU5D_t1809983122** get_address_of_table_0() { return &___table_0; }
	inline void set_table_0(Int32U5BU5D_t1809983122* value)
	{
		___table_0 = value;
		Il2CppCodeGenWriteBarrier(&___table_0, value);
	}

	inline static int32_t get_offset_of_links_1() { return static_cast<int32_t>(offsetof(HashSet_1_t3535795091, ___links_1)); }
	inline LinkU5BU5D_t808175634* get_links_1() const { return ___links_1; }
	inline LinkU5BU5D_t808175634** get_address_of_links_1() { return &___links_1; }
	inline void set_links_1(LinkU5BU5D_t808175634* value)
	{
		___links_1 = value;
		Il2CppCodeGenWriteBarrier(&___links_1, value);
	}

	inline static int32_t get_offset_of_slots_2() { return static_cast<int32_t>(offsetof(HashSet_1_t3535795091, ___slots_2)); }
	inline ObjectU5BU5D_t11523773* get_slots_2() const { return ___slots_2; }
	inline ObjectU5BU5D_t11523773** get_address_of_slots_2() { return &___slots_2; }
	inline void set_slots_2(ObjectU5BU5D_t11523773* value)
	{
		___slots_2 = value;
		Il2CppCodeGenWriteBarrier(&___slots_2, value);
	}

	inline static int32_t get_offset_of_touched_3() { return static_cast<int32_t>(offsetof(HashSet_1_t3535795091, ___touched_3)); }
	inline int32_t get_touched_3() const { return ___touched_3; }
	inline int32_t* get_address_of_touched_3() { return &___touched_3; }
	inline void set_touched_3(int32_t value)
	{
		___touched_3 = value;
	}

	inline static int32_t get_offset_of_empty_slot_4() { return static_cast<int32_t>(offsetof(HashSet_1_t3535795091, ___empty_slot_4)); }
	inline int32_t get_empty_slot_4() const { return ___empty_slot_4; }
	inline int32_t* get_address_of_empty_slot_4() { return &___empty_slot_4; }
	inline void set_empty_slot_4(int32_t value)
	{
		___empty_slot_4 = value;
	}

	inline static int32_t get_offset_of_count_5() { return static_cast<int32_t>(offsetof(HashSet_1_t3535795091, ___count_5)); }
	inline int32_t get_count_5() const { return ___count_5; }
	inline int32_t* get_address_of_count_5() { return &___count_5; }
	inline void set_count_5(int32_t value)
	{
		___count_5 = value;
	}

	inline static int32_t get_offset_of_threshold_6() { return static_cast<int32_t>(offsetof(HashSet_1_t3535795091, ___threshold_6)); }
	inline int32_t get_threshold_6() const { return ___threshold_6; }
	inline int32_t* get_address_of_threshold_6() { return &___threshold_6; }
	inline void set_threshold_6(int32_t value)
	{
		___threshold_6 = value;
	}

	inline static int32_t get_offset_of_comparer_7() { return static_cast<int32_t>(offsetof(HashSet_1_t3535795091, ___comparer_7)); }
	inline Il2CppObject* get_comparer_7() const { return ___comparer_7; }
	inline Il2CppObject** get_address_of_comparer_7() { return &___comparer_7; }
	inline void set_comparer_7(Il2CppObject* value)
	{
		___comparer_7 = value;
		Il2CppCodeGenWriteBarrier(&___comparer_7, value);
	}

	inline static int32_t get_offset_of_si_8() { return static_cast<int32_t>(offsetof(HashSet_1_t3535795091, ___si_8)); }
	inline SerializationInfo_t2995724695 * get_si_8() const { return ___si_8; }
	inline SerializationInfo_t2995724695 ** get_address_of_si_8() { return &___si_8; }
	inline void set_si_8(SerializationInfo_t2995724695 * value)
	{
		___si_8 = value;
		Il2CppCodeGenWriteBarrier(&___si_8, value);
	}

	inline static int32_t get_offset_of_generation_9() { return static_cast<int32_t>(offsetof(HashSet_1_t3535795091, ___generation_9)); }
	inline int32_t get_generation_9() const { return ___generation_9; }
	inline int32_t* get_address_of_generation_9() { return &___generation_9; }
	inline void set_generation_9(int32_t value)
	{
		___generation_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
