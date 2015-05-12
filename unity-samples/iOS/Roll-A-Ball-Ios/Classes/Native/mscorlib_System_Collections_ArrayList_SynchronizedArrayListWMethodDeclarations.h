#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ArrayList/SynchronizedArrayListWrapper
struct SynchronizedArrayListWrapper_t1883;
// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t1383;
// System.Collections.ICollection
struct ICollection_t1114;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t19;
// System.Collections.IComparer
struct IComparer_t1577;
// System.Object[]
struct ObjectU5BU5D_t96;
// System.Type
struct Type_t;

// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::.ctor(System.Collections.ArrayList)
 void SynchronizedArrayListWrapper__ctor_m9100 (SynchronizedArrayListWrapper_t1883 * __this, ArrayList_t1383 * ___innerArrayList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/SynchronizedArrayListWrapper::get_Item(System.Int32)
 Object_t * SynchronizedArrayListWrapper_get_Item_m9101 (SynchronizedArrayListWrapper_t1883 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::set_Item(System.Int32,System.Object)
 void SynchronizedArrayListWrapper_set_Item_m9102 (SynchronizedArrayListWrapper_t1883 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::get_Count()
 int32_t SynchronizedArrayListWrapper_get_Count_m9103 (SynchronizedArrayListWrapper_t1883 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SynchronizedArrayListWrapper::get_IsFixedSize()
 bool SynchronizedArrayListWrapper_get_IsFixedSize_m9104 (SynchronizedArrayListWrapper_t1883 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SynchronizedArrayListWrapper::get_IsReadOnly()
 bool SynchronizedArrayListWrapper_get_IsReadOnly_m9105 (SynchronizedArrayListWrapper_t1883 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SynchronizedArrayListWrapper::get_IsSynchronized()
 bool SynchronizedArrayListWrapper_get_IsSynchronized_m9106 (SynchronizedArrayListWrapper_t1883 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/SynchronizedArrayListWrapper::get_SyncRoot()
 Object_t * SynchronizedArrayListWrapper_get_SyncRoot_m9107 (SynchronizedArrayListWrapper_t1883 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::Add(System.Object)
 int32_t SynchronizedArrayListWrapper_Add_m9108 (SynchronizedArrayListWrapper_t1883 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Clear()
 void SynchronizedArrayListWrapper_Clear_m9109 (SynchronizedArrayListWrapper_t1883 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SynchronizedArrayListWrapper::Contains(System.Object)
 bool SynchronizedArrayListWrapper_Contains_m9110 (SynchronizedArrayListWrapper_t1883 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::IndexOf(System.Object)
 int32_t SynchronizedArrayListWrapper_IndexOf_m9111 (SynchronizedArrayListWrapper_t1883 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::IndexOf(System.Object,System.Int32)
 int32_t SynchronizedArrayListWrapper_IndexOf_m9112 (SynchronizedArrayListWrapper_t1883 * __this, Object_t * ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::IndexOf(System.Object,System.Int32,System.Int32)
 int32_t SynchronizedArrayListWrapper_IndexOf_m9113 (SynchronizedArrayListWrapper_t1883 * __this, Object_t * ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Insert(System.Int32,System.Object)
 void SynchronizedArrayListWrapper_Insert_m9114 (SynchronizedArrayListWrapper_t1883 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::InsertRange(System.Int32,System.Collections.ICollection)
 void SynchronizedArrayListWrapper_InsertRange_m9115 (SynchronizedArrayListWrapper_t1883 * __this, int32_t ___index, Object_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Remove(System.Object)
 void SynchronizedArrayListWrapper_Remove_m9116 (SynchronizedArrayListWrapper_t1883 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::RemoveAt(System.Int32)
 void SynchronizedArrayListWrapper_RemoveAt_m9117 (SynchronizedArrayListWrapper_t1883 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::CopyTo(System.Array)
 void SynchronizedArrayListWrapper_CopyTo_m9118 (SynchronizedArrayListWrapper_t1883 * __this, Array_t * ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::CopyTo(System.Array,System.Int32)
 void SynchronizedArrayListWrapper_CopyTo_m9119 (SynchronizedArrayListWrapper_t1883 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::CopyTo(System.Int32,System.Array,System.Int32,System.Int32)
 void SynchronizedArrayListWrapper_CopyTo_m9120 (SynchronizedArrayListWrapper_t1883 * __this, int32_t ___index, Array_t * ___array, int32_t ___arrayIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ArrayList/SynchronizedArrayListWrapper::GetEnumerator()
 Object_t * SynchronizedArrayListWrapper_GetEnumerator_m9121 (SynchronizedArrayListWrapper_t1883 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::AddRange(System.Collections.ICollection)
 void SynchronizedArrayListWrapper_AddRange_m9122 (SynchronizedArrayListWrapper_t1883 * __this, Object_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Sort()
 void SynchronizedArrayListWrapper_Sort_m9123 (SynchronizedArrayListWrapper_t1883 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Sort(System.Collections.IComparer)
 void SynchronizedArrayListWrapper_Sort_m9124 (SynchronizedArrayListWrapper_t1883 * __this, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.ArrayList/SynchronizedArrayListWrapper::ToArray()
 ObjectU5BU5D_t96* SynchronizedArrayListWrapper_ToArray_m9125 (SynchronizedArrayListWrapper_t1883 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Collections.ArrayList/SynchronizedArrayListWrapper::ToArray(System.Type)
 Array_t * SynchronizedArrayListWrapper_ToArray_m9126 (SynchronizedArrayListWrapper_t1883 * __this, Type_t * ___elementType, MethodInfo* method) IL2CPP_METHOD_ATTR;
