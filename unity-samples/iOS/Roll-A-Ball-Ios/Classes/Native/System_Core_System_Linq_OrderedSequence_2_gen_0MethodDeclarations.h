#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.OrderedSequence`2<UnityTest.ITestComponent,UnityTest.ITestComponent>
struct OrderedSequence_2_t3225;
// System.Collections.Generic.IEnumerable`1<UnityTest.ITestComponent>
struct IEnumerable_1_t225;
// System.Func`2<UnityTest.ITestComponent,UnityTest.ITestComponent>
struct Func_2_t226;
// System.Collections.Generic.IComparer`1<UnityTest.ITestComponent>
struct IComparer_1_t3224;
// System.Linq.SortContext`1<UnityTest.ITestComponent>
struct SortContext_1_t3226;
// System.Linq.SortDirection
#include "System_Core_System_Linq_SortDirection.h"

// System.Void System.Linq.OrderedSequence`2<UnityTest.ITestComponent,UnityTest.ITestComponent>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection)
// System.Linq.OrderedSequence`2<System.Object,System.Object>
#include "System_Core_System_Linq_OrderedSequence_2_genMethodDeclarations.h"
#define OrderedSequence_2__ctor_m15942(__this, ___source, ___key_selector, ___comparer, ___direction, method) (void)OrderedSequence_2__ctor_m15916_gshared((OrderedSequence_2_t3218 *)__this, (Object_t*)___source, (Func_2_t326 *)___key_selector, (Object_t*)___comparer, (int32_t)___direction, method)
// System.Linq.SortContext`1<TElement> System.Linq.OrderedSequence`2<UnityTest.ITestComponent,UnityTest.ITestComponent>::CreateContext(System.Linq.SortContext`1<TElement>)
#define OrderedSequence_2_CreateContext_m15943(__this, ___current, method) (SortContext_1_t3226 *)OrderedSequence_2_CreateContext_m15917_gshared((OrderedSequence_2_t3218 *)__this, (SortContext_1_t3219 *)___current, method)
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.OrderedSequence`2<UnityTest.ITestComponent,UnityTest.ITestComponent>::Sort(System.Collections.Generic.IEnumerable`1<TElement>)
#define OrderedSequence_2_Sort_m15944(__this, ___source, method) (Object_t*)OrderedSequence_2_Sort_m15918_gshared((OrderedSequence_2_t3218 *)__this, (Object_t*)___source, method)
