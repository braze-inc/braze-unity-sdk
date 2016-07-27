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

// System.Linq.OrderedSequence`2<System.Object,System.Object>
struct OrderedSequence_2_t4038725990;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t3709260776;
// System.Func`2<System.Object,System.Object>
struct Func_2_t2135783352;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t3536813829;
// System.Linq.SortContext`1<System.Object>
struct SortContext_1_t70478024;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_SortDirection2805156518.h"

// System.Void System.Linq.OrderedSequence`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection)
extern "C"  void OrderedSequence_2__ctor_m4118986726_gshared (OrderedSequence_2_t4038725990 * __this, Il2CppObject* ___source0, Func_2_t2135783352 * ___key_selector1, Il2CppObject* ___comparer2, int32_t ___direction3, const MethodInfo* method);
#define OrderedSequence_2__ctor_m4118986726(__this, ___source0, ___key_selector1, ___comparer2, ___direction3, method) ((  void (*) (OrderedSequence_2_t4038725990 *, Il2CppObject*, Func_2_t2135783352 *, Il2CppObject*, int32_t, const MethodInfo*))OrderedSequence_2__ctor_m4118986726_gshared)(__this, ___source0, ___key_selector1, ___comparer2, ___direction3, method)
// System.Linq.SortContext`1<TElement> System.Linq.OrderedSequence`2<System.Object,System.Object>::CreateContext(System.Linq.SortContext`1<TElement>)
extern "C"  SortContext_1_t70478024 * OrderedSequence_2_CreateContext_m2181301000_gshared (OrderedSequence_2_t4038725990 * __this, SortContext_1_t70478024 * ___current0, const MethodInfo* method);
#define OrderedSequence_2_CreateContext_m2181301000(__this, ___current0, method) ((  SortContext_1_t70478024 * (*) (OrderedSequence_2_t4038725990 *, SortContext_1_t70478024 *, const MethodInfo*))OrderedSequence_2_CreateContext_m2181301000_gshared)(__this, ___current0, method)
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.OrderedSequence`2<System.Object,System.Object>::Sort(System.Collections.Generic.IEnumerable`1<TElement>)
extern "C"  Il2CppObject* OrderedSequence_2_Sort_m2978680275_gshared (OrderedSequence_2_t4038725990 * __this, Il2CppObject* ___source0, const MethodInfo* method);
#define OrderedSequence_2_Sort_m2978680275(__this, ___source0, method) ((  Il2CppObject* (*) (OrderedSequence_2_t4038725990 *, Il2CppObject*, const MethodInfo*))OrderedSequence_2_Sort_m2978680275_gshared)(__this, ___source0, method)
