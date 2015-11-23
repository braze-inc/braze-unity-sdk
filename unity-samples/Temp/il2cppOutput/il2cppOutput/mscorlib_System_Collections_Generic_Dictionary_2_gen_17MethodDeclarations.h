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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2163;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2165;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t962;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2896;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t66;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2190;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1192;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t2167;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t2171;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m12924_gshared (Dictionary_2_t2163 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m12924(__this, method) (( void (*) (Dictionary_2_t2163 *, const MethodInfo*))Dictionary_2__ctor_m12924_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m12926_gshared (Dictionary_2_t2163 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m12926(__this, ___comparer, method) (( void (*) (Dictionary_2_t2163 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m12926_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m12928_gshared (Dictionary_2_t2163 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m12928(__this, ___capacity, method) (( void (*) (Dictionary_2_t2163 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m12928_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m12930_gshared (Dictionary_2_t2163 * __this, SerializationInfo_t962 * ___info, StreamingContext_t963  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m12930(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2163 *, SerializationInfo_t962 *, StreamingContext_t963 , const MethodInfo*))Dictionary_2__ctor_m12930_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m12932_gshared (Dictionary_2_t2163 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m12932(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2163 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m12932_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m12934_gshared (Dictionary_2_t2163 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m12934(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2163 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m12934_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m12936_gshared (Dictionary_2_t2163 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m12936(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2163 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m12936_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m12938_gshared (Dictionary_2_t2163 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m12938(__this, ___key, method) (( bool (*) (Dictionary_2_t2163 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m12938_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m12940_gshared (Dictionary_2_t2163 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m12940(__this, ___key, method) (( void (*) (Dictionary_2_t2163 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m12940_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12942_gshared (Dictionary_2_t2163 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12942(__this, method) (( bool (*) (Dictionary_2_t2163 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m12942_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12944_gshared (Dictionary_2_t2163 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12944(__this, method) (( Object_t * (*) (Dictionary_2_t2163 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m12944_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12946_gshared (Dictionary_2_t2163 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12946(__this, method) (( bool (*) (Dictionary_2_t2163 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m12946_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12948_gshared (Dictionary_2_t2163 * __this, KeyValuePair_2_t118  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12948(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2163 *, KeyValuePair_2_t118 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m12948_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12950_gshared (Dictionary_2_t2163 * __this, KeyValuePair_2_t118  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12950(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2163 *, KeyValuePair_2_t118 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m12950_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12952_gshared (Dictionary_2_t2163 * __this, KeyValuePair_2U5BU5D_t2896* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12952(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2163 *, KeyValuePair_2U5BU5D_t2896*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m12952_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12954_gshared (Dictionary_2_t2163 * __this, KeyValuePair_2_t118  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12954(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2163 *, KeyValuePair_2_t118 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m12954_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m12956_gshared (Dictionary_2_t2163 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m12956(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2163 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m12956_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12958_gshared (Dictionary_2_t2163 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12958(__this, method) (( Object_t * (*) (Dictionary_2_t2163 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m12958_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12960_gshared (Dictionary_2_t2163 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12960(__this, method) (( Object_t* (*) (Dictionary_2_t2163 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m12960_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12962_gshared (Dictionary_2_t2163 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12962(__this, method) (( Object_t * (*) (Dictionary_2_t2163 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m12962_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m12964_gshared (Dictionary_2_t2163 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m12964(__this, method) (( int32_t (*) (Dictionary_2_t2163 *, const MethodInfo*))Dictionary_2_get_Count_m12964_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m12966_gshared (Dictionary_2_t2163 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m12966(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2163 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m12966_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m12968_gshared (Dictionary_2_t2163 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m12968(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2163 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m12968_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m12970_gshared (Dictionary_2_t2163 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m12970(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2163 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m12970_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m12972_gshared (Dictionary_2_t2163 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m12972(__this, ___size, method) (( void (*) (Dictionary_2_t2163 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m12972_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m12974_gshared (Dictionary_2_t2163 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m12974(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2163 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m12974_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t118  Dictionary_2_make_pair_m12976_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m12976(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t118  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m12976_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m12978_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m12978(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m12978_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m12980_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m12980(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m12980_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12982_gshared (Dictionary_2_t2163 * __this, KeyValuePair_2U5BU5D_t2896* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m12982(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2163 *, KeyValuePair_2U5BU5D_t2896*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m12982_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m12984_gshared (Dictionary_2_t2163 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m12984(__this, method) (( void (*) (Dictionary_2_t2163 *, const MethodInfo*))Dictionary_2_Resize_m12984_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m12986_gshared (Dictionary_2_t2163 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m12986(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2163 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m12986_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m12988_gshared (Dictionary_2_t2163 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m12988(__this, method) (( void (*) (Dictionary_2_t2163 *, const MethodInfo*))Dictionary_2_Clear_m12988_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m12990_gshared (Dictionary_2_t2163 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m12990(__this, ___key, method) (( bool (*) (Dictionary_2_t2163 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m12990_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12992_gshared (Dictionary_2_t2163 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m12992(__this, ___value, method) (( bool (*) (Dictionary_2_t2163 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m12992_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m12994_gshared (Dictionary_2_t2163 * __this, SerializationInfo_t962 * ___info, StreamingContext_t963  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m12994(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2163 *, SerializationInfo_t962 *, StreamingContext_t963 , const MethodInfo*))Dictionary_2_GetObjectData_m12994_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m12996_gshared (Dictionary_2_t2163 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m12996(__this, ___sender, method) (( void (*) (Dictionary_2_t2163 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m12996_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m12998_gshared (Dictionary_2_t2163 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m12998(__this, ___key, method) (( bool (*) (Dictionary_2_t2163 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m12998_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m13000_gshared (Dictionary_2_t2163 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m13000(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2163 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m13000_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t2167 * Dictionary_2_get_Keys_m13002_gshared (Dictionary_2_t2163 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m13002(__this, method) (( KeyCollection_t2167 * (*) (Dictionary_2_t2163 *, const MethodInfo*))Dictionary_2_get_Keys_m13002_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t2171 * Dictionary_2_get_Values_m13004_gshared (Dictionary_2_t2163 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m13004(__this, method) (( ValueCollection_t2171 * (*) (Dictionary_2_t2163 *, const MethodInfo*))Dictionary_2_get_Values_m13004_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m13006_gshared (Dictionary_2_t2163 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m13006(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2163 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m13006_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m13008_gshared (Dictionary_2_t2163 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m13008(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t2163 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m13008_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m13010_gshared (Dictionary_2_t2163 * __this, KeyValuePair_2_t118  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m13010(__this, ___pair, method) (( bool (*) (Dictionary_2_t2163 *, KeyValuePair_2_t118 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m13010_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t2169  Dictionary_2_GetEnumerator_m13011_gshared (Dictionary_2_t2163 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m13011(__this, method) (( Enumerator_t2169  (*) (Dictionary_2_t2163 *, const MethodInfo*))Dictionary_2_GetEnumerator_m13011_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1193  Dictionary_2_U3CCopyToU3Em__0_m13013_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m13013(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1193  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m13013_gshared)(__this /* static, unused */, ___key, ___value, method)
