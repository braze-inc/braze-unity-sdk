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
struct QuickSort_1_t2202595634;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t3709260776;
// System.Linq.SortContext`1<System.Object>
struct SortContext_1_t70478024;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Linq.QuickSort`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Linq.SortContext`1<TElement>)
extern "C"  void QuickSort_1__ctor_m2169278638_gshared (QuickSort_1_t2202595634 * __this, Il2CppObject* ___source0, SortContext_1_t70478024 * ___context1, const MethodInfo* method);
#define QuickSort_1__ctor_m2169278638(__this, ___source0, ___context1, method) ((  void (*) (QuickSort_1_t2202595634 *, Il2CppObject*, SortContext_1_t70478024 *, const MethodInfo*))QuickSort_1__ctor_m2169278638_gshared)(__this, ___source0, ___context1, method)
// System.Int32[] System.Linq.QuickSort`1<System.Object>::CreateIndexes(System.Int32)
extern "C"  Int32U5BU5D_t1809983122* QuickSort_1_CreateIndexes_m1344525507_gshared (Il2CppObject * __this /* static, unused */, int32_t ___length0, const MethodInfo* method);
#define QuickSort_1_CreateIndexes_m1344525507(__this /* static, unused */, ___length0, method) ((  Int32U5BU5D_t1809983122* (*) (Il2CppObject * /* static, unused */, int32_t, const MethodInfo*))QuickSort_1_CreateIndexes_m1344525507_gshared)(__this /* static, unused */, ___length0, method)
// System.Void System.Linq.QuickSort`1<System.Object>::PerformSort()
extern "C"  void QuickSort_1_PerformSort_m665582841_gshared (QuickSort_1_t2202595634 * __this, const MethodInfo* method);
#define QuickSort_1_PerformSort_m665582841(__this, method) ((  void (*) (QuickSort_1_t2202595634 *, const MethodInfo*))QuickSort_1_PerformSort_m665582841_gshared)(__this, method)
// System.Int32 System.Linq.QuickSort`1<System.Object>::CompareItems(System.Int32,System.Int32)
extern "C"  int32_t QuickSort_1_CompareItems_m1696049333_gshared (QuickSort_1_t2202595634 * __this, int32_t ___first_index0, int32_t ___second_index1, const MethodInfo* method);
#define QuickSort_1_CompareItems_m1696049333(__this, ___first_index0, ___second_index1, method) ((  int32_t (*) (QuickSort_1_t2202595634 *, int32_t, int32_t, const MethodInfo*))QuickSort_1_CompareItems_m1696049333_gshared)(__this, ___first_index0, ___second_index1, method)
// System.Int32 System.Linq.QuickSort`1<System.Object>::MedianOfThree(System.Int32,System.Int32)
extern "C"  int32_t QuickSort_1_MedianOfThree_m4087926973_gshared (QuickSort_1_t2202595634 * __this, int32_t ___left0, int32_t ___right1, const MethodInfo* method);
#define QuickSort_1_MedianOfThree_m4087926973(__this, ___left0, ___right1, method) ((  int32_t (*) (QuickSort_1_t2202595634 *, int32_t, int32_t, const MethodInfo*))QuickSort_1_MedianOfThree_m4087926973_gshared)(__this, ___left0, ___right1, method)
// System.Void System.Linq.QuickSort`1<System.Object>::Sort(System.Int32,System.Int32)
extern "C"  void QuickSort_1_Sort_m2143186880_gshared (QuickSort_1_t2202595634 * __this, int32_t ___left0, int32_t ___right1, const MethodInfo* method);
#define QuickSort_1_Sort_m2143186880(__this, ___left0, ___right1, method) ((  void (*) (QuickSort_1_t2202595634 *, int32_t, int32_t, const MethodInfo*))QuickSort_1_Sort_m2143186880_gshared)(__this, ___left0, ___right1, method)
// System.Void System.Linq.QuickSort`1<System.Object>::InsertionSort(System.Int32,System.Int32)
extern "C"  void QuickSort_1_InsertionSort_m4059027839_gshared (QuickSort_1_t2202595634 * __this, int32_t ___left0, int32_t ___right1, const MethodInfo* method);
#define QuickSort_1_InsertionSort_m4059027839(__this, ___left0, ___right1, method) ((  void (*) (QuickSort_1_t2202595634 *, int32_t, int32_t, const MethodInfo*))QuickSort_1_InsertionSort_m4059027839_gshared)(__this, ___left0, ___right1, method)
// System.Void System.Linq.QuickSort`1<System.Object>::Swap(System.Int32,System.Int32)
extern "C"  void QuickSort_1_Swap_m59867819_gshared (QuickSort_1_t2202595634 * __this, int32_t ___left0, int32_t ___right1, const MethodInfo* method);
#define QuickSort_1_Swap_m59867819(__this, ___left0, ___right1, method) ((  void (*) (QuickSort_1_t2202595634 *, int32_t, int32_t, const MethodInfo*))QuickSort_1_Swap_m59867819_gshared)(__this, ___left0, ___right1, method)
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.QuickSort`1<System.Object>::Sort(System.Collections.Generic.IEnumerable`1<TElement>,System.Linq.SortContext`1<TElement>)
extern "C"  Il2CppObject* QuickSort_1_Sort_m1924284392_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject* ___source0, SortContext_1_t70478024 * ___context1, const MethodInfo* method);
#define QuickSort_1_Sort_m1924284392(__this /* static, unused */, ___source0, ___context1, method) ((  Il2CppObject* (*) (Il2CppObject * /* static, unused */, Il2CppObject*, SortContext_1_t70478024 *, const MethodInfo*))QuickSort_1_Sort_m1924284392_gshared)(__this /* static, unused */, ___source0, ___context1, method)
