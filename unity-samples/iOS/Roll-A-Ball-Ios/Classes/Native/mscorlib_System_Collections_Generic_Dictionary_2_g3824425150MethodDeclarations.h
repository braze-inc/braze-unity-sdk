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
struct Dictionary_2_t3824425150;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t3161373071;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Collections.ICollection
struct ICollection_t3761522009;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t346249057;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t501095600;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1541724277;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t1852733134;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t1451594948;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23312956448.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E3591453091.h"
#include "mscorlib_System_Collections_DictionaryEntry130027246.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m3794638399_gshared (Dictionary_2_t3824425150 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m3794638399(__this, method) ((  void (*) (Dictionary_2_t3824425150 *, const MethodInfo*))Dictionary_2__ctor_m3794638399_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m273898294_gshared (Dictionary_2_t3824425150 * __this, Il2CppObject* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m273898294(__this, ___comparer, method) ((  void (*) (Dictionary_2_t3824425150 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m273898294_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m2504582416_gshared (Dictionary_2_t3824425150 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m2504582416(__this, ___capacity, method) ((  void (*) (Dictionary_2_t3824425150 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m2504582416_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m4162067200_gshared (Dictionary_2_t3824425150 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m4162067200(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t3824425150 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2__ctor_m4162067200_gshared)(__this, ___info, ___context, method)
// System.Collections.ICollection System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Keys()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Keys_m1780508229_gshared (Dictionary_2_t3824425150 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Keys_m1780508229(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3824425150 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Keys_m1780508229_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m1551250025_gshared (Dictionary_2_t3824425150 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1551250025(__this, ___key, method) ((  Il2CppObject * (*) (Dictionary_2_t3824425150 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1551250025_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m1049066318_gshared (Dictionary_2_t3824425150 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1049066318(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t3824425150 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1049066318_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m781609539_gshared (Dictionary_2_t3824425150 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m781609539(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t3824425150 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m781609539_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m1783363411_gshared (Dictionary_2_t3824425150 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1783363411(__this, ___key, method) ((  bool (*) (Dictionary_2_t3824425150 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1783363411_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m2215006604_gshared (Dictionary_2_t3824425150 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m2215006604(__this, ___key, method) ((  void (*) (Dictionary_2_t3824425150 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m2215006604_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1826238689_gshared (Dictionary_2_t3824425150 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1826238689(__this, method) ((  bool (*) (Dictionary_2_t3824425150 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1826238689_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2075478797_gshared (Dictionary_2_t3824425150 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2075478797(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3824425150 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2075478797_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1433083365_gshared (Dictionary_2_t3824425150 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1433083365(__this, method) ((  bool (*) (Dictionary_2_t3824425150 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1433083365_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3257059362_gshared (Dictionary_2_t3824425150 * __this, KeyValuePair_2_t3312956448  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3257059362(__this, ___keyValuePair, method) ((  void (*) (Dictionary_2_t3824425150 *, KeyValuePair_2_t3312956448 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3257059362_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2744049760_gshared (Dictionary_2_t3824425150 * __this, KeyValuePair_2_t3312956448  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2744049760(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t3824425150 *, KeyValuePair_2_t3312956448 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m2744049760_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2008986502_gshared (Dictionary_2_t3824425150 * __this, KeyValuePair_2U5BU5D_t346249057* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2008986502(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t3824425150 *, KeyValuePair_2U5BU5D_t346249057*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2008986502_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2350489477_gshared (Dictionary_2_t3824425150 * __this, KeyValuePair_2_t3312956448  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2350489477(__this, ___keyValuePair, method) ((  bool (*) (Dictionary_2_t3824425150 *, KeyValuePair_2_t3312956448 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2350489477_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m3550803941_gshared (Dictionary_2_t3824425150 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m3550803941(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t3824425150 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m3550803941_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m4115711264_gshared (Dictionary_2_t3824425150 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m4115711264(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3824425150 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m4115711264_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m52259357_gshared (Dictionary_2_t3824425150 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m52259357(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t3824425150 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m52259357_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1395730616_gshared (Dictionary_2_t3824425150 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1395730616(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t3824425150 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1395730616_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m1232250407_gshared (Dictionary_2_t3824425150 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1232250407(__this, method) ((  int32_t (*) (Dictionary_2_t3824425150 *, const MethodInfo*))Dictionary_2_get_Count_m1232250407_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C"  Il2CppObject * Dictionary_2_get_Item_m2285357284_gshared (Dictionary_2_t3824425150 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m2285357284(__this, ___key, method) ((  Il2CppObject * (*) (Dictionary_2_t3824425150 *, Il2CppObject *, const MethodInfo*))Dictionary_2_get_Item_m2285357284_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m2627891647_gshared (Dictionary_2_t3824425150 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m2627891647(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t3824425150 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_set_Item_m2627891647_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m2966484407_gshared (Dictionary_2_t3824425150 * __this, int32_t ___capacity, Il2CppObject* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m2966484407(__this, ___capacity, ___hcp, method) ((  void (*) (Dictionary_2_t3824425150 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m2966484407_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m2119297760_gshared (Dictionary_2_t3824425150 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m2119297760(__this, ___size, method) ((  void (*) (Dictionary_2_t3824425150 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m2119297760_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m2536521436_gshared (Dictionary_2_t3824425150 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m2536521436(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t3824425150 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m2536521436_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t3312956448  Dictionary_2_make_pair_m2083407400_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m2083407400(__this /* static, unused */, ___key, ___value, method) ((  KeyValuePair_2_t3312956448  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_make_pair_m2083407400_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C"  Il2CppObject * Dictionary_2_pick_key_m3909093582_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m3909093582(__this /* static, unused */, ___key, ___value, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_pick_key_m3909093582_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C"  Il2CppObject * Dictionary_2_pick_value_m3477594126_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m3477594126(__this /* static, unused */, ___key, ___value, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_pick_value_m3477594126_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m3401241971_gshared (Dictionary_2_t3824425150 * __this, KeyValuePair_2U5BU5D_t346249057* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m3401241971(__this, ___array, ___index, method) ((  void (*) (Dictionary_2_t3824425150 *, KeyValuePair_2U5BU5D_t346249057*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m3401241971_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C"  void Dictionary_2_Resize_m1727470041_gshared (Dictionary_2_t3824425150 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1727470041(__this, method) ((  void (*) (Dictionary_2_t3824425150 *, const MethodInfo*))Dictionary_2_Resize_m1727470041_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m3537188182_gshared (Dictionary_2_t3824425150 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m3537188182(__this, ___key, ___value, method) ((  void (*) (Dictionary_2_t3824425150 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_Add_m3537188182_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C"  void Dictionary_2_Clear_m1200771690_gshared (Dictionary_2_t3824425150 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1200771690(__this, method) ((  void (*) (Dictionary_2_t3824425150 *, const MethodInfo*))Dictionary_2_Clear_m1200771690_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m3006991056_gshared (Dictionary_2_t3824425150 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m3006991056(__this, ___key, method) ((  bool (*) (Dictionary_2_t3824425150 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsKey_m3006991056_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m712275664_gshared (Dictionary_2_t3824425150 * __this, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m712275664(__this, ___value, method) ((  bool (*) (Dictionary_2_t3824425150 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsValue_m712275664_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m1544184413_gshared (Dictionary_2_t3824425150 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1544184413(__this, ___info, ___context, method) ((  void (*) (Dictionary_2_t3824425150 *, SerializationInfo_t2995724695 *, StreamingContext_t986364934 , const MethodInfo*))Dictionary_2_GetObjectData_m1544184413_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m1638301735_gshared (Dictionary_2_t3824425150 * __this, Il2CppObject * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1638301735(__this, ___sender, method) ((  void (*) (Dictionary_2_t3824425150 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m1638301735_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m2155719712_gshared (Dictionary_2_t3824425150 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m2155719712(__this, ___key, method) ((  bool (*) (Dictionary_2_t3824425150 *, Il2CppObject *, const MethodInfo*))Dictionary_2_Remove_m2155719712_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m2075628329_gshared (Dictionary_2_t3824425150 * __this, Il2CppObject * ___key, Il2CppObject ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m2075628329(__this, ___key, ___value, method) ((  bool (*) (Dictionary_2_t3824425150 *, Il2CppObject *, Il2CppObject **, const MethodInfo*))Dictionary_2_TryGetValue_m2075628329_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C"  KeyCollection_t1852733134 * Dictionary_2_get_Keys_m2624609910_gshared (Dictionary_2_t3824425150 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m2624609910(__this, method) ((  KeyCollection_t1852733134 * (*) (Dictionary_2_t3824425150 *, const MethodInfo*))Dictionary_2_get_Keys_m2624609910_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C"  ValueCollection_t1451594948 * Dictionary_2_get_Values_m2070602102_gshared (Dictionary_2_t3824425150 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m2070602102(__this, method) ((  ValueCollection_t1451594948 * (*) (Dictionary_2_t3824425150 *, const MethodInfo*))Dictionary_2_get_Values_m2070602102_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTKey_m3358952489_gshared (Dictionary_2_t3824425150 * __this, Il2CppObject * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m3358952489(__this, ___key, method) ((  Il2CppObject * (*) (Dictionary_2_t3824425150 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m3358952489_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTValue_m1789908265_gshared (Dictionary_2_t3824425150 * __this, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1789908265(__this, ___value, method) ((  Il2CppObject * (*) (Dictionary_2_t3824425150 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m1789908265_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m3073235459_gshared (Dictionary_2_t3824425150 * __this, KeyValuePair_2_t3312956448  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m3073235459(__this, ___pair, method) ((  bool (*) (Dictionary_2_t3824425150 *, KeyValuePair_2_t3312956448 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m3073235459_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C"  Enumerator_t3591453092  Dictionary_2_GetEnumerator_m65675076_gshared (Dictionary_2_t3824425150 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m65675076(__this, method) ((  Enumerator_t3591453092  (*) (Dictionary_2_t3824425150 *, const MethodInfo*))Dictionary_2_GetEnumerator_m65675076_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t130027246  Dictionary_2_U3CCopyToU3Em__0_m3818730131_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m3818730131(__this /* static, unused */, ___key, ___value, method) ((  DictionaryEntry_t130027246  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m3818730131_gshared)(__this /* static, unused */, ___key, ___value, method)
