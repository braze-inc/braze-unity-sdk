#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ArrayList
struct ArrayList_t1383;
// System.Object
struct Object_t;
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
// System.String
struct String_t;

// System.Void System.Collections.ArrayList::.ctor()
 void ArrayList__ctor_m6487 (ArrayList_t1383 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.ctor(System.Collections.ICollection)
 void ArrayList__ctor_m7679 (ArrayList_t1383 * __this, Object_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.ctor(System.Int32)
 void ArrayList__ctor_m7712 (ArrayList_t1383 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.cctor()
 void ArrayList__cctor_m9144 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList::get_Item(System.Int32)
 Object_t * ArrayList_get_Item_m6486 (ArrayList_t1383 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::set_Item(System.Int32,System.Object)
 void ArrayList_set_Item_m6645 (ArrayList_t1383 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::get_Count()
 int32_t ArrayList_get_Count_m6485 (ArrayList_t1383 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList::get_IsFixedSize()
 bool ArrayList_get_IsFixedSize_m6646 (ArrayList_t1383 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList::get_IsReadOnly()
 bool ArrayList_get_IsReadOnly_m6647 (ArrayList_t1383 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList::get_IsSynchronized()
 bool ArrayList_get_IsSynchronized_m6643 (ArrayList_t1383 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList::get_SyncRoot()
 Object_t * ArrayList_get_SyncRoot_m6644 (ArrayList_t1383 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::EnsureCapacity(System.Int32)
 void ArrayList_EnsureCapacity_m9145 (ArrayList_t1383 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Shift(System.Int32,System.Int32)
 void ArrayList_Shift_m9146 (ArrayList_t1383 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::Add(System.Object)
 int32_t ArrayList_Add_m6488 (ArrayList_t1383 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Clear()
 void ArrayList_Clear_m6557 (ArrayList_t1383 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList::Contains(System.Object)
 bool ArrayList_Contains_m6648 (ArrayList_t1383 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::IndexOf(System.Object)
 int32_t ArrayList_IndexOf_m6649 (ArrayList_t1383 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::IndexOf(System.Object,System.Int32)
 int32_t ArrayList_IndexOf_m9147 (ArrayList_t1383 * __this, Object_t * ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::IndexOf(System.Object,System.Int32,System.Int32)
 int32_t ArrayList_IndexOf_m9148 (ArrayList_t1383 * __this, Object_t * ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Insert(System.Int32,System.Object)
 void ArrayList_Insert_m6650 (ArrayList_t1383 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::InsertRange(System.Int32,System.Collections.ICollection)
 void ArrayList_InsertRange_m9149 (ArrayList_t1383 * __this, int32_t ___index, Object_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Remove(System.Object)
 void ArrayList_Remove_m6591 (ArrayList_t1383 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::RemoveAt(System.Int32)
 void ArrayList_RemoveAt_m6651 (ArrayList_t1383 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::CopyTo(System.Array)
 void ArrayList_CopyTo_m7764 (ArrayList_t1383 * __this, Array_t * ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::CopyTo(System.Array,System.Int32)
 void ArrayList_CopyTo_m6652 (ArrayList_t1383 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::CopyTo(System.Int32,System.Array,System.Int32,System.Int32)
 void ArrayList_CopyTo_m9150 (ArrayList_t1383 * __this, int32_t ___index, Array_t * ___array, int32_t ___arrayIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator()
 Object_t * ArrayList_GetEnumerator_m6489 (ArrayList_t1383 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection)
 void ArrayList_AddRange_m7708 (ArrayList_t1383 * __this, Object_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Sort()
 void ArrayList_Sort_m7772 (ArrayList_t1383 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Sort(System.Collections.IComparer)
 void ArrayList_Sort_m9151 (ArrayList_t1383 * __this, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.ArrayList::ToArray()
 ObjectU5BU5D_t96* ArrayList_ToArray_m9152 (ArrayList_t1383 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Collections.ArrayList::ToArray(System.Type)
 Array_t * ArrayList_ToArray_m6626 (ArrayList_t1383 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::ThrowNewArgumentOutOfRangeException(System.String,System.Object,System.String)
 void ArrayList_ThrowNewArgumentOutOfRangeException_m9153 (Object_t * __this/* static, unused */, String_t* ___name, Object_t * ___actual, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Collections.ArrayList::Synchronized(System.Collections.ArrayList)
 ArrayList_t1383 * ArrayList_Synchronized_m9154 (Object_t * __this/* static, unused */, ArrayList_t1383 * ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Collections.ArrayList::ReadOnly(System.Collections.ArrayList)
 ArrayList_t1383 * ArrayList_ReadOnly_m6559 (Object_t * __this/* static, unused */, ArrayList_t1383 * ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
