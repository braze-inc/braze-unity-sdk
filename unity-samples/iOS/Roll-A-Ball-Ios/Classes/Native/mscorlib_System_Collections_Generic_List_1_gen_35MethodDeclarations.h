#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Security.Policy.StrongName>
struct List_1_t2688;
// System.Object
struct Object_t;
// System.Security.Policy.StrongName
struct StrongName_t2179;
// System.Collections.Generic.IEnumerable`1<System.Security.Policy.StrongName>
struct IEnumerable_1_t4872;
// System.Collections.Generic.IEnumerator`1<System.Security.Policy.StrongName>
struct IEnumerator_1_t4873;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<System.Security.Policy.StrongName>
struct ICollection_1_t4874;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>
struct ReadOnlyCollection_1_t4875;
// System.Security.Policy.StrongName[]
struct StrongNameU5BU5D_t4871;
// System.Predicate`1<System.Security.Policy.StrongName>
struct Predicate_1_t4876;
// System.Comparison`1<System.Security.Policy.StrongName>
struct Comparison_1_t4877;
// System.Collections.Generic.List`1/Enumerator<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_36.h"

// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_2MethodDeclarations.h"
#define List_1__ctor_m26462(__this, method) (void)List_1__ctor_m579_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m26463(__this, ___collection, method) (void)List_1__ctor_m12787_gshared((List_1_t110 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.ctor(System.Int32)
#define List_1__ctor_m12656(__this, ___capacity, method) (void)List_1__ctor_m12789_gshared((List_1_t110 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.cctor()
#define List_1__cctor_m26464(__this/* static, unused */, method) (void)List_1__cctor_m12791_gshared((Object_t *)__this/* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26465(__this, method) (Object_t*)List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12793_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m26466(__this, ___array, ___arrayIndex, method) (void)List_1_System_Collections_ICollection_CopyTo_m12795_gshared((List_1_t110 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m26467(__this, method) (Object_t *)List_1_System_Collections_IEnumerable_GetEnumerator_m12797_gshared((List_1_t110 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m26468(__this, ___item, method) (int32_t)List_1_System_Collections_IList_Add_m12799_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m26469(__this, ___item, method) (bool)List_1_System_Collections_IList_Contains_m12801_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m26470(__this, ___item, method) (int32_t)List_1_System_Collections_IList_IndexOf_m12803_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m26471(__this, ___index, ___item, method) (void)List_1_System_Collections_IList_Insert_m12805_gshared((List_1_t110 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m26472(__this, ___item, method) (void)List_1_System_Collections_IList_Remove_m12807_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26473(__this, method) (bool)List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12809_gshared((List_1_t110 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m26474(__this, method) (bool)List_1_System_Collections_ICollection_get_IsSynchronized_m12811_gshared((List_1_t110 *)__this, method)
// System.Object System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m26475(__this, method) (Object_t *)List_1_System_Collections_ICollection_get_SyncRoot_m12813_gshared((List_1_t110 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m26476(__this, method) (bool)List_1_System_Collections_IList_get_IsFixedSize_m12815_gshared((List_1_t110 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m26477(__this, method) (bool)List_1_System_Collections_IList_get_IsReadOnly_m12817_gshared((List_1_t110 *)__this, method)
// System.Object System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m26478(__this, ___index, method) (Object_t *)List_1_System_Collections_IList_get_Item_m12819_gshared((List_1_t110 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m26479(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_set_Item_m12821_gshared((List_1_t110 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Add(T)
#define List_1_Add_m26480(__this, ___item, method) (void)List_1_Add_m12822_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m26481(__this, ___newCount, method) (void)List_1_GrowIfNeeded_m12824_gshared((List_1_t110 *)__this, (int32_t)___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m26482(__this, ___collection, method) (void)List_1_AddCollection_m12826_gshared((List_1_t110 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m26483(__this, ___enumerable, method) (void)List_1_AddEnumerable_m12828_gshared((List_1_t110 *)__this, (Object_t*)___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m26484(__this, ___collection, method) (void)List_1_AddRange_m12830_gshared((List_1_t110 *)__this, (Object_t*)___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::AsReadOnly()
#define List_1_AsReadOnly_m26485(__this, method) (ReadOnlyCollection_1_t4875 *)List_1_AsReadOnly_m12832_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Clear()
#define List_1_Clear_m26486(__this, method) (void)List_1_Clear_m12834_gshared((List_1_t110 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Contains(T)
#define List_1_Contains_m26487(__this, ___item, method) (bool)List_1_Contains_m12836_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m26488(__this, ___array, ___arrayIndex, method) (void)List_1_CopyTo_m12838_gshared((List_1_t110 *)__this, (ObjectU5BU5D_t112*)___array, (int32_t)___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Find(System.Predicate`1<T>)
#define List_1_Find_m26489(__this, ___match, method) (StrongName_t2179 *)List_1_Find_m12840_gshared((List_1_t110 *)__this, (Predicate_1_t2759 *)___match, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m26490(__this/* static, unused */, ___match, method) (void)List_1_CheckMatch_m12842_gshared((Object_t *)__this/* static, unused */, (Predicate_1_t2759 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m26491(__this, ___startIndex, ___count, ___match, method) (int32_t)List_1_GetIndex_m12844_gshared((List_1_t110 *)__this, (int32_t)___startIndex, (int32_t)___count, (Predicate_1_t2759 *)___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::GetEnumerator()
 Enumerator_t4878  List_1_GetEnumerator_m26492 (List_1_t2688 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::IndexOf(T)
#define List_1_IndexOf_m26493(__this, ___item, method) (int32_t)List_1_IndexOf_m12846_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m26494(__this, ___start, ___delta, method) (void)List_1_Shift_m12848_gshared((List_1_t110 *)__this, (int32_t)___start, (int32_t)___delta, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m26495(__this, ___index, method) (void)List_1_CheckIndex_m12850_gshared((List_1_t110 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Insert(System.Int32,T)
#define List_1_Insert_m26496(__this, ___index, ___item, method) (void)List_1_Insert_m12852_gshared((List_1_t110 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m26497(__this, ___collection, method) (void)List_1_CheckCollection_m12854_gshared((List_1_t110 *)__this, (Object_t*)___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Remove(T)
#define List_1_Remove_m26498(__this, ___item, method) (bool)List_1_Remove_m12856_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m26499(__this, ___match, method) (int32_t)List_1_RemoveAll_m12858_gshared((List_1_t110 *)__this, (Predicate_1_t2759 *)___match, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m26500(__this, ___index, method) (void)List_1_RemoveAt_m12860_gshared((List_1_t110 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Reverse()
#define List_1_Reverse_m26501(__this, method) (void)List_1_Reverse_m12862_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Sort()
#define List_1_Sort_m26502(__this, method) (void)List_1_Sort_m12864_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m26503(__this, ___comparison, method) (void)List_1_Sort_m12866_gshared((List_1_t110 *)__this, (Comparison_1_t2760 *)___comparison, method)
// T[] System.Collections.Generic.List`1<System.Security.Policy.StrongName>::ToArray()
#define List_1_ToArray_m26504(__this, method) (StrongNameU5BU5D_t4871*)List_1_ToArray_m12867_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::TrimExcess()
#define List_1_TrimExcess_m26505(__this, method) (void)List_1_TrimExcess_m12869_gshared((List_1_t110 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Capacity()
#define List_1_get_Capacity_m26506(__this, method) (int32_t)List_1_get_Capacity_m12871_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m26507(__this, ___value, method) (void)List_1_set_Capacity_m12873_gshared((List_1_t110 *)__this, (int32_t)___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Count()
#define List_1_get_Count_m26508(__this, method) (int32_t)List_1_get_Count_m12874_gshared((List_1_t110 *)__this, method)
// T System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Item(System.Int32)
#define List_1_get_Item_m26509(__this, ___index, method) (StrongName_t2179 *)List_1_get_Item_m12876_gshared((List_1_t110 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::set_Item(System.Int32,T)
#define List_1_set_Item_m26510(__this, ___index, ___value, method) (void)List_1_set_Item_m12878_gshared((List_1_t110 *)__this, (int32_t)___index, (Object_t *)___value, method)
