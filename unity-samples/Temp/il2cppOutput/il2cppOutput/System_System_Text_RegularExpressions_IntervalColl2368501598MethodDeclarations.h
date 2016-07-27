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

// System.Text.RegularExpressions.IntervalCollection
struct IntervalCollection_t2368501598;
// System.Text.RegularExpressions.IntervalCollection/CostDelegate
struct CostDelegate_t3008899218;
// System.Object
struct Il2CppObject;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Interval63637216.h"
#include "System_System_Text_RegularExpressions_IntervalColl3008899218.h"
#include "System_System_Text_RegularExpressions_IntervalColl2368501598.h"
#include "mscorlib_System_Array2840145358.h"

// System.Void System.Text.RegularExpressions.IntervalCollection::.ctor()
extern "C"  void IntervalCollection__ctor_m1317729402 (IntervalCollection_t2368501598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.IntervalCollection::get_Item(System.Int32)
extern "C"  Interval_t63637216  IntervalCollection_get_Item_m658194390 (IntervalCollection_t2368501598 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.IntervalCollection::Add(System.Text.RegularExpressions.Interval)
extern "C"  void IntervalCollection_Add_m622937095 (IntervalCollection_t2368501598 * __this, Interval_t63637216  ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.IntervalCollection::Normalize()
extern "C"  void IntervalCollection_Normalize_m2061698533 (IntervalCollection_t2368501598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IntervalCollection System.Text.RegularExpressions.IntervalCollection::GetMetaCollection(System.Text.RegularExpressions.IntervalCollection/CostDelegate)
extern "C"  IntervalCollection_t2368501598 * IntervalCollection_GetMetaCollection_m1423119555 (IntervalCollection_t2368501598 * __this, CostDelegate_t3008899218 * ___cost_del0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.IntervalCollection::Optimize(System.Int32,System.Int32,System.Text.RegularExpressions.IntervalCollection,System.Text.RegularExpressions.IntervalCollection/CostDelegate)
extern "C"  void IntervalCollection_Optimize_m2537418330 (IntervalCollection_t2368501598 * __this, int32_t ___begin0, int32_t ___end1, IntervalCollection_t2368501598 * ___meta2, CostDelegate_t3008899218 * ___cost_del3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.IntervalCollection::get_Count()
extern "C"  int32_t IntervalCollection_get_Count_m3146453934 (IntervalCollection_t2368501598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.IntervalCollection::get_IsSynchronized()
extern "C"  bool IntervalCollection_get_IsSynchronized_m46596635 (IntervalCollection_t2368501598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.RegularExpressions.IntervalCollection::get_SyncRoot()
extern "C"  Il2CppObject * IntervalCollection_get_SyncRoot_m165185947 (IntervalCollection_t2368501598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.IntervalCollection::CopyTo(System.Array,System.Int32)
extern "C"  void IntervalCollection_CopyTo_m1005574359 (IntervalCollection_t2368501598 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Text.RegularExpressions.IntervalCollection::GetEnumerator()
extern "C"  Il2CppObject * IntervalCollection_GetEnumerator_m4242145148 (IntervalCollection_t2368501598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
