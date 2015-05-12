#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>
struct Dictionary_2_t252;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<ITestResult>
struct List_1_t342;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<ITestResult>>
struct KeyCollection_t3251;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<ITestResult>>
struct ValueCollection_t3252;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t2723;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t960;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<ITestResult>>[]
struct KeyValuePair_2U5BU5D_t3253;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<ITestResult>>>
struct IEnumerator_1_t3254;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1561;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Collections.Generic.List`1<ITestResult>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Collections.Generic.List`1<ITestResult>>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_15MethodDeclarations.h"
#define Dictionary_2__ctor_m1471(__this, method) (void)Dictionary_2__ctor_m13376_gshared((Dictionary_2_t2829 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m16066(__this, ___comparer, method) (void)Dictionary_2__ctor_m13378_gshared((Dictionary_2_t2829 *)__this, (Object_t*)___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::.ctor(System.Int32)
#define Dictionary_2__ctor_m16067(__this, ___capacity, method) (void)Dictionary_2__ctor_m13380_gshared((Dictionary_2_t2829 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m16068(__this, ___info, ___context, method) (void)Dictionary_2__ctor_m13382_gshared((Dictionary_2_t2829 *)__this, (SerializationInfo_t960 *)___info, (StreamingContext_t961 )___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m16069(__this, ___key, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_get_Item_m13384_gshared((Dictionary_2_t2829 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m16070(__this, ___key, ___value, method) (void)Dictionary_2_System_Collections_IDictionary_set_Item_m13386_gshared((Dictionary_2_t2829 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m16071(__this, ___key, ___value, method) (void)Dictionary_2_System_Collections_IDictionary_Add_m13388_gshared((Dictionary_2_t2829 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m16072(__this, ___key, method) (void)Dictionary_2_System_Collections_IDictionary_Remove_m13390_gshared((Dictionary_2_t2829 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m16073(__this, method) (bool)Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13392_gshared((Dictionary_2_t2829 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m16074(__this, method) (Object_t *)Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13394_gshared((Dictionary_2_t2829 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m16075(__this, method) (bool)Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13396_gshared((Dictionary_2_t2829 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m16076 (Dictionary_2_t252 * __this, KeyValuePair_2_t257  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m16077 (Dictionary_2_t252 * __this, KeyValuePair_2_t257  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m16078(__this, ___array, ___index, method) (void)Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13400_gshared((Dictionary_2_t2829 *)__this, (KeyValuePair_2U5BU5D_t2830*)___array, (int32_t)___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m16079 (Dictionary_2_t252 * __this, KeyValuePair_2_t257  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m16080(__this, ___array, ___index, method) (void)Dictionary_2_System_Collections_ICollection_CopyTo_m13403_gshared((Dictionary_2_t2829 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m16081(__this, method) (Object_t *)Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13405_gshared((Dictionary_2_t2829 *)__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m16082(__this, method) (Object_t*)Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13407_gshared((Dictionary_2_t2829 *)__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m16083(__this, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13409_gshared((Dictionary_2_t2829 *)__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::get_Count()
#define Dictionary_2_get_Count_m1478(__this, method) (int32_t)Dictionary_2_get_Count_m13411_gshared((Dictionary_2_t2829 *)__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::get_Item(TKey)
#define Dictionary_2_get_Item_m1476(__this, ___key, method) (List_1_t342 *)Dictionary_2_get_Item_m13413_gshared((Dictionary_2_t2829 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m16084(__this, ___key, ___value, method) (void)Dictionary_2_set_Item_m13415_gshared((Dictionary_2_t2829 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m16085(__this, ___capacity, ___hcp, method) (void)Dictionary_2_Init_m13417_gshared((Dictionary_2_t2829 *)__this, (int32_t)___capacity, (Object_t*)___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m16086(__this, ___size, method) (void)Dictionary_2_InitArrays_m13419_gshared((Dictionary_2_t2829 *)__this, (int32_t)___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m16087(__this, ___array, ___index, method) (void)Dictionary_2_CopyToCheck_m13421_gshared((Dictionary_2_t2829 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::make_pair(TKey,TValue)
 KeyValuePair_2_t257  Dictionary_2_make_pair_m16088 (Object_t * __this/* static, unused */, String_t* ___key, List_1_t342 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m16089(__this/* static, unused */, ___key, ___value, method) (String_t*)Dictionary_2_pick_key_m13424_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m16090(__this/* static, unused */, ___key, ___value, method) (List_1_t342 *)Dictionary_2_pick_value_m13426_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m16091(__this, ___array, ___index, method) (void)Dictionary_2_CopyTo_m13428_gshared((Dictionary_2_t2829 *)__this, (KeyValuePair_2U5BU5D_t2830*)___array, (int32_t)___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::Resize()
#define Dictionary_2_Resize_m16092(__this, method) (void)Dictionary_2_Resize_m13430_gshared((Dictionary_2_t2829 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::Add(TKey,TValue)
#define Dictionary_2_Add_m1475(__this, ___key, ___value, method) (void)Dictionary_2_Add_m13431_gshared((Dictionary_2_t2829 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::Clear()
#define Dictionary_2_Clear_m16093(__this, method) (void)Dictionary_2_Clear_m13433_gshared((Dictionary_2_t2829 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m1473(__this, ___key, method) (bool)Dictionary_2_ContainsKey_m13435_gshared((Dictionary_2_t2829 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m16094(__this, ___value, method) (bool)Dictionary_2_ContainsValue_m13437_gshared((Dictionary_2_t2829 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m16095(__this, ___info, ___context, method) (void)Dictionary_2_GetObjectData_m13439_gshared((Dictionary_2_t2829 *)__this, (SerializationInfo_t960 *)___info, (StreamingContext_t961 )___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m16096(__this, ___sender, method) (void)Dictionary_2_OnDeserialization_m13441_gshared((Dictionary_2_t2829 *)__this, (Object_t *)___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::Remove(TKey)
#define Dictionary_2_Remove_m16097(__this, ___key, method) (bool)Dictionary_2_Remove_m13443_gshared((Dictionary_2_t2829 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m16098(__this, ___key, ___value, method) (bool)Dictionary_2_TryGetValue_m13445_gshared((Dictionary_2_t2829 *)__this, (Object_t *)___key, (Object_t **)___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::get_Keys()
#define Dictionary_2_get_Keys_m16099(__this, method) (KeyCollection_t3251 *)Dictionary_2_get_Keys_m13447_gshared((Dictionary_2_t2829 *)__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::get_Values()
#define Dictionary_2_get_Values_m16100(__this, method) (ValueCollection_t3252 *)Dictionary_2_get_Values_m13449_gshared((Dictionary_2_t2829 *)__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m16101(__this, ___key, method) (String_t*)Dictionary_2_ToTKey_m13451_gshared((Dictionary_2_t2829 *)__this, (Object_t *)___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m16102(__this, ___value, method) (List_1_t342 *)Dictionary_2_ToTValue_m13453_gshared((Dictionary_2_t2829 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_ContainsKeyValuePair_m16103 (Dictionary_2_t252 * __this, KeyValuePair_2_t257  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::GetEnumerator()
 Enumerator_t345  Dictionary_2_GetEnumerator_m1485 (Dictionary_2_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<ITestResult>>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m16104(__this/* static, unused */, ___key, ___value, method) (DictionaryEntry_t1564 )Dictionary_2_U3CCopyToU3Em__0_m13456_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)
