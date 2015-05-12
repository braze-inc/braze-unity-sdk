#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Appboy.Models.Cards.Card>
struct List_1_t10;
// System.Object
struct Object_t;
// Appboy.Models.Cards.Card
struct Card_t11;
// System.Collections.Generic.IEnumerable`1<Appboy.Models.Cards.Card>
struct IEnumerable_1_t2796;
// System.Collections.Generic.IEnumerator`1<Appboy.Models.Cards.Card>
struct IEnumerator_1_t2797;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<Appboy.Models.Cards.Card>
struct ICollection_1_t2798;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Appboy.Models.Cards.Card>
struct ReadOnlyCollection_1_t2799;
// Appboy.Models.Cards.Card[]
struct CardU5BU5D_t2795;
// System.Predicate`1<Appboy.Models.Cards.Card>
struct Predicate_1_t2800;
// System.Comparison`1<Appboy.Models.Cards.Card>
struct Comparison_1_t2801;
// System.Collections.Generic.List`1/Enumerator<Appboy.Models.Cards.Card>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0.h"

// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_2MethodDeclarations.h"
#define List_1__ctor_m436(__this, method) (void)List_1__ctor_m579_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m13173(__this, ___collection, method) (void)List_1__ctor_m12787_gshared((List_1_t110 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::.ctor(System.Int32)
#define List_1__ctor_m13174(__this, ___capacity, method) (void)List_1__ctor_m12789_gshared((List_1_t110 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::.cctor()
#define List_1__cctor_m13175(__this/* static, unused */, method) (void)List_1__cctor_m12791_gshared((Object_t *)__this/* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13176(__this, method) (Object_t*)List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12793_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m13177(__this, ___array, ___arrayIndex, method) (void)List_1_System_Collections_ICollection_CopyTo_m12795_gshared((List_1_t110 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m13178(__this, method) (Object_t *)List_1_System_Collections_IEnumerable_GetEnumerator_m12797_gshared((List_1_t110 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m13179(__this, ___item, method) (int32_t)List_1_System_Collections_IList_Add_m12799_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m13180(__this, ___item, method) (bool)List_1_System_Collections_IList_Contains_m12801_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m13181(__this, ___item, method) (int32_t)List_1_System_Collections_IList_IndexOf_m12803_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m13182(__this, ___index, ___item, method) (void)List_1_System_Collections_IList_Insert_m12805_gshared((List_1_t110 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m13183(__this, ___item, method) (void)List_1_System_Collections_IList_Remove_m12807_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13184(__this, method) (bool)List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12809_gshared((List_1_t110 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m13185(__this, method) (bool)List_1_System_Collections_ICollection_get_IsSynchronized_m12811_gshared((List_1_t110 *)__this, method)
// System.Object System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m13186(__this, method) (Object_t *)List_1_System_Collections_ICollection_get_SyncRoot_m12813_gshared((List_1_t110 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m13187(__this, method) (bool)List_1_System_Collections_IList_get_IsFixedSize_m12815_gshared((List_1_t110 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m13188(__this, method) (bool)List_1_System_Collections_IList_get_IsReadOnly_m12817_gshared((List_1_t110 *)__this, method)
// System.Object System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m13189(__this, ___index, method) (Object_t *)List_1_System_Collections_IList_get_Item_m12819_gshared((List_1_t110 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m13190(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_set_Item_m12821_gshared((List_1_t110 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::Add(T)
#define List_1_Add_m437(__this, ___item, method) (void)List_1_Add_m12822_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m13191(__this, ___newCount, method) (void)List_1_GrowIfNeeded_m12824_gshared((List_1_t110 *)__this, (int32_t)___newCount, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m13192(__this, ___collection, method) (void)List_1_AddCollection_m12826_gshared((List_1_t110 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m13193(__this, ___enumerable, method) (void)List_1_AddEnumerable_m12828_gshared((List_1_t110 *)__this, (Object_t*)___enumerable, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m13194(__this, ___collection, method) (void)List_1_AddRange_m12830_gshared((List_1_t110 *)__this, (Object_t*)___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::AsReadOnly()
#define List_1_AsReadOnly_m13195(__this, method) (ReadOnlyCollection_1_t2799 *)List_1_AsReadOnly_m12832_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::Clear()
#define List_1_Clear_m13196(__this, method) (void)List_1_Clear_m12834_gshared((List_1_t110 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::Contains(T)
#define List_1_Contains_m13197(__this, ___item, method) (bool)List_1_Contains_m12836_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m13198(__this, ___array, ___arrayIndex, method) (void)List_1_CopyTo_m12838_gshared((List_1_t110 *)__this, (ObjectU5BU5D_t112*)___array, (int32_t)___arrayIndex, method)
// T System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::Find(System.Predicate`1<T>)
#define List_1_Find_m13199(__this, ___match, method) (Card_t11 *)List_1_Find_m12840_gshared((List_1_t110 *)__this, (Predicate_1_t2759 *)___match, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m13200(__this/* static, unused */, ___match, method) (void)List_1_CheckMatch_m12842_gshared((Object_t *)__this/* static, unused */, (Predicate_1_t2759 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m13201(__this, ___startIndex, ___count, ___match, method) (int32_t)List_1_GetIndex_m12844_gshared((List_1_t110 *)__this, (int32_t)___startIndex, (int32_t)___count, (Predicate_1_t2759 *)___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::GetEnumerator()
 Enumerator_t68  List_1_GetEnumerator_m422 (List_1_t10 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::IndexOf(T)
#define List_1_IndexOf_m13202(__this, ___item, method) (int32_t)List_1_IndexOf_m12846_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m13203(__this, ___start, ___delta, method) (void)List_1_Shift_m12848_gshared((List_1_t110 *)__this, (int32_t)___start, (int32_t)___delta, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m13204(__this, ___index, method) (void)List_1_CheckIndex_m12850_gshared((List_1_t110 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::Insert(System.Int32,T)
#define List_1_Insert_m13205(__this, ___index, ___item, method) (void)List_1_Insert_m12852_gshared((List_1_t110 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m13206(__this, ___collection, method) (void)List_1_CheckCollection_m12854_gshared((List_1_t110 *)__this, (Object_t*)___collection, method)
// System.Boolean System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::Remove(T)
#define List_1_Remove_m13207(__this, ___item, method) (bool)List_1_Remove_m12856_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m13208(__this, ___match, method) (int32_t)List_1_RemoveAll_m12858_gshared((List_1_t110 *)__this, (Predicate_1_t2759 *)___match, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m13209(__this, ___index, method) (void)List_1_RemoveAt_m12860_gshared((List_1_t110 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::Reverse()
#define List_1_Reverse_m13210(__this, method) (void)List_1_Reverse_m12862_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::Sort()
#define List_1_Sort_m13211(__this, method) (void)List_1_Sort_m12864_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m13212(__this, ___comparison, method) (void)List_1_Sort_m12866_gshared((List_1_t110 *)__this, (Comparison_1_t2760 *)___comparison, method)
// T[] System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::ToArray()
#define List_1_ToArray_m13213(__this, method) (CardU5BU5D_t2795*)List_1_ToArray_m12867_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::TrimExcess()
#define List_1_TrimExcess_m13214(__this, method) (void)List_1_TrimExcess_m12869_gshared((List_1_t110 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::get_Capacity()
#define List_1_get_Capacity_m13215(__this, method) (int32_t)List_1_get_Capacity_m12871_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m13216(__this, ___value, method) (void)List_1_set_Capacity_m12873_gshared((List_1_t110 *)__this, (int32_t)___value, method)
// System.Int32 System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::get_Count()
#define List_1_get_Count_m594(__this, method) (int32_t)List_1_get_Count_m12874_gshared((List_1_t110 *)__this, method)
// T System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::get_Item(System.Int32)
#define List_1_get_Item_m426(__this, ___index, method) (Card_t11 *)List_1_get_Item_m12876_gshared((List_1_t110 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::set_Item(System.Int32,T)
#define List_1_set_Item_m13217(__this, ___index, ___value, method) (void)List_1_set_Item_m12878_gshared((List_1_t110 *)__this, (int32_t)___index, (Object_t *)___value, method)
