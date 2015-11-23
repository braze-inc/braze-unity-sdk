#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Linq.QuickSort`1<System.Object>
struct QuickSort_1_t2291;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t80;
// System.Linq.SortContext`1<System.Object>
struct SortContext_1_t2289;
// System.Int32[]
struct Int32U5BU5D_t735;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Linq.QuickSort`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Linq.SortContext`1<TElement>)
extern "C" void QuickSort_1__ctor_m14538_gshared (QuickSort_1_t2291 * __this, Object_t* ___source, SortContext_1_t2289 * ___context, const MethodInfo* method);
#define QuickSort_1__ctor_m14538(__this, ___source, ___context, method) (( void (*) (QuickSort_1_t2291 *, Object_t*, SortContext_1_t2289 *, const MethodInfo*))QuickSort_1__ctor_m14538_gshared)(__this, ___source, ___context, method)
// System.Int32[] System.Linq.QuickSort`1<System.Object>::CreateIndexes(System.Int32)
extern "C" Int32U5BU5D_t735* QuickSort_1_CreateIndexes_m14539_gshared (Object_t * __this /* static, unused */, int32_t ___length, const MethodInfo* method);
#define QuickSort_1_CreateIndexes_m14539(__this /* static, unused */, ___length, method) (( Int32U5BU5D_t735* (*) (Object_t * /* static, unused */, int32_t, const MethodInfo*))QuickSort_1_CreateIndexes_m14539_gshared)(__this /* static, unused */, ___length, method)
// System.Void System.Linq.QuickSort`1<System.Object>::PerformSort()
extern "C" void QuickSort_1_PerformSort_m14540_gshared (QuickSort_1_t2291 * __this, const MethodInfo* method);
#define QuickSort_1_PerformSort_m14540(__this, method) (( void (*) (QuickSort_1_t2291 *, const MethodInfo*))QuickSort_1_PerformSort_m14540_gshared)(__this, method)
// System.Int32 System.Linq.QuickSort`1<System.Object>::CompareItems(System.Int32,System.Int32)
extern "C" int32_t QuickSort_1_CompareItems_m14541_gshared (QuickSort_1_t2291 * __this, int32_t ___first_index, int32_t ___second_index, const MethodInfo* method);
#define QuickSort_1_CompareItems_m14541(__this, ___first_index, ___second_index, method) (( int32_t (*) (QuickSort_1_t2291 *, int32_t, int32_t, const MethodInfo*))QuickSort_1_CompareItems_m14541_gshared)(__this, ___first_index, ___second_index, method)
// System.Int32 System.Linq.QuickSort`1<System.Object>::MedianOfThree(System.Int32,System.Int32)
extern "C" int32_t QuickSort_1_MedianOfThree_m14542_gshared (QuickSort_1_t2291 * __this, int32_t ___left, int32_t ___right, const MethodInfo* method);
#define QuickSort_1_MedianOfThree_m14542(__this, ___left, ___right, method) (( int32_t (*) (QuickSort_1_t2291 *, int32_t, int32_t, const MethodInfo*))QuickSort_1_MedianOfThree_m14542_gshared)(__this, ___left, ___right, method)
// System.Void System.Linq.QuickSort`1<System.Object>::Sort(System.Int32,System.Int32)
extern "C" void QuickSort_1_Sort_m14543_gshared (QuickSort_1_t2291 * __this, int32_t ___left, int32_t ___right, const MethodInfo* method);
#define QuickSort_1_Sort_m14543(__this, ___left, ___right, method) (( void (*) (QuickSort_1_t2291 *, int32_t, int32_t, const MethodInfo*))QuickSort_1_Sort_m14543_gshared)(__this, ___left, ___right, method)
// System.Void System.Linq.QuickSort`1<System.Object>::InsertionSort(System.Int32,System.Int32)
extern "C" void QuickSort_1_InsertionSort_m14544_gshared (QuickSort_1_t2291 * __this, int32_t ___left, int32_t ___right, const MethodInfo* method);
#define QuickSort_1_InsertionSort_m14544(__this, ___left, ___right, method) (( void (*) (QuickSort_1_t2291 *, int32_t, int32_t, const MethodInfo*))QuickSort_1_InsertionSort_m14544_gshared)(__this, ___left, ___right, method)
// System.Void System.Linq.QuickSort`1<System.Object>::Swap(System.Int32,System.Int32)
extern "C" void QuickSort_1_Swap_m14545_gshared (QuickSort_1_t2291 * __this, int32_t ___left, int32_t ___right, const MethodInfo* method);
#define QuickSort_1_Swap_m14545(__this, ___left, ___right, method) (( void (*) (QuickSort_1_t2291 *, int32_t, int32_t, const MethodInfo*))QuickSort_1_Swap_m14545_gshared)(__this, ___left, ___right, method)
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.QuickSort`1<System.Object>::Sort(System.Collections.Generic.IEnumerable`1<TElement>,System.Linq.SortContext`1<TElement>)
extern "C" Object_t* QuickSort_1_Sort_m14546_gshared (Object_t * __this /* static, unused */, Object_t* ___source, SortContext_1_t2289 * ___context, const MethodInfo* method);
#define QuickSort_1_Sort_m14546(__this /* static, unused */, ___source, ___context, method) (( Object_t* (*) (Object_t * /* static, unused */, Object_t*, SortContext_1_t2289 *, const MethodInfo*))QuickSort_1_Sort_m14546_gshared)(__this /* static, unused */, ___source, ___context, method)
