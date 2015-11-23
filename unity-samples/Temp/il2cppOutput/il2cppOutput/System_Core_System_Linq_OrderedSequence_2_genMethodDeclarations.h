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
struct OrderedSequence_2_t2286;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t80;
// System.Func`2<System.Object,System.Object>
struct Func_2_t315;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t2288;
// System.Linq.SortContext`1<System.Object>
struct SortContext_1_t2289;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_SortDirection.h"

// System.Void System.Linq.OrderedSequence`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection)
extern "C" void OrderedSequence_2__ctor_m14528_gshared (OrderedSequence_2_t2286 * __this, Object_t* ___source, Func_2_t315 * ___key_selector, Object_t* ___comparer, int32_t ___direction, const MethodInfo* method);
#define OrderedSequence_2__ctor_m14528(__this, ___source, ___key_selector, ___comparer, ___direction, method) (( void (*) (OrderedSequence_2_t2286 *, Object_t*, Func_2_t315 *, Object_t*, int32_t, const MethodInfo*))OrderedSequence_2__ctor_m14528_gshared)(__this, ___source, ___key_selector, ___comparer, ___direction, method)
// System.Linq.SortContext`1<TElement> System.Linq.OrderedSequence`2<System.Object,System.Object>::CreateContext(System.Linq.SortContext`1<TElement>)
extern "C" SortContext_1_t2289 * OrderedSequence_2_CreateContext_m14529_gshared (OrderedSequence_2_t2286 * __this, SortContext_1_t2289 * ___current, const MethodInfo* method);
#define OrderedSequence_2_CreateContext_m14529(__this, ___current, method) (( SortContext_1_t2289 * (*) (OrderedSequence_2_t2286 *, SortContext_1_t2289 *, const MethodInfo*))OrderedSequence_2_CreateContext_m14529_gshared)(__this, ___current, method)
// System.Collections.Generic.IEnumerable`1<TElement> System.Linq.OrderedSequence`2<System.Object,System.Object>::Sort(System.Collections.Generic.IEnumerable`1<TElement>)
extern "C" Object_t* OrderedSequence_2_Sort_m14530_gshared (OrderedSequence_2_t2286 * __this, Object_t* ___source, const MethodInfo* method);
#define OrderedSequence_2_Sort_m14530(__this, ___source, method) (( Object_t* (*) (OrderedSequence_2_t2286 *, Object_t*, const MethodInfo*))OrderedSequence_2_Sort_m14530_gshared)(__this, ___source, method)
