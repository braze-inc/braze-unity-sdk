#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.CollectionBase
struct CollectionBase_t1420;
// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t1383;
// System.Collections.IList
struct IList_t1534;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t19;

// System.Void System.Collections.CollectionBase::.ctor()
 void CollectionBase__ctor_m6590 (CollectionBase_t1420 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void CollectionBase_System_Collections_ICollection_CopyTo_m6595 (CollectionBase_t1420 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.CollectionBase::System.Collections.ICollection.get_SyncRoot()
 Object_t * CollectionBase_System_Collections_ICollection_get_SyncRoot_m6594 (CollectionBase_t1420 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CollectionBase::System.Collections.ICollection.get_IsSynchronized()
 bool CollectionBase_System_Collections_ICollection_get_IsSynchronized_m6593 (CollectionBase_t1420 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CollectionBase::System.Collections.IList.Add(System.Object)
 int32_t CollectionBase_System_Collections_IList_Add_m6600 (CollectionBase_t1420 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CollectionBase::System.Collections.IList.Contains(System.Object)
 bool CollectionBase_System_Collections_IList_Contains_m6601 (CollectionBase_t1420 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CollectionBase::System.Collections.IList.IndexOf(System.Object)
 int32_t CollectionBase_System_Collections_IList_IndexOf_m6602 (CollectionBase_t1420 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.IList.Insert(System.Int32,System.Object)
 void CollectionBase_System_Collections_IList_Insert_m6603 (CollectionBase_t1420 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.IList.Remove(System.Object)
 void CollectionBase_System_Collections_IList_Remove_m6604 (CollectionBase_t1420 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CollectionBase::System.Collections.IList.get_IsFixedSize()
 bool CollectionBase_System_Collections_IList_get_IsFixedSize_m6596 (CollectionBase_t1420 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CollectionBase::System.Collections.IList.get_IsReadOnly()
 bool CollectionBase_System_Collections_IList_get_IsReadOnly_m6597 (CollectionBase_t1420 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.CollectionBase::System.Collections.IList.get_Item(System.Int32)
 Object_t * CollectionBase_System_Collections_IList_get_Item_m6598 (CollectionBase_t1420 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.IList.set_Item(System.Int32,System.Object)
 void CollectionBase_System_Collections_IList_set_Item_m6599 (CollectionBase_t1420 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CollectionBase::get_Count()
 int32_t CollectionBase_get_Count_m6592 (CollectionBase_t1420 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.CollectionBase::GetEnumerator()
 Object_t * CollectionBase_GetEnumerator_m7710 (CollectionBase_t1420 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::Clear()
 void CollectionBase_Clear_m6560 (CollectionBase_t1420 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::RemoveAt(System.Int32)
 void CollectionBase_RemoveAt_m6605 (CollectionBase_t1420 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Collections.CollectionBase::get_InnerList()
 ArrayList_t1383 * CollectionBase_get_InnerList_m6589 (CollectionBase_t1420 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList System.Collections.CollectionBase::get_List()
 Object_t * CollectionBase_get_List_m7775 (CollectionBase_t1420 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnClear()
 void CollectionBase_OnClear_m6606 (CollectionBase_t1420 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnClearComplete()
 void CollectionBase_OnClearComplete_m6607 (CollectionBase_t1420 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnInsert(System.Int32,System.Object)
 void CollectionBase_OnInsert_m6608 (CollectionBase_t1420 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnInsertComplete(System.Int32,System.Object)
 void CollectionBase_OnInsertComplete_m6609 (CollectionBase_t1420 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnRemove(System.Int32,System.Object)
 void CollectionBase_OnRemove_m6610 (CollectionBase_t1420 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnRemoveComplete(System.Int32,System.Object)
 void CollectionBase_OnRemoveComplete_m6611 (CollectionBase_t1420 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnSet(System.Int32,System.Object,System.Object)
 void CollectionBase_OnSet_m6612 (CollectionBase_t1420 * __this, int32_t ___index, Object_t * ___oldValue, Object_t * ___newValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnSetComplete(System.Int32,System.Object,System.Object)
 void CollectionBase_OnSetComplete_m6613 (CollectionBase_t1420 * __this, int32_t ___index, Object_t * ___oldValue, Object_t * ___newValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnValidate(System.Object)
 void CollectionBase_OnValidate_m6614 (CollectionBase_t1420 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
