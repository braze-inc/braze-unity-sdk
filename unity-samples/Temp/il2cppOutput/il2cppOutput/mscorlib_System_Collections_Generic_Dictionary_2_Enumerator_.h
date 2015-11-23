#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,Appboy.Utilities.JSONNode>
struct Dictionary_2_t25;

#include "mscorlib_System_ValueType.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,Appboy.Utilities.JSONNode>
struct  Enumerator_t20 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,Appboy.Utilities.JSONNode>::dictionary
	Dictionary_2_t25 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.String,Appboy.Utilities.JSONNode>::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator<System.String,Appboy.Utilities.JSONNode>::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,Appboy.Utilities.JSONNode>::current
	KeyValuePair_2_t21  ___current_3;
};
