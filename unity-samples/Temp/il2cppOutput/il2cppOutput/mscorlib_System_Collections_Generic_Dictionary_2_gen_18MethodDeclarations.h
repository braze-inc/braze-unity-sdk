#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2205;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2165;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t962;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2906;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t66;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t2907;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1192;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t2209;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t2213;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m13529_gshared (Dictionary_2_t2205 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m13529(__this, method) (( void (*) (Dictionary_2_t2205 *, const MethodInfo*))Dictionary_2__ctor_m13529_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m13531_gshared (Dictionary_2_t2205 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m13531(__this, ___comparer, method) (( void (*) (Dictionary_2_t2205 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m13531_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m13532_gshared (Dictionary_2_t2205 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m13532(__this, ___capacity, method) (( void (*) (Dictionary_2_t2205 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m13532_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m13534_gshared (Dictionary_2_t2205 * __this, SerializationInfo_t962 * ___info, StreamingContext_t963  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m13534(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2205 *, SerializationInfo_t962 *, StreamingContext_t963 , const MethodInfo*))Dictionary_2__ctor_m13534_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m13536_gshared (Dictionary_2_t2205 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m13536(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2205 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m13536_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m13538_gshared (Dictionary_2_t2205 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m13538(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2205 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m13538_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m13540_gshared (Dictionary_2_t2205 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m13540(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2205 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m13540_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m13542_gshared (Dictionary_2_t2205 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m13542(__this, ___key, method) (( bool (*) (Dictionary_2_t2205 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m13542_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m13544_gshared (Dictionary_2_t2205 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m13544(__this, ___key, method) (( void (*) (Dictionary_2_t2205 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m13544_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13546_gshared (Dictionary_2_t2205 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13546(__this, method) (( bool (*) (Dictionary_2_t2205 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m13546_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13548_gshared (Dictionary_2_t2205 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13548(__this, method) (( Object_t * (*) (Dictionary_2_t2205 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m13548_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13550_gshared (Dictionary_2_t2205 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13550(__this, method) (( bool (*) (Dictionary_2_t2205 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m13550_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13552_gshared (Dictionary_2_t2205 * __this, KeyValuePair_2_t2207  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13552(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2205 *, KeyValuePair_2_t2207 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m13552_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13554_gshared (Dictionary_2_t2205 * __this, KeyValuePair_2_t2207  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13554(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2205 *, KeyValuePair_2_t2207 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m13554_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13556_gshared (Dictionary_2_t2205 * __this, KeyValuePair_2U5BU5D_t2906* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13556(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2205 *, KeyValuePair_2U5BU5D_t2906*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m13556_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13558_gshared (Dictionary_2_t2205 * __this, KeyValuePair_2_t2207  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13558(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2205 *, KeyValuePair_2_t2207 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m13558_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m13560_gshared (Dictionary_2_t2205 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m13560(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2205 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m13560_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13562_gshared (Dictionary_2_t2205 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13562(__this, method) (( Object_t * (*) (Dictionary_2_t2205 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m13562_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13564_gshared (Dictionary_2_t2205 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13564(__this, method) (( Object_t* (*) (Dictionary_2_t2205 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m13564_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13566_gshared (Dictionary_2_t2205 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13566(__this, method) (( Object_t * (*) (Dictionary_2_t2205 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m13566_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m13568_gshared (Dictionary_2_t2205 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m13568(__this, method) (( int32_t (*) (Dictionary_2_t2205 *, const MethodInfo*))Dictionary_2_get_Count_m13568_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m13570_gshared (Dictionary_2_t2205 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m13570(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2205 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m13570_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m13572_gshared (Dictionary_2_t2205 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m13572(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2205 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m13572_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m13574_gshared (Dictionary_2_t2205 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m13574(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2205 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m13574_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m13576_gshared (Dictionary_2_t2205 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m13576(__this, ___size, method) (( void (*) (Dictionary_2_t2205 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m13576_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m13578_gshared (Dictionary_2_t2205 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m13578(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2205 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m13578_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2207  Dictionary_2_make_pair_m13580_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m13580(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2207  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m13580_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m13582_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m13582(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m13582_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m13584_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m13584(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m13584_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m13586_gshared (Dictionary_2_t2205 * __this, KeyValuePair_2U5BU5D_t2906* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m13586(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2205 *, KeyValuePair_2U5BU5D_t2906*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m13586_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m13588_gshared (Dictionary_2_t2205 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m13588(__this, method) (( void (*) (Dictionary_2_t2205 *, const MethodInfo*))Dictionary_2_Resize_m13588_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m13590_gshared (Dictionary_2_t2205 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m13590(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2205 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m13590_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m13592_gshared (Dictionary_2_t2205 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m13592(__this, method) (( void (*) (Dictionary_2_t2205 *, const MethodInfo*))Dictionary_2_Clear_m13592_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m13594_gshared (Dictionary_2_t2205 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m13594(__this, ___key, method) (( bool (*) (Dictionary_2_t2205 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m13594_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m13596_gshared (Dictionary_2_t2205 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m13596(__this, ___value, method) (( bool (*) (Dictionary_2_t2205 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m13596_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m13598_gshared (Dictionary_2_t2205 * __this, SerializationInfo_t962 * ___info, StreamingContext_t963  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m13598(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2205 *, SerializationInfo_t962 *, StreamingContext_t963 , const MethodInfo*))Dictionary_2_GetObjectData_m13598_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m13600_gshared (Dictionary_2_t2205 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m13600(__this, ___sender, method) (( void (*) (Dictionary_2_t2205 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m13600_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m13602_gshared (Dictionary_2_t2205 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m13602(__this, ___key, method) (( bool (*) (Dictionary_2_t2205 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m13602_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m13604_gshared (Dictionary_2_t2205 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m13604(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2205 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m13604_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t2209 * Dictionary_2_get_Keys_m13605_gshared (Dictionary_2_t2205 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m13605(__this, method) (( KeyCollection_t2209 * (*) (Dictionary_2_t2205 *, const MethodInfo*))Dictionary_2_get_Keys_m13605_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t2213 * Dictionary_2_get_Values_m13607_gshared (Dictionary_2_t2205 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m13607(__this, method) (( ValueCollection_t2213 * (*) (Dictionary_2_t2205 *, const MethodInfo*))Dictionary_2_get_Values_m13607_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m13609_gshared (Dictionary_2_t2205 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m13609(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2205 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m13609_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m13611_gshared (Dictionary_2_t2205 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m13611(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2205 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m13611_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m13613_gshared (Dictionary_2_t2205 * __this, KeyValuePair_2_t2207  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m13613(__this, ___pair, method) (( bool (*) (Dictionary_2_t2205 *, KeyValuePair_2_t2207 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m13613_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2211  Dictionary_2_GetEnumerator_m13615_gshared (Dictionary_2_t2205 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m13615(__this, method) (( Enumerator_t2211  (*) (Dictionary_2_t2205 *, const MethodInfo*))Dictionary_2_GetEnumerator_m13615_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1193  Dictionary_2_U3CCopyToU3Em__0_m13617_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m13617(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1193  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m13617_gshared)(__this /* static, unused */, ___key, ___value, method)
