#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>
struct ReadOnlyCollection_1_t2768;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t44;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t19;
// System.String[]
struct StringU5BU5D_t3;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t127;

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_0MethodDeclarations.h"
#define ReadOnlyCollection_1__ctor_m13158(__this, ___list, method) (void)ReadOnlyCollection_1__ctor_m12981_gshared((ReadOnlyCollection_1_t2773 *)__this, (Object_t*)___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.Generic.ICollection<T>.Add(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m13159(__this, ___item, method) (void)ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m12982_gshared((ReadOnlyCollection_1_t2773 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.Generic.ICollection<T>.Clear()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m13160(__this, method) (void)ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m12983_gshared((ReadOnlyCollection_1_t2773 *)__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m13161(__this, ___index, ___item, method) (void)ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m12984_gshared((ReadOnlyCollection_1_t2773 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.Generic.ICollection<T>.Remove(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m13162(__this, ___item, method) (bool)ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m12985_gshared((ReadOnlyCollection_1_t2773 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m13163(__this, ___index, method) (void)ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m12986_gshared((ReadOnlyCollection_1_t2773 *)__this, (int32_t)___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m13164(__this, ___index, method) (String_t*)ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m12987_gshared((ReadOnlyCollection_1_t2773 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m13165(__this, ___index, ___value, method) (void)ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m12988_gshared((ReadOnlyCollection_1_t2773 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13166(__this, method) (bool)ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12989_gshared((ReadOnlyCollection_1_t2773 *)__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m13167(__this, ___array, ___index, method) (void)ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m12990_gshared((ReadOnlyCollection_1_t2773 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IEnumerable.GetEnumerator()
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m13168(__this, method) (Object_t *)ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m12991_gshared((ReadOnlyCollection_1_t2773 *)__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.Add(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Add_m13169(__this, ___value, method) (int32_t)ReadOnlyCollection_1_System_Collections_IList_Add_m12992_gshared((ReadOnlyCollection_1_t2773 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.Clear()
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m13170(__this, method) (void)ReadOnlyCollection_1_System_Collections_IList_Clear_m12993_gshared((ReadOnlyCollection_1_t2773 *)__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.Contains(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m13171(__this, ___value, method) (bool)ReadOnlyCollection_1_System_Collections_IList_Contains_m12994_gshared((ReadOnlyCollection_1_t2773 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.IndexOf(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m13172(__this, ___value, method) (int32_t)ReadOnlyCollection_1_System_Collections_IList_IndexOf_m12995_gshared((ReadOnlyCollection_1_t2773 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.Insert(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m13173(__this, ___index, ___value, method) (void)ReadOnlyCollection_1_System_Collections_IList_Insert_m12996_gshared((ReadOnlyCollection_1_t2773 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.Remove(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m13174(__this, ___value, method) (void)ReadOnlyCollection_1_System_Collections_IList_Remove_m12997_gshared((ReadOnlyCollection_1_t2773 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m13175(__this, ___index, method) (void)ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m12998_gshared((ReadOnlyCollection_1_t2773 *)__this, (int32_t)___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.ICollection.get_IsSynchronized()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m13176(__this, method) (bool)ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m12999_gshared((ReadOnlyCollection_1_t2773 *)__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.ICollection.get_SyncRoot()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m13177(__this, method) (Object_t *)ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m13000_gshared((ReadOnlyCollection_1_t2773 *)__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.get_IsFixedSize()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m13178(__this, method) (bool)ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m13001_gshared((ReadOnlyCollection_1_t2773 *)__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m13179(__this, method) (bool)ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m13002_gshared((ReadOnlyCollection_1_t2773 *)__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m13180(__this, ___index, method) (Object_t *)ReadOnlyCollection_1_System_Collections_IList_get_Item_m13003_gshared((ReadOnlyCollection_1_t2773 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m13181(__this, ___index, ___value, method) (void)ReadOnlyCollection_1_System_Collections_IList_set_Item_m13004_gshared((ReadOnlyCollection_1_t2773 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::Contains(T)
#define ReadOnlyCollection_1_Contains_m13182(__this, ___value, method) (bool)ReadOnlyCollection_1_Contains_m13005_gshared((ReadOnlyCollection_1_t2773 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::CopyTo(T[],System.Int32)
#define ReadOnlyCollection_1_CopyTo_m13183(__this, ___array, ___index, method) (void)ReadOnlyCollection_1_CopyTo_m13006_gshared((ReadOnlyCollection_1_t2773 *)__this, (ObjectU5BU5D_t96*)___array, (int32_t)___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::GetEnumerator()
#define ReadOnlyCollection_1_GetEnumerator_m13184(__this, method) (Object_t*)ReadOnlyCollection_1_GetEnumerator_m13007_gshared((ReadOnlyCollection_1_t2773 *)__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::IndexOf(T)
#define ReadOnlyCollection_1_IndexOf_m13185(__this, ___value, method) (int32_t)ReadOnlyCollection_1_IndexOf_m13008_gshared((ReadOnlyCollection_1_t2773 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::get_Count()
#define ReadOnlyCollection_1_get_Count_m13186(__this, method) (int32_t)ReadOnlyCollection_1_get_Count_m13009_gshared((ReadOnlyCollection_1_t2773 *)__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::get_Item(System.Int32)
#define ReadOnlyCollection_1_get_Item_m13187(__this, ___index, method) (String_t*)ReadOnlyCollection_1_get_Item_m13010_gshared((ReadOnlyCollection_1_t2773 *)__this, (int32_t)___index, method)
