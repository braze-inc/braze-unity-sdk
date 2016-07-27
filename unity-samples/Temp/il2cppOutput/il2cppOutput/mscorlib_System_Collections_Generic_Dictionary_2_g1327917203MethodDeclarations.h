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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1327917203;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t876714142;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Collections.ICollection
struct ICollection_t3761522009;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t3778309272;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t2299554949;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1541724277;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t3651192483;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t3250054297;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_816448501.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E1094945144.h"
#include "mscorlib_System_Collections_DictionaryEntry130027246.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m1050910858_gshared (Dictionary_2_t1327917203 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1050910858(__this, method) ((  void (*) (Dictionary_2_t1327917203 *, const MethodInfo*))Dictionary_2__ctor_m1050910858_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m3610002771_gshared (Dictionary_2_t1327917203 * __this, Il2CppObject* ___comparer0, const MethodInfo* method);
#define Dictionary_2__ctor_m3610002771(__this, ___comparer0, method) ((  void (*) (Dictionary_2_t1327917203 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m3610002771_gshared)(__this, ___comparer0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m3273912365_gshared (Dictionary_2_t1327917203 * __this, int32_t ___capacity0, const MethodInfo* method);
#define Dictionary_2__ctor_m3273912365(__this, ___capacity0, method) ((  void (*) (Dictionary_2_t1327917203 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m3273912365_gshared)(__this, ___capacity0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m1549788189_gshared (Dictionary_2_t1327917203 * __this, SerializationInfo_t2995724695 * ___info0, StreamingContext_t986364934  ___context1, const MethodInfo* method);
#define Dictionary_2__ctor_m1549788189(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t1327917203 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2__ctor_m1549788189_gshared)(__this, ___info0, ___context1, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Keys_m4198131226_gshared (Dictionary_2_t1327917203 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m4198131226(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1327917203 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m4198131226_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m2843055522_gshared (Dictionary_2_t1327917203 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m2843055522(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t1327917203 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m2843055522_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m2020057553_gshared (Dictionary_2_t1327917203 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m2020057553(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t1327917203 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m2020057553_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m2894265824_gshared (Dictionary_2_t1327917203 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m2894265824(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t1327917203 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m2894265824_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m127000079_gshared (Dictionary_2_t1327917203 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m127000079(__this, ___key0, method) ((  void (*) (Dictionary_2_t1327917203 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m127000079_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m4062325186_gshared (Dictionary_2_t1327917203 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m4062325186(__this, method) ((  bool (*) (Dictionary_2_t1327917203 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m4062325186_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m4065571764_gshared (Dictionary_2_t1327917203 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m4065571764(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1327917203 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m4065571764_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m840305542_gshared (Dictionary_2_t1327917203 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m840305542(__this, method) ((  bool (*) (Dictionary_2_t1327917203 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m840305542_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2185230117_gshared (Dictionary_2_t1327917203 * __this, KeyValuePair_2_t816448501  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2185230117(__this, ___keyValuePair0, method) ((  void (*) (Dictionary_2_t1327917203 *, KeyValuePair_2_t816448501 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m2185230117_gshared)(__this, ___keyValuePair0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3713378305_gshared (Dictionary_2_t1327917203 * __this, KeyValuePair_2_t816448501  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3713378305(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t1327917203 *, KeyValuePair_2_t816448501 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3713378305_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m4220340169_gshared (Dictionary_2_t1327917203 * __this, KeyValuePair_2U5BU5D_t3778309272* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m4220340169(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t1327917203 *, KeyValuePair_2U5BU5D_t3778309272*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m4220340169_gshared)(__this, ___array0, ___index1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3330268006_gshared (Dictionary_2_t1327917203 * __this, KeyValuePair_2_t816448501  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3330268006(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t1327917203 *, KeyValuePair_2_t816448501 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m3330268006_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m323672040_gshared (Dictionary_2_t1327917203 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m323672040(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t1327917203 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m323672040_gshared)(__this, ___array0, ___index1, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m464503287_gshared (Dictionary_2_t1327917203 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m464503287(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1327917203 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m464503287_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1289662318_gshared (Dictionary_2_t1327917203 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1289662318(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t1327917203 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1289662318_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3187662523_gshared (Dictionary_2_t1327917203 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3187662523(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t1327917203 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3187662523_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m655926012_gshared (Dictionary_2_t1327917203 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m655926012(__this, method) ((  int32_t (*) (Dictionary_2_t1327917203 *, const MethodInfo*))Dictionary_2_get_Count_m655926012_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C"  Il2CppObject * Dictionary_2_get_Item_m542157067_gshared (Dictionary_2_t1327917203 * __this, int32_t ___key0, const MethodInfo* method);
#define Dictionary_2_get_Item_m542157067(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t1327917203 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m542157067_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m3219597724_gshared (Dictionary_2_t1327917203 * __this, int32_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_set_Item_m3219597724(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t1327917203 *, int32_t, Il2CppObject *, const MethodInfo*))Dictionary_2_set_Item_m3219597724_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m3161627732_gshared (Dictionary_2_t1327917203 * __this, int32_t ___capacity0, Il2CppObject* ___hcp1, const MethodInfo* method);
#define Dictionary_2_Init_m3161627732(__this, ___capacity0, ___hcp1, method) ((  void (*) (Dictionary_2_t1327917203 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m3161627732_gshared)(__this, ___capacity0, ___hcp1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m3089254883_gshared (Dictionary_2_t1327917203 * __this, int32_t ___size0, const MethodInfo* method);
#define Dictionary_2_InitArrays_m3089254883(__this, ___size0, method) ((  void (*) (Dictionary_2_t1327917203 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m3089254883_gshared)(__this, ___size0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m3741359263_gshared (Dictionary_2_t1327917203 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m3741359263(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t1327917203 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m3741359263_gshared)(__this, ___array0, ___index1, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t816448501  Dictionary_2_make_pair_m2338171699_gshared (Il2CppObject * __this /* static, unused */, int32_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_make_pair_m2338171699(__this /* static, unused */, ___key0, ___value1, method) ((  KeyValuePair_2_t816448501  (*) (Il2CppObject * /* static, unused */, int32_t, Il2CppObject *, const MethodInfo*))Dictionary_2_make_pair_m2338171699_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C"  int32_t Dictionary_2_pick_key_m1394751787_gshared (Il2CppObject * __this /* static, unused */, int32_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_pick_key_m1394751787(__this /* static, unused */, ___key0, ___value1, method) ((  int32_t (*) (Il2CppObject * /* static, unused */, int32_t, Il2CppObject *, const MethodInfo*))Dictionary_2_pick_key_m1394751787_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C"  Il2CppObject * Dictionary_2_pick_value_m1281047495_gshared (Il2CppObject * __this /* static, unused */, int32_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_pick_value_m1281047495(__this /* static, unused */, ___key0, ___value1, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, int32_t, Il2CppObject *, const MethodInfo*))Dictionary_2_pick_value_m1281047495_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m2503627344_gshared (Dictionary_2_t1327917203 * __this, KeyValuePair_2U5BU5D_t3778309272* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyTo_m2503627344(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t1327917203 *, KeyValuePair_2U5BU5D_t3778309272*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m2503627344_gshared)(__this, ___array0, ___index1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C"  void Dictionary_2_Resize_m1861476060_gshared (Dictionary_2_t1327917203 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1861476060(__this, method) ((  void (*) (Dictionary_2_t1327917203 *, const MethodInfo*))Dictionary_2_Resize_m1861476060_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m2232043353_gshared (Dictionary_2_t1327917203 * __this, int32_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_Add_m2232043353(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t1327917203 *, int32_t, Il2CppObject *, const MethodInfo*))Dictionary_2_Add_m2232043353_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C"  void Dictionary_2_Clear_m3560399111_gshared (Dictionary_2_t1327917203 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m3560399111(__this, method) ((  void (*) (Dictionary_2_t1327917203 *, const MethodInfo*))Dictionary_2_Clear_m3560399111_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m2612169713_gshared (Dictionary_2_t1327917203 * __this, int32_t ___key0, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m2612169713(__this, ___key0, method) ((  bool (*) (Dictionary_2_t1327917203 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m2612169713_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m454328177_gshared (Dictionary_2_t1327917203 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m454328177(__this, ___value0, method) ((  bool (*) (Dictionary_2_t1327917203 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsValue_m454328177_gshared)(__this, ___value0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m3426598522_gshared (Dictionary_2_t1327917203 * __this, SerializationInfo_t2995724695 * ___info0, StreamingContext_t986364934  ___context1, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m3426598522(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t1327917203 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2_GetObjectData_m3426598522_gshared)(__this, ___info0, ___context1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m3983879210_gshared (Dictionary_2_t1327917203 * __this, Il2CppObject * ___sender0, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m3983879210(__this, ___sender0, method) ((  void (*) (Dictionary_2_t1327917203 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m3983879210_gshared)(__this, ___sender0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m183515743_gshared (Dictionary_2_t1327917203 * __this, int32_t ___key0, const MethodInfo* method);
#define Dictionary_2_Remove_m183515743(__this, ___key0, method) ((  bool (*) (Dictionary_2_t1327917203 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m183515743_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m2515559242_gshared (Dictionary_2_t1327917203 * __this, int32_t ___key0, Il2CppObject ** ___value1, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m2515559242(__this, ___key0, ___value1, method) ((  bool (*) (Dictionary_2_t1327917203 *, int32_t, Il2CppObject **, const MethodInfo*))Dictionary_2_TryGetValue_m2515559242_gshared)(__this, ___key0, ___value1, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C"  KeyCollection_t3651192483 * Dictionary_2_get_Keys_m4120714641_gshared (Dictionary_2_t1327917203 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m4120714641(__this, method) ((  KeyCollection_t3651192483 * (*) (Dictionary_2_t1327917203 *, const MethodInfo*))Dictionary_2_get_Keys_m4120714641_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C"  ValueCollection_t3250054297 * Dictionary_2_get_Values_m1815086189_gshared (Dictionary_2_t1327917203 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1815086189(__this, method) ((  ValueCollection_t3250054297 * (*) (Dictionary_2_t1327917203 *, const MethodInfo*))Dictionary_2_get_Values_m1815086189_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C"  int32_t Dictionary_2_ToTKey_m844610694_gshared (Dictionary_2_t1327917203 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ToTKey_m844610694(__this, ___key0, method) ((  int32_t (*) (Dictionary_2_t1327917203 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m844610694_gshared)(__this, ___key0, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTValue_m3888328930_gshared (Dictionary_2_t1327917203 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ToTValue_m3888328930(__this, ___value0, method) ((  Il2CppObject * (*) (Dictionary_2_t1327917203 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m3888328930_gshared)(__this, ___value0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m139391042_gshared (Dictionary_2_t1327917203 * __this, KeyValuePair_2_t816448501  ___pair0, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m139391042(__this, ___pair0, method) ((  bool (*) (Dictionary_2_t1327917203 *, KeyValuePair_2_t816448501 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m139391042_gshared)(__this, ___pair0, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C"  Enumerator_t1094945145  Dictionary_2_GetEnumerator_m3720989159_gshared (Dictionary_2_t1327917203 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m3720989159(__this, method) ((  Enumerator_t1094945145  (*) (Dictionary_2_t1327917203 *, const MethodInfo*))Dictionary_2_GetEnumerator_m3720989159_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t130027246  Dictionary_2_U3CCopyToU3Em__0_m2937104030_gshared (Il2CppObject * __this /* static, unused */, int32_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m2937104030(__this /* static, unused */, ___key0, ___value1, method) ((  DictionaryEntry_t130027246  (*) (Il2CppObject * /* static, unused */, int32_t, Il2CppObject *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m2937104030_gshared)(__this /* static, unused */, ___key0, ___value1, method)
