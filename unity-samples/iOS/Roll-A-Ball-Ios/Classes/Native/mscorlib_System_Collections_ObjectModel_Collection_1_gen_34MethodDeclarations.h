#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Type>
struct Collection_1_t4457;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t19;
// System.Type[]
struct TypeU5BU5D_t160;
// System.Collections.Generic.IEnumerator`1<System.Type>
struct IEnumerator_1_t254;
// System.Collections.Generic.IList`1<System.Type>
struct IList_1_t4456;

// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::.ctor()
// System.Collections.ObjectModel.Collection`1<System.Object>
#include "mscorlib_System_Collections_ObjectModel_Collection_1_genMethodDeclarations.h"
#define Collection_1__ctor_m24123(__this, method) (void)Collection_1__ctor_m13011_gshared((Collection_1_t2775 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24124(__this, method) (bool)Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13012_gshared((Collection_1_t2775 *)__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Collection_1_System_Collections_ICollection_CopyTo_m24125(__this, ___array, ___index, method) (void)Collection_1_System_Collections_ICollection_CopyTo_m13013_gshared((Collection_1_t2775 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.IEnumerable.GetEnumerator()
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m24126(__this, method) (Object_t *)Collection_1_System_Collections_IEnumerable_GetEnumerator_m13014_gshared((Collection_1_t2775 *)__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.IList.Add(System.Object)
#define Collection_1_System_Collections_IList_Add_m24127(__this, ___value, method) (int32_t)Collection_1_System_Collections_IList_Add_m13015_gshared((Collection_1_t2775 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.IList.Contains(System.Object)
#define Collection_1_System_Collections_IList_Contains_m24128(__this, ___value, method) (bool)Collection_1_System_Collections_IList_Contains_m13016_gshared((Collection_1_t2775 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.IList.IndexOf(System.Object)
#define Collection_1_System_Collections_IList_IndexOf_m24129(__this, ___value, method) (int32_t)Collection_1_System_Collections_IList_IndexOf_m13017_gshared((Collection_1_t2775 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.IList.Insert(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_Insert_m24130(__this, ___index, ___value, method) (void)Collection_1_System_Collections_IList_Insert_m13018_gshared((Collection_1_t2775 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.IList.Remove(System.Object)
#define Collection_1_System_Collections_IList_Remove_m24131(__this, ___value, method) (void)Collection_1_System_Collections_IList_Remove_m13019_gshared((Collection_1_t2775 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.ICollection.get_IsSynchronized()
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m24132(__this, method) (bool)Collection_1_System_Collections_ICollection_get_IsSynchronized_m13020_gshared((Collection_1_t2775 *)__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.ICollection.get_SyncRoot()
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m24133(__this, method) (Object_t *)Collection_1_System_Collections_ICollection_get_SyncRoot_m13021_gshared((Collection_1_t2775 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.IList.get_IsFixedSize()
#define Collection_1_System_Collections_IList_get_IsFixedSize_m24134(__this, method) (bool)Collection_1_System_Collections_IList_get_IsFixedSize_m13022_gshared((Collection_1_t2775 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.IList.get_IsReadOnly()
#define Collection_1_System_Collections_IList_get_IsReadOnly_m24135(__this, method) (bool)Collection_1_System_Collections_IList_get_IsReadOnly_m13023_gshared((Collection_1_t2775 *)__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.IList.get_Item(System.Int32)
#define Collection_1_System_Collections_IList_get_Item_m24136(__this, ___index, method) (Object_t *)Collection_1_System_Collections_IList_get_Item_m13024_gshared((Collection_1_t2775 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define Collection_1_System_Collections_IList_set_Item_m24137(__this, ___index, ___value, method) (void)Collection_1_System_Collections_IList_set_Item_m13025_gshared((Collection_1_t2775 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::Add(T)
#define Collection_1_Add_m24138(__this, ___item, method) (void)Collection_1_Add_m13026_gshared((Collection_1_t2775 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::Clear()
#define Collection_1_Clear_m24139(__this, method) (void)Collection_1_Clear_m13027_gshared((Collection_1_t2775 *)__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::ClearItems()
#define Collection_1_ClearItems_m24140(__this, method) (void)Collection_1_ClearItems_m13028_gshared((Collection_1_t2775 *)__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Type>::Contains(T)
#define Collection_1_Contains_m24141(__this, ___item, method) (bool)Collection_1_Contains_m13029_gshared((Collection_1_t2775 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::CopyTo(T[],System.Int32)
#define Collection_1_CopyTo_m24142(__this, ___array, ___index, method) (void)Collection_1_CopyTo_m13030_gshared((Collection_1_t2775 *)__this, (ObjectU5BU5D_t96*)___array, (int32_t)___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Type>::GetEnumerator()
#define Collection_1_GetEnumerator_m24143(__this, method) (Object_t*)Collection_1_GetEnumerator_m13031_gshared((Collection_1_t2775 *)__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Type>::IndexOf(T)
#define Collection_1_IndexOf_m24144(__this, ___item, method) (int32_t)Collection_1_IndexOf_m13032_gshared((Collection_1_t2775 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::Insert(System.Int32,T)
#define Collection_1_Insert_m24145(__this, ___index, ___item, method) (void)Collection_1_Insert_m13033_gshared((Collection_1_t2775 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::InsertItem(System.Int32,T)
#define Collection_1_InsertItem_m24146(__this, ___index, ___item, method) (void)Collection_1_InsertItem_m13034_gshared((Collection_1_t2775 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Type>::Remove(T)
#define Collection_1_Remove_m24147(__this, ___item, method) (bool)Collection_1_Remove_m13035_gshared((Collection_1_t2775 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::RemoveAt(System.Int32)
#define Collection_1_RemoveAt_m24148(__this, ___index, method) (void)Collection_1_RemoveAt_m13036_gshared((Collection_1_t2775 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::RemoveItem(System.Int32)
#define Collection_1_RemoveItem_m24149(__this, ___index, method) (void)Collection_1_RemoveItem_m13037_gshared((Collection_1_t2775 *)__this, (int32_t)___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Type>::get_Count()
#define Collection_1_get_Count_m24150(__this, method) (int32_t)Collection_1_get_Count_m13038_gshared((Collection_1_t2775 *)__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Type>::get_Item(System.Int32)
#define Collection_1_get_Item_m24151(__this, ___index, method) (Type_t *)Collection_1_get_Item_m13039_gshared((Collection_1_t2775 *)__this, (int32_t)___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::set_Item(System.Int32,T)
#define Collection_1_set_Item_m24152(__this, ___index, ___value, method) (void)Collection_1_set_Item_m13040_gshared((Collection_1_t2775 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::SetItem(System.Int32,T)
#define Collection_1_SetItem_m24153(__this, ___index, ___item, method) (void)Collection_1_SetItem_m13041_gshared((Collection_1_t2775 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Type>::IsValidItem(System.Object)
#define Collection_1_IsValidItem_m24154(__this/* static, unused */, ___item, method) (bool)Collection_1_IsValidItem_m13042_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Type>::ConvertItem(System.Object)
#define Collection_1_ConvertItem_m24155(__this/* static, unused */, ___item, method) (Type_t *)Collection_1_ConvertItem_m13043_gshared((Object_t *)__this/* static, unused */, (Object_t *)___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Type>::CheckWritable(System.Collections.Generic.IList`1<T>)
#define Collection_1_CheckWritable_m24156(__this/* static, unused */, ___list, method) (void)Collection_1_CheckWritable_m13044_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Type>::IsSynchronized(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsSynchronized_m24157(__this/* static, unused */, ___list, method) (bool)Collection_1_IsSynchronized_m13045_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Type>::IsFixedSize(System.Collections.Generic.IList`1<T>)
#define Collection_1_IsFixedSize_m24158(__this/* static, unused */, ___list, method) (bool)Collection_1_IsFixedSize_m13046_gshared((Object_t *)__this/* static, unused */, (Object_t*)___list, method)
