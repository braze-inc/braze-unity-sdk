#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>
struct List_1_t32;
// System.Object
struct Object_t;
// Appboy.Utilities.JSONNode
struct JSONNode_t19;
// System.Collections.Generic.IEnumerable`1<Appboy.Utilities.JSONNode>
struct IEnumerable_1_t24;
// System.Collections.Generic.IEnumerator`1<Appboy.Utilities.JSONNode>
struct IEnumerator_1_t22;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<Appboy.Utilities.JSONNode>
struct ICollection_1_t2860;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Appboy.Utilities.JSONNode>
struct ReadOnlyCollection_1_t2861;
// Appboy.Utilities.JSONNode[]
struct JSONNodeU5BU5D_t2852;
// System.Predicate`1<Appboy.Utilities.JSONNode>
struct Predicate_1_t2862;
// System.Comparison`1<Appboy.Utilities.JSONNode>
struct Comparison_1_t2863;
// System.Collections.Generic.List`1/Enumerator<Appboy.Utilities.JSONNode>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_2MethodDeclarations.h"
#define List_1__ctor_m545(__this, method) (void)List_1__ctor_m579_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m13677(__this, ___collection, method) (void)List_1__ctor_m12787_gshared((List_1_t110 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::.ctor(System.Int32)
#define List_1__ctor_m13678(__this, ___capacity, method) (void)List_1__ctor_m12789_gshared((List_1_t110 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::.cctor()
#define List_1__cctor_m13679(__this/* static, unused */, method) (void)List_1__cctor_m12791_gshared((Object_t *)__this/* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13680(__this, method) (Object_t*)List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12793_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m13681(__this, ___array, ___arrayIndex, method) (void)List_1_System_Collections_ICollection_CopyTo_m12795_gshared((List_1_t110 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m13682(__this, method) (Object_t *)List_1_System_Collections_IEnumerable_GetEnumerator_m12797_gshared((List_1_t110 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m13683(__this, ___item, method) (int32_t)List_1_System_Collections_IList_Add_m12799_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m13684(__this, ___item, method) (bool)List_1_System_Collections_IList_Contains_m12801_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m13685(__this, ___item, method) (int32_t)List_1_System_Collections_IList_IndexOf_m12803_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m13686(__this, ___index, ___item, method) (void)List_1_System_Collections_IList_Insert_m12805_gshared((List_1_t110 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m13687(__this, ___item, method) (void)List_1_System_Collections_IList_Remove_m12807_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13688(__this, method) (bool)List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12809_gshared((List_1_t110 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m13689(__this, method) (bool)List_1_System_Collections_ICollection_get_IsSynchronized_m12811_gshared((List_1_t110 *)__this, method)
// System.Object System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m13690(__this, method) (Object_t *)List_1_System_Collections_ICollection_get_SyncRoot_m12813_gshared((List_1_t110 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m13691(__this, method) (bool)List_1_System_Collections_IList_get_IsFixedSize_m12815_gshared((List_1_t110 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m13692(__this, method) (bool)List_1_System_Collections_IList_get_IsReadOnly_m12817_gshared((List_1_t110 *)__this, method)
// System.Object System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m13693(__this, ___index, method) (Object_t *)List_1_System_Collections_IList_get_Item_m12819_gshared((List_1_t110 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m13694(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_set_Item_m12821_gshared((List_1_t110 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::Add(T)
#define List_1_Add_m543(__this, ___item, method) (void)List_1_Add_m12822_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m13695(__this, ___newCount, method) (void)List_1_GrowIfNeeded_m12824_gshared((List_1_t110 *)__this, (int32_t)___newCount, method)
// System.Void System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m13696(__this, ___collection, method) (void)List_1_AddCollection_m12826_gshared((List_1_t110 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m13697(__this, ___enumerable, method) (void)List_1_AddEnumerable_m12828_gshared((List_1_t110 *)__this, (Object_t*)___enumerable, method)
// System.Void System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m13698(__this, ___collection, method) (void)List_1_AddRange_m12830_gshared((List_1_t110 *)__this, (Object_t*)___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::AsReadOnly()
#define List_1_AsReadOnly_m13699(__this, method) (ReadOnlyCollection_1_t2861 *)List_1_AsReadOnly_m12832_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::Clear()
#define List_1_Clear_m13700(__this, method) (void)List_1_Clear_m12834_gshared((List_1_t110 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::Contains(T)
#define List_1_Contains_m13701(__this, ___item, method) (bool)List_1_Contains_m12836_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m13702(__this, ___array, ___arrayIndex, method) (void)List_1_CopyTo_m12838_gshared((List_1_t110 *)__this, (ObjectU5BU5D_t112*)___array, (int32_t)___arrayIndex, method)
// T System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::Find(System.Predicate`1<T>)
#define List_1_Find_m13703(__this, ___match, method) (JSONNode_t19 *)List_1_Find_m12840_gshared((List_1_t110 *)__this, (Predicate_1_t2759 *)___match, method)
// System.Void System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m13704(__this/* static, unused */, ___match, method) (void)List_1_CheckMatch_m12842_gshared((Object_t *)__this/* static, unused */, (Predicate_1_t2759 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m13705(__this, ___startIndex, ___count, ___match, method) (int32_t)List_1_GetIndex_m12844_gshared((List_1_t110 *)__this, (int32_t)___startIndex, (int32_t)___count, (Predicate_1_t2759 *)___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::GetEnumerator()
 Enumerator_t30  List_1_GetEnumerator_m538 (List_1_t32 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::IndexOf(T)
#define List_1_IndexOf_m13706(__this, ___item, method) (int32_t)List_1_IndexOf_m12846_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m13707(__this, ___start, ___delta, method) (void)List_1_Shift_m12848_gshared((List_1_t110 *)__this, (int32_t)___start, (int32_t)___delta, method)
// System.Void System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m13708(__this, ___index, method) (void)List_1_CheckIndex_m12850_gshared((List_1_t110 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::Insert(System.Int32,T)
#define List_1_Insert_m13709(__this, ___index, ___item, method) (void)List_1_Insert_m12852_gshared((List_1_t110 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m13710(__this, ___collection, method) (void)List_1_CheckCollection_m12854_gshared((List_1_t110 *)__this, (Object_t*)___collection, method)
// System.Boolean System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::Remove(T)
#define List_1_Remove_m547(__this, ___item, method) (bool)List_1_Remove_m12856_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m13711(__this, ___match, method) (int32_t)List_1_RemoveAll_m12858_gshared((List_1_t110 *)__this, (Predicate_1_t2759 *)___match, method)
// System.Void System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m546(__this, ___index, method) (void)List_1_RemoveAt_m12860_gshared((List_1_t110 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::Reverse()
#define List_1_Reverse_m13712(__this, method) (void)List_1_Reverse_m12862_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::Sort()
#define List_1_Sort_m13713(__this, method) (void)List_1_Sort_m12864_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m13714(__this, ___comparison, method) (void)List_1_Sort_m12866_gshared((List_1_t110 *)__this, (Comparison_1_t2760 *)___comparison, method)
// T[] System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::ToArray()
#define List_1_ToArray_m13715(__this, method) (JSONNodeU5BU5D_t2852*)List_1_ToArray_m12867_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::TrimExcess()
#define List_1_TrimExcess_m13716(__this, method) (void)List_1_TrimExcess_m12869_gshared((List_1_t110 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::get_Capacity()
#define List_1_get_Capacity_m13717(__this, method) (int32_t)List_1_get_Capacity_m12871_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m13718(__this, ___value, method) (void)List_1_set_Capacity_m12873_gshared((List_1_t110 *)__this, (int32_t)___value, method)
// System.Int32 System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::get_Count()
#define List_1_get_Count_m541(__this, method) (int32_t)List_1_get_Count_m12874_gshared((List_1_t110 *)__this, method)
// T System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::get_Item(System.Int32)
#define List_1_get_Item_m542(__this, ___index, method) (JSONNode_t19 *)List_1_get_Item_m12876_gshared((List_1_t110 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<Appboy.Utilities.JSONNode>::set_Item(System.Int32,T)
#define List_1_set_Item_m544(__this, ___index, ___value, method) (void)List_1_set_Item_m12878_gshared((List_1_t110 *)__this, (int32_t)___index, (Object_t *)___value, method)
