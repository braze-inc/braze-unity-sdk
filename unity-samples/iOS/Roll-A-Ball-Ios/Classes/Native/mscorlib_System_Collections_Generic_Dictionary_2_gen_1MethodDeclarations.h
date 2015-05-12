#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t109;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t2884;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_t2885;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t2723;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t960;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t2886;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t73;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1561;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_15MethodDeclarations.h"
#define Dictionary_2__ctor_m577(__this, method) (void)Dictionary_2__ctor_m13376_gshared((Dictionary_2_t2829 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2__ctor_m13934(__this, ___comparer, method) (void)Dictionary_2__ctor_m13378_gshared((Dictionary_2_t2829 *)__this, (Object_t*)___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Int32)
#define Dictionary_2__ctor_m13935(__this, ___capacity, method) (void)Dictionary_2__ctor_m13380_gshared((Dictionary_2_t2829 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2__ctor_m13936(__this, ___info, ___context, method) (void)Dictionary_2__ctor_m13382_gshared((Dictionary_2_t2829 *)__this, (SerializationInfo_t960 *)___info, (StreamingContext_t961 )___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
#define Dictionary_2_System_Collections_IDictionary_get_Item_m13937(__this, ___key, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_get_Item_m13384_gshared((Dictionary_2_t2829 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_set_Item_m13938(__this, ___key, ___value, method) (void)Dictionary_2_System_Collections_IDictionary_set_Item_m13386_gshared((Dictionary_2_t2829 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
#define Dictionary_2_System_Collections_IDictionary_Add_m13939(__this, ___key, ___value, method) (void)Dictionary_2_System_Collections_IDictionary_Add_m13388_gshared((Dictionary_2_t2829 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.Remove(System.Object)
#define Dictionary_2_System_Collections_IDictionary_Remove_m13940(__this, ___key, method) (void)Dictionary_2_System_Collections_IDictionary_Remove_m13390_gshared((Dictionary_2_t2829 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.ICollection.get_IsSynchronized()
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13941(__this, method) (bool)Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13392_gshared((Dictionary_2_t2829 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.ICollection.get_SyncRoot()
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13942(__this, method) (Object_t *)Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13394_gshared((Dictionary_2_t2829 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13943(__this, method) (bool)Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13396_gshared((Dictionary_2_t2829 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13944 (Dictionary_2_t109 * __this, KeyValuePair_2_t74  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13945 (Dictionary_2_t109 * __this, KeyValuePair_2_t74  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13946(__this, ___array, ___index, method) (void)Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13400_gshared((Dictionary_2_t2829 *)__this, (KeyValuePair_2U5BU5D_t2830*)___array, (int32_t)___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13947 (Dictionary_2_t109 * __this, KeyValuePair_2_t74  ___keyValuePair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define Dictionary_2_System_Collections_ICollection_CopyTo_m13948(__this, ___array, ___index, method) (void)Dictionary_2_System_Collections_ICollection_CopyTo_m13403_gshared((Dictionary_2_t2829 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IEnumerable.GetEnumerator()
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13949(__this, method) (Object_t *)Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13405_gshared((Dictionary_2_t2829 *)__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13950(__this, method) (Object_t*)Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13407_gshared((Dictionary_2_t2829 *)__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.String,System.Object>::System.Collections.IDictionary.GetEnumerator()
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13951(__this, method) (Object_t *)Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13409_gshared((Dictionary_2_t2829 *)__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Count()
#define Dictionary_2_get_Count_m13952(__this, method) (int32_t)Dictionary_2_get_Count_m13411_gshared((Dictionary_2_t2829 *)__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(TKey)
#define Dictionary_2_get_Item_m13953(__this, ___key, method) (Object_t *)Dictionary_2_get_Item_m13413_gshared((Dictionary_2_t2829 *)__this, (Object_t *)___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(TKey,TValue)
#define Dictionary_2_set_Item_m13954(__this, ___key, ___value, method) (void)Dictionary_2_set_Item_m13415_gshared((Dictionary_2_t2829 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
#define Dictionary_2_Init_m13955(__this, ___capacity, ___hcp, method) (void)Dictionary_2_Init_m13417_gshared((Dictionary_2_t2829 *)__this, (int32_t)___capacity, (Object_t*)___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::InitArrays(System.Int32)
#define Dictionary_2_InitArrays_m13956(__this, ___size, method) (void)Dictionary_2_InitArrays_m13419_gshared((Dictionary_2_t2829 *)__this, (int32_t)___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::CopyToCheck(System.Array,System.Int32)
#define Dictionary_2_CopyToCheck_m13957(__this, ___array, ___index, method) (void)Dictionary_2_CopyToCheck_m13421_gshared((Dictionary_2_t2829 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::make_pair(TKey,TValue)
 KeyValuePair_2_t74  Dictionary_2_make_pair_m13958 (Object_t * __this/* static, unused */, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Object>::pick_key(TKey,TValue)
#define Dictionary_2_pick_key_m13959(__this/* static, unused */, ___key, ___value, method) (String_t*)Dictionary_2_pick_key_m13424_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::pick_value(TKey,TValue)
#define Dictionary_2_pick_value_m13960(__this/* static, unused */, ___key, ___value, method) (Object_t *)Dictionary_2_pick_value_m13426_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
#define Dictionary_2_CopyTo_m13961(__this, ___array, ___index, method) (void)Dictionary_2_CopyTo_m13428_gshared((Dictionary_2_t2829 *)__this, (KeyValuePair_2U5BU5D_t2830*)___array, (int32_t)___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Resize()
#define Dictionary_2_Resize_m13962(__this, method) (void)Dictionary_2_Resize_m13430_gshared((Dictionary_2_t2829 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(TKey,TValue)
#define Dictionary_2_Add_m13963(__this, ___key, ___value, method) (void)Dictionary_2_Add_m13431_gshared((Dictionary_2_t2829 *)__this, (Object_t *)___key, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Clear()
#define Dictionary_2_Clear_m13964(__this, method) (void)Dictionary_2_Clear_m13433_gshared((Dictionary_2_t2829 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(TKey)
#define Dictionary_2_ContainsKey_m13965(__this, ___key, method) (bool)Dictionary_2_ContainsKey_m13435_gshared((Dictionary_2_t2829 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsValue(TValue)
#define Dictionary_2_ContainsValue_m13966(__this, ___value, method) (bool)Dictionary_2_ContainsValue_m13437_gshared((Dictionary_2_t2829 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
#define Dictionary_2_GetObjectData_m13967(__this, ___info, ___context, method) (void)Dictionary_2_GetObjectData_m13439_gshared((Dictionary_2_t2829 *)__this, (SerializationInfo_t960 *)___info, (StreamingContext_t961 )___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::OnDeserialization(System.Object)
#define Dictionary_2_OnDeserialization_m13968(__this, ___sender, method) (void)Dictionary_2_OnDeserialization_m13441_gshared((Dictionary_2_t2829 *)__this, (Object_t *)___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::Remove(TKey)
#define Dictionary_2_Remove_m13969(__this, ___key, method) (bool)Dictionary_2_Remove_m13443_gshared((Dictionary_2_t2829 *)__this, (Object_t *)___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::TryGetValue(TKey,TValue&)
#define Dictionary_2_TryGetValue_m13970(__this, ___key, ___value, method) (bool)Dictionary_2_TryGetValue_m13445_gshared((Dictionary_2_t2829 *)__this, (Object_t *)___key, (Object_t **)___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Keys()
#define Dictionary_2_get_Keys_m13971(__this, method) (KeyCollection_t2884 *)Dictionary_2_get_Keys_m13447_gshared((Dictionary_2_t2829 *)__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Values()
#define Dictionary_2_get_Values_m13972(__this, method) (ValueCollection_t2885 *)Dictionary_2_get_Values_m13449_gshared((Dictionary_2_t2829 *)__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.String,System.Object>::ToTKey(System.Object)
#define Dictionary_2_ToTKey_m13973(__this, ___key, method) (String_t*)Dictionary_2_ToTKey_m13451_gshared((Dictionary_2_t2829 *)__this, (Object_t *)___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::ToTValue(System.Object)
#define Dictionary_2_ToTValue_m13974(__this, ___value, method) (Object_t *)Dictionary_2_ToTValue_m13453_gshared((Dictionary_2_t2829 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
 bool Dictionary_2_ContainsKeyValuePair_m13975 (Dictionary_2_t109 * __this, KeyValuePair_2_t74  ___pair, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::GetEnumerator()
 Enumerator_t2887  Dictionary_2_GetEnumerator_m13976 (Dictionary_2_t109 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.String,System.Object>::<CopyTo>m__0(TKey,TValue)
#define Dictionary_2_U3CCopyToU3Em__0_m13977(__this/* static, unused */, ___key, ___value, method) (DictionaryEntry_t1564 )Dictionary_2_U3CCopyToU3Em__0_m13456_gshared((Object_t *)__this/* static, unused */, (Object_t *)___key, (Object_t *)___value, method)
