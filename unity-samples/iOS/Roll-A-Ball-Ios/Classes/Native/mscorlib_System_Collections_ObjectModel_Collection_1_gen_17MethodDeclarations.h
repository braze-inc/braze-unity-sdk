#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>
struct Collection_1_t3644;
// System.Object
struct Object_t;
// UnityEngine.Transform
struct Transform_t193;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t19;
// UnityEngine.Transform[]
struct TransformU5BU5D_t3636;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Transform>
struct IEnumerator_1_t3638;
// System.Collections.Generic.IList`1<UnityEngine.Transform>
struct IList_1_t526;

// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m18768(__this, method) (void)Collection_1__ctor_m13011_gshared((Collection_1_t2775 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18769(__this, method) (bool)Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13012_gshared((Collection_1_t2775 *)__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m18770(__this, ___array, ___index, method) (void)Collection_1_System_Collections_ICollection_CopyTo_m13013_gshared((Collection_1_t2775 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m18771(__this, method) (Object_t *)Collection_1_System_Collections_IEnumerable_GetEnumerator_m13014_gshared((Collection_1_t2775 *)__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m18772(__this, ___value, method) (int32_t)Collection_1_System_Collections_IList_Add_m13015_gshared((Collection_1_t2775 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m18773(__this, ___value, method) (bool)Collection_1_System_Collections_IList_Contains_m13016_gshared((Collection_1_t2775 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m18774(__this, ___value, method) (int32_t)Collection_1_System_Collections_IList_IndexOf_m13017_gshared((Collection_1_t2775 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m18775(__this, ___index, ___value, method) (void)Collection_1_System_Collections_IList_Insert_m13018_gshared((Collection_1_t2775 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m18776(__this, ___value, method) (void)Collection_1_System_Collections_IList_Remove_m13019_gshared((Collection_1_t2775 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m18777(__this, method) (bool)Collection_1_System_Collections_ICollection_get_IsSynchronized_m13020_gshared((Collection_1_t2775 *)__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m18778(__this, method) (Object_t *)Collection_1_System_Collections_ICollection_get_SyncRoot_m13021_gshared((Collection_1_t2775 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m18779(__this, method) (bool)Collection_1_System_Collections_IList_get_IsFixedSize_m13022_gshared((Collection_1_t2775 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m18780(__this, method) (bool)Collection_1_System_Collections_IList_get_IsReadOnly_m13023_gshared((Collection_1_t2775 *)__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m18781(__this, ___index, method) (Object_t *)Collection_1_System_Collections_IList_get_Item_m13024_gshared((Collection_1_t2775 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m18782(__this, ___index, ___value, method) (void)Collection_1_System_Collections_IList_set_Item_m13025_gshared((Collection_1_t2775 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::Add(T)
#define Collection_1_Add_m18783(__this, ___item, method) (void)Collection_1_Add_m13026_gshared((Collection_1_t2775 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::Clear()
#define Collection_1_Clear_m18784(__this, method) (void)Collection_1_Clear_m13027_gshared((Collection_1_t2775 *)__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::ClearItems()
#define Collection_1_ClearItems_m18785(__this, method) (void)Collection_1_ClearItems_m13028_gshared((Collection_1_t2775 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::Contains(T)
#define Collection_1_Contains_m18786(__this, ___item, method) (bool)Collection_1_Contains_m13029_gshared((Collection_1_t2775 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m18787(__this, ___array, ___index, method) (void)Collection_1_CopyTo_m13030_gshared((Collection_1_t2775 *)__this, (ObjectU5BU5D_t96*)___array, (int32_t)___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::GetEnumerator()
#define Collection_1_GetEnumerator_m18788(__this, method) (Object_t*)Collection_1_GetEnumerator_m13031_gshared((Collection_1_t2775 *)__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::IndexOf(T)
#define Collection_1_IndexOf_m18789(__this, ___item, method) (int32_t)Collection_1_IndexOf_m13032_gshared((Collection_1_t2775 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::Insert(System.Int32,T)
#define Collection_1_Insert_m18790(__this, ___index, ___item, method) (void)Collection_1_Insert_m13033_gshared((Collection_1_t2775 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m18791(__this, ___index, ___item, method) (void)Collection_1_InsertItem_m13034_gshared((Collection_1_t2775 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::Remove(T)
#define Collection_1_Remove_m18792(__this, ___item, method) (bool)Collection_1_Remove_m13035_gshared((Collection_1_t2775 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m18793(__this, ___index, method) (void)Collection_1_RemoveAt_m13036_gshared((Collection_1_t2775 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m18794(__this, ___index, method) (void)Collection_1_RemoveItem_m13037_gshared((Collection_1_t2775 *)__this, (int32_t)___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::get_Count()
#define Collection_1_get_Count_m18795(__this, method) (int32_t)Collection_1_get_Count_m13038_gshared((Collection_1_t2775 *)__this, method)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::get_Item(System.Int32)
#define Collection_1_get_Item_m18796(__this, ___index, method) (Transform_t193 *)Collection_1_get_Item_m13039_gshared((Collection_1_t2775 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m18797(__this, ___index, ___value, method) (void)Collection_1_set_Item_m13040_gshared((Collection_1_t2775 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m18798(__this, ___index, ___item, method) (void)Collection_1_SetItem_m13041_gshared((Collection_1_t2775 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m18799(__this/* static, unused */, ___item, method) (bool)Collection_1_IsValidItem_m13042_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// T System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m18800(__this/* static, unused */, ___item, method) (Transform_t193 *)Collection_1_ConvertItem_m13043_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m18801(__this/* static, unused */, ___list, method) (void)Collection_1_CheckWritable_m13044_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m18802(__this/* static, unused */, ___list, method) (bool)Collection_1_IsSynchronized_m13045_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<UnityEngine.Transform>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m18803(__this/* static, unused */, ___list, method) (bool)Collection_1_IsFixedSize_m13046_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
