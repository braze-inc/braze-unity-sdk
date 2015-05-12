#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
struct Dictionary_2_t1134;
// System.Object
struct Object_t;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t1132;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
struct DispatcherKey_t1136;
// System.Collections.Generic.Dictionary`2/KeyCollection<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
struct KeyCollection_t4567;
// System.Collections.Generic.Dictionary`2/ValueCollection<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
struct ValueCollection_t4568;
// System.Collections.Generic.IEqualityComparer`1<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey>
struct IEqualityComparer_1_t1138;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t960;
// System.Collections.Generic.KeyValuePair`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>[]
struct KeyValuePair_2U5BU5D_t4569;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>>
struct IEnumerator_1_t4571;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1561;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"
// System.Collections.Generic.Dictionary`2/Enumerator<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__16.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_15MethodDeclarations.h"
#define Dictionary_2__ctor_m24812(__this, method) (void)Dictionary_2__ctor_m13376_gshared((Dictionary_2_t2829 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m5301(__this, ___comparer, method) (void)Dictionary_2__ctor_m13378_gshared((Dictionary_2_t2829 *)__this, (Object_t*)___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::.ctor(System.Int32)
#define Dictionary_2__ctor_m24813(__this, ___capacity, method) (void)Dictionary_2__ctor_m13380_gshared((Dictionary_2_t2829 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m24814(__this, ___info, ___context, method) (void)Dictionary_2__ctor_m13382_gshared((Dictionary_2_t2829 *)__this, (SerializationInfo_t960 *)___info, (StreamingContext_t961 )___context, method)
// System.Object System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m24815(__this, ___key, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_get_Item_m13384_gshared((Dictionary_2_t2829 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m24816(__this, ___key, ___value, method) (void)Dictionary_2_System_Collections_IDictionary_set_Item_m13386_gshared((Dictionary_2_t2829 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m24817(__this, ___key, ___value, method) (void)Dictionary_2_System_Collections_IDictionary_Add_m13388_gshared((Dictionary_2_t2829 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m24818(__this, ___key, method) (void)Dictionary_2_System_Collections_IDictionary_Remove_m13390_gshared((Dictionary_2_t2829 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m24819(__this, method) (bool)Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13392_gshared((Dictionary_2_t2829 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m24820(__this, method) (Object_t *)Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13394_gshared((Dictionary_2_t2829 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m24821(__this, method) (bool)Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13396_gshared((Dictionary_2_t2829 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m24822 (Dictionary_2_t1134 * __this, KeyValuePair_2_t4570  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m24823 (Dictionary_2_t1134 * __this, KeyValuePair_2_t4570  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m24824(__this, ___array, ___index, method) (void)Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13400_gshared((Dictionary_2_t2829 *)__this, (KeyValuePair_2U5BU5D_t2830*)___array, (int32_t)___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m24825 (Dictionary_2_t1134 * __this, KeyValuePair_2_t4570  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m24826(__this, ___array, ___index, method) (void)Dictionary_2_System_Collections_ICollection_CopyTo_m13403_gshared((Dictionary_2_t2829 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m24827(__this, method) (Object_t *)Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13405_gshared((Dictionary_2_t2829 *)__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m24828(__this, method) (Object_t*)Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13407_gshared((Dictionary_2_t2829 *)__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m24829(__this, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13409_gshared((Dictionary_2_t2829 *)__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::get_Count()
#define Dictionary_2_get_Count_m24830(__this, method) (int32_t)Dictionary_2_get_Count_m13411_gshared((Dictionary_2_t2829 *)__this, method)
// TValue System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::get_Item(TKey)
#define Dictionary_2_get_Item_m24831(__this, ___key, method) (Dispatcher_t1132 *)Dictionary_2_get_Item_m13413_gshared((Dictionary_2_t2829 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m24832(__this, ___key, ___value, method) (void)Dictionary_2_set_Item_m13415_gshared((Dictionary_2_t2829 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m24833(__this, ___capacity, ___hcp, method) (void)Dictionary_2_Init_m13417_gshared((Dictionary_2_t2829 *)__this, (int32_t)___capacity, (Object_t*)___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m24834(__this, ___size, method) (void)Dictionary_2_InitArrays_m13419_gshared((Dictionary_2_t2829 *)__this, (int32_t)___size, method)
// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m24835(__this, ___array, ___index, method) (void)Dictionary_2_CopyToCheck_m13421_gshared((Dictionary_2_t2829 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::make_pair(TKey,TValue)
 KeyValuePair_2_t4570  Dictionary_2_make_pair_m24836 (Object_t * __this/* static, unused */, DispatcherKey_t1136 * ___key, Dispatcher_t1132 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m24837(__this/* static, unused */, ___key, ___value, method) (DispatcherKey_t1136 *)Dictionary_2_pick_key_m13424_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)
