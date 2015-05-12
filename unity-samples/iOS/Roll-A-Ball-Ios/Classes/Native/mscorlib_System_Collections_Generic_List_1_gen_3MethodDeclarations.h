#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Object>
struct List_1_t123;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t87;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t88;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t19;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t124;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t2773;
// System.Object[]
struct ObjectU5BU5D_t96;
// System.Predicate`1<System.Object>
struct Predicate_1_t2771;
// System.Comparison`1<System.Object>
struct Comparison_1_t2772;
// System.Collections.Generic.List`1/Enumerator<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_2.h"

// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
 void List_1__ctor_m644_gshared (List_1_t123 * __this, MethodInfo* method);
#define List_1__ctor_m644(__this, method) (void)List_1__ctor_m644_gshared((List_1_t123 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
 void List_1__ctor_m12882_gshared (List_1_t123 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1__ctor_m12882(__this, ___collection, method) (void)List_1__ctor_m12882_gshared((List_1_t123 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
 void List_1__ctor_m12884_gshared (List_1_t123 * __this, int32_t ___capacity, MethodInfo* method);
#define List_1__ctor_m12884(__this, ___capacity, method) (void)List_1__ctor_m12884_gshared((List_1_t123 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Object>::.cctor()
 void List_1__cctor_m12886_gshared (Object_t * __this/* static, unused */, MethodInfo* method);
#define List_1__cctor_m12886(__this/* static, unused */, method) (void)List_1__cctor_m12886_gshared((Object_t *)__this/* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12888_gshared (List_1_t123 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12888(__this, method) (Object_t*)List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12888_gshared((List_1_t123 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void List_1_System_Collections_ICollection_CopyTo_m12890_gshared (List_1_t123 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m12890(__this, ___array, ___arrayIndex, method) (void)List_1_System_Collections_ICollection_CopyTo_m12890_gshared((List_1_t123 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m12892_gshared (List_1_t123 * __this, MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m12892(__this, method) (Object_t *)List_1_System_Collections_IEnumerable_GetEnumerator_m12892_gshared((List_1_t123 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Add(System.Object)
 int32_t List_1_System_Collections_IList_Add_m12894_gshared (List_1_t123 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Add_m12894(__this, ___item, method) (int32_t)List_1_System_Collections_IList_Add_m12894_gshared((List_1_t123 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
 bool List_1_System_Collections_IList_Contains_m12896_gshared (List_1_t123 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m12896(__this, ___item, method) (bool)List_1_System_Collections_IList_Contains_m12896_gshared((List_1_t123 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
 int32_t List_1_System_Collections_IList_IndexOf_m12898_gshared (List_1_t123 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m12898(__this, ___item, method) (int32_t)List_1_System_Collections_IList_IndexOf_m12898_gshared((List_1_t123 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
 void List_1_System_Collections_IList_Insert_m12900_gshared (List_1_t123 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m12900(__this, ___index, ___item, method) (void)List_1_System_Collections_IList_Insert_m12900_gshared((List_1_t123 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
 void List_1_System_Collections_IList_Remove_m12902_gshared (List_1_t123 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m12902(__this, ___item, method) (void)List_1_System_Collections_IList_Remove_m12902_gshared((List_1_t123 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
 bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12904_gshared (List_1_t123 * __this, MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12904(__this, method) (bool)List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12904_gshared((List_1_t123 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
 bool List_1_System_Collections_ICollection_get_IsSynchronized_m12906_gshared (List_1_t123 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m12906(__this, method) (bool)List_1_System_Collections_ICollection_get_IsSynchronized_m12906_gshared((List_1_t123 *)__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
 Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m12908_gshared (List_1_t123 * __this, MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m12908(__this, method) (Object_t *)List_1_System_Collections_ICollection_get_SyncRoot_m12908_gshared((List_1_t123 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
 bool List_1_System_Collections_IList_get_IsFixedSize_m12910_gshared (List_1_t123 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m12910(__this, method) (bool)List_1_System_Collections_IList_get_IsFixedSize_m12910_gshared((List_1_t123 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_IsReadOnly()
 bool List_1_System_Collections_IList_get_IsReadOnly_m12912_gshared (List_1_t123 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m12912(__this, method) (bool)List_1_System_Collections_IList_get_IsReadOnly_m12912_gshared((List_1_t123 *)__this, method)
// System.Object System.Collections.Generic.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
 Object_t * List_1_System_Collections_IList_get_Item_m12914_gshared (List_1_t123 * __this, int32_t ___index, MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m12914(__this, ___index, method) (Object_t *)List_1_System_Collections_IList_get_Item_m12914_gshared((List_1_t123 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
 void List_1_System_Collections_IList_set_Item_m12916_gshared (List_1_t123 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m12916(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_set_Item_m12916_gshared((List_1_t123 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
 void List_1_Add_m12917_gshared (List_1_t123 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Add_m12917(__this, ___item, method) (void)List_1_Add_m12917_gshared((List_1_t123 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::GrowIfNeeded(System.Int32)
 void List_1_GrowIfNeeded_m12919_gshared (List_1_t123 * __this, int32_t ___newCount, MethodInfo* method);
#define List_1_GrowIfNeeded_m12919(__this, ___newCount, method) (void)List_1_GrowIfNeeded_m12919_gshared((List_1_t123 *)__this, (int32_t)___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddCollection(System.Collections.Generic.ICollection`1<T>)
 void List_1_AddCollection_m12921_gshared (List_1_t123 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddCollection_m12921(__this, ___collection, method) (void)List_1_AddCollection_m12921_gshared((List_1_t123 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_AddEnumerable_m12923_gshared (List_1_t123 * __this, Object_t* ___enumerable, MethodInfo* method);
#define List_1_AddEnumerable_m12923(__this, ___enumerable, method) (void)List_1_AddEnumerable_m12923_gshared((List_1_t123 *)__this, (Object_t*)___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_AddRange_m12925_gshared (List_1_t123 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_AddRange_m12925(__this, ___collection, method) (void)List_1_AddRange_m12925_gshared((List_1_t123 *)__this, (Object_t*)___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
 ReadOnlyCollection_1_t2773 * List_1_AsReadOnly_m12927_gshared (List_1_t123 * __this, MethodInfo* method);
#define List_1_AsReadOnly_m12927(__this, method) (ReadOnlyCollection_1_t2773 *)List_1_AsReadOnly_m12927_gshared((List_1_t123 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
 void List_1_Clear_m12929_gshared (List_1_t123 * __this, MethodInfo* method);
#define List_1_Clear_m12929(__this, method) (void)List_1_Clear_m12929_gshared((List_1_t123 *)__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
 bool List_1_Contains_m12931_gshared (List_1_t123 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Contains_m12931(__this, ___item, method) (bool)List_1_Contains_m12931_gshared((List_1_t123 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
 void List_1_CopyTo_m12933_gshared (List_1_t123 * __this, ObjectU5BU5D_t96* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define List_1_CopyTo_m12933(__this, ___array, ___arrayIndex, method) (void)List_1_CopyTo_m12933_gshared((List_1_t123 *)__this, (ObjectU5BU5D_t96*)___array, (int32_t)___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
 Object_t * List_1_Find_m12935_gshared (List_1_t123 * __this, Predicate_1_t2771 * ___match, MethodInfo* method);
#define List_1_Find_m12935(__this, ___match, method) (Object_t *)List_1_Find_m12935_gshared((List_1_t123 *)__this, (Predicate_1_t2771 *)___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckMatch(System.Predicate`1<T>)
 void List_1_CheckMatch_m12937_gshared (Object_t * __this/* static, unused */, Predicate_1_t2771 * ___match, MethodInfo* method);
#define List_1_CheckMatch_m12937(__this/* static, unused */, ___match, method) (void)List_1_CheckMatch_m12937_gshared((Object_t *)__this/* static, unused */, (Predicate_1_t2771 *)___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
 int32_t List_1_GetIndex_m12939_gshared (List_1_t123 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2771 * ___match, MethodInfo* method);
#define List_1_GetIndex_m12939(__this, ___startIndex, ___count, ___match, method) (int32_t)List_1_GetIndex_m12939_gshared((List_1_t123 *)__this, (int32_t)___startIndex, (int32_t)___count, (Predicate_1_t2771 *)___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
 Enumerator_t2774  List_1_GetEnumerator_m12974 (List_1_t123 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
 int32_t List_1_IndexOf_m12941_gshared (List_1_t123 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_IndexOf_m12941(__this, ___item, method) (int32_t)List_1_IndexOf_m12941_gshared((List_1_t123 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Shift(System.Int32,System.Int32)
 void List_1_Shift_m12943_gshared (List_1_t123 * __this, int32_t ___start, int32_t ___delta, MethodInfo* method);
#define List_1_Shift_m12943(__this, ___start, ___delta, method) (void)List_1_Shift_m12943_gshared((List_1_t123 *)__this, (int32_t)___start, (int32_t)___delta, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckIndex(System.Int32)
 void List_1_CheckIndex_m12945_gshared (List_1_t123 * __this, int32_t ___index, MethodInfo* method);
#define List_1_CheckIndex_m12945(__this, ___index, method) (void)List_1_CheckIndex_m12945_gshared((List_1_t123 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
 void List_1_Insert_m12947_gshared (List_1_t123 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_Insert_m12947(__this, ___index, ___item, method) (void)List_1_Insert_m12947_gshared((List_1_t123 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Generic.List`1<System.Object>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
 void List_1_CheckCollection_m12949_gshared (List_1_t123 * __this, Object_t* ___collection, MethodInfo* method);
#define List_1_CheckCollection_m12949(__this, ___collection, method) (void)List_1_CheckCollection_m12949_gshared((List_1_t123 *)__this, (Object_t*)___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
 bool List_1_Remove_m12951_gshared (List_1_t123 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Remove_m12951(__this, ___item, method) (bool)List_1_Remove_m12951_gshared((List_1_t123 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<T>)
 int32_t List_1_RemoveAll_m12953_gshared (List_1_t123 * __this, Predicate_1_t2771 * ___match, MethodInfo* method);
#define List_1_RemoveAll_m12953(__this, ___match, method) (int32_t)List_1_RemoveAll_m12953_gshared((List_1_t123 *)__this, (Predicate_1_t2771 *)___match, method)
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
 void List_1_RemoveAt_m12955_gshared (List_1_t123 * __this, int32_t ___index, MethodInfo* method);
#define List_1_RemoveAt_m12955(__this, ___index, method) (void)List_1_RemoveAt_m12955_gshared((List_1_t123 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Reverse()
 void List_1_Reverse_m12957_gshared (List_1_t123 * __this, MethodInfo* method);
#define List_1_Reverse_m12957(__this, method) (void)List_1_Reverse_m12957_gshared((List_1_t123 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
 void List_1_Sort_m12959_gshared (List_1_t123 * __this, MethodInfo* method);
#define List_1_Sort_m12959(__this, method) (void)List_1_Sort_m12959_gshared((List_1_t123 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<T>)
 void List_1_Sort_m12961_gshared (List_1_t123 * __this, Comparison_1_t2772 * ___comparison, MethodInfo* method);
#define List_1_Sort_m12961(__this, ___comparison, method) (void)List_1_Sort_m12961_gshared((List_1_t123 *)__this, (Comparison_1_t2772 *)___comparison, method)
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
 ObjectU5BU5D_t96* List_1_ToArray_m12962_gshared (List_1_t123 * __this, MethodInfo* method);
#define List_1_ToArray_m12962(__this, method) (ObjectU5BU5D_t96*)List_1_ToArray_m12962_gshared((List_1_t123 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::TrimExcess()
 void List_1_TrimExcess_m12964_gshared (List_1_t123 * __this, MethodInfo* method);
#define List_1_TrimExcess_m12964(__this, method) (void)List_1_TrimExcess_m12964_gshared((List_1_t123 *)__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Capacity()
 int32_t List_1_get_Capacity_m12966_gshared (List_1_t123 * __this, MethodInfo* method);
#define List_1_get_Capacity_m12966(__this, method) (int32_t)List_1_get_Capacity_m12966_gshared((List_1_t123 *)__this, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Capacity(System.Int32)
 void List_1_set_Capacity_m12968_gshared (List_1_t123 * __this, int32_t ___value, MethodInfo* method);
#define List_1_set_Capacity_m12968(__this, ___value, method) (void)List_1_set_Capacity_m12968_gshared((List_1_t123 *)__this, (int32_t)___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
 int32_t List_1_get_Count_m12969_gshared (List_1_t123 * __this, MethodInfo* method);
#define List_1_get_Count_m12969(__this, method) (int32_t)List_1_get_Count_m12969_gshared((List_1_t123 *)__this, method)
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
 Object_t * List_1_get_Item_m12971_gshared (List_1_t123 * __this, int32_t ___index, MethodInfo* method);
#define List_1_get_Item_m12971(__this, ___index, method) (Object_t *)List_1_get_Item_m12971_gshared((List_1_t123 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
 void List_1_set_Item_m12973_gshared (List_1_t123 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_set_Item_m12973(__this, ___index, ___value, method) (void)List_1_set_Item_m12973_gshared((List_1_t123 *)__this, (int32_t)___index, (Object_t *)___value, method)
