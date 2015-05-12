#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Linq.QuickSort`1<System.Object>
struct QuickSort_1_t3241;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t87;
// System.Linq.SortContext`1<System.Object>
struct SortContext_1_t3239;
// System.Int32[]
struct Int32U5BU5D_t1196;

// System.Void System.Linq.QuickSort`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Linq.SortContext`1<TElement>)
 void QuickSort_1__ctor_m16146_gshared (QuickSort_1_t3241 * __this, Object_t* ___source, SortContext_1_t3239 * ___context, MethodInfo* method);
#define QuickSort_1__ctor_m16146(__this, ___source, ___context, method) (void)QuickSort_1__ctor_m16146_gshared((QuickSort_1_t3241 *)__this, (Object_t*)___source, (SortContext_1_t3239 *)___context, method)
// System.Int32[] System.Linq.QuickSort`1<System.Object>::CreateIndexes(System.Int32)
 Int32U5BU5D_t1196* QuickSort_1_CreateIndexes_m16147_gshared (Object_t * __this/* static, unused */, int32_t ___length, MethodInfo* method);
#define QuickSort_1_CreateIndexes_m16147(__this/* static, unused */, ___length, method) (Int32U5BU5D_t1196*)QuickSort_1_CreateIndexes_m16147_gshared((Object_t *)__this/* static, unused */, (int32_t)___length, method)
// System.Void System.Linq.QuickSort`1<System.Object>::PerformSort()
 void QuickSort_1_PerformSort_m16148_gshared (QuickSort_1_t3241 * __this, MethodInfo* method);
#define QuickSort_1_PerformSort_m16148(__this, method) (void)QuickSort_1_PerformSort_m16148_gshared((QuickSort_1_t3241 *)__this, method)
// System.Int32 System.Linq.QuickSort`1<System.Object>::CompareItems(System.Int32,System.Int32)
 int32_t QuickSort_1_CompareItems_m16149_gshared (QuickSort_1_t3241 * __this, int32_t ___first_index, int32_t ___second_index, MethodInfo* method);
#define QuickSort_1_CompareItems_m16149(__this, ___first_index, ___second_index, method) (int32_t)QuickSort_1_CompareItems_m16149_gshared((QuickSort_1_t3241 *)__this, (int32_t)___first_index, (int32_t)___second_index, method)
// System.Int32 System.Linq.QuickSort`1<System.Object>::MedianOfThree(System.Int32,System.Int32)
 int32_t QuickSort_1_MedianOfThree_m16150_gshared (QuickSort_1_t3241 * __this, int32_t ___left, int32_t ___right, MethodInfo* method);
#define QuickSort_1_MedianOfThree_m16150(__this, ___left, ___right, method) (int32_t)QuickSort_1_MedianOfThree_m16150_gshared((QuickSort_1_t3241 *)__this, (int32_t)___left, (int32_t)___right, method)
// System.Void System.Linq.QuickSort`1<System.Object>::Sort(System.Int32,System.Int32)
 void QuickSort_1_Sort_m16151_gshared (QuickSort_1_t3241 * __this, int32_t ___left, int32_t ___right, MethodInfo* method);
#define QuickSort_1_Sort_m16151(__this, ___left, ___right, method) (void)QuickSort_1_Sort_m16151_gshared((QuickSort_1_t3241 *)__this, (int32_t)___left, (int32_t)___right, method)
// System.Void System.Linq.QuickSort`1<System.Object>::InsertionSort(System.Int32,System.Int32)
 void QuickSort_1_InsertionSort_m16152_gshared (QuickSort_1_t3241 * __this, int32_t ___left, int32_t ___right, MethodInfo* method);
#define QuickSort_1_InsertionSort_m16152(__this, ___left, ___right, method) (void)QuickSort_1_InsertionSort_m16152_gshared((QuickSort_1_t3241 *)__this, (int32_t)___left, (int32_t)___right, method)
// System.Void System.Linq.QuickSort`1<System.Object>::Swap(System.Int32,System.Int32)
 void QuickSort_1_Swap_m16153_gshared (QuickSort_1_t3241 * __this, int32_t ___left, int32_t ___right, MethodInfo* method);
#define QuickSort_1_Swap_m16153(__this, ___left, ___right, method) (void)QuickSort_1_Swap_m16153_gshared((QuickSort_1_t3241 *)__this, (int32_t)___left, (int32_t)___right, method)
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.QuickSort`1<System.Object>::Sort(System.Collections.Generic.IEnumerable`1<TElement>,System.Linq.SortContext`1<TElement>)
 Object_t* QuickSort_1_Sort_m16154_gshared (Object_t * __this/* static, unused */, Object_t* ___source, SortContext_1_t3239 * ___context, MethodInfo* method);
#define QuickSort_1_Sort_m16154(__this/* static, unused */, ___source, ___context, method) (Object_t*)QuickSort_1_Sort_m16154_gshared((Object_t *)__this/* static, unused */, (Object_t*)___source, (SortContext_1_t3239 *)___context, method)
