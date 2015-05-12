#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t663;
// System.Object
struct Object_t;
// UnityEngine.Component
struct Component_t263;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Component>
struct IEnumerable_1_t3297;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Component>
struct IEnumerator_1_t3298;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnityEngine.Component>
struct ICollection_1_t3538;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Component>
struct ReadOnlyCollection_1_t3539;
// UnityEngine.Component[]
struct ComponentU5BU5D_t353;
// System.Predicate`1<UnityEngine.Component>
struct Predicate_1_t661;
// System.Comparison`1<UnityEngine.Component>
struct Comparison_1_t3540;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.Component>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_15.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_2MethodDeclarations.h"
#define List_1__ctor_m17722(__this, method) (void)List_1__ctor_m579_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m17723(__this, ___collection, method) (void)List_1__ctor_m12787_gshared((List_1_t110 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::.ctor(System.Int32)
#define List_1__ctor_m17724(__this, ___capacity, method) (void)List_1__ctor_m12789_gshared((List_1_t110 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::.cctor()
#define List_1__cctor_m17725(__this/* static, unused */, method) (void)List_1__cctor_m12791_gshared((Object_t *)__this/* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m17726(__this, method) (Object_t*)List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12793_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m17727(__this, ___array, ___arrayIndex, method) (void)List_1_System_Collections_ICollection_CopyTo_m12795_gshared((List_1_t110 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m17728(__this, method) (Object_t *)List_1_System_Collections_IEnumerable_GetEnumerator_m12797_gshared((List_1_t110 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m17729(__this, ___item, method) (int32_t)List_1_System_Collections_IList_Add_m12799_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m17730(__this, ___item, method) (bool)List_1_System_Collections_IList_Contains_m12801_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m17731(__this, ___item, method) (int32_t)List_1_System_Collections_IList_IndexOf_m12803_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m17732(__this, ___index, ___item, method) (void)List_1_System_Collections_IList_Insert_m12805_gshared((List_1_t110 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m17733(__this, ___item, method) (void)List_1_System_Collections_IList_Remove_m12807_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m17734(__this, method) (bool)List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12809_gshared((List_1_t110 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m17735(__this, method) (bool)List_1_System_Collections_ICollection_get_IsSynchronized_m12811_gshared((List_1_t110 *)__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m17736(__this, method) (Object_t *)List_1_System_Collections_ICollection_get_SyncRoot_m12813_gshared((List_1_t110 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m17737(__this, method) (bool)List_1_System_Collections_IList_get_IsFixedSize_m12815_gshared((List_1_t110 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m17738(__this, method) (bool)List_1_System_Collections_IList_get_IsReadOnly_m12817_gshared((List_1_t110 *)__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m17739(__this, ___index, method) (Object_t *)List_1_System_Collections_IList_get_Item_m12819_gshared((List_1_t110 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m17740(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_set_Item_m12821_gshared((List_1_t110 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Add(T)
#define List_1_Add_m17741(__this, ___item, method) (void)List_1_Add_m12822_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m17742(__this, ___newCount, method) (void)List_1_GrowIfNeeded_m12824_gshared((List_1_t110 *)__this, (int32_t)___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m17743(__this, ___collection, method) (void)List_1_AddCollection_m12826_gshared((List_1_t110 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m17744(__this, ___enumerable, method) (void)List_1_AddEnumerable_m12828_gshared((List_1_t110 *)__this, (Object_t*)___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m17745(__this, ___collection, method) (void)List_1_AddRange_m12830_gshared((List_1_t110 *)__this, (Object_t*)___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Component>::AsReadOnly()
#define List_1_AsReadOnly_m17746(__this, method) (ReadOnlyCollection_1_t3539 *)List_1_AsReadOnly_m12832_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Clear()
#define List_1_Clear_m3836(__this, method) (void)List_1_Clear_m12834_gshared((List_1_t110 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::Contains(T)
#define List_1_Contains_m17747(__this, ___item, method) (bool)List_1_Contains_m12836_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m17748(__this, ___array, ___arrayIndex, method) (void)List_1_CopyTo_m12838_gshared((List_1_t110 *)__this, (ObjectU5BU5D_t112*)___array, (int32_t)___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.Component>::Find(System.Predicate`1<T>)
#define List_1_Find_m17749(__this, ___match, method) (Component_t263 *)List_1_Find_m12840_gshared((List_1_t110 *)__this, (Predicate_1_t2759 *)___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m17750(__this/* static, unused */, ___match, method) (void)List_1_CheckMatch_m12842_gshared((Object_t *)__this/* static, unused */, (Predicate_1_t2759 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m17751(__this, ___startIndex, ___count, ___match, method) (int32_t)List_1_GetIndex_m12844_gshared((List_1_t110 *)__this, (int32_t)___startIndex, (int32_t)___count, (Predicate_1_t2759 *)___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.Component>::GetEnumerator()
 Enumerator_t3541  List_1_GetEnumerator_m17752 (List_1_t663 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::IndexOf(T)
#define List_1_IndexOf_m17753(__this, ___item, method) (int32_t)List_1_IndexOf_m12846_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m17754(__this, ___start, ___delta, method) (void)List_1_Shift_m12848_gshared((List_1_t110 *)__this, (int32_t)___start, (int32_t)___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m17755(__this, ___index, method) (void)List_1_CheckIndex_m12850_gshared((List_1_t110 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Insert(System.Int32,T)
#define List_1_Insert_m17756(__this, ___index, ___item, method) (void)List_1_Insert_m12852_gshared((List_1_t110 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m17757(__this, ___collection, method) (void)List_1_CheckCollection_m12854_gshared((List_1_t110 *)__this, (Object_t*)___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.Component>::Remove(T)
#define List_1_Remove_m17758(__this, ___item, method) (bool)List_1_Remove_m12856_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m3803(__this, ___match, method) (int32_t)List_1_RemoveAll_m12858_gshared((List_1_t110 *)__this, (Predicate_1_t2759 *)___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m17759(__this, ___index, method) (void)List_1_RemoveAt_m12860_gshared((List_1_t110 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Reverse()
#define List_1_Reverse_m17760(__this, method) (void)List_1_Reverse_m12862_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Sort()
#define List_1_Sort_m17761(__this, method) (void)List_1_Sort_m12864_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m17762(__this, ___comparison, method) (void)List_1_Sort_m12866_gshared((List_1_t110 *)__this, (Comparison_1_t2760 *)___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.Component>::ToArray()
#define List_1_ToArray_m17763(__this, method) (ComponentU5BU5D_t353*)List_1_ToArray_m12867_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::TrimExcess()
#define List_1_TrimExcess_m17764(__this, method) (void)List_1_TrimExcess_m12869_gshared((List_1_t110 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::get_Capacity()
#define List_1_get_Capacity_m17765(__this, method) (int32_t)List_1_get_Capacity_m12871_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m17766(__this, ___value, method) (void)List_1_set_Capacity_m12873_gshared((List_1_t110 *)__this, (int32_t)___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::get_Count()
#define List_1_get_Count_m3422(__this, method) (int32_t)List_1_get_Count_m12874_gshared((List_1_t110 *)__this, method)
// T System.Collections.Generic.List`1<UnityEngine.Component>::get_Item(System.Int32)
#define List_1_get_Item_m3420(__this, ___index, method) (Component_t263 *)List_1_get_Item_m12876_gshared((List_1_t110 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::set_Item(System.Int32,T)
#define List_1_set_Item_m17767(__this, ___index, ___value, method) (void)List_1_set_Item_m12878_gshared((List_1_t110 *)__this, (int32_t)___index, (Object_t *)___value, method)
