#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<Appboy.Models.Cards.Card>
struct List_1_t55;
// System.Object
struct Object_t;
// Appboy.Models.Cards.Card
struct Card_t47;
// System.Collections.Generic.IEnumerable`1<Appboy.Models.Cards.Card>
struct IEnumerable_1_t2823;
// System.Collections.Generic.IEnumerator`1<Appboy.Models.Cards.Card>
struct IEnumerator_1_t2824;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t19;
// System.Collections.Generic.ICollection`1<Appboy.Models.Cards.Card>
struct ICollection_1_t2825;
// System.Collections.ObjectModel.ReadOnlyCollection`1<Appboy.Models.Cards.Card>
struct ReadOnlyCollection_1_t2826;
// Appboy.Models.Cards.Card[]
struct CardU5BU5D_t2822;
// System.Predicate`1<Appboy.Models.Cards.Card>
struct Predicate_1_t2827;
// System.Comparison`1<Appboy.Models.Cards.Card>
struct Comparison_1_t2828;
// System.Collections.Generic.List`1/Enumerator<Appboy.Models.Cards.Card>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_0.h"

// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_3MethodDeclarations.h"
#define List_1__ctor_m663(__this, method) (void)List_1__ctor_m644_gshared((List_1_t123 *)__this, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m13413(__this, ___collection, method) (void)List_1__ctor_m12882_gshared((List_1_t123 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::.ctor(System.Int32)
#define List_1__ctor_m13414(__this, ___capacity, method) (void)List_1__ctor_m12884_gshared((List_1_t123 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::.cctor()
#define List_1__cctor_m13415(__this/* static, unused */, method) (void)List_1__cctor_m12886_gshared((Object_t *)__this/* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13416(__this, method) (Object_t*)List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12888_gshared((List_1_t123 *)__this, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m13417(__this, ___array, ___arrayIndex, method) (void)List_1_System_Collections_ICollection_CopyTo_m12890_gshared((List_1_t123 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m13418(__this, method) (Object_t *)List_1_System_Collections_IEnumerable_GetEnumerator_m12892_gshared((List_1_t123 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m13419(__this, ___item, method) (int32_t)List_1_System_Collections_IList_Add_m12894_gshared((List_1_t123 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m13420(__this, ___item, method) (bool)List_1_System_Collections_IList_Contains_m12896_gshared((List_1_t123 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m13421(__this, ___item, method) (int32_t)List_1_System_Collections_IList_IndexOf_m12898_gshared((List_1_t123 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m13422(__this, ___index, ___item, method) (void)List_1_System_Collections_IList_Insert_m12900_gshared((List_1_t123 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m13423(__this, ___item, method) (void)List_1_System_Collections_IList_Remove_m12902_gshared((List_1_t123 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13424(__this, method) (bool)List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12904_gshared((List_1_t123 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m13425(__this, method) (bool)List_1_System_Collections_ICollection_get_IsSynchronized_m12906_gshared((List_1_t123 *)__this, method)
// System.Object System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m13426(__this, method) (Object_t *)List_1_System_Collections_ICollection_get_SyncRoot_m12908_gshared((List_1_t123 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m13427(__this, method) (bool)List_1_System_Collections_IList_get_IsFixedSize_m12910_gshared((List_1_t123 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m13428(__this, method) (bool)List_1_System_Collections_IList_get_IsReadOnly_m12912_gshared((List_1_t123 *)__this, method)
// System.Object System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m13429(__this, ___index, method) (Object_t *)List_1_System_Collections_IList_get_Item_m12914_gshared((List_1_t123 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m13430(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_set_Item_m12916_gshared((List_1_t123 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::Add(T)
#define List_1_Add_m664(__this, ___item, method) (void)List_1_Add_m12917_gshared((List_1_t123 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m13431(__this, ___newCount, method) (void)List_1_GrowIfNeeded_m12919_gshared((List_1_t123 *)__this, (int32_t)___newCount, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m13432(__this, ___collection, method) (void)List_1_AddCollection_m12921_gshared((List_1_t123 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m13433(__this, ___enumerable, method) (void)List_1_AddEnumerable_m12923_gshared((List_1_t123 *)__this, (Object_t*)___enumerable, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m13434(__this, ___collection, method) (void)List_1_AddRange_m12925_gshared((List_1_t123 *)__this, (Object_t*)___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::AsReadOnly()
#define List_1_AsReadOnly_m13435(__this, method) (ReadOnlyCollection_1_t2826 *)List_1_AsReadOnly_m12927_gshared((List_1_t123 *)__this, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::Clear()
#define List_1_Clear_m13436(__this, method) (void)List_1_Clear_m12929_gshared((List_1_t123 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::Contains(T)
#define List_1_Contains_m13437(__this, ___item, method) (bool)List_1_Contains_m12931_gshared((List_1_t123 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m13438(__this, ___array, ___arrayIndex, method) (void)List_1_CopyTo_m12933_gshared((List_1_t123 *)__this, (ObjectU5BU5D_t96*)___array, (int32_t)___arrayIndex, method)
// T System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::Find(System.Predicate`1<T>)
#define List_1_Find_m13439(__this, ___match, method) (Card_t47 *)List_1_Find_m12935_gshared((List_1_t123 *)__this, (Predicate_1_t2771 *)___match, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m13440(__this/* static, unused */, ___match, method) (void)List_1_CheckMatch_m12937_gshared((Object_t *)__this/* static, unused */, (Predicate_1_t2771 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m13441(__this, ___startIndex, ___count, ___match, method) (int32_t)List_1_GetIndex_m12939_gshared((List_1_t123 *)__this, (int32_t)___startIndex, (int32_t)___count, (Predicate_1_t2771 *)___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::GetEnumerator()
 Enumerator_t80  List_1_GetEnumerator_m485 (List_1_t55 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::IndexOf(T)
#define List_1_IndexOf_m13442(__this, ___item, method) (int32_t)List_1_IndexOf_m12941_gshared((List_1_t123 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m13443(__this, ___start, ___delta, method) (void)List_1_Shift_m12943_gshared((List_1_t123 *)__this, (int32_t)___start, (int32_t)___delta, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m13444(__this, ___index, method) (void)List_1_CheckIndex_m12945_gshared((List_1_t123 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::Insert(System.Int32,T)
#define List_1_Insert_m13445(__this, ___index, ___item, method) (void)List_1_Insert_m12947_gshared((List_1_t123 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m13446(__this, ___collection, method) (void)List_1_CheckCollection_m12949_gshared((List_1_t123 *)__this, (Object_t*)___collection, method)
// System.Boolean System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::Remove(T)
#define List_1_Remove_m13447(__this, ___item, method) (bool)List_1_Remove_m12951_gshared((List_1_t123 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m13448(__this, ___match, method) (int32_t)List_1_RemoveAll_m12953_gshared((List_1_t123 *)__this, (Predicate_1_t2771 *)___match, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m13449(__this, ___index, method) (void)List_1_RemoveAt_m12955_gshared((List_1_t123 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::Reverse()
#define List_1_Reverse_m13450(__this, method) (void)List_1_Reverse_m12957_gshared((List_1_t123 *)__this, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::Sort()
#define List_1_Sort_m13451(__this, method) (void)List_1_Sort_m12959_gshared((List_1_t123 *)__this, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m13452(__this, ___comparison, method) (void)List_1_Sort_m12961_gshared((List_1_t123 *)__this, (Comparison_1_t2772 *)___comparison, method)
// T[] System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::ToArray()
#define List_1_ToArray_m13453(__this, method) (CardU5BU5D_t2822*)List_1_ToArray_m12962_gshared((List_1_t123 *)__this, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::TrimExcess()
#define List_1_TrimExcess_m13454(__this, method) (void)List_1_TrimExcess_m12964_gshared((List_1_t123 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::get_Capacity()
#define List_1_get_Capacity_m13455(__this, method) (int32_t)List_1_get_Capacity_m12966_gshared((List_1_t123 *)__this, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m13456(__this, ___value, method) (void)List_1_set_Capacity_m12968_gshared((List_1_t123 *)__this, (int32_t)___value, method)
// System.Int32 System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::get_Count()
#define List_1_get_Count_m661(__this, method) (int32_t)List_1_get_Count_m12969_gshared((List_1_t123 *)__this, method)
// T System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::get_Item(System.Int32)
#define List_1_get_Item_m489(__this, ___index, method) (Card_t47 *)List_1_get_Item_m12971_gshared((List_1_t123 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<Appboy.Models.Cards.Card>::set_Item(System.Int32,T)
#define List_1_set_Item_m13457(__this, ___index, ___value, method) (void)List_1_set_Item_m12973_gshared((List_1_t123 *)__this, (int32_t)___index, (Object_t *)___value, method)
