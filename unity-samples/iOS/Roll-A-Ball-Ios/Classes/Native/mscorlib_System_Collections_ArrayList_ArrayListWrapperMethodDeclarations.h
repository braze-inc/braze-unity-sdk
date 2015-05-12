#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ArrayList/ArrayListWrapper
struct ArrayListWrapper_t1870;
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

// System.Void System.Collections.ArrayList/ArrayListWrapper::.ctor(System.Collections.ArrayList)
 void ArrayListWrapper__ctor_m8978 (ArrayListWrapper_t1870 * __this, ArrayList_t1372 * ___innerArrayList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/ArrayListWrapper::get_Item(System.Int32)
 Object_t * ArrayListWrapper_get_Item_m8979 (ArrayListWrapper_t1870 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::set_Item(System.Int32,System.Object)
 void ArrayListWrapper_set_Item_m8980 (ArrayListWrapper_t1870 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::get_Count()
 int32_t ArrayListWrapper_get_Count_m8981 (ArrayListWrapper_t1870 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::get_IsFixedSize()
 bool ArrayListWrapper_get_IsFixedSize_m8982 (ArrayListWrapper_t1870 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::get_IsReadOnly()
 bool ArrayListWrapper_get_IsReadOnly_m8983 (ArrayListWrapper_t1870 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::get_IsSynchronized()
 bool ArrayListWrapper_get_IsSynchronized_m8984 (ArrayListWrapper_t1870 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/ArrayListWrapper::get_SyncRoot()
 Object_t * ArrayListWrapper_get_SyncRoot_m8985 (ArrayListWrapper_t1870 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::Add(System.Object)
 int32_t ArrayListWrapper_Add_m8986 (ArrayListWrapper_t1870 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Clear()
 void ArrayListWrapper_Clear_m8987 (ArrayListWrapper_t1870 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::Contains(System.Object)
 bool ArrayListWrapper_Contains_m8988 (ArrayListWrapper_t1870 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::IndexOf(System.Object)
 int32_t ArrayListWrapper_IndexOf_m8989 (ArrayListWrapper_t1870 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::IndexOf(System.Object,System.Int32)
 int32_t ArrayListWrapper_IndexOf_m8990 (ArrayListWrapper_t1870 * __this, Object_t * ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::IndexOf(System.Object,System.Int32,System.Int32)
 int32_t ArrayListWrapper_IndexOf_m8991 (ArrayListWrapper_t1870 * __this, Object_t * ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Insert(System.Int32,System.Object)
 void ArrayListWrapper_Insert_m8992 (ArrayListWrapper_t1870 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::InsertRange(System.Int32,System.Collections.ICollection)
 void ArrayListWrapper_InsertRange_m8993 (ArrayListWrapper_t1870 * __this, int32_t ___index, Object_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Remove(System.Object)
 void ArrayListWrapper_Remove_m8994 (ArrayListWrapper_t1870 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::RemoveAt(System.Int32)
 void ArrayListWrapper_RemoveAt_m8995 (ArrayListWrapper_t1870 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::CopyTo(System.Array)
 void ArrayListWrapper_CopyTo_m8996 (ArrayListWrapper_t1870 * __this, Array_t * ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::CopyTo(System.Array,System.Int32)
 void ArrayListWrapper_CopyTo_m8997 (ArrayListWrapper_t1870 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::CopyTo(System.Int32,System.Array,System.Int32,System.Int32)
 void ArrayListWrapper_CopyTo_m8998 (ArrayListWrapper_t1870 * __this, int32_t ___index, Array_t * ___array, int32_t ___arrayIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ArrayList/ArrayListWrapper::GetEnumerator()
 Object_t * ArrayListWrapper_GetEnumerator_m8999 (ArrayListWrapper_t1870 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::AddRange(System.Collections.ICollection)
 void ArrayListWrapper_AddRange_m9000 (ArrayListWrapper_t1870 * __this, Object_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Sort()
 void ArrayListWrapper_Sort_m9001 (ArrayListWrapper_t1870 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Sort(System.Collections.IComparer)
 void ArrayListWrapper_Sort_m9002 (ArrayListWrapper_t1870 * __this, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.ArrayList/ArrayListWrapper::ToArray()
 ObjectU5BU5D_t112* ArrayListWrapper_ToArray_m9003 (ArrayListWrapper_t1870 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Collections.ArrayList/ArrayListWrapper::ToArray(System.Type)
 Array_t * ArrayListWrapper_ToArray_m9004 (ArrayListWrapper_t1870 * __this, Type_t * ___elementType, MethodInfo* method) IL2CPP_METHOD_ATTR;
