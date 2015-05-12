#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2848;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t2852;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t2853;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2850;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t971;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2849;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t19;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2854;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1573;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
 void Dictionary_2__ctor_m13586_gshared (Dictionary_2_t2848 * __this, MethodInfo* method);
#define Dictionary_2__ctor_m13586(__this, method) (void)Dictionary_2__ctor_m13586_gshared((Dictionary_2_t2848 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2__ctor_m13588_gshared (Dictionary_2_t2848 * __this, Object_t* ___comparer, MethodInfo* method);
#define Dictionary_2__ctor_m13588(__this, ___comparer, method) (void)Dictionary_2__ctor_m13588_gshared((Dictionary_2_t2848 *)__this, (Object_t*)___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
 void Dictionary_2__ctor_m13590_gshared (Dictionary_2_t2848 * __this, int32_t ___capacity, MethodInfo* method);
#define Dictionary_2__ctor_m13590(__this, ___capacity, method) (void)Dictionary_2__ctor_m13590_gshared((Dictionary_2_t2848 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2__ctor_m13592_gshared (Dictionary_2_t2848 * __this, SerializationInfo_t971 * ___info, StreamingContext_t972  ___context, MethodInfo* method);
#define Dictionary_2__ctor_m13592(__this, ___info, ___context, method) (void)Dictionary_2__ctor_m13592_gshared((Dictionary_2_t2848 *)__this, (SerializationInfo_t971 *)___info, (StreamingContext_t972 )___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m13594_gshared (Dictionary_2_t2848 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m13594(__this, ___key, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_get_Item_m13594_gshared((Dictionary_2_t2848 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_set_Item_m13596_gshared (Dictionary_2_t2848 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m13596(__this, ___key, ___value, method) (void)Dictionary_2_System_Collections_IDictionary_set_Item_m13596_gshared((Dictionary_2_t2848 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_Add_m13598_gshared (Dictionary_2_t2848 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m13598(__this, ___key, ___value, method) (void)Dictionary_2_System_Collections_IDictionary_Add_m13598_gshared((Dictionary_2_t2848 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
 void Dictionary_2_System_Collections_IDictionary_Remove_m13600_gshared (Dictionary_2_t2848 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m13600(__this, ___key, method) (void)Dictionary_2_System_Collections_IDictionary_Remove_m13600_gshared((Dictionary_2_t2848 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
 bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13602_gshared (Dictionary_2_t2848 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13602(__this, method) (bool)Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13602_gshared((Dictionary_2_t2848 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13604_gshared (Dictionary_2_t2848 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13604(__this, method) (Object_t *)Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13604_gshared((Dictionary_2_t2848 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13606_gshared (Dictionary_2_t2848 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13606(__this, method) (bool)Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13606_gshared((Dictionary_2_t2848 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13666 (Dictionary_2_t2848 * __this, KeyValuePair_2_t2840  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13667 (Dictionary_2_t2848 * __this, KeyValuePair_2_t2840  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13610_gshared (Dictionary_2_t2848 * __this, KeyValuePair_2U5BU5D_t2849* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13610(__this, ___array, ___index, method) (void)Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13610_gshared((Dictionary_2_t2848 *)__this, (KeyValuePair_2U5BU5D_t2849*)___array, (int32_t)___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13668 (Dictionary_2_t2848 * __this, KeyValuePair_2_t2840  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Dictionary_2_System_Collections_ICollection_CopyTo_m13613_gshared (Dictionary_2_t2848 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m13613(__this, ___array, ___index, method) (void)Dictionary_2_System_Collections_ICollection_CopyTo_m13613_gshared((Dictionary_2_t2848 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13615_gshared (Dictionary_2_t2848 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13615(__this, method) (Object_t *)Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13615_gshared((Dictionary_2_t2848 *)__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
 Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13617_gshared (Dictionary_2_t2848 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13617(__this, method) (Object_t*)Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13617_gshared((Dictionary_2_t2848 *)__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13619_gshared (Dictionary_2_t2848 * __this, MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13619(__this, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13619_gshared((Dictionary_2_t2848 *)__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
 int32_t Dictionary_2_get_Count_m13620_gshared (Dictionary_2_t2848 * __this, MethodInfo* method);
#define Dictionary_2_get_Count_m13620(__this, method) (int32_t)Dictionary_2_get_Count_m13620_gshared((Dictionary_2_t2848 *)__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
 Object_t * Dictionary_2_get_Item_m13622_gshared (Dictionary_2_t2848 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_get_Item_m13622(__this, ___key, method) (Object_t *)Dictionary_2_get_Item_m13622_gshared((Dictionary_2_t2848 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
 void Dictionary_2_set_Item_m13624_gshared (Dictionary_2_t2848 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_set_Item_m13624(__this, ___key, ___value, method) (void)Dictionary_2_set_Item_m13624_gshared((Dictionary_2_t2848 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2_Init_m13626_gshared (Dictionary_2_t2848 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method);
#define Dictionary_2_Init_m13626(__this, ___capacity, ___hcp, method) (void)Dictionary_2_Init_m13626_gshared((Dictionary_2_t2848 *)__this, (int32_t)___capacity, (Object_t*)___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
 void Dictionary_2_InitArrays_m13628_gshared (Dictionary_2_t2848 * __this, int32_t ___size, MethodInfo* method);
#define Dictionary_2_InitArrays_m13628(__this, ___size, method) (void)Dictionary_2_InitArrays_m13628_gshared((Dictionary_2_t2848 *)__this, (int32_t)___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
 void Dictionary_2_CopyToCheck_m13630_gshared (Dictionary_2_t2848 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyToCheck_m13630(__this, ___array, ___index, method) (void)Dictionary_2_CopyToCheck_m13630_gshared((Dictionary_2_t2848 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
 KeyValuePair_2_t2840  Dictionary_2_make_pair_m13669 (Object_t * __this/* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
 Object_t * Dictionary_2_pick_key_m13633_gshared (Object_t * __this/* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_pick_key_m13633(__this/* static, unused */, ___key, ___value, method) (Object_t *)Dictionary_2_pick_key_m13633_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
 Object_t * Dictionary_2_pick_value_m13635_gshared (Object_t * __this/* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_pick_value_m13635(__this/* static, unused */, ___key, ___value, method) (Object_t *)Dictionary_2_pick_value_m13635_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_CopyTo_m13637_gshared (Dictionary_2_t2848 * __this, KeyValuePair_2U5BU5D_t2849* ___array, int32_t ___index, MethodInfo* method);
#define Dictionary_2_CopyTo_m13637(__this, ___array, ___index, method) (void)Dictionary_2_CopyTo_m13637_gshared((Dictionary_2_t2848 *)__this, (KeyValuePair_2U5BU5D_t2849*)___array, (int32_t)___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
 void Dictionary_2_Resize_m13639_gshared (Dictionary_2_t2848 * __this, MethodInfo* method);
#define Dictionary_2_Resize_m13639(__this, method) (void)Dictionary_2_Resize_m13639_gshared((Dictionary_2_t2848 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
 void Dictionary_2_Add_m13640_gshared (Dictionary_2_t2848 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_Add_m13640(__this, ___key, ___value, method) (void)Dictionary_2_Add_m13640_gshared((Dictionary_2_t2848 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
 void Dictionary_2_Clear_m13642_gshared (Dictionary_2_t2848 * __this, MethodInfo* method);
#define Dictionary_2_Clear_m13642(__this, method) (void)Dictionary_2_Clear_m13642_gshared((Dictionary_2_t2848 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
 bool Dictionary_2_ContainsKey_m13644_gshared (Dictionary_2_t2848 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ContainsKey_m13644(__this, ___key, method) (bool)Dictionary_2_ContainsKey_m13644_gshared((Dictionary_2_t2848 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
 bool Dictionary_2_ContainsValue_m13646_gshared (Dictionary_2_t2848 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ContainsValue_m13646(__this, ___value, method) (bool)Dictionary_2_ContainsValue_m13646_gshared((Dictionary_2_t2848 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2_GetObjectData_m13648_gshared (Dictionary_2_t2848 * __this, SerializationInfo_t971 * ___info, StreamingContext_t972  ___context, MethodInfo* method);
#define Dictionary_2_GetObjectData_m13648(__this, ___info, ___context, method) (void)Dictionary_2_GetObjectData_m13648_gshared((Dictionary_2_t2848 *)__this, (SerializationInfo_t971 *)___info, (StreamingContext_t972 )___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
 void Dictionary_2_OnDeserialization_m13650_gshared (Dictionary_2_t2848 * __this, Object_t * ___sender, MethodInfo* method);
#define Dictionary_2_OnDeserialization_m13650(__this, ___sender, method) (void)Dictionary_2_OnDeserialization_m13650_gshared((Dictionary_2_t2848 *)__this, (Object_t *)___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
 bool Dictionary_2_Remove_m13652_gshared (Dictionary_2_t2848 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_Remove_m13652(__this, ___key, method) (bool)Dictionary_2_Remove_m13652_gshared((Dictionary_2_t2848 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
 bool Dictionary_2_TryGetValue_m13654_gshared (Dictionary_2_t2848 * __this, Object_t * ___key, Object_t ** ___value, MethodInfo* method);
#define Dictionary_2_TryGetValue_m13654(__this, ___key, ___value, method) (bool)Dictionary_2_TryGetValue_m13654_gshared((Dictionary_2_t2848 *)__this, (Object_t *)___key, (Object_t **)___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
 KeyCollection_t2852 * Dictionary_2_get_Keys_m13656_gshared (Dictionary_2_t2848 * __this, MethodInfo* method);
#define Dictionary_2_get_Keys_m13656(__this, method) (KeyCollection_t2852 *)Dictionary_2_get_Keys_m13656_gshared((Dictionary_2_t2848 *)__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
 ValueCollection_t2853 * Dictionary_2_get_Values_m13658_gshared (Dictionary_2_t2848 * __this, MethodInfo* method);
#define Dictionary_2_get_Values_m13658(__this, method) (ValueCollection_t2853 *)Dictionary_2_get_Values_m13658_gshared((Dictionary_2_t2848 *)__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
 Object_t * Dictionary_2_ToTKey_m13660_gshared (Dictionary_2_t2848 * __this, Object_t * ___key, MethodInfo* method);
#define Dictionary_2_ToTKey_m13660(__this, ___key, method) (Object_t *)Dictionary_2_ToTKey_m13660_gshared((Dictionary_2_t2848 *)__this, (Object_t *)___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
 Object_t * Dictionary_2_ToTValue_m13662_gshared (Dictionary_2_t2848 * __this, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_ToTValue_m13662(__this, ___value, method) (Object_t *)Dictionary_2_ToTValue_m13662_gshared((Dictionary_2_t2848 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_ContainsKeyValuePair_m13670 (Dictionary_2_t2848 * __this, KeyValuePair_2_t2840  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
 Enumerator_t2855  Dictionary_2_GetEnumerator_m13671 (Dictionary_2_t2848 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
 DictionaryEntry_t1576  Dictionary_2_U3CCopyToU3Em__0_m13665_gshared (Object_t * __this/* static, unused */, Object_t * ___key, Object_t * ___value, MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m13665(__this/* static, unused */, ___key, ___value, method) (DictionaryEntry_t1576 )Dictionary_2_U3CCopyToU3Em__0_m13665_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)
