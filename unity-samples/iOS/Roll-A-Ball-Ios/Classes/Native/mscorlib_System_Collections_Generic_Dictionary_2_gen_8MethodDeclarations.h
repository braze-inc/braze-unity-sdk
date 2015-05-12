#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>
struct Dictionary_2_t736;
// System.Object
struct Object_t;
// UnityEngine.UI.ICanvasElement
struct ICanvasElement_t551;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.UI.ICanvasElement,System.Int32>
struct KeyCollection_t3739;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>
struct ValueCollection_t3740;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.UI.ICanvasElement>
struct IEqualityComparer_1_t3737;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t960;
// System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>[]
struct KeyValuePair_2U5BU5D_t3741;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>>
struct IEnumerator_1_t3743;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1561;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"
// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.UI.ICanvasElement,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__8.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor()
 void Dictionary_2__ctor_m19360 (Dictionary_2_t736 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2__ctor_m19361 (Dictionary_2_t736 * __this, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor(System.Int32)
 void Dictionary_2__ctor_m19362 (Dictionary_2_t736 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2__ctor_m19363 (Dictionary_2_t736 * __this, SerializationInfo_t960 * ___info, StreamingContext_t961  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
 Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m19364 (Dictionary_2_t736 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_set_Item_m19365 (Dictionary_2_t736 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
 void Dictionary_2_System_Collections_IDictionary_Add_m19366 (Dictionary_2_t736 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
 void Dictionary_2_System_Collections_IDictionary_Remove_m19367 (Dictionary_2_t736 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
 bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m19368 (Dictionary_2_t736 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m19369 (Dictionary_2_t736 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m19370 (Dictionary_2_t736 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m19371 (Dictionary_2_t736 * __this, KeyValuePair_2_t3742  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m19372 (Dictionary_2_t736 * __this, KeyValuePair_2_t3742  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m19373 (Dictionary_2_t736 * __this, KeyValuePair_2U5BU5D_t3741* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m19374 (Dictionary_2_t736 * __this, KeyValuePair_2_t3742  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Dictionary_2_System_Collections_ICollection_CopyTo_m19375 (Dictionary_2_t736 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m19376 (Dictionary_2_t736 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
 Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m19377 (Dictionary_2_t736 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::System.Collections.IDictionary.GetEnumerator()
 Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m19378 (Dictionary_2_t736 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::get_Count()
 int32_t Dictionary_2_get_Count_m19379 (Dictionary_2_t736 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::get_Item(TKey)
 int32_t Dictionary_2_get_Item_m19380 (Dictionary_2_t736 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::set_Item(TKey,TValue)
 void Dictionary_2_set_Item_m19381 (Dictionary_2_t736 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
 void Dictionary_2_Init_m19382 (Dictionary_2_t736 * __this, int32_t ___capacity, Object_t* ___hcp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::InitArrays(System.Int32)
 void Dictionary_2_InitArrays_m19383 (Dictionary_2_t736 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::CopyToCheck(System.Array,System.Int32)
 void Dictionary_2_CopyToCheck_m19384 (Dictionary_2_t736 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::make_pair(TKey,TValue)
 KeyValuePair_2_t3742  Dictionary_2_make_pair_m19385 (Object_t * __this/* static, unused */, Object_t * ___key, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::pick_key(TKey,TValue)
 Object_t * Dictionary_2_pick_key_m19386 (Object_t * __this/* static, unused */, Object_t * ___key, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::pick_value(TKey,TValue)
 int32_t Dictionary_2_pick_value_m19387 (Object_t * __this/* static, unused */, Object_t * ___key, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
 void Dictionary_2_CopyTo_m19388 (Dictionary_2_t736 * __this, KeyValuePair_2U5BU5D_t3741* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Resize()
 void Dictionary_2_Resize_m19389 (Dictionary_2_t736 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Add(TKey,TValue)
 void Dictionary_2_Add_m19390 (Dictionary_2_t736 * __this, Object_t * ___key, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Clear()
 void Dictionary_2_Clear_m19391 (Dictionary_2_t736 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::ContainsKey(TKey)
 bool Dictionary_2_ContainsKey_m19392 (Dictionary_2_t736 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::ContainsValue(TValue)
 bool Dictionary_2_ContainsValue_m19393 (Dictionary_2_t736 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Dictionary_2_GetObjectData_m19394 (Dictionary_2_t736 * __this, SerializationInfo_t960 * ___info, StreamingContext_t961  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::OnDeserialization(System.Object)
 void Dictionary_2_OnDeserialization_m19395 (Dictionary_2_t736 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::Remove(TKey)
 bool Dictionary_2_Remove_m19396 (Dictionary_2_t736 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::TryGetValue(TKey,TValue&)
 bool Dictionary_2_TryGetValue_m19397 (Dictionary_2_t736 * __this, Object_t * ___key, int32_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::get_Keys()
 KeyCollection_t3739 * Dictionary_2_get_Keys_m19398 (Dictionary_2_t736 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::get_Values()
 ValueCollection_t3740 * Dictionary_2_get_Values_m19399 (Dictionary_2_t736 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::ToTKey(System.Object)
 Object_t * Dictionary_2_ToTKey_m19400 (Dictionary_2_t736 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TValue System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::ToTValue(System.Object)
 int32_t Dictionary_2_ToTValue_m19401 (Dictionary_2_t736 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_ContainsKeyValuePair_m19402 (Dictionary_2_t736 * __this, KeyValuePair_2_t3742  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::GetEnumerator()
 Enumerator_t3744  Dictionary_2_GetEnumerator_m19403 (Dictionary_2_t736 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>::<CopyTo>m__0(TKey,TValue)
 DictionaryEntry_t1564  Dictionary_2_U3CCopyToU3Em__0_m19404 (Object_t * __this/* static, unused */, Object_t * ___key, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
