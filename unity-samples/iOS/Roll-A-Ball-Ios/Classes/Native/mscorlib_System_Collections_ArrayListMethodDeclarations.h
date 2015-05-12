#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ArrayList
struct ArrayList_t1372;
// System.Object
struct Object_t;
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
// System.String
struct String_t;

// System.Void System.Collections.ArrayList::.ctor()
 void ArrayList__ctor_m6393 (ArrayList_t1372 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.ctor(System.Collections.ICollection)
 void ArrayList__ctor_m7583 (ArrayList_t1372 * __this, Object_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.ctor(System.Int32)
 void ArrayList__ctor_m7616 (ArrayList_t1372 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.cctor()
 void ArrayList__cctor_m9049 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList::get_Item(System.Int32)
 Object_t * ArrayList_get_Item_m6392 (ArrayList_t1372 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::set_Item(System.Int32,System.Object)
 void ArrayList_set_Item_m6551 (ArrayList_t1372 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::get_Count()
 int32_t ArrayList_get_Count_m6391 (ArrayList_t1372 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList::get_IsFixedSize()
 bool ArrayList_get_IsFixedSize_m6552 (ArrayList_t1372 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList::get_IsReadOnly()
 bool ArrayList_get_IsReadOnly_m6553 (ArrayList_t1372 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList::get_IsSynchronized()
 bool ArrayList_get_IsSynchronized_m6549 (ArrayList_t1372 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList::get_SyncRoot()
 Object_t * ArrayList_get_SyncRoot_m6550 (ArrayList_t1372 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::EnsureCapacity(System.Int32)
 void ArrayList_EnsureCapacity_m9050 (ArrayList_t1372 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Shift(System.Int32,System.Int32)
 void ArrayList_Shift_m9051 (ArrayList_t1372 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::Add(System.Object)
 int32_t ArrayList_Add_m6394 (ArrayList_t1372 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Clear()
 void ArrayList_Clear_m6463 (ArrayList_t1372 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList::Contains(System.Object)
 bool ArrayList_Contains_m6554 (ArrayList_t1372 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::IndexOf(System.Object)
 int32_t ArrayList_IndexOf_m6555 (ArrayList_t1372 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::IndexOf(System.Object,System.Int32)
 int32_t ArrayList_IndexOf_m9052 (ArrayList_t1372 * __this, Object_t * ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::IndexOf(System.Object,System.Int32,System.Int32)
 int32_t ArrayList_IndexOf_m9053 (ArrayList_t1372 * __this, Object_t * ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Insert(System.Int32,System.Object)
 void ArrayList_Insert_m6556 (ArrayList_t1372 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::InsertRange(System.Int32,System.Collections.ICollection)
 void ArrayList_InsertRange_m9054 (ArrayList_t1372 * __this, int32_t ___index, Object_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Remove(System.Object)
 void ArrayList_Remove_m6497 (ArrayList_t1372 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::RemoveAt(System.Int32)
 void ArrayList_RemoveAt_m6557 (ArrayList_t1372 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::CopyTo(System.Array)
 void ArrayList_CopyTo_m7668 (ArrayList_t1372 * __this, Array_t * ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::CopyTo(System.Array,System.Int32)
 void ArrayList_CopyTo_m6558 (ArrayList_t1372 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::CopyTo(System.Int32,System.Array,System.Int32,System.Int32)
 void ArrayList_CopyTo_m9055 (ArrayList_t1372 * __this, int32_t ___index, Array_t * ___array, int32_t ___arrayIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator()
 Object_t * ArrayList_GetEnumerator_m6395 (ArrayList_t1372 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection)
 void ArrayList_AddRange_m7612 (ArrayList_t1372 * __this, Object_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Sort()
 void ArrayList_Sort_m7676 (ArrayList_t1372 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Sort(System.Collections.IComparer)
 void ArrayList_Sort_m9056 (ArrayList_t1372 * __this, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.ArrayList::ToArray()
 ObjectU5BU5D_t112* ArrayList_ToArray_m9057 (ArrayList_t1372 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Collections.ArrayList::ToArray(System.Type)
 Array_t * ArrayList_ToArray_m6532 (ArrayList_t1372 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::ThrowNewArgumentOutOfRangeException(System.String,System.Object,System.String)
 void ArrayList_ThrowNewArgumentOutOfRangeException_m9058 (Object_t * __this/* static, unused */, String_t* ___name, Object_t * ___actual, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Collections.ArrayList::Synchronized(System.Collections.ArrayList)
 ArrayList_t1372 * ArrayList_Synchronized_m9059 (Object_t * __this/* static, unused */, ArrayList_t1372 * ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Collections.ArrayList::ReadOnly(System.Collections.ArrayList)
 ArrayList_t1372 * ArrayList_ReadOnly_m6465 (Object_t * __this/* static, unused */, ArrayList_t1372 * ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
