#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t110;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t76;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t77;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t111;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t2761;
// System.Object[]
struct ObjectU5BU5D_t112;
// System.Predicate`1<System.Object>
struct Predicate_1_t2759;
// System.Comparison`1<System.Object>
struct Comparison_1_t2760;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_7.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
 void List_1__ctor_m579_gshared (List_1_t110 * __this, MethodInfo* method);
#define List_1__ctor_m579(__this, method) (void)List_1__ctor_m579_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
 void List_1__ctor_m12787_gshared (List_1_t110 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1__ctor_m12787(__this, ___collection, method) (void)List_1__ctor_m12787_gshared((List_1_t110 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
 void List_1__ctor_m12789_gshared (List_1_t110 * __this, int32_t ___capacity, MethodInfo* method);
#define List_1__ctor_m12789(__this, ___capacity, method) (void)List_1__ctor_m12789_gshared((List_1_t110 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
 void List_1__cctor_m12791_gshared (Object_t * __this/* static, unused */, MethodInfo* method);
#define List_1__cctor_m12791(__this/* static, unused */, method) (void)List_1__cctor_m12791_gshared((Object_t *)__this/* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12793_gshared (List_1_t110 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12793(__this, method) (Object_t*)List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12793_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void List_1_System_Collections_ICollection_CopyTo_m12795_gshared (List_1_t110 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m12795(__this, ___array, ___arrayIndex, method) (void)List_1_System_Collections_ICollection_CopyTo_m12795_gshared((List_1_t110 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m12797_gshared (List_1_t110 * __this, MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m12797(__this, method) (Object_t *)List_1_System_Collections_IEnumerable_GetEnumerator_m12797_gshared((List_1_t110 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
 int32_t List_1_System_Collections_IList_Add_m12799_gshared (List_1_t110 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Add_m12799(__this, ___item, method) (int32_t)List_1_System_Collections_IList_Add_m12799_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
 bool List_1_System_Collections_IList_Contains_m12801_gshared (List_1_t110 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m12801(__this, ___item, method) (bool)List_1_System_Collections_IList_Contains_m12801_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
 int32_t List_1_System_Collections_IList_IndexOf_m12803_gshared (List_1_t110 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m12803(__this, ___item, method) (int32_t)List_1_System_Collections_IList_IndexOf_m12803_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
 void List_1_System_Collections_IList_Insert_m12805_gshared (List_1_t110 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m12805(__this, ___index, ___item, method) (void)List_1_System_Collections_IList_Insert_m12805_gshared((List_1_t110 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
 void List_1_System_Collections_IList_Remove_m12807_gshared (List_1_t110 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m12807(__this, ___item, method) (void)List_1_System_Collections_IList_Remove_m12807_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
 bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12809_gshared (List_1_t110 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12809(__this, method) (bool)List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12809_gshared((List_1_t110 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
 bool List_1_System_Collections_ICollection_get_IsSynchronized_m12811_gshared (List_1_t110 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m12811(__this, method) (bool)List_1_System_Collections_ICollection_get_IsSynchronized_m12811_gshared((List_1_t110 *)__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
 Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m12813_gshared (List_1_t110 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m12813(__this, method) (Object_t *)List_1_System_Collections_ICollection_get_SyncRoot_m12813_gshared((List_1_t110 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
 bool List_1_System_Collections_IList_get_IsFixedSize_m12815_gshared (List_1_t110 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m12815(__this, method) (bool)List_1_System_Collections_IList_get_IsFixedSize_m12815_gshared((List_1_t110 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
 bool List_1_System_Collections_IList_get_IsReadOnly_m12817_gshared (List_1_t110 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m12817(__this, method) (bool)List_1_System_Collections_IList_get_IsReadOnly_m12817_gshared((List_1_t110 *)__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
 Object_t * List_1_System_Collections_IList_get_Item_m12819_gshared (List_1_t110 * __this, int32_t ___index, MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m12819(__this, ___index, method) (Object_t *)List_1_System_Collections_IList_get_Item_m12819_gshared((List_1_t110 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
 void List_1_System_Collections_IList_set_Item_m12821_gshared (List_1_t110 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m12821(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_set_Item_m12821_gshared((List_1_t110 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
 void List_1_Add_m12822_gshared (List_1_t110 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Add_m12822(__this, ___item, method) (void)List_1_Add_m12822_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
 void List_1_GrowIfNeeded_m12824_gshared (List_1_t110 * __this, int32_t ___newCount, MethodInfo* method);
#define List_1_GrowIfNeeded_m12824(__this, ___newCount, method) (void)List_1_GrowIfNeeded_m12824_gshared((List_1_t110 *)__this, (int32_t)___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
 void List_1_AddCollection_m12826_gshared (List_1_t110 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddCollection_m12826(__this, ___collection, method) (void)List_1_AddCollection_m12826_gshared((List_1_t110 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_AddEnumerable_m12828_gshared (List_1_t110 * __this, Object_t* ___enumerable, MethodInfo* method);
#define List_1_AddEnumerable_m12828(__this, ___enumerable, method) (void)List_1_AddEnumerable_m12828_gshared((List_1_t110 *)__this, (Object_t*)___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_AddRange_m12830_gshared (List_1_t110 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddRange_m12830(__this, ___collection, method) (void)List_1_AddRange_m12830_gshared((List_1_t110 *)__this, (Object_t*)___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
 ReadOnlyCollection_1_t2761 * List_1_AsReadOnly_m12832_gshared (List_1_t110 * __this, MethodInfo* method);
#define List_1_AsReadOnly_m12832(__this, method) (ReadOnlyCollection_1_t2761 *)List_1_AsReadOnly_m12832_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
 void List_1_Clear_m12834_gshared (List_1_t110 * __this, MethodInfo* method);
#define List_1_Clear_m12834(__this, method) (void)List_1_Clear_m12834_gshared((List_1_t110 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
 bool List_1_Contains_m12836_gshared (List_1_t110 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Contains_m12836(__this, ___item, method) (bool)List_1_Contains_m12836_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
 void List_1_CopyTo_m12838_gshared (List_1_t110 * __this, ObjectU5BU5D_t112* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_CopyTo_m12838(__this, ___array, ___arrayIndex, method) (void)List_1_CopyTo_m12838_gshared((List_1_t110 *)__this, (ObjectU5BU5D_t112*)___array, (int32_t)___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
 Object_t * List_1_Find_m12840_gshared (List_1_t110 * __this, Predicate_1_t2759 * ___match, MethodInfo* method);
#define List_1_Find_m12840(__this, ___match, method) (Object_t *)List_1_Find_m12840_gshared((List_1_t110 *)__this, (Predicate_1_t2759 *)___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
 void List_1_CheckMatch_m12842_gshared (Object_t * __this/* static, unused */, Predicate_1_t2759 * ___match, MethodInfo* method);
#define List_1_CheckMatch_m12842(__this/* static, unused */, ___match, method) (void)List_1_CheckMatch_m12842_gshared((Object_t *)__this/* static, unused */, (Predicate_1_t2759 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
 int32_t List_1_GetIndex_m12844_gshared (List_1_t110 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2759 * ___match, MethodInfo* method);
#define List_1_GetIndex_m12844(__this, ___startIndex, ___count, ___match, method) (int32_t)List_1_GetIndex_m12844_gshared((List_1_t110 *)__this, (int32_t)___startIndex, (int32_t)___count, (Predicate_1_t2759 *)___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
 Enumerator_t2762  List_1_GetEnumerator_m12879 (List_1_t110 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
 int32_t List_1_IndexOf_m12846_gshared (List_1_t110 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_IndexOf_m12846(__this, ___item, method) (int32_t)List_1_IndexOf_m12846_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
 void List_1_Shift_m12848_gshared (List_1_t110 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method);
#define List_1_Shift_m12848(__this, ___start, ___delta, method) (void)List_1_Shift_m12848_gshared((List_1_t110 *)__this, (int32_t)___start, (int32_t)___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
 void List_1_CheckIndex_m12850_gshared (List_1_t110 * __this, int32_t ___index, MethodInfo* method);
#define List_1_CheckIndex_m12850(__this, ___index, method) (void)List_1_CheckIndex_m12850_gshared((List_1_t110 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
 void List_1_Insert_m12852_gshared (List_1_t110 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_Insert_m12852(__this, ___index, ___item, method) (void)List_1_Insert_m12852_gshared((List_1_t110 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_CheckCollection_m12854_gshared (List_1_t110 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_CheckCollection_m12854(__this, ___collection, method) (void)List_1_CheckCollection_m12854_gshared((List_1_t110 *)__this, (Object_t*)___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
 bool List_1_Remove_m12856_gshared (List_1_t110 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Remove_m12856(__this, ___item, method) (bool)List_1_Remove_m12856_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
 int32_t List_1_RemoveAll_m12858_gshared (List_1_t110 * __this, Predicate_1_t2759 * ___match, MethodInfo* method);
#define List_1_RemoveAll_m12858(__this, ___match, method) (int32_t)List_1_RemoveAll_m12858_gshared((List_1_t110 *)__this, (Predicate_1_t2759 *)___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
 void List_1_RemoveAt_m12860_gshared (List_1_t110 * __this, int32_t ___index, MethodInfo* method);
#define List_1_RemoveAt_m12860(__this, ___index, method) (void)List_1_RemoveAt_m12860_gshared((List_1_t110 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
 void List_1_Reverse_m12862_gshared (List_1_t110 * __this, MethodInfo* method);
#define List_1_Reverse_m12862(__this, method) (void)List_1_Reverse_m12862_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
 void List_1_Sort_m12864_gshared (List_1_t110 * __this, MethodInfo* method);
#define List_1_Sort_m12864(__this, method) (void)List_1_Sort_m12864_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
 void List_1_Sort_m12866_gshared (List_1_t110 * __this, Comparison_1_t2760 * ___comparison, MethodInfo* method);
#define List_1_Sort_m12866(__this, ___comparison, method) (void)List_1_Sort_m12866_gshared((List_1_t110 *)__this, (Comparison_1_t2760 *)___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
 ObjectU5BU5D_t112* List_1_ToArray_m12867_gshared (List_1_t110 * __this, MethodInfo* method);
#define List_1_ToArray_m12867(__this, method) (ObjectU5BU5D_t112*)List_1_ToArray_m12867_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
 void List_1_TrimExcess_m12869_gshared (List_1_t110 * __this, MethodInfo* method);
#define List_1_TrimExcess_m12869(__this, method) (void)List_1_TrimExcess_m12869_gshared((List_1_t110 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
 int32_t List_1_get_Capacity_m12871_gshared (List_1_t110 * __this, MethodInfo* method);
#define List_1_get_Capacity_m12871(__this, method) (int32_t)List_1_get_Capacity_m12871_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
 void List_1_set_Capacity_m12873_gshared (List_1_t110 * __this, int32_t ___value, MethodInfo* method);
#define List_1_set_Capacity_m12873(__this, ___value, method) (void)List_1_set_Capacity_m12873_gshared((List_1_t110 *)__this, (int32_t)___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
 int32_t List_1_get_Count_m12874_gshared (List_1_t110 * __this, MethodInfo* method);
#define List_1_get_Count_m12874(__this, method) (int32_t)List_1_get_Count_m12874_gshared((List_1_t110 *)__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
 Object_t * List_1_get_Item_m12876_gshared (List_1_t110 * __this, int32_t ___index, MethodInfo* method);
#define List_1_get_Item_m12876(__this, ___index, method) (Object_t *)List_1_get_Item_m12876_gshared((List_1_t110 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
 void List_1_set_Item_m12878_gshared (List_1_t110 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_set_Item_m12878(__this, ___index, ___value, method) (void)List_1_set_Item_m12878_gshared((List_1_t110 *)__this, (int32_t)___index, (Object_t *)___value, method)
