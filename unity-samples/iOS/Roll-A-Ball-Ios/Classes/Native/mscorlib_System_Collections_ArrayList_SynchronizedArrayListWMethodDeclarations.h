#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ArrayList/SynchronizedArrayListWrapper
struct SynchronizedArrayListWrapper_t1871;
// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t1372;
// System.Collections.ICollection
struct ICollection_t1103;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.IComparer
struct IComparer_t1565;
// System.Object[]
struct ObjectU5BU5D_t112;
// System.Type
struct Type_t;

// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::.ctor(System.Collections.ArrayList)
 void SynchronizedArrayListWrapper__ctor_m9005 (SynchronizedArrayListWrapper_t1871 * __this, ArrayList_t1372 * ___innerArrayList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/SynchronizedArrayListWrapper::get_Item(System.Int32)
 Object_t * SynchronizedArrayListWrapper_get_Item_m9006 (SynchronizedArrayListWrapper_t1871 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::set_Item(System.Int32,System.Object)
 void SynchronizedArrayListWrapper_set_Item_m9007 (SynchronizedArrayListWrapper_t1871 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::get_Count()
 int32_t SynchronizedArrayListWrapper_get_Count_m9008 (SynchronizedArrayListWrapper_t1871 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SynchronizedArrayListWrapper::get_IsFixedSize()
 bool SynchronizedArrayListWrapper_get_IsFixedSize_m9009 (SynchronizedArrayListWrapper_t1871 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SynchronizedArrayListWrapper::get_IsReadOnly()
 bool SynchronizedArrayListWrapper_get_IsReadOnly_m9010 (SynchronizedArrayListWrapper_t1871 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SynchronizedArrayListWrapper::get_IsSynchronized()
 bool SynchronizedArrayListWrapper_get_IsSynchronized_m9011 (SynchronizedArrayListWrapper_t1871 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/SynchronizedArrayListWrapper::get_SyncRoot()
 Object_t * SynchronizedArrayListWrapper_get_SyncRoot_m9012 (SynchronizedArrayListWrapper_t1871 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::Add(System.Object)
 int32_t SynchronizedArrayListWrapper_Add_m9013 (SynchronizedArrayListWrapper_t1871 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Clear()
 void SynchronizedArrayListWrapper_Clear_m9014 (SynchronizedArrayListWrapper_t1871 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SynchronizedArrayListWrapper::Contains(System.Object)
 bool SynchronizedArrayListWrapper_Contains_m9015 (SynchronizedArrayListWrapper_t1871 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::IndexOf(System.Object)
 int32_t SynchronizedArrayListWrapper_IndexOf_m9016 (SynchronizedArrayListWrapper_t1871 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::IndexOf(System.Object,System.Int32)
 int32_t SynchronizedArrayListWrapper_IndexOf_m9017 (SynchronizedArrayListWrapper_t1871 * __this, Object_t * ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::IndexOf(System.Object,System.Int32,System.Int32)
 int32_t SynchronizedArrayListWrapper_IndexOf_m9018 (SynchronizedArrayListWrapper_t1871 * __this, Object_t * ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Insert(System.Int32,System.Object)
 void SynchronizedArrayListWrapper_Insert_m9019 (SynchronizedArrayListWrapper_t1871 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::InsertRange(System.Int32,System.Collections.ICollection)
 void SynchronizedArrayListWrapper_InsertRange_m9020 (SynchronizedArrayListWrapper_t1871 * __this, int32_t ___index, Object_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Remove(System.Object)
 void SynchronizedArrayListWrapper_Remove_m9021 (SynchronizedArrayListWrapper_t1871 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::RemoveAt(System.Int32)
 void SynchronizedArrayListWrapper_RemoveAt_m9022 (SynchronizedArrayListWrapper_t1871 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::CopyTo(System.Array)
 void SynchronizedArrayListWrapper_CopyTo_m9023 (SynchronizedArrayListWrapper_t1871 * __this, Array_t * ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::CopyTo(System.Array,System.Int32)
 void SynchronizedArrayListWrapper_CopyTo_m9024 (SynchronizedArrayListWrapper_t1871 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::CopyTo(System.Int32,System.Array,System.Int32,System.Int32)
 void SynchronizedArrayListWrapper_CopyTo_m9025 (SynchronizedArrayListWrapper_t1871 * __this, int32_t ___index, Array_t * ___array, int32_t ___arrayIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ArrayList/SynchronizedArrayListWrapper::GetEnumerator()
 Object_t * SynchronizedArrayListWrapper_GetEnumerator_m9026 (SynchronizedArrayListWrapper_t1871 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::AddRange(System.Collections.ICollection)
 void SynchronizedArrayListWrapper_AddRange_m9027 (SynchronizedArrayListWrapper_t1871 * __this, Object_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Sort()
 void SynchronizedArrayListWrapper_Sort_m9028 (SynchronizedArrayListWrapper_t1871 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Sort(System.Collections.IComparer)
 void SynchronizedArrayListWrapper_Sort_m9029 (SynchronizedArrayListWrapper_t1871 * __this, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.ArrayList/SynchronizedArrayListWrapper::ToArray()
 ObjectU5BU5D_t112* SynchronizedArrayListWrapper_ToArray_m9030 (SynchronizedArrayListWrapper_t1871 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Collections.ArrayList/SynchronizedArrayListWrapper::ToArray(System.Type)
 Array_t * SynchronizedArrayListWrapper_ToArray_m9031 (SynchronizedArrayListWrapper_t1871 * __this, Type_t * ___elementType, MethodInfo* method) IL2CPP_METHOD_ATTR;
