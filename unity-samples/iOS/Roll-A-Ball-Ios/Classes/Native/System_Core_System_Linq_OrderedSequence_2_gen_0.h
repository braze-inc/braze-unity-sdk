#pragma once
#include <stdint.h>
// System.Linq.OrderedEnumerable`1<UnityTest.ITestComponent>
struct OrderedEnumerable_1_t3243;
// System.Func`2<UnityTest.ITestComponent,UnityTest.ITestComponent>
struct Func_2_t239;
// System.Collections.Generic.IComparer`1<UnityTest.ITestComponent>
struct IComparer_1_t3244;
// System.Linq.OrderedEnumerable`1<UnityTest.ITestComponent>
#include "System_Core_System_Linq_OrderedEnumerable_1_gen_0.h"
// System.Linq.SortDirection
#include "System_Core_System_Linq_SortDirection.h"
// System.Linq.OrderedSequence`2<UnityTest.ITestComponent,UnityTest.ITestComponent>
struct OrderedSequence_2_t3245  : public OrderedEnumerable_1_t3243
{
	// System.Linq.OrderedEnumerable`1<TElement> System.Linq.OrderedSequence`2<UnityTest.ITestComponent,UnityTest.ITestComponent>::parent
	OrderedEnumerable_1_t3243 * ___parent_1;
	// System.Func`2<TElement,TKey> System.Linq.OrderedSequence`2<UnityTest.ITestComponent,UnityTest.ITestComponent>::selector
	Func_2_t239 * ___selector_2;
	// System.Collections.Generic.IComparer`1<TKey> System.Linq.OrderedSequence`2<UnityTest.ITestComponent,UnityTest.ITestComponent>::comparer
	Object_t* ___comparer_3;
	// System.Linq.SortDirection System.Linq.OrderedSequence`2<UnityTest.ITestComponent,UnityTest.ITestComponent>::direction
	int32_t ___direction_4;
};
