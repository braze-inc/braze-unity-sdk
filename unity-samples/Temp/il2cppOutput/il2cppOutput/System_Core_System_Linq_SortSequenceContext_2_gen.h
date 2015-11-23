#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Func`2<System.Object,System.Object>
struct Func_2_t315;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t2288;
// System.Object[]
struct ObjectU5BU5D_t87;

#include "System_Core_System_Linq_SortContext_1_gen.h"

// System.Linq.SortSequenceContext`2<System.Object,System.Object>
struct  SortSequenceContext_2_t2290  : public SortContext_1_t2289
{
	// System.Func`2<TElement,TKey> System.Linq.SortSequenceContext`2<System.Object,System.Object>::selector
	Func_2_t315 * ___selector_2;
	// System.Collections.Generic.IComparer`1<TKey> System.Linq.SortSequenceContext`2<System.Object,System.Object>::comparer
	Object_t* ___comparer_3;
	// TKey[] System.Linq.SortSequenceContext`2<System.Object,System.Object>::keys
	ObjectU5BU5D_t87* ___keys_4;
};
