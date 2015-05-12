#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t1185;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t2594;
// System.String[]
struct StringU5BU5D_t3;
// System.Boolean[]
struct BooleanU5BU5D_t1595;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t2723;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t960;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Boolean,System.Collections.DictionaryEntry>
struct Transform_1_t4635;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.String,System.Boolean>
struct Dictionary_2_t1594  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::table
	Int32U5BU5D_t1185* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::linkSlots
	LinkU5BU5D_t2594* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::keySlots
	StringU5BU5D_t3* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::valueSlots
	BooleanU5BU5D_t1595* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::serialization_info
	SerializationInfo_t960 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t1594_StaticFields{
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::INITIAL_SIZE
	int32_t ___INITIAL_SIZE_0;
	// System.Single System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::DEFAULT_LOAD_FACTOR
	float ___DEFAULT_LOAD_FACTOR_1;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::NO_SLOT
	int32_t ___NO_SLOT_2;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::HASH_FLAG
	int32_t ___HASH_FLAG_3;
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,System.Boolean>::<>f__am$cacheB
	Transform_1_t4635 * ___U3CU3Ef__am$cacheB_15;
};
