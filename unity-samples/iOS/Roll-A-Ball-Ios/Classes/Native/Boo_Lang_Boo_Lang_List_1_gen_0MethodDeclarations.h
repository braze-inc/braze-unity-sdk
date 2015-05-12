#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Boo.Lang.List`1<System.Object>
struct List_1_t4562;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t77;
// System.Object[]
struct ObjectU5BU5D_t112;
// System.String
struct String_t;

// System.Void Boo.Lang.List`1<System.Object>::.ctor()
 void List_1__ctor_m24762_gshared (List_1_t4562 * __this, MethodInfo* method);
#define List_1__ctor_m24762(__this, method) (void)List_1__ctor_m24762_gshared((List_1_t4562 *)__this, method)
// System.Void Boo.Lang.List`1<System.Object>::.cctor()
 void List_1__cctor_m24763_gshared (Object_t * __this/* static, unused */, MethodInfo* method);
#define List_1__cctor_m24763(__this/* static, unused */, method) (void)List_1__cctor_m24763_gshared((Object_t *)__this/* static, unused */, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
 void List_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m24764_gshared (List_1_t4562 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m24764(__this, ___item, method) (void)List_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m24764_gshared((List_1_t4562 *)__this, (Object_t *)___item, method)
// System.Collections.IEnumerator Boo.Lang.List`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m24765_gshared (List_1_t4562 * __this, MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m24765(__this, method) (Object_t *)List_1_System_Collections_IEnumerable_GetEnumerator_m24765_gshared((List_1_t4562 *)__this, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
 void List_1_System_Collections_Generic_IListU3CTU3E_Insert_m24766_gshared (List_1_t4562 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_Generic_IListU3CTU3E_Insert_m24766(__this, ___index, ___item, method) (void)List_1_System_Collections_Generic_IListU3CTU3E_Insert_m24766_gshared((List_1_t4562 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
 void List_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m24767_gshared (List_1_t4562 * __this, int32_t ___index, MethodInfo* method);
#define List_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m24767(__this, ___index, method) (void)List_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m24767_gshared((List_1_t4562 *)__this, (int32_t)___index, method)
// System.Boolean Boo.Lang.List`1<System.Object>::System.Collections.Generic.ICollection<T>.Remove(T)
 bool List_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m24768_gshared (List_1_t4562 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m24768(__this, ___item, method) (bool)List_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m24768_gshared((List_1_t4562 *)__this, (Object_t *)___item, method)
// System.Int32 Boo.Lang.List`1<System.Object>::System.Collections.IList.Add(System.Object)
 int32_t List_1_System_Collections_IList_Add_m24769_gshared (List_1_t4562 * __this, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_Add_m24769(__this, ___value, method) (int32_t)List_1_System_Collections_IList_Add_m24769_gshared((List_1_t4562 *)__this, (Object_t *)___value, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
 void List_1_System_Collections_IList_Insert_m24770_gshared (List_1_t4562 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m24770(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_Insert_m24770_gshared((List_1_t4562 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.IList.Remove(System.Object)
 void List_1_System_Collections_IList_Remove_m24771_gshared (List_1_t4562 * __this, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m24771(__this, ___value, method) (void)List_1_System_Collections_IList_Remove_m24771_gshared((List_1_t4562 *)__this, (Object_t *)___value, method)
// System.Int32 Boo.Lang.List`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
 int32_t List_1_System_Collections_IList_IndexOf_m24772_gshared (List_1_t4562 * __this, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m24772(__this, ___value, method) (int32_t)List_1_System_Collections_IList_IndexOf_m24772_gshared((List_1_t4562 *)__this, (Object_t *)___value, method)
// System.Boolean Boo.Lang.List`1<System.Object>::System.Collections.IList.Contains(System.Object)
 bool List_1_System_Collections_IList_Contains_m24773_gshared (List_1_t4562 * __this, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m24773(__this, ___value, method) (bool)List_1_System_Collections_IList_Contains_m24773_gshared((List_1_t4562 *)__this, (Object_t *)___value, method)
// System.Object Boo.Lang.List`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
 Object_t * List_1_System_Collections_IList_get_Item_m24774_gshared (List_1_t4562 * __this, int32_t ___index, MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m24774(__this, ___index, method) (Object_t *)List_1_System_Collections_IList_get_Item_m24774_gshared((List_1_t4562 *)__this, (int32_t)___index, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
 void List_1_System_Collections_IList_set_Item_m24775_gshared (List_1_t4562 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m24775(__this, ___index, ___value, method) (void)List_1_System_Collections_IList_set_Item_m24775_gshared((List_1_t4562 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.IList.RemoveAt(System.Int32)
 void List_1_System_Collections_IList_RemoveAt_m24776_gshared (List_1_t4562 * __this, int32_t ___index, MethodInfo* method);
#define List_1_System_Collections_IList_RemoveAt_m24776(__this, ___index, method) (void)List_1_System_Collections_IList_RemoveAt_m24776_gshared((List_1_t4562 *)__this, (int32_t)___index, method)
// System.Boolean Boo.Lang.List`1<System.Object>::System.Collections.IList.get_IsFixedSize()
 bool List_1_System_Collections_IList_get_IsFixedSize_m24777_gshared (List_1_t4562 * __this, MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m24777(__this, method) (bool)List_1_System_Collections_IList_get_IsFixedSize_m24777_gshared((List_1_t4562 *)__this, method)
// System.Void Boo.Lang.List`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void List_1_System_Collections_ICollection_CopyTo_m24778_gshared (List_1_t4562 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m24778(__this, ___array, ___index, method) (void)List_1_System_Collections_ICollection_CopyTo_m24778_gshared((List_1_t4562 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Int32 Boo.Lang.List`1<System.Object>::get_Count()
 int32_t List_1_get_Count_m24779_gshared (List_1_t4562 * __this, MethodInfo* method);
#define List_1_get_Count_m24779(__this, method) (int32_t)List_1_get_Count_m24779_gshared((List_1_t4562 *)__this, method)
// System.Collections.Generic.IEnumerator`1<T> Boo.Lang.List`1<System.Object>::GetEnumerator()
 Object_t* List_1_GetEnumerator_m24780_gshared (List_1_t4562 * __this, MethodInfo* method);
#define List_1_GetEnumerator_m24780(__this, method) (Object_t*)List_1_GetEnumerator_m24780_gshared((List_1_t4562 *)__this, method)
// System.Void Boo.Lang.List`1<System.Object>::CopyTo(T[],System.Int32)
 void List_1_CopyTo_m24781_gshared (List_1_t4562 * __this, ObjectU5BU5D_t112* ___target, int32_t ___index, MethodInfo* method);
#define List_1_CopyTo_m24781(__this, ___target, ___index, method) (void)List_1_CopyTo_m24781_gshared((List_1_t4562 *)__this, (ObjectU5BU5D_t112*)___target, (int32_t)___index, method)
// System.Boolean Boo.Lang.List`1<System.Object>::get_IsSynchronized()
 bool List_1_get_IsSynchronized_m24782_gshared (List_1_t4562 * __this, MethodInfo* method);
#define List_1_get_IsSynchronized_m24782(__this, method) (bool)List_1_get_IsSynchronized_m24782_gshared((List_1_t4562 *)__this, method)
// System.Object Boo.Lang.List`1<System.Object>::get_SyncRoot()
 Object_t * List_1_get_SyncRoot_m24783_gshared (List_1_t4562 * __this, MethodInfo* method);
#define List_1_get_SyncRoot_m24783(__this, method) (Object_t *)List_1_get_SyncRoot_m24783_gshared((List_1_t4562 *)__this, method)
// System.Boolean Boo.Lang.List`1<System.Object>::get_IsReadOnly()
 bool List_1_get_IsReadOnly_m24784_gshared (List_1_t4562 * __this, MethodInfo* method);
#define List_1_get_IsReadOnly_m24784(__this, method) (bool)List_1_get_IsReadOnly_m24784_gshared((List_1_t4562 *)__this, method)
// T Boo.Lang.List`1<System.Object>::get_Item(System.Int32)
 Object_t * List_1_get_Item_m24785_gshared (List_1_t4562 * __this, int32_t ___index, MethodInfo* method);
#define List_1_get_Item_m24785(__this, ___index, method) (Object_t *)List_1_get_Item_m24785_gshared((List_1_t4562 *)__this, (int32_t)___index, method)
// System.Void Boo.Lang.List`1<System.Object>::set_Item(System.Int32,T)
 void List_1_set_Item_m24786_gshared (List_1_t4562 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define List_1_set_Item_m24786(__this, ___index, ___value, method) (void)List_1_set_Item_m24786_gshared((List_1_t4562 *)__this, (int32_t)___index, (Object_t *)___value, method)
// Boo.Lang.List`1<T> Boo.Lang.List`1<System.Object>::Push(T)
 List_1_t4562 * List_1_Push_m24787_gshared (List_1_t4562 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Push_m24787(__this, ___item, method) (List_1_t4562 *)List_1_Push_m24787_gshared((List_1_t4562 *)__this, (Object_t *)___item, method)
// Boo.Lang.List`1<T> Boo.Lang.List`1<System.Object>::Add(T)
 List_1_t4562 * List_1_Add_m24788_gshared (List_1_t4562 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Add_m24788(__this, ___item, method) (List_1_t4562 *)List_1_Add_m24788_gshared((List_1_t4562 *)__this, (Object_t *)___item, method)
// System.String Boo.Lang.List`1<System.Object>::ToString()
 String_t* List_1_ToString_m24789_gshared (List_1_t4562 * __this, MethodInfo* method);
#define List_1_ToString_m24789(__this, method) (String_t*)List_1_ToString_m24789_gshared((List_1_t4562 *)__this, method)
// System.String Boo.Lang.List`1<System.Object>::Join(System.String)
 String_t* List_1_Join_m24790_gshared (List_1_t4562 * __this, String_t* ___separator, MethodInfo* method);
#define List_1_Join_m24790(__this, ___separator, method) (String_t*)List_1_Join_m24790_gshared((List_1_t4562 *)__this, (String_t*)___separator, method)
// System.Int32 Boo.Lang.List`1<System.Object>::GetHashCode()
 int32_t List_1_GetHashCode_m24791_gshared (List_1_t4562 * __this, MethodInfo* method);
#define List_1_GetHashCode_m24791(__this, method) (int32_t)List_1_GetHashCode_m24791_gshared((List_1_t4562 *)__this, method)
// System.Boolean Boo.Lang.List`1<System.Object>::Equals(System.Object)
 bool List_1_Equals_m24792_gshared (List_1_t4562 * __this, Object_t * ___other, MethodInfo* method);
#define List_1_Equals_m24792(__this, ___other, method) (bool)List_1_Equals_m24792_gshared((List_1_t4562 *)__this, (Object_t *)___other, method)
// System.Boolean Boo.Lang.List`1<System.Object>::Equals(Boo.Lang.List`1<T>)
 bool List_1_Equals_m24793_gshared (List_1_t4562 * __this, List_1_t4562 * ___other, MethodInfo* method);
#define List_1_Equals_m24793(__this, ___other, method) (bool)List_1_Equals_m24793_gshared((List_1_t4562 *)__this, (List_1_t4562 *)___other, method)
// System.Void Boo.Lang.List`1<System.Object>::Clear()
 void List_1_Clear_m24794_gshared (List_1_t4562 * __this, MethodInfo* method);
#define List_1_Clear_m24794(__this, method) (void)List_1_Clear_m24794_gshared((List_1_t4562 *)__this, method)
// System.Boolean Boo.Lang.List`1<System.Object>::Contains(T)
 bool List_1_Contains_m24795_gshared (List_1_t4562 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Contains_m24795(__this, ___item, method) (bool)List_1_Contains_m24795_gshared((List_1_t4562 *)__this, (Object_t *)___item, method)
// System.Int32 Boo.Lang.List`1<System.Object>::IndexOf(T)
 int32_t List_1_IndexOf_m24796_gshared (List_1_t4562 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_IndexOf_m24796(__this, ___item, method) (int32_t)List_1_IndexOf_m24796_gshared((List_1_t4562 *)__this, (Object_t *)___item, method)
// Boo.Lang.List`1<T> Boo.Lang.List`1<System.Object>::Insert(System.Int32,T)
 List_1_t4562 * List_1_Insert_m24797_gshared (List_1_t4562 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define List_1_Insert_m24797(__this, ___index, ___item, method) (List_1_t4562 *)List_1_Insert_m24797_gshared((List_1_t4562 *)__this, (int32_t)___index, (Object_t *)___item, method)
// Boo.Lang.List`1<T> Boo.Lang.List`1<System.Object>::Remove(T)
 List_1_t4562 * List_1_Remove_m24798_gshared (List_1_t4562 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_Remove_m24798(__this, ___item, method) (List_1_t4562 *)List_1_Remove_m24798_gshared((List_1_t4562 *)__this, (Object_t *)___item, method)
// Boo.Lang.List`1<T> Boo.Lang.List`1<System.Object>::RemoveAt(System.Int32)
 List_1_t4562 * List_1_RemoveAt_m24799_gshared (List_1_t4562 * __this, int32_t ___index, MethodInfo* method);
#define List_1_RemoveAt_m24799(__this, ___index, method) (List_1_t4562 *)List_1_RemoveAt_m24799_gshared((List_1_t4562 *)__this, (int32_t)___index, method)
// System.Void Boo.Lang.List`1<System.Object>::EnsureCapacity(System.Int32)
 void List_1_EnsureCapacity_m24800_gshared (List_1_t4562 * __this, int32_t ___minCapacity, MethodInfo* method);
#define List_1_EnsureCapacity_m24800(__this, ___minCapacity, method) (void)List_1_EnsureCapacity_m24800_gshared((List_1_t4562 *)__this, (int32_t)___minCapacity, method)
// T[] Boo.Lang.List`1<System.Object>::NewArray(System.Int32)
 ObjectU5BU5D_t112* List_1_NewArray_m24801_gshared (List_1_t4562 * __this, int32_t ___minCapacity, MethodInfo* method);
#define List_1_NewArray_m24801(__this, ___minCapacity, method) (ObjectU5BU5D_t112*)List_1_NewArray_m24801_gshared((List_1_t4562 *)__this, (int32_t)___minCapacity, method)
// System.Void Boo.Lang.List`1<System.Object>::InnerRemoveAt(System.Int32)
 void List_1_InnerRemoveAt_m24802_gshared (List_1_t4562 * __this, int32_t ___index, MethodInfo* method);
#define List_1_InnerRemoveAt_m24802(__this, ___index, method) (void)List_1_InnerRemoveAt_m24802_gshared((List_1_t4562 *)__this, (int32_t)___index, method)
// System.Boolean Boo.Lang.List`1<System.Object>::InnerRemove(T)
 bool List_1_InnerRemove_m24803_gshared (List_1_t4562 * __this, Object_t * ___item, MethodInfo* method);
#define List_1_InnerRemove_m24803(__this, ___item, method) (bool)List_1_InnerRemove_m24803_gshared((List_1_t4562 *)__this, (Object_t *)___item, method)
// System.Int32 Boo.Lang.List`1<System.Object>::CheckIndex(System.Int32)
 int32_t List_1_CheckIndex_m24804_gshared (List_1_t4562 * __this, int32_t ___index, MethodInfo* method);
#define List_1_CheckIndex_m24804(__this, ___index, method) (int32_t)List_1_CheckIndex_m24804_gshared((List_1_t4562 *)__this, (int32_t)___index, method)
// System.Int32 Boo.Lang.List`1<System.Object>::NormalizeIndex(System.Int32)
 int32_t List_1_NormalizeIndex_m24805_gshared (List_1_t4562 * __this, int32_t ___index, MethodInfo* method);
#define List_1_NormalizeIndex_m24805(__this, ___index, method) (int32_t)List_1_NormalizeIndex_m24805_gshared((List_1_t4562 *)__this, (int32_t)___index, method)
// T Boo.Lang.List`1<System.Object>::Coerce(System.Object)
 Object_t * List_1_Coerce_m24806_gshared (Object_t * __this/* static, unused */, Object_t * ___value, MethodInfo* method);
#define List_1_Coerce_m24806(__this/* static, unused */, ___value, method) (Object_t *)List_1_Coerce_m24806_gshared((Object_t *)__this/* static, unused */, (Object_t *)___value, method)
