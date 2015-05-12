#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.SortedList
struct SortedList_t1739;
// System.Object
struct Object_t;
// System.Collections.IComparer
struct IComparer_t1577;
// System.Collections.IEnumerator
struct IEnumerator_t19;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1573;
// System.Array
struct Array_t;

// System.Void System.Collections.SortedList::.ctor()
 void SortedList__ctor_m9243 (SortedList_t1739 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::.ctor(System.Int32)
 void SortedList__ctor_m7670 (SortedList_t1739 * __this, int32_t ___initialCapacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::.ctor(System.Collections.IComparer,System.Int32)
 void SortedList__ctor_m9244 (SortedList_t1739 * __this, Object_t * ___comparer, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::.cctor()
 void SortedList__cctor_m9245 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.SortedList::System.Collections.IEnumerable.GetEnumerator()
 Object_t * SortedList_System_Collections_IEnumerable_GetEnumerator_m9246 (SortedList_t1739 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::get_Count()
 int32_t SortedList_get_Count_m7674 (SortedList_t1739 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::get_IsSynchronized()
 bool SortedList_get_IsSynchronized_m9247 (SortedList_t1739 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::get_SyncRoot()
 Object_t * SortedList_get_SyncRoot_m9248 (SortedList_t1739 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::get_IsFixedSize()
 bool SortedList_get_IsFixedSize_m9249 (SortedList_t1739 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::get_IsReadOnly()
 bool SortedList_get_IsReadOnly_m9250 (SortedList_t1739 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::get_Item(System.Object)
 Object_t * SortedList_get_Item_m9251 (SortedList_t1739 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::set_Item(System.Object,System.Object)
 void SortedList_set_Item_m9252 (SortedList_t1739 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::get_Capacity()
 int32_t SortedList_get_Capacity_m9253 (SortedList_t1739 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::Add(System.Object,System.Object)
 void SortedList_Add_m7672 (SortedList_t1739 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::Contains(System.Object)
 bool SortedList_Contains_m9254 (SortedList_t1739 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.SortedList::GetEnumerator()
 Object_t * SortedList_GetEnumerator_m9255 (SortedList_t1739 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::Remove(System.Object)
 void SortedList_Remove_m9256 (SortedList_t1739 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::CopyTo(System.Array,System.Int32)
 void SortedList_CopyTo_m9257 (SortedList_t1739 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::RemoveAt(System.Int32)
 void SortedList_RemoveAt_m9258 (SortedList_t1739 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::IndexOfKey(System.Object)
 int32_t SortedList_IndexOfKey_m9259 (SortedList_t1739 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::ContainsKey(System.Object)
 bool SortedList_ContainsKey_m7671 (SortedList_t1739 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::GetByIndex(System.Int32)
 Object_t * SortedList_GetByIndex_m7673 (SortedList_t1739 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::EnsureCapacity(System.Int32,System.Int32)
 void SortedList_EnsureCapacity_m9260 (SortedList_t1739 * __this, int32_t ___n, int32_t ___free, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::PutImpl(System.Object,System.Object,System.Boolean)
 void SortedList_PutImpl_m9261 (SortedList_t1739 * __this, Object_t * ___key, Object_t * ___value, bool ___overwrite, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::GetImpl(System.Object)
 Object_t * SortedList_GetImpl_m9262 (SortedList_t1739 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::InitTable(System.Int32,System.Boolean)
 void SortedList_InitTable_m9263 (SortedList_t1739 * __this, int32_t ___capacity, bool ___forceSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::Find(System.Object)
 int32_t SortedList_Find_m9264 (SortedList_t1739 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
