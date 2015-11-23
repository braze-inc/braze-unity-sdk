#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>>
struct Dictionary_2_t202;

#include "mscorlib_System_ValueType.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"

// System.Collections.Generic.Dictionary`2/Enumerator<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>>
struct  Enumerator_t292 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>>::dictionary
	Dictionary_2_t202 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>>::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>>::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<UnityTest.ITestComponent,System.Collections.Generic.HashSet`1<UnityTest.ITestComponent>>::current
	KeyValuePair_2_t291  ___current_3;
};
