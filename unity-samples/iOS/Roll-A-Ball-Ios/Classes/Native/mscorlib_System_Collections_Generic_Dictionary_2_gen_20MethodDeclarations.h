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

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2769;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2165;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t962;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t2988;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t66;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t2989;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1192;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Boolean>
struct KeyCollection_t2774;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t2778;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_19.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__19.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m20981_gshared (Dictionary_2_t2769 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m20981(__this, method) (( void (*) (Dictionary_2_t2769 *, const MethodInfo*))Dictionary_2__ctor_m20981_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m20982_gshared (Dictionary_2_t2769 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m20982(__this, ___comparer, method) (( void (*) (Dictionary_2_t2769 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20982_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m20984_gshared (Dictionary_2_t2769 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m20984(__this, ___capacity, method) (( void (*) (Dictionary_2_t2769 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m20984_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m20986_gshared (Dictionary_2_t2769 * __this, SerializationInfo_t962 * ___info, StreamingContext_t963  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m20986(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2769 *, SerializationInfo_t962 *, StreamingContext_t963 , const MethodInfo*))Dictionary_2__ctor_m20986_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m20988_gshared (Dictionary_2_t2769 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m20988(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2769 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m20988_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m20990_gshared (Dictionary_2_t2769 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m20990(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2769 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m20990_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m20992_gshared (Dictionary_2_t2769 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m20992(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2769 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m20992_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m20994_gshared (Dictionary_2_t2769 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m20994(__this, ___key, method) (( bool (*) (Dictionary_2_t2769 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m20994_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m20996_gshared (Dictionary_2_t2769 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m20996(__this, ___key, method) (( void (*) (Dictionary_2_t2769 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m20996_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20998_gshared (Dictionary_2_t2769 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20998(__this, method) (( bool (*) (Dictionary_2_t2769 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20998_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21000_gshared (Dictionary_2_t2769 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21000(__this, method) (( Object_t * (*) (Dictionary_2_t2769 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m21000_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21002_gshared (Dictionary_2_t2769 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21002(__this, method) (( bool (*) (Dictionary_2_t2769 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m21002_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21004_gshared (Dictionary_2_t2769 * __this, KeyValuePair_2_t2771  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21004(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2769 *, KeyValuePair_2_t2771 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m21004_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21006_gshared (Dictionary_2_t2769 * __this, KeyValuePair_2_t2771  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21006(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2769 *, KeyValuePair_2_t2771 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m21006_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21008_gshared (Dictionary_2_t2769 * __this, KeyValuePair_2U5BU5D_t2988* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21008(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2769 *, KeyValuePair_2U5BU5D_t2988*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m21008_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21010_gshared (Dictionary_2_t2769 * __this, KeyValuePair_2_t2771  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21010(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2769 *, KeyValuePair_2_t2771 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m21010_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m21012_gshared (Dictionary_2_t2769 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m21012(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2769 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m21012_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21014_gshared (Dictionary_2_t2769 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21014(__this, method) (( Object_t * (*) (Dictionary_2_t2769 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m21014_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21016_gshared (Dictionary_2_t2769 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21016(__this, method) (( Object_t* (*) (Dictionary_2_t2769 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m21016_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21018_gshared (Dictionary_2_t2769 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21018(__this, method) (( Object_t * (*) (Dictionary_2_t2769 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m21018_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m21020_gshared (Dictionary_2_t2769 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m21020(__this, method) (( int32_t (*) (Dictionary_2_t2769 *, const MethodInfo*))Dictionary_2_get_Count_m21020_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m21022_gshared (Dictionary_2_t2769 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m21022(__this, ___key, method) (( bool (*) (Dictionary_2_t2769 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m21022_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m21024_gshared (Dictionary_2_t2769 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m21024(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2769 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m21024_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m21026_gshared (Dictionary_2_t2769 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m21026(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2769 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m21026_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m21028_gshared (Dictionary_2_t2769 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m21028(__this, ___size, method) (( void (*) (Dictionary_2_t2769 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m21028_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m21030_gshared (Dictionary_2_t2769 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m21030(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2769 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m21030_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2771  Dictionary_2_make_pair_m21032_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m21032(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2771  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m21032_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m21034_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m21034(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_key_m21034_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m21036_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m21036(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m21036_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m21038_gshared (Dictionary_2_t2769 * __this, KeyValuePair_2U5BU5D_t2988* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m21038(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2769 *, KeyValuePair_2U5BU5D_t2988*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m21038_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m21040_gshared (Dictionary_2_t2769 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m21040(__this, method) (( void (*) (Dictionary_2_t2769 *, const MethodInfo*))Dictionary_2_Resize_m21040_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m21042_gshared (Dictionary_2_t2769 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m21042(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2769 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m21042_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m21044_gshared (Dictionary_2_t2769 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m21044(__this, method) (( void (*) (Dictionary_2_t2769 *, const MethodInfo*))Dictionary_2_Clear_m21044_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m21046_gshared (Dictionary_2_t2769 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m21046(__this, ___key, method) (( bool (*) (Dictionary_2_t2769 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m21046_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m21048_gshared (Dictionary_2_t2769 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m21048(__this, ___value, method) (( bool (*) (Dictionary_2_t2769 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m21048_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m21050_gshared (Dictionary_2_t2769 * __this, SerializationInfo_t962 * ___info, StreamingContext_t963  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m21050(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2769 *, SerializationInfo_t962 *, StreamingContext_t963 , const MethodInfo*))Dictionary_2_GetObjectData_m21050_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m21052_gshared (Dictionary_2_t2769 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m21052(__this, ___sender, method) (( void (*) (Dictionary_2_t2769 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m21052_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m21054_gshared (Dictionary_2_t2769 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m21054(__this, ___key, method) (( bool (*) (Dictionary_2_t2769 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m21054_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m21056_gshared (Dictionary_2_t2769 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m21056(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2769 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m21056_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Keys()
extern "C" KeyCollection_t2774 * Dictionary_2_get_Keys_m21058_gshared (Dictionary_2_t2769 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m21058(__this, method) (( KeyCollection_t2774 * (*) (Dictionary_2_t2769 *, const MethodInfo*))Dictionary_2_get_Keys_m21058_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t2778 * Dictionary_2_get_Values_m21060_gshared (Dictionary_2_t2769 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m21060(__this, method) (( ValueCollection_t2778 * (*) (Dictionary_2_t2769 *, const MethodInfo*))Dictionary_2_get_Values_m21060_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m21062_gshared (Dictionary_2_t2769 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m21062(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2769 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m21062_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m21064_gshared (Dictionary_2_t2769 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m21064(__this, ___value, method) (( bool (*) (Dictionary_2_t2769 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m21064_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m21066_gshared (Dictionary_2_t2769 * __this, KeyValuePair_2_t2771  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m21066(__this, ___pair, method) (( bool (*) (Dictionary_2_t2769 *, KeyValuePair_2_t2771 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m21066_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t2776  Dictionary_2_GetEnumerator_m21068_gshared (Dictionary_2_t2769 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m21068(__this, method) (( Enumerator_t2776  (*) (Dictionary_2_t2769 *, const MethodInfo*))Dictionary_2_GetEnumerator_m21068_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1193  Dictionary_2_U3CCopyToU3Em__0_m21070_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m21070(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1193  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m21070_gshared)(__this /* static, unused */, ___key, ___value, method)
