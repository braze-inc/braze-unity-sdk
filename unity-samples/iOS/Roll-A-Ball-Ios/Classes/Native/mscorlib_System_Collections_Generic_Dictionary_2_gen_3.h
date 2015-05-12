#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t1196;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t2606;
// UnityTest.ITestComponent[]
struct ITestComponentU5BU5D_t3180;
// System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>[]
struct HashSet_1U5BU5D_t3206;
// System.Collections.Generic.IEqualityComparer`1<UnityTest.ITestComponent>
struct IEqualityComparer_1_t3207;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t971;
// System.Collections.Generic.Dictionary`2/Transform`1<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>,System.Collections.DictionaryEntry>
struct Transform_1_t3208;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>>
struct Dictionary_2_t236  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>>::table
	Int32U5BU5D_t1196* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>>::linkSlots
	LinkU5BU5D_t2606* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>>::keySlots
	ITestComponentU5BU5D_t3180* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>>::valueSlots
	HashSet_1U5BU5D_t3206* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>>::serialization_info
	SerializationInfo_t971 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t236_StaticFields{
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>>::INITIAL_SIZE
	int32_t ___INITIAL_SIZE_0;
	// System.Single System.Collections.Generic.Dictionary`2<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>>::DEFAULT_LOAD_FACTOR
	float ___DEFAULT_LOAD_FACTOR_1;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>>::NO_SLOT
	int32_t ___NO_SLOT_2;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>>::HASH_FLAG
	int32_t ___HASH_FLAG_3;
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>>::<>f__am$cacheB
	Transform_1_t3208 * ___U3CU3Ef__am$cacheB_15;
};
