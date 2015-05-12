#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t1196;
// System.Collections.Generic.HashSet`1/Link<UnityTest.ITestComponent>[]
struct LinkU5BU5D_t3213;
// UnityTest.ITestComponent[]
struct ITestComponentU5BU5D_t3180;
// System.Collections.Generic.IEqualityComparer`1<UnityTest.ITestComponent>
struct IEqualityComparer_1_t3207;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t971;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>
struct HashSet_1_t342  : public Object_t
{
	// System.Int32[] System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>::table
	Int32U5BU5D_t1196* ___table_0;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>::links
	LinkU5BU5D_t3213* ___links_1;
	// T[] System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>::slots
	ITestComponentU5BU5D_t3180* ___slots_2;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>::touched
	int32_t ___touched_3;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>::empty_slot
	int32_t ___empty_slot_4;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>::count
	int32_t ___count_5;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>::threshold
	int32_t ___threshold_6;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>::comparer
	Object_t* ___comparer_7;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>::si
	SerializationInfo_t971 * ___si_8;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>::generation
	int32_t ___generation_9;
};
