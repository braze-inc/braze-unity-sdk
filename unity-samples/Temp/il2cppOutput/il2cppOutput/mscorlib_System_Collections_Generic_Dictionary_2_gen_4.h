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
// System.String[]
struct StringU5BU5D_t63;
// System.Collections.Generic.List`1<ITestResult>[]
struct List_1U5BU5D_t2299;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t2162;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t962;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Collections.Generic.List`1<ITestResult>,System.Collections.DictionaryEntry>
struct Transform_1_t2300;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>
struct  Dictionary_2_t230  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::table
	Int32U5BU5D_t735* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::linkSlots
	LinkU5BU5D_t2160* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::keySlots
	StringU5BU5D_t63* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::valueSlots
	List_1U5BU5D_t2299* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::serialization_info
	SerializationInfo_t962 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t230_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::<>f__am$cacheB
	Transform_1_t2300 * ___U3CU3Ef__amU24cacheB_15;
};
