#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct List_1_t481;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.EventTrigger/Entry
struct Entry_t480;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct IEnumerable_1_t3619;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct IEnumerator_1_t3620;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t19;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct ICollection_1_t3621;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct ReadOnlyCollection_1_t3622;
// UnityEngine.EventSystems.EventTrigger/Entry[]
struct EntryU5BU5D_t3618;
// System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct Predicate_1_t3623;
// System.Comparison`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct Comparison_1_t3624;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_19.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_3MethodDeclarations.h"
#define List_1__ctor_m18466(__this, method) (void)List_1__ctor_m644_gshared((List_1_t123 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m18467(__this, ___collection, method) (void)List_1__ctor_m12882_gshared((List_1_t123 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(System.Int32)
#define List_1__ctor_m18468(__this, ___capacity, method) (void)List_1__ctor_m12884_gshared((List_1_t123 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.cctor()
#define List_1__cctor_m18469(__this/* static, unused */, method) (void)List_1__cctor_m12886_gshared((Object_t *)__this/* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18470(__this, method) (Object_t*)List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12888_gshared((List_1_t123 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m18471(__this, ___array, ___arrayIndex, method) (void)List_1_System_Collections_ICollection_CopyTo_m12890_gshared((List_1_t123 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m18472(__this, method) (Object_t *)List_1_System_Collections_IEnumerable_GetEnumerator_m12892_gshared((List_1_t123 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m18473(__this, ___item, method) (int32_t)List_1_System_Collections_IList_Add_m12894_gshared((List_1_t123 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m18474(__this, ___item, method) (bool)List_1_System_Collections_IList_Contains_m12896_gshared((List_1_t123 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m18475(__this, ___item, method) (int32_t)List_1_System_Collections_IList_IndexOf_m12898_gshared((List_1_t123 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m18476(__this, ___index, ___item, method) (void)List_1_System_Collections_IList_Insert_m12900_gshared((List_1_t123 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m18477(__this, ___item, method) (void)List_1_System_Collections_IList_Remove_m12902_gshared((List_1_t123 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18478(__this, method) (bool)List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12904_gshared((List_1_t123 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m18479(__this, method) (bool)List_1_System_Collections_ICollection_get_IsSynchronized_m12906_gshared((List_1_t123 *)__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m18480(__this, method) (Object_t *)List_1_System_Collections_ICollection_get_SyncRoot_m12908_gshared((List_1_t123 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m18481(__this, method) (bool)List_1_System_Collections_IList_get_IsFixedSize_m12910_gshared((List_1_t123 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m18482(__this, method) (bool)List_1_System_Collections_IList_get_IsReadOnly_m12912_gshared((List_1_t123 *)__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m18483(__this, ___index, method) (Object_t *)List_1_System_Collections_IList_get_Item_m12914_gshared((List_1_t123 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m18484(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_set_Item_m12916_gshared((List_1_t123 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Add(T)
#define List_1_Add_m18485(__this, ___item, method) (void)List_1_Add_m12917_gshared((List_1_t123 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m18486(__this, ___newCount, method) (void)List_1_GrowIfNeeded_m12919_gshared((List_1_t123 *)__this, (int32_t)___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m18487(__this, ___collection, method) (void)List_1_AddCollection_m12921_gshared((List_1_t123 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m18488(__this, ___enumerable, method) (void)List_1_AddEnumerable_m12923_gshared((List_1_t123 *)__this, (Object_t*)___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m18489(__this, ___collection, method) (void)List_1_AddRange_m12925_gshared((List_1_t123 *)__this, (Object_t*)___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AsReadOnly()
#define List_1_AsReadOnly_m18490(__this, method) (ReadOnlyCollection_1_t3622 *)List_1_AsReadOnly_m12927_gshared((List_1_t123 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Clear()
#define List_1_Clear_m18491(__this, method) (void)List_1_Clear_m12929_gshared((List_1_t123 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Contains(T)
#define List_1_Contains_m18492(__this, ___item, method) (bool)List_1_Contains_m12931_gshared((List_1_t123 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m18493(__this, ___array, ___arrayIndex, method) (void)List_1_CopyTo_m12933_gshared((List_1_t123 *)__this, (ObjectU5BU5D_t96*)___array, (int32_t)___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Find(System.Predicate`1<T>)
#define List_1_Find_m18494(__this, ___match, method) (Entry_t480 *)List_1_Find_m12935_gshared((List_1_t123 *)__this, (Predicate_1_t2771 *)___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m18495(__this/* static, unused */, ___match, method) (void)List_1_CheckMatch_m12937_gshared((Object_t *)__this/* static, unused */, (Predicate_1_t2771 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m18496(__this, ___startIndex, ___count, ___match, method) (int32_t)List_1_GetIndex_m12939_gshared((List_1_t123 *)__this, (int32_t)___startIndex, (int32_t)___count, (Predicate_1_t2771 *)___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetEnumerator()
 Enumerator_t3625  List_1_GetEnumerator_m18497 (List_1_t481 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::IndexOf(T)
#define List_1_IndexOf_m18498(__this, ___item, method) (int32_t)List_1_IndexOf_m12941_gshared((List_1_t123 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m18499(__this, ___start, ___delta, method) (void)List_1_Shift_m12943_gshared((List_1_t123 *)__this, (int32_t)___start, (int32_t)___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m18500(__this, ___index, method) (void)List_1_CheckIndex_m12945_gshared((List_1_t123 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Insert(System.Int32,T)
#define List_1_Insert_m18501(__this, ___index, ___item, method) (void)List_1_Insert_m12947_gshared((List_1_t123 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m18502(__this, ___collection, method) (void)List_1_CheckCollection_m12949_gshared((List_1_t123 *)__this, (Object_t*)___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Remove(T)
#define List_1_Remove_m18503(__this, ___item, method) (bool)List_1_Remove_m12951_gshared((List_1_t123 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m18504(__this, ___match, method) (int32_t)List_1_RemoveAll_m12953_gshared((List_1_t123 *)__this, (Predicate_1_t2771 *)___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m18505(__this, ___index, method) (void)List_1_RemoveAt_m12955_gshared((List_1_t123 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Reverse()
#define List_1_Reverse_m18506(__this, method) (void)List_1_Reverse_m12957_gshared((List_1_t123 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Sort()
#define List_1_Sort_m18507(__this, method) (void)List_1_Sort_m12959_gshared((List_1_t123 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m18508(__this, ___comparison, method) (void)List_1_Sort_m12961_gshared((List_1_t123 *)__this, (Comparison_1_t2772 *)___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::ToArray()
#define List_1_ToArray_m18509(__this, method) (EntryU5BU5D_t3618*)List_1_ToArray_m12962_gshared((List_1_t123 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::TrimExcess()
#define List_1_TrimExcess_m18510(__this, method) (void)List_1_TrimExcess_m12964_gshared((List_1_t123 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Capacity()
#define List_1_get_Capacity_m18511(__this, method) (int32_t)List_1_get_Capacity_m12966_gshared((List_1_t123 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m18512(__this, ___value, method) (void)List_1_set_Capacity_m12968_gshared((List_1_t123 *)__this, (int32_t)___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Count()
#define List_1_get_Count_m3334(__this, method) (int32_t)List_1_get_Count_m12969_gshared((List_1_t123 *)__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Item(System.Int32)
#define List_1_get_Item_m3335(__this, ___index, method) (Entry_t480 *)List_1_get_Item_m12971_gshared((List_1_t123 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::set_Item(System.Int32,T)
#define List_1_set_Item_m18513(__this, ___index, ___value, method) (void)List_1_set_Item_m12973_gshared((List_1_t123 *)__this, (int32_t)___index, (Object_t *)___value, method)
