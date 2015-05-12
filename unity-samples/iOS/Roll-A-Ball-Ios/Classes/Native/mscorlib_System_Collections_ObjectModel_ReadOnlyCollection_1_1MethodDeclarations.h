#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>
struct ReadOnlyCollection_1_t2756;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t46;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.String[]
struct StringU5BU5D_t3;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t115;

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::.ctor(System.Collections.Generic.IList`1<T>)
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_ReadOnlyCollection_1_0MethodDeclarations.h"
#define ReadOnlyCollection_1__ctor_m13063(__this, ___list, method) (void)ReadOnlyCollection_1__ctor_m12886_gshared((ReadOnlyCollection_1_t2761 *)__this, (Object_t*)___list, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.Generic.ICollection<T>.Add(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m13064(__this, ___item, method) (void)ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m12887_gshared((ReadOnlyCollection_1_t2761 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.Generic.ICollection<T>.Clear()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m13065(__this, method) (void)ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m12888_gshared((ReadOnlyCollection_1_t2761 *)__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m13066(__this, ___index, ___item, method) (void)ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_Insert_m12889_gshared((ReadOnlyCollection_1_t2761 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.Generic.ICollection<T>.Remove(T)
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m13067(__this, ___item, method) (bool)ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m12890_gshared((ReadOnlyCollection_1_t2761 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m13068(__this, ___index, method) (void)ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m12891_gshared((ReadOnlyCollection_1_t2761 *)__this, (int32_t)___index, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m13069(__this, ___index, method) (String_t*)ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_get_Item_m12892_gshared((ReadOnlyCollection_1_t2761 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
#define ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m13070(__this, ___index, ___value, method) (void)ReadOnlyCollection_1_System_Collections_Generic_IListU3CTU3E_set_Item_m12893_gshared((ReadOnlyCollection_1_t2761 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13071(__this, method) (bool)ReadOnlyCollection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12894_gshared((ReadOnlyCollection_1_t2761 *)__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m13072(__this, ___array, ___index, method) (void)ReadOnlyCollection_1_System_Collections_ICollection_CopyTo_m12895_gshared((ReadOnlyCollection_1_t2761 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IEnumerable.GetEnumerator()
#define ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m13073(__this, method) (Object_t *)ReadOnlyCollection_1_System_Collections_IEnumerable_GetEnumerator_m12896_gshared((ReadOnlyCollection_1_t2761 *)__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.Add(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Add_m13074(__this, ___value, method) (int32_t)ReadOnlyCollection_1_System_Collections_IList_Add_m12897_gshared((ReadOnlyCollection_1_t2761 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.Clear()
#define ReadOnlyCollection_1_System_Collections_IList_Clear_m13075(__this, method) (void)ReadOnlyCollection_1_System_Collections_IList_Clear_m12898_gshared((ReadOnlyCollection_1_t2761 *)__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.Contains(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Contains_m13076(__this, ___value, method) (bool)ReadOnlyCollection_1_System_Collections_IList_Contains_m12899_gshared((ReadOnlyCollection_1_t2761 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.IndexOf(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_IndexOf_m13077(__this, ___value, method) (int32_t)ReadOnlyCollection_1_System_Collections_IList_IndexOf_m12900_gshared((ReadOnlyCollection_1_t2761 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.Insert(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Insert_m13078(__this, ___index, ___value, method) (void)ReadOnlyCollection_1_System_Collections_IList_Insert_m12901_gshared((ReadOnlyCollection_1_t2761 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.Remove(System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_Remove_m13079(__this, ___value, method) (void)ReadOnlyCollection_1_System_Collections_IList_Remove_m12902_gshared((ReadOnlyCollection_1_t2761 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.RemoveAt(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m13080(__this, ___index, method) (void)ReadOnlyCollection_1_System_Collections_IList_RemoveAt_m12903_gshared((ReadOnlyCollection_1_t2761 *)__this, (int32_t)___index, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.ICollection.get_IsSynchronized()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m13081(__this, method) (bool)ReadOnlyCollection_1_System_Collections_ICollection_get_IsSynchronized_m12904_gshared((ReadOnlyCollection_1_t2761 *)__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.ICollection.get_SyncRoot()
#define ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m13082(__this, method) (Object_t *)ReadOnlyCollection_1_System_Collections_ICollection_get_SyncRoot_m12905_gshared((ReadOnlyCollection_1_t2761 *)__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.get_IsFixedSize()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m13083(__this, method) (bool)ReadOnlyCollection_1_System_Collections_IList_get_IsFixedSize_m12906_gshared((ReadOnlyCollection_1_t2761 *)__this, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.get_IsReadOnly()
#define ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m13084(__this, method) (bool)ReadOnlyCollection_1_System_Collections_IList_get_IsReadOnly_m12907_gshared((ReadOnlyCollection_1_t2761 *)__this, method)
// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.get_Item(System.Int32)
#define ReadOnlyCollection_1_System_Collections_IList_get_Item_m13085(__this, ___index, method) (Object_t *)ReadOnlyCollection_1_System_Collections_IList_get_Item_m12908_gshared((ReadOnlyCollection_1_t2761 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define ReadOnlyCollection_1_System_Collections_IList_set_Item_m13086(__this, ___index, ___value, method) (void)ReadOnlyCollection_1_System_Collections_IList_set_Item_m12909_gshared((ReadOnlyCollection_1_t2761 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::Contains(T)
#define ReadOnlyCollection_1_Contains_m13087(__this, ___value, method) (bool)ReadOnlyCollection_1_Contains_m12910_gshared((ReadOnlyCollection_1_t2761 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::CopyTo(T[],System.Int32)
#define ReadOnlyCollection_1_CopyTo_m13088(__this, ___array, ___index, method) (void)ReadOnlyCollection_1_CopyTo_m12911_gshared((ReadOnlyCollection_1_t2761 *)__this, (ObjectU5BU5D_t112*)___array, (int32_t)___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::GetEnumerator()
#define ReadOnlyCollection_1_GetEnumerator_m13089(__this, method) (Object_t*)ReadOnlyCollection_1_GetEnumerator_m12912_gshared((ReadOnlyCollection_1_t2761 *)__this, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::IndexOf(T)
#define ReadOnlyCollection_1_IndexOf_m13090(__this, ___value, method) (int32_t)ReadOnlyCollection_1_IndexOf_m12913_gshared((ReadOnlyCollection_1_t2761 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::get_Count()
#define ReadOnlyCollection_1_get_Count_m13091(__this, method) (int32_t)ReadOnlyCollection_1_get_Count_m12914_gshared((ReadOnlyCollection_1_t2761 *)__this, method)
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>::get_Item(System.Int32)
#define ReadOnlyCollection_1_get_Item_m13092(__this, ___index, method) (String_t*)ReadOnlyCollection_1_get_Item_m12915_gshared((ReadOnlyCollection_1_t2761 *)__this, (int32_t)___index, method)
