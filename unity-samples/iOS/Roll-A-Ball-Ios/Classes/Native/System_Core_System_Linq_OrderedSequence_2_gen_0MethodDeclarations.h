#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.OrderedSequence`2<UnityTest.ITestComponent,UnityTest.ITestComponent>
struct OrderedSequence_2_t3245;
// System.Collections.Generic.IEnumerable`1<UnityTest.ITestComponent>
struct IEnumerable_1_t238;
// System.Func`2<UnityTest.ITestComponent,UnityTest.ITestComponent>
struct Func_2_t239;
// System.Collections.Generic.IComparer`1<UnityTest.ITestComponent>
struct IComparer_1_t3244;
// System.Linq.SortContext`1<UnityTest.ITestComponent>
struct SortContext_1_t3246;
// System.Linq.SortDirection
#include "System_Core_System_Linq_SortDirection.h"

// System.Void System.Linq.OrderedSequence`2<UnityTest.ITestComponent,UnityTest.ITestComponent>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection)
// System.Linq.OrderedSequence`2<System.Object,System.Object>
#include "System_Core_System_Linq_OrderedSequence_2_genMethodDeclarations.h"
#define OrderedSequence_2__ctor_m16162(__this, ___source, ___key_selector, ___comparer, ___direction, method) (void)OrderedSequence_2__ctor_m16136_gshared((OrderedSequence_2_t3238 *)__this, (Object_t*)___source, (Func_2_t339 *)___key_selector, (Object_t*)___comparer, (int32_t)___direction, method)
// System.Linq.SortContext`1<TElement> System.Linq.OrderedSequence`2<UnityTest.ITestComponent,UnityTest.ITestComponent>::CreateContext(System.Linq.SortContext`1<TElement>)
#define OrderedSequence_2_CreateContext_m16163(__this, ___current, method) (SortContext_1_t3246 *)OrderedSequence_2_CreateContext_m16137_gshared((OrderedSequence_2_t3238 *)__this, (SortContext_1_t3239 *)___current, method)
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.OrderedSequence`2<UnityTest.ITestComponent,UnityTest.ITestComponent>::Sort(System.Collections.Generic.IEnumerable`1<TElement>)
#define OrderedSequence_2_Sort_m16164(__this, ___source, method) (Object_t*)OrderedSequence_2_Sort_m16138_gshared((OrderedSequence_2_t3238 *)__this, (Object_t*)___source, method)
