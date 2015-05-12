#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>
struct List_1_t271;
// System.Object
struct Object_t;
// UnityTest.IntegrationTestRunner.ITestRunnerCallback
struct ITestRunnerCallback_t272;
// System.Collections.Generic.IEnumerable`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>
struct IEnumerable_1_t3321;
// System.Collections.Generic.IEnumerator`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>
struct IEnumerator_1_t3322;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.ICollection`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>
struct ICollection_1_t3323;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>
struct ReadOnlyCollection_1_t3324;
// UnityTest.IntegrationTestRunner.ITestRunnerCallback[]
struct ITestRunnerCallbackU5BU5D_t3320;
// System.Predicate`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>
struct Predicate_1_t3325;
// System.Comparison`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>
struct Comparison_1_t3326;
// System.Collections.Generic.List`1/Enumerator<UnityTest.IntegrationTestRunner.ITestRunnerCallback>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_3.h"

// System.Void System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_2MethodDeclarations.h"
#define List_1__ctor_m1550(__this, method) (void)List_1__ctor_m579_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m16638(__this, ___collection, method) (void)List_1__ctor_m12787_gshared((List_1_t110 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::.ctor(System.Int32)
#define List_1__ctor_m16639(__this, ___capacity, method) (void)List_1__ctor_m12789_gshared((List_1_t110 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::.cctor()
#define List_1__cctor_m16640(__this/* static, unused */, method) (void)List_1__cctor_m12791_gshared((Object_t *)__this/* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16641(__this, method) (Object_t*)List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12793_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m16642(__this, ___array, ___arrayIndex, method) (void)List_1_System_Collections_ICollection_CopyTo_m12795_gshared((List_1_t110 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m16643(__this, method) (Object_t *)List_1_System_Collections_IEnumerable_GetEnumerator_m12797_gshared((List_1_t110 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m16644(__this, ___item, method) (int32_t)List_1_System_Collections_IList_Add_m12799_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m16645(__this, ___item, method) (bool)List_1_System_Collections_IList_Contains_m12801_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m16646(__this, ___item, method) (int32_t)List_1_System_Collections_IList_IndexOf_m12803_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m16647(__this, ___index, ___item, method) (void)List_1_System_Collections_IList_Insert_m12805_gshared((List_1_t110 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m16648(__this, ___item, method) (void)List_1_System_Collections_IList_Remove_m12807_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16649(__this, method) (bool)List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12809_gshared((List_1_t110 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m16650(__this, method) (bool)List_1_System_Collections_ICollection_get_IsSynchronized_m12811_gshared((List_1_t110 *)__this, method)
// System.Object System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m16651(__this, method) (Object_t *)List_1_System_Collections_ICollection_get_SyncRoot_m12813_gshared((List_1_t110 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m16652(__this, method) (bool)List_1_System_Collections_IList_get_IsFixedSize_m12815_gshared((List_1_t110 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m16653(__this, method) (bool)List_1_System_Collections_IList_get_IsReadOnly_m12817_gshared((List_1_t110 *)__this, method)
// System.Object System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m16654(__this, ___index, method) (Object_t *)List_1_System_Collections_IList_get_Item_m12819_gshared((List_1_t110 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m16655(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_set_Item_m12821_gshared((List_1_t110 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::Add(T)
#define List_1_Add_m1551(__this, ___item, method) (void)List_1_Add_m12822_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m16656(__this, ___newCount, method) (void)List_1_GrowIfNeeded_m12824_gshared((List_1_t110 *)__this, (int32_t)___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m16657(__this, ___collection, method) (void)List_1_AddCollection_m12826_gshared((List_1_t110 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m16658(__this, ___enumerable, method) (void)List_1_AddEnumerable_m12828_gshared((List_1_t110 *)__this, (Object_t*)___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m16659(__this, ___collection, method) (void)List_1_AddRange_m12830_gshared((List_1_t110 *)__this, (Object_t*)___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::AsReadOnly()
#define List_1_AsReadOnly_m16660(__this, method) (ReadOnlyCollection_1_t3324 *)List_1_AsReadOnly_m12832_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::Clear()
#define List_1_Clear_m16661(__this, method) (void)List_1_Clear_m12834_gshared((List_1_t110 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::Contains(T)
#define List_1_Contains_m16662(__this, ___item, method) (bool)List_1_Contains_m12836_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m16663(__this, ___array, ___arrayIndex, method) (void)List_1_CopyTo_m12838_gshared((List_1_t110 *)__this, (ObjectU5BU5D_t112*)___array, (int32_t)___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::Find(System.Predicate`1<T>)
#define List_1_Find_m16664(__this, ___match, method) (Object_t *)List_1_Find_m12840_gshared((List_1_t110 *)__this, (Predicate_1_t2759 *)___match, method)
// System.Void System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m16665(__this/* static, unused */, ___match, method) (void)List_1_CheckMatch_m12842_gshared((Object_t *)__this/* static, unused */, (Predicate_1_t2759 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m16666(__this, ___startIndex, ___count, ___match, method) (int32_t)List_1_GetIndex_m12844_gshared((List_1_t110 *)__this, (int32_t)___startIndex, (int32_t)___count, (Predicate_1_t2759 *)___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::GetEnumerator()
 Enumerator_t355  List_1_GetEnumerator_m1553 (List_1_t271 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::IndexOf(T)
#define List_1_IndexOf_m16667(__this, ___item, method) (int32_t)List_1_IndexOf_m12846_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m16668(__this, ___start, ___delta, method) (void)List_1_Shift_m12848_gshared((List_1_t110 *)__this, (int32_t)___start, (int32_t)___delta, method)
// System.Void System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m16669(__this, ___index, method) (void)List_1_CheckIndex_m12850_gshared((List_1_t110 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::Insert(System.Int32,T)
#define List_1_Insert_m16670(__this, ___index, ___item, method) (void)List_1_Insert_m12852_gshared((List_1_t110 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m16671(__this, ___collection, method) (void)List_1_CheckCollection_m12854_gshared((List_1_t110 *)__this, (Object_t*)___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::Remove(T)
#define List_1_Remove_m1552(__this, ___item, method) (bool)List_1_Remove_m12856_gshared((List_1_t110 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m16672(__this, ___match, method) (int32_t)List_1_RemoveAll_m12858_gshared((List_1_t110 *)__this, (Predicate_1_t2759 *)___match, method)
// System.Void System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m16673(__this, ___index, method) (void)List_1_RemoveAt_m12860_gshared((List_1_t110 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::Reverse()
#define List_1_Reverse_m16674(__this, method) (void)List_1_Reverse_m12862_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::Sort()
#define List_1_Sort_m16675(__this, method) (void)List_1_Sort_m12864_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m16676(__this, ___comparison, method) (void)List_1_Sort_m12866_gshared((List_1_t110 *)__this, (Comparison_1_t2760 *)___comparison, method)
// T[] System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::ToArray()
#define List_1_ToArray_m16677(__this, method) (ITestRunnerCallbackU5BU5D_t3320*)List_1_ToArray_m12867_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::TrimExcess()
#define List_1_TrimExcess_m16678(__this, method) (void)List_1_TrimExcess_m12869_gshared((List_1_t110 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::get_Capacity()
#define List_1_get_Capacity_m16679(__this, method) (int32_t)List_1_get_Capacity_m12871_gshared((List_1_t110 *)__this, method)
// System.Void System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m16680(__this, ___value, method) (void)List_1_set_Capacity_m12873_gshared((List_1_t110 *)__this, (int32_t)___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::get_Count()
#define List_1_get_Count_m16681(__this, method) (int32_t)List_1_get_Count_m12874_gshared((List_1_t110 *)__this, method)
// T System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::get_Item(System.Int32)
#define List_1_get_Item_m16682(__this, ___index, method) (Object_t *)List_1_get_Item_m12876_gshared((List_1_t110 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<UnityTest.IntegrationTestRunner.ITestRunnerCallback>::set_Item(System.Int32,T)
#define List_1_set_Item_m16683(__this, ___index, ___value, method) (void)List_1_set_Item_m12878_gshared((List_1_t110 *)__this, (int32_t)___index, (Object_t *)___value, method)
