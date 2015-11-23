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

// System.Linq.OrderedEnumerable`1<System.Object>
struct OrderedEnumerable_1_t2287;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t80;
// System.Collections.IEnumerator
struct IEnumerator_t66;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t81;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Linq.OrderedEnumerable`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
extern "C" void OrderedEnumerable_1__ctor_m14531_gshared (OrderedEnumerable_1_t2287 * __this, Object_t* ___source, const MethodInfo* method);
#define OrderedEnumerable_1__ctor_m14531(__this, ___source, method) (( void (*) (OrderedEnumerable_1_t2287 *, Object_t*, const MethodInfo*))OrderedEnumerable_1__ctor_m14531_gshared)(__this, ___source, method)
// System.Collections.IEnumerator System.Linq.OrderedEnumerable`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * OrderedEnumerable_1_System_Collections_IEnumerable_GetEnumerator_m14532_gshared (OrderedEnumerable_1_t2287 * __this, const MethodInfo* method);
#define OrderedEnumerable_1_System_Collections_IEnumerable_GetEnumerator_m14532(__this, method) (( Object_t * (*) (OrderedEnumerable_1_t2287 *, const MethodInfo*))OrderedEnumerable_1_System_Collections_IEnumerable_GetEnumerator_m14532_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1<System.Object>::GetEnumerator()
extern "C" Object_t* OrderedEnumerable_1_GetEnumerator_m14533_gshared (OrderedEnumerable_1_t2287 * __this, const MethodInfo* method);
#define OrderedEnumerable_1_GetEnumerator_m14533(__this, method) (( Object_t* (*) (OrderedEnumerable_1_t2287 *, const MethodInfo*))OrderedEnumerable_1_GetEnumerator_m14533_gshared)(__this, method)
