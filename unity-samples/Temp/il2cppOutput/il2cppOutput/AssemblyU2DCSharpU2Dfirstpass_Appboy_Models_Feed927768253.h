#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Appboy.Models.Cards.Card>
struct List_1_t4215507743;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Appboy.Models.Feed
struct  Feed_t927768253  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<Appboy.Models.Cards.Card> Appboy.Models.Feed::<Cards>k__BackingField
	List_1_t4215507743 * ___U3CCardsU3Ek__BackingField_0;
	// System.Boolean Appboy.Models.Feed::<IsFromOfflineStorage>k__BackingField
	bool ___U3CIsFromOfflineStorageU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CCardsU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Feed_t927768253, ___U3CCardsU3Ek__BackingField_0)); }
	inline List_1_t4215507743 * get_U3CCardsU3Ek__BackingField_0() const { return ___U3CCardsU3Ek__BackingField_0; }
	inline List_1_t4215507743 ** get_address_of_U3CCardsU3Ek__BackingField_0() { return &___U3CCardsU3Ek__BackingField_0; }
	inline void set_U3CCardsU3Ek__BackingField_0(List_1_t4215507743 * value)
	{
		___U3CCardsU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCardsU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CIsFromOfflineStorageU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Feed_t927768253, ___U3CIsFromOfflineStorageU3Ek__BackingField_1)); }
	inline bool get_U3CIsFromOfflineStorageU3Ek__BackingField_1() const { return ___U3CIsFromOfflineStorageU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CIsFromOfflineStorageU3Ek__BackingField_1() { return &___U3CIsFromOfflineStorageU3Ek__BackingField_1; }
	inline void set_U3CIsFromOfflineStorageU3Ek__BackingField_1(bool value)
	{
		___U3CIsFromOfflineStorageU3Ek__BackingField_1 = value;
	}
};

struct Feed_t927768253_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Appboy.Models.Feed::<>f__switch$map1
	Dictionary_2_t190145395 * ___U3CU3Ef__switchU24map1_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1_2() { return static_cast<int32_t>(offsetof(Feed_t927768253_StaticFields, ___U3CU3Ef__switchU24map1_2)); }
	inline Dictionary_2_t190145395 * get_U3CU3Ef__switchU24map1_2() const { return ___U3CU3Ef__switchU24map1_2; }
	inline Dictionary_2_t190145395 ** get_address_of_U3CU3Ef__switchU24map1_2() { return &___U3CU3Ef__switchU24map1_2; }
	inline void set_U3CU3Ef__switchU24map1_2(Dictionary_2_t190145395 * value)
	{
		___U3CU3Ef__switchU24map1_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map1_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
