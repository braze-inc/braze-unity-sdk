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
// System.Collections.Generic.HashSet`1/Link<UnityTest.ITestComponent>[]
struct LinkU5BU5D_t2276;
// UnityTest.ITestComponent[]
struct ITestComponentU5BU5D_t2264;
// System.Collections.Generic.IEqualityComparer`1<UnityTest.ITestComponent>
struct IEqualityComparer_1_t2275;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t962;

#include "mscorlib_System_Object.h"

// System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>
struct  HashSet_1_t288  : public Object_t
{
	// System.Int32[] System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>::table
	Int32U5BU5D_t735* ___table_4;
	// System.Collections.Generic.HashSet`1/Link<T>[] System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>::links
	LinkU5BU5D_t2276* ___links_5;
	// T[] System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>::slots
	ITestComponentU5BU5D_t2264* ___slots_6;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>::touched
	int32_t ___touched_7;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>::empty_slot
	int32_t ___empty_slot_8;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>::count
	int32_t ___count_9;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>::threshold
	int32_t ___threshold_10;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>::comparer
	Object_t* ___comparer_11;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>::si
	SerializationInfo_t962 * ___si_12;
	// System.Int32 System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>::generation
	int32_t ___generation_13;
};