// TValue System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m24838(__this/* static, unused */, ___key, ___value, method) (Dispatcher_t1132 *)Dictionary_2_pick_value_m13426_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m24839(__this, ___array, ___index, method) (void)Dictionary_2_CopyTo_m13428_gshared((Dictionary_2_t2829 *)__this, (KeyValuePair_2U5BU5D_t2830*)___array, (int32_t)___index, method)
// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::Resize()
#define Dictionary_2_Resize_m24840(__this, method) (void)Dictionary_2_Resize_m13430_gshared((Dictionary_2_t2829 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::Add(TKey,TValue)
#define Dictionary_2_Add_m5304(__this, ___key, ___value, method) (void)Dictionary_2_Add_m13431_gshared((Dictionary_2_t2829 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::Clear()
#define Dictionary_2_Clear_m24841(__this, method) (void)Dictionary_2_Clear_m13433_gshared((Dictionary_2_t2829 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m24842(__this, ___key, method) (bool)Dictionary_2_ContainsKey_m13435_gshared((Dictionary_2_t2829 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m24843(__this, ___value, method) (bool)Dictionary_2_ContainsValue_m13437_gshared((Dictionary_2_t2829 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m24844(__this, ___info, ___context, method) (void)Dictionary_2_GetObjectData_m13439_gshared((Dictionary_2_t2829 *)__this, (SerializationInfo_t960 *)___info, (StreamingContext_t961 )___context, method)
// System.Void System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m24845(__this, ___sender, method) (void)Dictionary_2_OnDeserialization_m13441_gshared((Dictionary_2_t2829 *)__this, (Object_t *)___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::Remove(TKey)
#define Dictionary_2_Remove_m24846(__this, ___key, method) (bool)Dictionary_2_Remove_m13443_gshared((Dictionary_2_t2829 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m5302(__this, ___key, ___value, method) (bool)Dictionary_2_TryGetValue_m13445_gshared((Dictionary_2_t2829 *)__this, (Object_t *)___key, (Object_t **)___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::get_Keys()
#define Dictionary_2_get_Keys_m24847(__this, method) (KeyCollection_t4567 *)Dictionary_2_get_Keys_m13447_gshared((Dictionary_2_t2829 *)__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::get_Values()
#define Dictionary_2_get_Values_m24848(__this, method) (ValueCollection_t4568 *)Dictionary_2_get_Values_m13449_gshared((Dictionary_2_t2829 *)__this, method)
// TKey System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m24849(__this, ___key, method) (DispatcherKey_t1136 *)Dictionary_2_ToTKey_m13451_gshared((Dictionary_2_t2829 *)__this, (Object_t *)___key, method)
// TValue System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m24850(__this, ___value, method) (Dispatcher_t1132 *)Dictionary_2_ToTValue_m13453_gshared((Dictionary_2_t2829 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_ContainsKeyValuePair_m24851 (Dictionary_2_t1134 * __this, KeyValuePair_2_t4570  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::GetEnumerator()
 Enumerator_t4572  Dictionary_2_GetEnumerator_m24852 (Dictionary_2_t1134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m24853(__this/* static, unused */, ___key, ___value, method) (DictionaryEntry_t1564 )Dictionary_2_U3CCopyToU3Em__0_m13456_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)
