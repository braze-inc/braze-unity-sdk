#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Boo.Lang.List`1<System.Object>
struct List_1_t4580;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t19;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t88;
// System.Object[]
struct ObjectU5BU5D_t96;
// System.String
struct String_t;

// System.Void Boo.Lang.List`1<System.Object>::.ctor()
 void List_1__ctor_m24972_gshared (List_1_t4580 * __this, MethodInfo* method);
#define List_1__ctor_m24972(__this, method) (void)List_1__ctor_m24972_gshared((List_1_t4580 *)__this, method)
// System.Void Boo.Lang.List`1<System.Object>::.cctor()
 void List_1__cctor_m24973_gshared (Object_t * __this/* static, unused */, MethodInfo* method);
#define List_1__cctor_m24973(__this/* static, unused */, method) (void)List_1__cctor_m24973_gshared((Object_t *)__this/* static, unused */, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
 void List_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m24974_gshared (List_1_t4580 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m24974(__this, ___item, method) (void)List_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m24974_gshared((List_1_t4580 *)__this, (Object_t *)___item, method)
// System.Collections.IEnumerator Boo.Lang.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m24975_gshared (List_1_t4580 * __this, MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m24975(__this, method) (Object_t *)List_1_System_Collections_IEnumerable_GetEnumerator_m24975_gshared((List_1_t4580 *)__this, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
 void List_1_System_Collections_Generic_IListU3CTU3E_Insert_m24976_gshared (List_1_t4580 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_Generic_IListU3CTU3E_Insert_m24976(__this, ___index, ___item, method) (void)List_1_System_Collections_Generic_IListU3CTU3E_Insert_m24976_gshared((List_1_t4580 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
 void List_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m24977_gshared (List_1_t4580 * __this, int32_t ___index, MethodInfo* method);
#define List_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m24977(__this, ___index, method) (void)List_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m24977_gshared((List_1_t4580 *)__this, (int32_t)___index, method)
// System.Boolean Boo.Lang.List`1<System.Object>::System.Collections.Generic.ICollection<T>.Remove(T)
 bool List_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m24978_gshared (List_1_t4580 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m24978(__this, ___item, method) (bool)List_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m24978_gshared((List_1_t4580 *)__this, (Object_t *)___item, method)
// System.Int32 Boo.Lang.List`1<System.Object>::System.Collections.IList.Add(System.Object)
 int32_t List_1_System_Collections_IList_Add_m24979_gshared (List_1_t4580 * __this, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_Add_m24979(__this, ___value, method) (int32_t)List_1_System_Collections_IList_Add_m24979_gshared((List_1_t4580 *)__this, (Object_t *)___value, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
 void List_1_System_Collections_IList_Insert_m24980_gshared (List_1_t4580 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m24980(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_Insert_m24980_gshared((List_1_t4580 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
 void List_1_System_Collections_IList_Remove_m24981_gshared (List_1_t4580 * __this, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m24981(__this, ___value, method) (void)List_1_System_Collections_IList_Remove_m24981_gshared((List_1_t4580 *)__this, (Object_t *)___value, method)
// System.Int32 Boo.Lang.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
 int32_t List_1_System_Collections_IList_IndexOf_m24982_gshared (List_1_t4580 * __this, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m24982(__this, ___value, method) (int32_t)List_1_System_Collections_IList_IndexOf_m24982_gshared((List_1_t4580 *)__this, (Object_t *)___value, method)
// System.Boolean Boo.Lang.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
 bool List_1_System_Collections_IList_Contains_m24983_gshared (List_1_t4580 * __this, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m24983(__this, ___value, method) (bool)List_1_System_Collections_IList_Contains_m24983_gshared((List_1_t4580 *)__this, (Object_t *)___value, method)
// System.Object Boo.Lang.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
 Object_t * List_1_System_Collections_IList_get_Item_m24984_gshared (List_1_t4580 * __this, int32_t ___index, MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m24984(__this, ___index, method) (Object_t *)List_1_System_Collections_IList_get_Item_m24984_gshared((List_1_t4580 *)__this, (int32_t)___index, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
 void List_1_System_Collections_IList_set_Item_m24985_gshared (List_1_t4580 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m24985(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_set_Item_m24985_gshared((List_1_t4580 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.IList.RemoveAt(System.Int32)
 void List_1_System_Collections_IList_RemoveAt_m24986_gshared (List_1_t4580 * __this, int32_t ___index, MethodInfo* method);
#define List_1_System_Collections_IList_RemoveAt_m24986(__this, ___index, method) (void)List_1_System_Collections_IList_RemoveAt_m24986_gshared((List_1_t4580 *)__this, (int32_t)___index, method)
// System.Boolean Boo.Lang.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
 bool List_1_System_Collections_IList_get_IsFixedSize_m24987_gshared (List_1_t4580 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m24987(__this, method) (bool)List_1_System_Collections_IList_get_IsFixedSize_m24987_gshared((List_1_t4580 *)__this, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void List_1_System_Collections_ICollection_CopyTo_m24988_gshared (List_1_t4580 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m24988(__this, ___array, ___index, method) (void)List_1_System_Collections_ICollection_CopyTo_m24988_gshared((List_1_t4580 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Int32 Boo.Lang.List`1<System.Object>::get_Count()
 int32_t List_1_get_Count_m24989_gshared (List_1_t4580 * __this, MethodInfo* method);
#define List_1_get_Count_m24989(__this, method) (int32_t)List_1_get_Count_m24989_gshared((List_1_t4580 *)__this, method)
// System.Collections.Generic.IEnumerator`1<T> Boo.Lang.List`1<System.Object>::GetEnumerator()
 Object_t* List_1_GetEnumerator_m24990_gshared (List_1_t4580 * __this, MethodInfo* method);
#define List_1_GetEnumerator_m24990(__this, method) (Object_t*)List_1_GetEnumerator_m24990_gshared((List_1_t4580 *)__this, method)
// System.Void Boo.Lang.List`1<System.Object>::CopyTo(T[],System.Int32)
 void List_1_CopyTo_m24991_gshared (List_1_t4580 * __this, ObjectU5BU5D_t96* ___target, int32_t ___index, MethodInfo* method);
#define List_1_CopyTo_m24991(__this, ___target, ___index, method) (void)List_1_CopyTo_m24991_gshared((List_1_t4580 *)__this, (ObjectU5BU5D_t96*)___target, (int32_t)___index, method)
// System.Boolean Boo.Lang.List`1<System.Object>::get_IsSynchronized()
 bool List_1_get_IsSynchronized_m24992_gshared (List_1_t4580 * __this, MethodInfo* method);
#define List_1_get_IsSynchronized_m24992(__this, method) (bool)List_1_get_IsSynchronized_m24992_gshared((List_1_t4580 *)__this, method)
// System.Object Boo.Lang.List`1<System.Object>::get_SyncRoot()
 Object_t * List_1_get_SyncRoot_m24993_gshared (List_1_t4580 * __this, MethodInfo* method);
#define List_1_get_SyncRoot_m24993(__this, method) (Object_t *)List_1_get_SyncRoot_m24993_gshared((List_1_t4580 *)__this, method)
// System.Boolean Boo.Lang.List`1<System.Object>::get_IsReadOnly()
 bool List_1_get_IsReadOnly_m24994_gshared (List_1_t4580 * __this, MethodInfo* method);
#define List_1_get_IsReadOnly_m24994(__this, method) (bool)List_1_get_IsReadOnly_m24994_gshared((List_1_t4580 *)__this, method)
// T Boo.Lang.List`1<System.Object>::get_Item(System.Int32)
 Object_t * List_1_get_Item_m24995_gshared (List_1_t4580 * __this, int32_t ___index, MethodInfo* method);
#define List_1_get_Item_m24995(__this, ___index, method) (Object_t *)List_1_get_Item_m24995_gshared((List_1_t4580 *)__this, (int32_t)___index, method)
// System.Void Boo.Lang.List`1<System.Object>::set_Item(System.Int32,T)
 void List_1_set_Item_m24996_gshared (List_1_t4580 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_set_Item_m24996(__this, ___index, ___value, method) (void)List_1_set_Item_m24996_gshared((List_1_t4580 *)__this, (int32_t)___index, (Object_t *)___value, method)
// Boo.Lang.List`1<T> Boo.Lang.List`1<System.Object>::Push(T)
 List_1_t4580 * List_1_Push_m24997_gshared (List_1_t4580 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Push_m24997(__this, ___item, method) (List_1_t4580 *)List_1_Push_m24997_gshared((List_1_t4580 *)__this, (Object_t *)___item, method)
// Boo.Lang.List`1<T> Boo.Lang.List`1<System.Object>::Add(T)
 List_1_t4580 * List_1_Add_m24998_gshared (List_1_t4580 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Add_m24998(__this, ___item, method) (List_1_t4580 *)List_1_Add_m24998_gshared((List_1_t4580 *)__this, (Object_t *)___item, method)
// System.String Boo.Lang.List`1<System.Object>::ToString()
 String_t* List_1_ToString_m24999_gshared (List_1_t4580 * __this, MethodInfo* method);
#define List_1_ToString_m24999(__this, method) (String_t*)List_1_ToString_m24999_gshared((List_1_t4580 *)__this, method)
// System.String Boo.Lang.List`1<System.Object>::Join(System.String)
 String_t* List_1_Join_m25000_gshared (List_1_t4580 * __this, String_t* ___separator, MethodInfo* method);
#define List_1_Join_m25000(__this, ___separator, method) (String_t*)List_1_Join_m25000_gshared((List_1_t4580 *)__this, (String_t*)___separator, method)
// System.Int32 Boo.Lang.List`1<System.Object>::GetHashCode()
 int32_t List_1_GetHashCode_m25001_gshared (List_1_t4580 * __this, MethodInfo* method);
#define List_1_GetHashCode_m25001(__this, method) (int32_t)List_1_GetHashCode_m25001_gshared((List_1_t4580 *)__this, method)
// System.Boolean Boo.Lang.List`1<System.Object>::Equals(System.Object)
 bool List_1_Equals_m25002_gshared (List_1_t4580 * __this, Object_t * ___other, MethodInfo* method);
#define List_1_Equals_m25002(__this, ___other, method) (bool)List_1_Equals_m25002_gshared((List_1_t4580 *)__this, (Object_t *)___other, method)
// System.Boolean Boo.Lang.List`1<System.Object>::Equals(Boo.Lang.List`1<T>)
 bool List_1_Equals_m25003_gshared (List_1_t4580 * __this, List_1_t4580 * ___other, MethodInfo* method);
#define List_1_Equals_m25003(__this, ___other, method) (bool)List_1_Equals_m25003_gshared((List_1_t4580 *)__this, (List_1_t4580 *)___other, method)
// System.Void Boo.Lang.List`1<System.Object>::Clear()
 void List_1_Clear_m25004_gshared (List_1_t4580 * __this, MethodInfo* method);
#define List_1_Clear_m25004(__this, method) (void)List_1_Clear_m25004_gshared((List_1_t4580 *)__this, method)
// System.Boolean Boo.Lang.List`1<System.Object>::Contains(T)
 bool List_1_Contains_m25005_gshared (List_1_t4580 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Contains_m25005(__this, ___item, method) (bool)List_1_Contains_m25005_gshared((List_1_t4580 *)__this, (Object_t *)___item, method)
// System.Int32 Boo.Lang.List`1<System.Object>::IndexOf(T)
 int32_t List_1_IndexOf_m25006_gshared (List_1_t4580 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_IndexOf_m25006(__this, ___item, method) (int32_t)List_1_IndexOf_m25006_gshared((List_1_t4580 *)__this, (Object_t *)___item, method)
// Boo.Lang.List`1<T> Boo.Lang.List`1<System.Object>::Insert(System.Int32,T)
 List_1_t4580 * List_1_Insert_m25007_gshared (List_1_t4580 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_Insert_m25007(__this, ___index, ___item, method) (List_1_t4580 *)List_1_Insert_m25007_gshared((List_1_t4580 *)__this, (int32_t)___index, (Object_t *)___item, method)
// Boo.Lang.List`1<T> Boo.Lang.List`1<System.Object>::Remove(T)
 List_1_t4580 * List_1_Remove_m25008_gshared (List_1_t4580 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Remove_m25008(__this, ___item, method) (List_1_t4580 *)List_1_Remove_m25008_gshared((List_1_t4580 *)__this, (Object_t *)___item, method)
// Boo.Lang.List`1<T> Boo.Lang.List`1<System.Object>::RemoveAt(System.Int32)
 List_1_t4580 * List_1_RemoveAt_m25009_gshared (List_1_t4580 * __this, int32_t ___index, MethodInfo* method);
#define List_1_RemoveAt_m25009(__this, ___index, method) (List_1_t4580 *)List_1_RemoveAt_m25009_gshared((List_1_t4580 *)__this, (int32_t)___index, method)
// System.Void Boo.Lang.List`1<System.Object>::EnsureCapacity(System.Int32)
 void List_1_EnsureCapacity_m25010_gshared (List_1_t4580 * __this, int32_t ___minCapacity, MethodInfo* method);
#define List_1_EnsureCapacity_m25010(__this, ___minCapacity, method) (void)List_1_EnsureCapacity_m25010_gshared((List_1_t4580 *)__this, (int32_t)___minCapacity, method)
// T[] Boo.Lang.List`1<System.Object>::NewArray(System.Int32)
 ObjectU5BU5D_t96* List_1_NewArray_m25011_gshared (List_1_t4580 * __this, int32_t ___minCapacity, MethodInfo* method);
#define List_1_NewArray_m25011(__this, ___minCapacity, method) (ObjectU5BU5D_t96*)List_1_NewArray_m25011_gshared((List_1_t4580 *)__this, (int32_t)___minCapacity, method)
// System.Void Boo.Lang.List`1<System.Object>::InnerRemoveAt(System.Int32)
 void List_1_InnerRemoveAt_m25012_gshared (List_1_t4580 * __this, int32_t ___index, MethodInfo* method);
#define List_1_InnerRemoveAt_m25012(__this, ___index, method) (void)List_1_InnerRemoveAt_m25012_gshared((List_1_t4580 *)__this, (int32_t)___index, method)
// System.Boolean Boo.Lang.List`1<System.Object>::InnerRemove(T)
 bool List_1_InnerRemove_m25013_gshared (List_1_t4580 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_InnerRemove_m25013(__this, ___item, method) (bool)List_1_InnerRemove_m25013_gshared((List_1_t4580 *)__this, (Object_t *)___item, method)
// System.Int32 Boo.Lang.List`1<System.Object>::CheckIndex(System.Int32)
 int32_t List_1_CheckIndex_m25014_gshared (List_1_t4580 * __this, int32_t ___index, MethodInfo* method);
#define List_1_CheckIndex_m25014(__this, ___index, method) (int32_t)List_1_CheckIndex_m25014_gshared((List_1_t4580 *)__this, (int32_t)___index, method)
// System.Int32 Boo.Lang.List`1<System.Object>::NormalizeIndex(System.Int32)
 int32_t List_1_NormalizeIndex_m25015_gshared (List_1_t4580 * __this, int32_t ___index, MethodInfo* method);
#define List_1_NormalizeIndex_m25015(__this, ___index, method) (int32_t)List_1_NormalizeIndex_m25015_gshared((List_1_t4580 *)__this, (int32_t)___index, method)
// T Boo.Lang.List`1<System.Object>::Coerce(System.Object)
 Object_t * List_1_Coerce_m25016_gshared (Object_t * __this/* static, unused */, Object_t * ___value, MethodInfo* method);
#define List_1_Coerce_m25016(__this/* static, unused */, ___value, method) (Object_t *)List_1_Coerce_m25016_gshared((Object_t *)__this/* static, unused */, (Object_t *)___value, method)
