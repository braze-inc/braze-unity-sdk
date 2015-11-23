#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t636;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t2951;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t2908;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t66;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2952;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Int32>
struct ReadOnlyCollection_1_t2571;
// System.Int32[]
struct Int32U5BU5D_t735;
// System.Predicate`1<System.Int32>
struct Predicate_1_t2574;
// System.Comparison`1<System.Int32>
struct Comparison_1_t2578;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_36.h"

// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
extern "C" void List_1__ctor_m18537_gshared (List_1_t636 * __this, const MethodInfo* method);
#define List_1__ctor_m18537(__this, method) (( void (*) (List_1_t636 *, const MethodInfo*))List_1__ctor_m18537_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m18538_gshared (List_1_t636 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m18538(__this, ___collection, method) (( void (*) (List_1_t636 *, Object_t*, const MethodInfo*))List_1__ctor_m18538_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
extern "C" void List_1__ctor_m18539_gshared (List_1_t636 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m18539(__this, ___capacity, method) (( void (*) (List_1_t636 *, int32_t, const MethodInfo*))List_1__ctor_m18539_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::.cctor()
extern "C" void List_1__cctor_m18540_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m18540(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m18540_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18541_gshared (List_1_t636 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18541(__this, method) (( Object_t* (*) (List_1_t636 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m18541_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m18542_gshared (List_1_t636 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m18542(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t636 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m18542_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m18543_gshared (List_1_t636 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m18543(__this, method) (( Object_t * (*) (List_1_t636 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m18543_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m18544_gshared (List_1_t636 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m18544(__this, ___item, method) (( int32_t (*) (List_1_t636 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m18544_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m18545_gshared (List_1_t636 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m18545(__this, ___item, method) (( bool (*) (List_1_t636 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m18545_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m18546_gshared (List_1_t636 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m18546(__this, ___item, method) (( int32_t (*) (List_1_t636 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m18546_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m18547_gshared (List_1_t636 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m18547(__this, ___index, ___item, method) (( void (*) (List_1_t636 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m18547_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m18548_gshared (List_1_t636 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m18548(__this, ___item, method) (( void (*) (List_1_t636 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m18548_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18549_gshared (List_1_t636 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18549(__this, method) (( bool (*) (List_1_t636 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18549_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m18550_gshared (List_1_t636 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m18550(__this, method) (( bool (*) (List_1_t636 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m18550_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m18551_gshared (List_1_t636 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m18551(__this, method) (( Object_t * (*) (List_1_t636 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m18551_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m18552_gshared (List_1_t636 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m18552(__this, method) (( bool (*) (List_1_t636 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m18552_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m18553_gshared (List_1_t636 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m18553(__this, method) (( bool (*) (List_1_t636 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m18553_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m18554_gshared (List_1_t636 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m18554(__this, ___index, method) (( Object_t * (*) (List_1_t636 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m18554_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m18555_gshared (List_1_t636 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m18555(__this, ___index, ___value, method) (( void (*) (List_1_t636 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m18555_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
extern "C" void List_1_Add_m18556_gshared (List_1_t636 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Add_m18556(__this, ___item, method) (( void (*) (List_1_t636 *, int32_t, const MethodInfo*))List_1_Add_m18556_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m18557_gshared (List_1_t636 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m18557(__this, ___newCount, method) (( void (*) (List_1_t636 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m18557_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m18558_gshared (List_1_t636 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m18558(__this, ___collection, method) (( void (*) (List_1_t636 *, Object_t*, const MethodInfo*))List_1_AddCollection_m18558_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m18559_gshared (List_1_t636 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m18559(__this, ___enumerable, method) (( void (*) (List_1_t636 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m18559_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m3667_gshared (List_1_t636 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m3667(__this, ___collection, method) (( void (*) (List_1_t636 *, Object_t*, const MethodInfo*))List_1_AddRange_m3667_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Int32>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2571 * List_1_AsReadOnly_m18560_gshared (List_1_t636 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m18560(__this, method) (( ReadOnlyCollection_1_t2571 * (*) (List_1_t636 *, const MethodInfo*))List_1_AsReadOnly_m18560_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Clear()
extern "C" void List_1_Clear_m18561_gshared (List_1_t636 * __this, const MethodInfo* method);
#define List_1_Clear_m18561(__this, method) (( void (*) (List_1_t636 *, const MethodInfo*))List_1_Clear_m18561_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
extern "C" bool List_1_Contains_m18562_gshared (List_1_t636 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Contains_m18562(__this, ___item, method) (( bool (*) (List_1_t636 *, int32_t, const MethodInfo*))List_1_Contains_m18562_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m18563_gshared (List_1_t636 * __this, Int32U5BU5D_t735* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m18563(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t636 *, Int32U5BU5D_t735*, int32_t, const MethodInfo*))List_1_CopyTo_m18563_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Int32>::Find(System.Predicate`1<T>)
extern "C" int32_t List_1_Find_m18564_gshared (List_1_t636 * __this, Predicate_1_t2574 * ___match, const MethodInfo* method);
#define List_1_Find_m18564(__this, ___match, method) (( int32_t (*) (List_1_t636 *, Predicate_1_t2574 *, const MethodInfo*))List_1_Find_m18564_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m18565_gshared (Object_t * __this /* static, unused */, Predicate_1_t2574 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m18565(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2574 *, const MethodInfo*))List_1_CheckMatch_m18565_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m18566_gshared (List_1_t636 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2574 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m18566(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t636 *, int32_t, int32_t, Predicate_1_t2574 *, const MethodInfo*))List_1_GetIndex_m18566_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
extern "C" Enumerator_t2570  List_1_GetEnumerator_m18567_gshared (List_1_t636 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m18567(__this, method) (( Enumerator_t2570  (*) (List_1_t636 *, const MethodInfo*))List_1_GetEnumerator_m18567_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m18568_gshared (List_1_t636 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_IndexOf_m18568(__this, ___item, method) (( int32_t (*) (List_1_t636 *, int32_t, const MethodInfo*))List_1_IndexOf_m18568_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m18569_gshared (List_1_t636 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m18569(__this, ___start, ___delta, method) (( void (*) (List_1_t636 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m18569_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m18570_gshared (List_1_t636 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m18570(__this, ___index, method) (( void (*) (List_1_t636 *, int32_t, const MethodInfo*))List_1_CheckIndex_m18570_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m18571_gshared (List_1_t636 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define List_1_Insert_m18571(__this, ___index, ___item, method) (( void (*) (List_1_t636 *, int32_t, int32_t, const MethodInfo*))List_1_Insert_m18571_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m18572_gshared (List_1_t636 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m18572(__this, ___collection, method) (( void (*) (List_1_t636 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m18572_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Remove(T)
extern "C" bool List_1_Remove_m18573_gshared (List_1_t636 * __this, int32_t ___item, const MethodInfo* method);
#define List_1_Remove_m18573(__this, ___item, method) (( bool (*) (List_1_t636 *, int32_t, const MethodInfo*))List_1_Remove_m18573_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m18574_gshared (List_1_t636 * __this, Predicate_1_t2574 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m18574(__this, ___match, method) (( int32_t (*) (List_1_t636 *, Predicate_1_t2574 *, const MethodInfo*))List_1_RemoveAll_m18574_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m18575_gshared (List_1_t636 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m18575(__this, ___index, method) (( void (*) (List_1_t636 *, int32_t, const MethodInfo*))List_1_RemoveAt_m18575_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Reverse()
extern "C" void List_1_Reverse_m18576_gshared (List_1_t636 * __this, const MethodInfo* method);
#define List_1_Reverse_m18576(__this, method) (( void (*) (List_1_t636 *, const MethodInfo*))List_1_Reverse_m18576_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort()
extern "C" void List_1_Sort_m18577_gshared (List_1_t636 * __this, const MethodInfo* method);
#define List_1_Sort_m18577(__this, method) (( void (*) (List_1_t636 *, const MethodInfo*))List_1_Sort_m18577_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m18578_gshared (List_1_t636 * __this, Comparison_1_t2578 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m18578(__this, ___comparison, method) (( void (*) (List_1_t636 *, Comparison_1_t2578 *, const MethodInfo*))List_1_Sort_m18578_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Int32>::ToArray()
extern "C" Int32U5BU5D_t735* List_1_ToArray_m18579_gshared (List_1_t636 * __this, const MethodInfo* method);
#define List_1_ToArray_m18579(__this, method) (( Int32U5BU5D_t735* (*) (List_1_t636 *, const MethodInfo*))List_1_ToArray_m18579_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::TrimExcess()
extern "C" void List_1_TrimExcess_m18580_gshared (List_1_t636 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m18580(__this, method) (( void (*) (List_1_t636 *, const MethodInfo*))List_1_TrimExcess_m18580_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m18581_gshared (List_1_t636 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m18581(__this, method) (( int32_t (*) (List_1_t636 *, const MethodInfo*))List_1_get_Capacity_m18581_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m18582_gshared (List_1_t636 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m18582(__this, ___value, method) (( void (*) (List_1_t636 *, int32_t, const MethodInfo*))List_1_set_Capacity_m18582_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
extern "C" int32_t List_1_get_Count_m18583_gshared (List_1_t636 * __this, const MethodInfo* method);
#define List_1_get_Count_m18583(__this, method) (( int32_t (*) (List_1_t636 *, const MethodInfo*))List_1_get_Count_m18583_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t List_1_get_Item_m18584_gshared (List_1_t636 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m18584(__this, ___index, method) (( int32_t (*) (List_1_t636 *, int32_t, const MethodInfo*))List_1_get_Item_m18584_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m18585_gshared (List_1_t636 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define List_1_set_Item_m18585(__this, ___index, ___value, method) (( void (*) (List_1_t636 *, int32_t, int32_t, const MethodInfo*))List_1_set_Item_m18585_gshared)(__this, ___index, ___value, method)
