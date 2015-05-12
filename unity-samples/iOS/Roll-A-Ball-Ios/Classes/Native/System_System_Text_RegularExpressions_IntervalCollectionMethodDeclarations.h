#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.IntervalCollection
struct IntervalCollection_t1670;
// System.Object
struct Object_t;
// System.Text.RegularExpressions.IntervalCollection/CostDelegate
struct CostDelegate_t1669;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Text.RegularExpressions.Interval
#include "System_System_Text_RegularExpressions_Interval.h"

// System.Void System.Text.RegularExpressions.IntervalCollection::.ctor()
 void IntervalCollection__ctor_m7277 (IntervalCollection_t1670 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.IntervalCollection::get_Item(System.Int32)
 Interval_t1667  IntervalCollection_get_Item_m7278 (IntervalCollection_t1670 * __this, int32_t ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.IntervalCollection::Add(System.Text.RegularExpressions.Interval)
 void IntervalCollection_Add_m7279 (IntervalCollection_t1670 * __this, Interval_t1667  ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.IntervalCollection::Normalize()
 void IntervalCollection_Normalize_m7280 (IntervalCollection_t1670 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IntervalCollection System.Text.RegularExpressions.IntervalCollection::GetMetaCollection(System.Text.RegularExpressions.IntervalCollection/CostDelegate)
 IntervalCollection_t1670 * IntervalCollection_GetMetaCollection_m7281 (IntervalCollection_t1670 * __this, CostDelegate_t1669 * ___cost_del, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.IntervalCollection::Optimize(System.Int32,System.Int32,System.Text.RegularExpressions.IntervalCollection,System.Text.RegularExpressions.IntervalCollection/CostDelegate)
 void IntervalCollection_Optimize_m7282 (IntervalCollection_t1670 * __this, int32_t ___begin, int32_t ___end, IntervalCollection_t1670 * ___meta, CostDelegate_t1669 * ___cost_del, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.IntervalCollection::get_Count()
 int32_t IntervalCollection_get_Count_m7283 (IntervalCollection_t1670 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.IntervalCollection::get_IsSynchronized()
 bool IntervalCollection_get_IsSynchronized_m7284 (IntervalCollection_t1670 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.RegularExpressions.IntervalCollection::get_SyncRoot()
 Object_t * IntervalCollection_get_SyncRoot_m7285 (IntervalCollection_t1670 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.IntervalCollection::CopyTo(System.Array,System.Int32)
 void IntervalCollection_CopyTo_m7286 (IntervalCollection_t1670 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Text.RegularExpressions.IntervalCollection::GetEnumerator()
 Object_t * IntervalCollection_GetEnumerator_m7287 (IntervalCollection_t1670 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
