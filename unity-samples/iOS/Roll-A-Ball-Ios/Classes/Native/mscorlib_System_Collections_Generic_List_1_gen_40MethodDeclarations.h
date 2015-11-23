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

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t843;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t2971;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t2972;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t66;
// System.Object
struct Object_t;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t710;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t2675;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t960;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t2679;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2682;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_UILineInfo.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_42.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m19722_gshared (List_1_t843 * __this, const MethodInfo* method);
#define List_1__ctor_m19722(__this, method) (( void (*) (List_1_t843 *, const MethodInfo*))List_1__ctor_m19722_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1__ctor_m19723_gshared (List_1_t843 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1__ctor_m19723(__this, ___collection, method) (( void (*) (List_1_t843 *, Object_t*, const MethodInfo*))List_1__ctor_m19723_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m5105_gshared (List_1_t843 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m5105(__this, ___capacity, method) (( void (*) (List_1_t843 *, int32_t, const MethodInfo*))List_1__ctor_m5105_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m19724_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m19724(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m19724_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19725_gshared (List_1_t843 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19725(__this, method) (( Object_t* (*) (List_1_t843 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m19725_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m19726_gshared (List_1_t843 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m19726(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t843 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m19726_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m19727_gshared (List_1_t843 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m19727(__this, method) (( Object_t * (*) (List_1_t843 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m19727_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m19728_gshared (List_1_t843 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m19728(__this, ___item, method) (( int32_t (*) (List_1_t843 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m19728_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m19729_gshared (List_1_t843 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m19729(__this, ___item, method) (( bool (*) (List_1_t843 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m19729_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m19730_gshared (List_1_t843 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m19730(__this, ___item, method) (( int32_t (*) (List_1_t843 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m19730_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m19731_gshared (List_1_t843 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m19731(__this, ___index, ___item, method) (( void (*) (List_1_t843 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m19731_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m19732_gshared (List_1_t843 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m19732(__this, ___item, method) (( void (*) (List_1_t843 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m19732_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19733_gshared (List_1_t843 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19733(__this, method) (( bool (*) (List_1_t843 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m19733_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m19734_gshared (List_1_t843 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m19734(__this, method) (( bool (*) (List_1_t843 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m19734_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m19735_gshared (List_1_t843 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m19735(__this, method) (( Object_t * (*) (List_1_t843 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m19735_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m19736_gshared (List_1_t843 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m19736(__this, method) (( bool (*) (List_1_t843 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m19736_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m19737_gshared (List_1_t843 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m19737(__this, method) (( bool (*) (List_1_t843 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m19737_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m19738_gshared (List_1_t843 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m19738(__this, ___index, method) (( Object_t * (*) (List_1_t843 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m19738_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m19739_gshared (List_1_t843 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m19739(__this, ___index, ___value, method) (( void (*) (List_1_t843 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m19739_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m19740_gshared (List_1_t843 * __this, UILineInfo_t706  ___item, const MethodInfo* method);
#define List_1_Add_m19740(__this, ___item, method) (( void (*) (List_1_t843 *, UILineInfo_t706 , const MethodInfo*))List_1_Add_m19740_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m19741_gshared (List_1_t843 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m19741(__this, ___newCount, method) (( void (*) (List_1_t843 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m19741_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m19742_gshared (List_1_t843 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m19742(__this, ___collection, method) (( void (*) (List_1_t843 *, Object_t*, const MethodInfo*))List_1_AddCollection_m19742_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m19743_gshared (List_1_t843 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m19743(__this, ___enumerable, method) (( void (*) (List_1_t843 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m19743_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m19744_gshared (List_1_t843 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m19744(__this, ___collection, method) (( void (*) (List_1_t843 *, Object_t*, const MethodInfo*))List_1_AddRange_m19744_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2675 * List_1_AsReadOnly_m19745_gshared (List_1_t843 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m19745(__this, method) (( ReadOnlyCollection_1_t2675 * (*) (List_1_t843 *, const MethodInfo*))List_1_AsReadOnly_m19745_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m19746_gshared (List_1_t843 * __this, const MethodInfo* method);
#define List_1_Clear_m19746(__this, method) (( void (*) (List_1_t843 *, const MethodInfo*))List_1_Clear_m19746_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m19747_gshared (List_1_t843 * __this, UILineInfo_t706  ___item, const MethodInfo* method);
#define List_1_Contains_m19747(__this, ___item, method) (( bool (*) (List_1_t843 *, UILineInfo_t706 , const MethodInfo*))List_1_Contains_m19747_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m19748_gshared (List_1_t843 * __this, UILineInfoU5BU5D_t960* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m19748(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t843 *, UILineInfoU5BU5D_t960*, int32_t, const MethodInfo*))List_1_CopyTo_m19748_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t706  List_1_Find_m19749_gshared (List_1_t843 * __this, Predicate_1_t2679 * ___match, const MethodInfo* method);
#define List_1_Find_m19749(__this, ___match, method) (( UILineInfo_t706  (*) (List_1_t843 *, Predicate_1_t2679 *, const MethodInfo*))List_1_Find_m19749_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m19750_gshared (Object_t * __this /* static, unused */, Predicate_1_t2679 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m19750(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2679 *, const MethodInfo*))List_1_CheckMatch_m19750_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m19751_gshared (List_1_t843 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2679 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m19751(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t843 *, int32_t, int32_t, Predicate_1_t2679 *, const MethodInfo*))List_1_GetIndex_m19751_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t2674  List_1_GetEnumerator_m19752_gshared (List_1_t843 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m19752(__this, method) (( Enumerator_t2674  (*) (List_1_t843 *, const MethodInfo*))List_1_GetEnumerator_m19752_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m19753_gshared (List_1_t843 * __this, UILineInfo_t706  ___item, const MethodInfo* method);
#define List_1_IndexOf_m19753(__this, ___item, method) (( int32_t (*) (List_1_t843 *, UILineInfo_t706 , const MethodInfo*))List_1_IndexOf_m19753_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m19754_gshared (List_1_t843 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m19754(__this, ___start, ___delta, method) (( void (*) (List_1_t843 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m19754_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m19755_gshared (List_1_t843 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m19755(__this, ___index, method) (( void (*) (List_1_t843 *, int32_t, const MethodInfo*))List_1_CheckIndex_m19755_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m19756_gshared (List_1_t843 * __this, int32_t ___index, UILineInfo_t706  ___item, const MethodInfo* method);
#define List_1_Insert_m19756(__this, ___index, ___item, method) (( void (*) (List_1_t843 *, int32_t, UILineInfo_t706 , const MethodInfo*))List_1_Insert_m19756_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m19757_gshared (List_1_t843 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m19757(__this, ___collection, method) (( void (*) (List_1_t843 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m19757_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m19758_gshared (List_1_t843 * __this, UILineInfo_t706  ___item, const MethodInfo* method);
#define List_1_Remove_m19758(__this, ___item, method) (( bool (*) (List_1_t843 *, UILineInfo_t706 , const MethodInfo*))List_1_Remove_m19758_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m19759_gshared (List_1_t843 * __this, Predicate_1_t2679 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m19759(__this, ___match, method) (( int32_t (*) (List_1_t843 *, Predicate_1_t2679 *, const MethodInfo*))List_1_RemoveAll_m19759_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m19760_gshared (List_1_t843 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m19760(__this, ___index, method) (( void (*) (List_1_t843 *, int32_t, const MethodInfo*))List_1_RemoveAt_m19760_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m19761_gshared (List_1_t843 * __this, const MethodInfo* method);
#define List_1_Reverse_m19761(__this, method) (( void (*) (List_1_t843 *, const MethodInfo*))List_1_Reverse_m19761_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m19762_gshared (List_1_t843 * __this, const MethodInfo* method);
#define List_1_Sort_m19762(__this, method) (( void (*) (List_1_t843 *, const MethodInfo*))List_1_Sort_m19762_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m19763_gshared (List_1_t843 * __this, Comparison_1_t2682 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m19763(__this, ___comparison, method) (( void (*) (List_1_t843 *, Comparison_1_t2682 *, const MethodInfo*))List_1_Sort_m19763_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t960* List_1_ToArray_m19764_gshared (List_1_t843 * __this, const MethodInfo* method);
#define List_1_ToArray_m19764(__this, method) (( UILineInfoU5BU5D_t960* (*) (List_1_t843 *, const MethodInfo*))List_1_ToArray_m19764_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m19765_gshared (List_1_t843 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m19765(__this, method) (( void (*) (List_1_t843 *, const MethodInfo*))List_1_TrimExcess_m19765_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m19766_gshared (List_1_t843 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m19766(__this, method) (( int32_t (*) (List_1_t843 *, const MethodInfo*))List_1_get_Capacity_m19766_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m19767_gshared (List_1_t843 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m19767(__this, ___value, method) (( void (*) (List_1_t843 *, int32_t, const MethodInfo*))List_1_set_Capacity_m19767_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m19768_gshared (List_1_t843 * __this, const MethodInfo* method);
#define List_1_get_Count_m19768(__this, method) (( int32_t (*) (List_1_t843 *, const MethodInfo*))List_1_get_Count_m19768_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t706  List_1_get_Item_m19769_gshared (List_1_t843 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m19769(__this, ___index, method) (( UILineInfo_t706  (*) (List_1_t843 *, int32_t, const MethodInfo*))List_1_get_Item_m19769_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m19770_gshared (List_1_t843 * __this, int32_t ___index, UILineInfo_t706  ___value, const MethodInfo* method);
#define List_1_set_Item_m19770(__this, ___index, ___value, method) (( void (*) (List_1_t843 *, int32_t, UILineInfo_t706 , const MethodInfo*))List_1_set_Item_m19770_gshared)(__this, ___index, ___value, method)
