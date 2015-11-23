#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct Dictionary_2_t858;

#include "mscorlib_System_ValueType.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct  Enumerator_t2688 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::dictionary
	Dictionary_2_t858 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>::current
	KeyValuePair_2_t2685  ___current_3;
};
