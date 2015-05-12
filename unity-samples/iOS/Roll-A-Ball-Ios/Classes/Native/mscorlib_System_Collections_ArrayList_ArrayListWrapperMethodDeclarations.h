#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ArrayList/ArrayListWrapper
struct ArrayListWrapper_t1882;
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

// System.Void System.Collections.ArrayList/ArrayListWrapper::.ctor(System.Collections.ArrayList)
 void ArrayListWrapper__ctor_m9073 (ArrayListWrapper_t1882 * __this, ArrayList_t1383 * ___innerArrayList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/ArrayListWrapper::get_Item(System.Int32)
 Object_t * ArrayListWrapper_get_Item_m9074 (ArrayListWrapper_t1882 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::set_Item(System.Int32,System.Object)
 void ArrayListWrapper_set_Item_m9075 (ArrayListWrapper_t1882 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::get_Count()
 int32_t ArrayListWrapper_get_Count_m9076 (ArrayListWrapper_t1882 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::get_IsFixedSize()
 bool ArrayListWrapper_get_IsFixedSize_m9077 (ArrayListWrapper_t1882 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::get_IsReadOnly()
 bool ArrayListWrapper_get_IsReadOnly_m9078 (ArrayListWrapper_t1882 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::get_IsSynchronized()
 bool ArrayListWrapper_get_IsSynchronized_m9079 (ArrayListWrapper_t1882 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/ArrayListWrapper::get_SyncRoot()
 Object_t * ArrayListWrapper_get_SyncRoot_m9080 (ArrayListWrapper_t1882 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::Add(System.Object)
 int32_t ArrayListWrapper_Add_m9081 (ArrayListWrapper_t1882 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Clear()
 void ArrayListWrapper_Clear_m9082 (ArrayListWrapper_t1882 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::Contains(System.Object)
 bool ArrayListWrapper_Contains_m9083 (ArrayListWrapper_t1882 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::IndexOf(System.Object)
 int32_t ArrayListWrapper_IndexOf_m9084 (ArrayListWrapper_t1882 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::IndexOf(System.Object,System.Int32)
 int32_t ArrayListWrapper_IndexOf_m9085 (ArrayListWrapper_t1882 * __this, Object_t * ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::IndexOf(System.Object,System.Int32,System.Int32)
 int32_t ArrayListWrapper_IndexOf_m9086 (ArrayListWrapper_t1882 * __this, Object_t * ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Insert(System.Int32,System.Object)
 void ArrayListWrapper_Insert_m9087 (ArrayListWrapper_t1882 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::InsertRange(System.Int32,System.Collections.ICollection)
 void ArrayListWrapper_InsertRange_m9088 (ArrayListWrapper_t1882 * __this, int32_t ___index, Object_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Remove(System.Object)
 void ArrayListWrapper_Remove_m9089 (ArrayListWrapper_t1882 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::RemoveAt(System.Int32)
 void ArrayListWrapper_RemoveAt_m9090 (ArrayListWrapper_t1882 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::CopyTo(System.Array)
 void ArrayListWrapper_CopyTo_m9091 (ArrayListWrapper_t1882 * __this, Array_t * ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::CopyTo(System.Array,System.Int32)
 void ArrayListWrapper_CopyTo_m9092 (ArrayListWrapper_t1882 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::CopyTo(System.Int32,System.Array,System.Int32,System.Int32)
 void ArrayListWrapper_CopyTo_m9093 (ArrayListWrapper_t1882 * __this, int32_t ___index, Array_t * ___array, int32_t ___arrayIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ArrayList/ArrayListWrapper::GetEnumerator()
 Object_t * ArrayListWrapper_GetEnumerator_m9094 (ArrayListWrapper_t1882 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::AddRange(System.Collections.ICollection)
 void ArrayListWrapper_AddRange_m9095 (ArrayListWrapper_t1882 * __this, Object_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Sort()
 void ArrayListWrapper_Sort_m9096 (ArrayListWrapper_t1882 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Sort(System.Collections.IComparer)
 void ArrayListWrapper_Sort_m9097 (ArrayListWrapper_t1882 * __this, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.ArrayList/ArrayListWrapper::ToArray()
 ObjectU5BU5D_t96* ArrayListWrapper_ToArray_m9098 (ArrayListWrapper_t1882 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Collections.ArrayList/ArrayListWrapper::ToArray(System.Type)
 Array_t * ArrayListWrapper_ToArray_m9099 (ArrayListWrapper_t1882 * __this, Type_t * ___elementType, MethodInfo* method) IL2CPP_METHOD_ATTR;
