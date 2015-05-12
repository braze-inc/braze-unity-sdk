#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Security.Policy.StrongName>
struct List_1_t2700;
// System.Object
struct Object_t;
// System.Security.Policy.StrongName
struct StrongName_t2191;
// System.Collections.Generic.IEnumerable`1<System.Security.Policy.StrongName>
struct IEnumerable_1_t4890;
// System.Collections.Generic.IEnumerator`1<System.Security.Policy.StrongName>
struct IEnumerator_1_t4891;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t19;
// System.Collections.Generic.ICollection`1<System.Security.Policy.StrongName>
struct ICollection_1_t4892;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Security.Policy.StrongName>
struct ReadOnlyCollection_1_t4893;
// System.Security.Policy.StrongName[]
struct StrongNameU5BU5D_t4889;
// System.Predicate`1<System.Security.Policy.StrongName>
struct Predicate_1_t4894;
// System.Comparison`1<System.Security.Policy.StrongName>
struct Comparison_1_t4895;
// System.Collections.Generic.List`1/Enumerator<System.Security.Policy.StrongName>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_37.h"

// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_3MethodDeclarations.h"
#define List_1__ctor_m26672(__this, method) (void)List_1__ctor_m644_gshared((List_1_t123 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
#define List_1__ctor_m26673(__this, ___collection, method) (void)List_1__ctor_m12882_gshared((List_1_t123 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.ctor(System.Int32)
#define List_1__ctor_m12751(__this, ___capacity, method) (void)List_1__ctor_m12884_gshared((List_1_t123 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::.cctor()
#define List_1__cctor_m26674(__this/* static, unused */, method) (void)List_1__cctor_m12886_gshared((Object_t *)__this/* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m26675(__this, method) (Object_t*)List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12888_gshared((List_1_t123 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m26676(__this, ___array, ___arrayIndex, method) (void)List_1_System_Collections_ICollection_CopyTo_m12890_gshared((List_1_t123 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m26677(__this, method) (Object_t *)List_1_System_Collections_IEnumerable_GetEnumerator_m12892_gshared((List_1_t123 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m26678(__this, ___item, method) (int32_t)List_1_System_Collections_IList_Add_m12894_gshared((List_1_t123 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m26679(__this, ___item, method) (bool)List_1_System_Collections_IList_Contains_m12896_gshared((List_1_t123 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m26680(__this, ___item, method) (int32_t)List_1_System_Collections_IList_IndexOf_m12898_gshared((List_1_t123 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m26681(__this, ___index, ___item, method) (void)List_1_System_Collections_IList_Insert_m12900_gshared((List_1_t123 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m26682(__this, ___item, method) (void)List_1_System_Collections_IList_Remove_m12902_gshared((List_1_t123 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m26683(__this, method) (bool)List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12904_gshared((List_1_t123 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m26684(__this, method) (bool)List_1_System_Collections_ICollection_get_IsSynchronized_m12906_gshared((List_1_t123 *)__this, method)
// System.Object System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m26685(__this, method) (Object_t *)List_1_System_Collections_ICollection_get_SyncRoot_m12908_gshared((List_1_t123 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m26686(__this, method) (bool)List_1_System_Collections_IList_get_IsFixedSize_m12910_gshared((List_1_t123 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m26687(__this, method) (bool)List_1_System_Collections_IList_get_IsReadOnly_m12912_gshared((List_1_t123 *)__this, method)
// System.Object System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m26688(__this, ___index, method) (Object_t *)List_1_System_Collections_IList_get_Item_m12914_gshared((List_1_t123 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m26689(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_set_Item_m12916_gshared((List_1_t123 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Add(T)
#define List_1_Add_m26690(__this, ___item, method) (void)List_1_Add_m12917_gshared((List_1_t123 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m26691(__this, ___newCount, method) (void)List_1_GrowIfNeeded_m12919_gshared((List_1_t123 *)__this, (int32_t)___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m26692(__this, ___collection, method) (void)List_1_AddCollection_m12921_gshared((List_1_t123 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m26693(__this, ___enumerable, method) (void)List_1_AddEnumerable_m12923_gshared((List_1_t123 *)__this, (Object_t*)___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m26694(__this, ___collection, method) (void)List_1_AddRange_m12925_gshared((List_1_t123 *)__this, (Object_t*)___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::AsReadOnly()
#define List_1_AsReadOnly_m26695(__this, method) (ReadOnlyCollection_1_t4893 *)List_1_AsReadOnly_m12927_gshared((List_1_t123 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Clear()
#define List_1_Clear_m26696(__this, method) (void)List_1_Clear_m12929_gshared((List_1_t123 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Contains(T)
#define List_1_Contains_m26697(__this, ___item, method) (bool)List_1_Contains_m12931_gshared((List_1_t123 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m26698(__this, ___array, ___arrayIndex, method) (void)List_1_CopyTo_m12933_gshared((List_1_t123 *)__this, (ObjectU5BU5D_t96*)___array, (int32_t)___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Find(System.Predicate`1<T>)
#define List_1_Find_m26699(__this, ___match, method) (StrongName_t2191 *)List_1_Find_m12935_gshared((List_1_t123 *)__this, (Predicate_1_t2771 *)___match, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m26700(__this/* static, unused */, ___match, method) (void)List_1_CheckMatch_m12937_gshared((Object_t *)__this/* static, unused */, (Predicate_1_t2771 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m26701(__this, ___startIndex, ___count, ___match, method) (int32_t)List_1_GetIndex_m12939_gshared((List_1_t123 *)__this, (int32_t)___startIndex, (int32_t)___count, (Predicate_1_t2771 *)___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Security.Policy.StrongName>::GetEnumerator()
 Enumerator_t4896  List_1_GetEnumerator_m26702 (List_1_t2700 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::IndexOf(T)
#define List_1_IndexOf_m26703(__this, ___item, method) (int32_t)List_1_IndexOf_m12941_gshared((List_1_t123 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m26704(__this, ___start, ___delta, method) (void)List_1_Shift_m12943_gshared((List_1_t123 *)__this, (int32_t)___start, (int32_t)___delta, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m26705(__this, ___index, method) (void)List_1_CheckIndex_m12945_gshared((List_1_t123 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Insert(System.Int32,T)
#define List_1_Insert_m26706(__this, ___index, ___item, method) (void)List_1_Insert_m12947_gshared((List_1_t123 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m26707(__this, ___collection, method) (void)List_1_CheckCollection_m12949_gshared((List_1_t123 *)__this, (Object_t*)___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Remove(T)
#define List_1_Remove_m26708(__this, ___item, method) (bool)List_1_Remove_m12951_gshared((List_1_t123 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m26709(__this, ___match, method) (int32_t)List_1_RemoveAll_m12953_gshared((List_1_t123 *)__this, (Predicate_1_t2771 *)___match, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m26710(__this, ___index, method) (void)List_1_RemoveAt_m12955_gshared((List_1_t123 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Reverse()
#define List_1_Reverse_m26711(__this, method) (void)List_1_Reverse_m12957_gshared((List_1_t123 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Sort()
#define List_1_Sort_m26712(__this, method) (void)List_1_Sort_m12959_gshared((List_1_t123 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m26713(__this, ___comparison, method) (void)List_1_Sort_m12961_gshared((List_1_t123 *)__this, (Comparison_1_t2772 *)___comparison, method)
// T[] System.Collections.Generic.List`1<System.Security.Policy.StrongName>::ToArray()
#define List_1_ToArray_m26714(__this, method) (StrongNameU5BU5D_t4889*)List_1_ToArray_m12962_gshared((List_1_t123 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::TrimExcess()
#define List_1_TrimExcess_m26715(__this, method) (void)List_1_TrimExcess_m12964_gshared((List_1_t123 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Capacity()
#define List_1_get_Capacity_m26716(__this, method) (int32_t)List_1_get_Capacity_m12966_gshared((List_1_t123 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m26717(__this, ___value, method) (void)List_1_set_Capacity_m12968_gshared((List_1_t123 *)__this, (int32_t)___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Count()
#define List_1_get_Count_m26718(__this, method) (int32_t)List_1_get_Count_m12969_gshared((List_1_t123 *)__this, method)
// T System.Collections.Generic.List`1<System.Security.Policy.StrongName>::get_Item(System.Int32)
#define List_1_get_Item_m26719(__this, ___index, method) (StrongName_t2191 *)List_1_get_Item_m12971_gshared((List_1_t123 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Security.Policy.StrongName>::set_Item(System.Int32,T)
#define List_1_set_Item_m26720(__this, ___index, ___value, method) (void)List_1_set_Item_m12973_gshared((List_1_t123 *)__this, (int32_t)___index, (Object_t *)___value, method)
