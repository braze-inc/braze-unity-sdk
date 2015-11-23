#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Linq.OrderedEnumerable`1<System.Object>
struct OrderedEnumerable_1_t2287;
// System.Func`2<System.Object,System.Object>
struct Func_2_t315;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t2288;

#include "System_Core_System_Linq_OrderedEnumerable_1_gen.h"
#include "System_Core_System_Linq_SortDirection.h"

// System.Linq.OrderedSequence`2<System.Object,System.Object>
struct  OrderedSequence_2_t2286  : public OrderedEnumerable_1_t2287
{
	// System.Linq.OrderedEnumerable`1<TElement> System.Linq.OrderedSequence`2<System.Object,System.Object>::parent
	OrderedEnumerable_1_t2287 * ___parent_1;
	// System.Func`2<TElement,TKey> System.Linq.OrderedSequence`2<System.Object,System.Object>::selector
	Func_2_t315 * ___selector_2;
	// System.Collections.Generic.IComparer`1<TKey> System.Linq.OrderedSequence`2<System.Object,System.Object>::comparer
	Object_t* ___comparer_3;
	// System.Linq.SortDirection System.Linq.OrderedSequence`2<System.Object,System.Object>::direction
	int32_t ___direction_4;
};
