#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t735;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t2160;
// UnityEngine.Font[]
struct FontU5BU5D_t2453;
// System.Collections.Generic.List`1<UnityEngine.UI.Text>[]
struct List_1U5BU5D_t2454;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Font>
struct IEqualityComparer_1_t2456;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t962;
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.DictionaryEntry>
struct Transform_1_t2455;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>
struct  Dictionary_2_t518  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::table
	Int32U5BU5D_t735* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::linkSlots
	LinkU5BU5D_t2160* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::keySlots
	FontU5BU5D_t2453* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::valueSlots
	List_1U5BU5D_t2454* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::serialization_info
	SerializationInfo_t962 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t518_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>>::<>f__am$cacheB
	Transform_1_t2455 * ___U3CU3Ef__amU24cacheB_15;
};
