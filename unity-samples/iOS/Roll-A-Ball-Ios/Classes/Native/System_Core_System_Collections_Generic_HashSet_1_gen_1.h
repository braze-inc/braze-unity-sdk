#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t1185;
// System.Collections.Generic.HashSet`1/Link<UnityTest.TestComponent>[]
struct LinkU5BU5D_t3291;
// UnityTest.TestComponent[]
struct TestComponentU5BU5D_t352;
// System.Collections.Generic.IEqualityComparer`1<UnityTest.TestComponent>
struct IEqualityComparer_1_t3293;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t960;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.HashSet`1<UnityTest.TestComponent>
struct HashSet_1_t349  : public Object_t
{
	// System.Int32[] System.Collections.Generic.HashSet`1<UnityTest.TestComponent>::table
	Int32U5BU5D_t1185* ___table_0;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1<UnityTest.TestComponent>::links
	LinkU5BU5D_t3291* ___links_1;
	// T[] System.Collections.Generic.HashSet`1<UnityTest.TestComponent>::slots
	TestComponentU5BU5D_t352* ___slots_2;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityTest.TestComponent>::touched
	int32_t ___touched_3;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityTest.TestComponent>::empty_slot
	int32_t ___empty_slot_4;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityTest.TestComponent>::count
	int32_t ___count_5;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityTest.TestComponent>::threshold
	int32_t ___threshold_6;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1<UnityTest.TestComponent>::comparer
	Object_t* ___comparer_7;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1<UnityTest.TestComponent>::si
	SerializationInfo_t960 * ___si_8;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityTest.TestComponent>::generation
	int32_t ___generation_9;
};
