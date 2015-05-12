#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>
struct List_1_t515;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t517;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.BaseRaycaster>
struct IEnumerable_1_t3563;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.BaseRaycaster>
struct IEnumerator_1_t3564;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.BaseRaycaster>
struct ICollection_1_t3565;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.BaseRaycaster>
struct ReadOnlyCollection_1_t3566;
// UnityEngine.EventSystems.BaseRaycaster[]
struct BaseRaycasterU5BU5D_t3562;
// System.Predicate`1<UnityEngine.EventSystems.BaseRaycaster>
struct Predicate_1_t3567;
// System.Comparison`1<UnityEngine.EventSystems.BaseRaycaster>
struct Comparison_1_t3568;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.BaseRaycaster>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_17.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_2MethodDeclarations.h"
#define List_1__ctor_m3275(__this, method) (void)List_1__ctor_m579_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m18003(__this, ___collection, method) (void)List_1__ctor_m12787_gshared((List_1_t110 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::.ctor(System.Int32)
#define List_1__ctor_m18004(__this, ___capacity, method) (void)List_1__ctor_m12789_gshared((List_1_t110 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::.cctor()
#define List_1__cctor_m18005(__this/* static, unused */, method) (void)List_1__cctor_m12791_gshared((Object_t *)__this/* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18006(__this, method) (Object_t*)List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12793_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m18007(__this, ___array, ___arrayIndex, method) (void)List_1_System_Collections_ICollection_CopyTo_m12795_gshared((List_1_t110 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m18008(__this, method) (Object_t *)List_1_System_Collections_IEnumerable_GetEnumerator_m12797_gshared((List_1_t110 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m18009(__this, ___item, method) (int32_t)List_1_System_Collections_IList_Add_m12799_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m18010(__this, ___item, method) (bool)List_1_System_Collections_IList_Contains_m12801_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m18011(__this, ___item, method) (int32_t)List_1_System_Collections_IList_IndexOf_m12803_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m18012(__this, ___index, ___item, method) (void)List_1_System_Collections_IList_Insert_m12805_gshared((List_1_t110 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m18013(__this, ___item, method) (void)List_1_System_Collections_IList_Remove_m12807_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18014(__this, method) (bool)List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12809_gshared((List_1_t110 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m18015(__this, method) (bool)List_1_System_Collections_ICollection_get_IsSynchronized_m12811_gshared((List_1_t110 *)__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m18016(__this, method) (Object_t *)List_1_System_Collections_ICollection_get_SyncRoot_m12813_gshared((List_1_t110 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m18017(__this, method) (bool)List_1_System_Collections_IList_get_IsFixedSize_m12815_gshared((List_1_t110 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m18018(__this, method) (bool)List_1_System_Collections_IList_get_IsReadOnly_m12817_gshared((List_1_t110 *)__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m18019(__this, ___index, method) (Object_t *)List_1_System_Collections_IList_get_Item_m12819_gshared((List_1_t110 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m18020(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_set_Item_m12821_gshared((List_1_t110 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Add(T)
#define List_1_Add_m3277(__this, ___item, method) (void)List_1_Add_m12822_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m18021(__this, ___newCount, method) (void)List_1_GrowIfNeeded_m12824_gshared((List_1_t110 *)__this, (int32_t)___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m18022(__this, ___collection, method) (void)List_1_AddCollection_m12826_gshared((List_1_t110 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m18023(__this, ___enumerable, method) (void)List_1_AddEnumerable_m12828_gshared((List_1_t110 *)__this, (Object_t*)___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m18024(__this, ___collection, method) (void)List_1_AddRange_m12830_gshared((List_1_t110 *)__this, (Object_t*)___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::AsReadOnly()
#define List_1_AsReadOnly_m18025(__this, method) (ReadOnlyCollection_1_t3566 *)List_1_AsReadOnly_m12832_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Clear()
#define List_1_Clear_m18026(__this, method) (void)List_1_Clear_m12834_gshared((List_1_t110 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Contains(T)
#define List_1_Contains_m3276(__this, ___item, method) (bool)List_1_Contains_m12836_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m18027(__this, ___array, ___arrayIndex, method) (void)List_1_CopyTo_m12838_gshared((List_1_t110 *)__this, (ObjectU5BU5D_t112*)___array, (int32_t)___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Find(System.Predicate`1<T>)
#define List_1_Find_m18028(__this, ___match, method) (BaseRaycaster_t517 *)List_1_Find_m12840_gshared((List_1_t110 *)__this, (Predicate_1_t2759 *)___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m18029(__this/* static, unused */, ___match, method) (void)List_1_CheckMatch_m12842_gshared((Object_t *)__this/* static, unused */, (Predicate_1_t2759 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m18030(__this, ___startIndex, ___count, ___match, method) (int32_t)List_1_GetIndex_m12844_gshared((List_1_t110 *)__this, (int32_t)___startIndex, (int32_t)___count, (Predicate_1_t2759 *)___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::GetEnumerator()
 Enumerator_t3569  List_1_GetEnumerator_m18031 (List_1_t515 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::IndexOf(T)
#define List_1_IndexOf_m18032(__this, ___item, method) (int32_t)List_1_IndexOf_m12846_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m18033(__this, ___start, ___delta, method) (void)List_1_Shift_m12848_gshared((List_1_t110 *)__this, (int32_t)___start, (int32_t)___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m18034(__this, ___index, method) (void)List_1_CheckIndex_m12850_gshared((List_1_t110 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Insert(System.Int32,T)
#define List_1_Insert_m18035(__this, ___index, ___item, method) (void)List_1_Insert_m12852_gshared((List_1_t110 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m18036(__this, ___collection, method) (void)List_1_CheckCollection_m12854_gshared((List_1_t110 *)__this, (Object_t*)___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Remove(T)
#define List_1_Remove_m3278(__this, ___item, method) (bool)List_1_Remove_m12856_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m18037(__this, ___match, method) (int32_t)List_1_RemoveAll_m12858_gshared((List_1_t110 *)__this, (Predicate_1_t2759 *)___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m18038(__this, ___index, method) (void)List_1_RemoveAt_m12860_gshared((List_1_t110 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Reverse()
#define List_1_Reverse_m18039(__this, method) (void)List_1_Reverse_m12862_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Sort()
#define List_1_Sort_m18040(__this, method) (void)List_1_Sort_m12864_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m18041(__this, ___comparison, method) (void)List_1_Sort_m12866_gshared((List_1_t110 *)__this, (Comparison_1_t2760 *)___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::ToArray()
#define List_1_ToArray_m18042(__this, method) (BaseRaycasterU5BU5D_t3562*)List_1_ToArray_m12867_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::TrimExcess()
#define List_1_TrimExcess_m18043(__this, method) (void)List_1_TrimExcess_m12869_gshared((List_1_t110 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::get_Capacity()
#define List_1_get_Capacity_m18044(__this, method) (int32_t)List_1_get_Capacity_m12871_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m18045(__this, ___value, method) (void)List_1_set_Capacity_m12873_gshared((List_1_t110 *)__this, (int32_t)___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::get_Count()
#define List_1_get_Count_m3212(__this, method) (int32_t)List_1_get_Count_m12874_gshared((List_1_t110 *)__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::get_Item(System.Int32)
#define List_1_get_Item_m3210(__this, ___index, method) (BaseRaycaster_t517 *)List_1_get_Item_m12876_gshared((List_1_t110 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseRaycaster>::set_Item(System.Int32,T)
#define List_1_set_Item_m18046(__this, ___index, ___value, method) (void)List_1_set_Item_m12878_gshared((List_1_t110 *)__this, (int32_t)___index, (Object_t *)___value, method)
