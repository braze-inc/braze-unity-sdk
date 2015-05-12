#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>
struct List_1_t529;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t531;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.BaseRaycaster>
struct IEnumerable_1_t3583;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.BaseRaycaster>
struct IEnumerator_1_t3584;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t19;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseRaycaster>
struct ICollection_1_t3585;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>
struct ReadOnlyCollection_1_t3586;
// UnityEngine.EventSystems.BaseRaycaster[]
struct BaseRaycasterU5BU5D_t3582;
// System.Predicate`1<UnityEngine.EventSystems.BaseRaycaster>
struct Predicate_1_t3587;
// System.Comparison`1<UnityEngine.EventSystems.BaseRaycaster>
struct Comparison_1_t3588;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_18.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_3MethodDeclarations.h"
#define List_1__ctor_m3380(__this, method) (void)List_1__ctor_m644_gshared((List_1_t123 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m18223(__this, ___collection, method) (void)List_1__ctor_m12882_gshared((List_1_t123 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor(System.Int32)
#define List_1__ctor_m18224(__this, ___capacity, method) (void)List_1__ctor_m12884_gshared((List_1_t123 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::.cctor()
#define List_1__cctor_m18225(__this/* static, unused */, method) (void)List_1__cctor_m12886_gshared((Object_t *)__this/* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18226(__this, method) (Object_t*)List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12888_gshared((List_1_t123 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m18227(__this, ___array, ___arrayIndex, method) (void)List_1_System_Collections_ICollection_CopyTo_m12890_gshared((List_1_t123 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m18228(__this, method) (Object_t *)List_1_System_Collections_IEnumerable_GetEnumerator_m12892_gshared((List_1_t123 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m18229(__this, ___item, method) (int32_t)List_1_System_Collections_IList_Add_m12894_gshared((List_1_t123 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m18230(__this, ___item, method) (bool)List_1_System_Collections_IList_Contains_m12896_gshared((List_1_t123 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m18231(__this, ___item, method) (int32_t)List_1_System_Collections_IList_IndexOf_m12898_gshared((List_1_t123 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m18232(__this, ___index, ___item, method) (void)List_1_System_Collections_IList_Insert_m12900_gshared((List_1_t123 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m18233(__this, ___item, method) (void)List_1_System_Collections_IList_Remove_m12902_gshared((List_1_t123 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18234(__this, method) (bool)List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12904_gshared((List_1_t123 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m18235(__this, method) (bool)List_1_System_Collections_ICollection_get_IsSynchronized_m12906_gshared((List_1_t123 *)__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m18236(__this, method) (Object_t *)List_1_System_Collections_ICollection_get_SyncRoot_m12908_gshared((List_1_t123 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m18237(__this, method) (bool)List_1_System_Collections_IList_get_IsFixedSize_m12910_gshared((List_1_t123 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m18238(__this, method) (bool)List_1_System_Collections_IList_get_IsReadOnly_m12912_gshared((List_1_t123 *)__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m18239(__this, ___index, method) (Object_t *)List_1_System_Collections_IList_get_Item_m12914_gshared((List_1_t123 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m18240(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_set_Item_m12916_gshared((List_1_t123 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Add(T)
#define List_1_Add_m3382(__this, ___item, method) (void)List_1_Add_m12917_gshared((List_1_t123 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m18241(__this, ___newCount, method) (void)List_1_GrowIfNeeded_m12919_gshared((List_1_t123 *)__this, (int32_t)___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m18242(__this, ___collection, method) (void)List_1_AddCollection_m12921_gshared((List_1_t123 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m18243(__this, ___enumerable, method) (void)List_1_AddEnumerable_m12923_gshared((List_1_t123 *)__this, (Object_t*)___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m18244(__this, ___collection, method) (void)List_1_AddRange_m12925_gshared((List_1_t123 *)__this, (Object_t*)___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::AsReadOnly()
#define List_1_AsReadOnly_m18245(__this, method) (ReadOnlyCollection_1_t3586 *)List_1_AsReadOnly_m12927_gshared((List_1_t123 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Clear()
#define List_1_Clear_m18246(__this, method) (void)List_1_Clear_m12929_gshared((List_1_t123 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Contains(T)
#define List_1_Contains_m3381(__this, ___item, method) (bool)List_1_Contains_m12931_gshared((List_1_t123 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m18247(__this, ___array, ___arrayIndex, method) (void)List_1_CopyTo_m12933_gshared((List_1_t123 *)__this, (ObjectU5BU5D_t96*)___array, (int32_t)___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Find(System.Predicate`1<T>)
#define List_1_Find_m18248(__this, ___match, method) (BaseRaycaster_t531 *)List_1_Find_m12935_gshared((List_1_t123 *)__this, (Predicate_1_t2771 *)___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m18249(__this/* static, unused */, ___match, method) (void)List_1_CheckMatch_m12937_gshared((Object_t *)__this/* static, unused */, (Predicate_1_t2771 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m18250(__this, ___startIndex, ___count, ___match, method) (int32_t)List_1_GetIndex_m12939_gshared((List_1_t123 *)__this, (int32_t)___startIndex, (int32_t)___count, (Predicate_1_t2771 *)___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::GetEnumerator()
 Enumerator_t3589  List_1_GetEnumerator_m18251 (List_1_t529 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::IndexOf(T)
#define List_1_IndexOf_m18252(__this, ___item, method) (int32_t)List_1_IndexOf_m12941_gshared((List_1_t123 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m18253(__this, ___start, ___delta, method) (void)List_1_Shift_m12943_gshared((List_1_t123 *)__this, (int32_t)___start, (int32_t)___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m18254(__this, ___index, method) (void)List_1_CheckIndex_m12945_gshared((List_1_t123 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Insert(System.Int32,T)
#define List_1_Insert_m18255(__this, ___index, ___item, method) (void)List_1_Insert_m12947_gshared((List_1_t123 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m18256(__this, ___collection, method) (void)List_1_CheckCollection_m12949_gshared((List_1_t123 *)__this, (Object_t*)___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Remove(T)
#define List_1_Remove_m3383(__this, ___item, method) (bool)List_1_Remove_m12951_gshared((List_1_t123 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m18257(__this, ___match, method) (int32_t)List_1_RemoveAll_m12953_gshared((List_1_t123 *)__this, (Predicate_1_t2771 *)___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m18258(__this, ___index, method) (void)List_1_RemoveAt_m12955_gshared((List_1_t123 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Reverse()
#define List_1_Reverse_m18259(__this, method) (void)List_1_Reverse_m12957_gshared((List_1_t123 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Sort()
#define List_1_Sort_m18260(__this, method) (void)List_1_Sort_m12959_gshared((List_1_t123 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m18261(__this, ___comparison, method) (void)List_1_Sort_m12961_gshared((List_1_t123 *)__this, (Comparison_1_t2772 *)___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::ToArray()
#define List_1_ToArray_m18262(__this, method) (BaseRaycasterU5BU5D_t3582*)List_1_ToArray_m12962_gshared((List_1_t123 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::TrimExcess()
#define List_1_TrimExcess_m18263(__this, method) (void)List_1_TrimExcess_m12964_gshared((List_1_t123 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::get_Capacity()
#define List_1_get_Capacity_m18264(__this, method) (int32_t)List_1_get_Capacity_m12966_gshared((List_1_t123 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m18265(__this, ___value, method) (void)List_1_set_Capacity_m12968_gshared((List_1_t123 *)__this, (int32_t)___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::get_Count()
#define List_1_get_Count_m3317(__this, method) (int32_t)List_1_get_Count_m12969_gshared((List_1_t123 *)__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::get_Item(System.Int32)
#define List_1_get_Item_m3315(__this, ___index, method) (BaseRaycaster_t531 *)List_1_get_Item_m12971_gshared((List_1_t123 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::set_Item(System.Int32,T)
#define List_1_set_Item_m18266(__this, ___index, ___value, method) (void)List_1_set_Item_m12973_gshared((List_1_t123 *)__this, (int32_t)___index, (Object_t *)___value, method)
