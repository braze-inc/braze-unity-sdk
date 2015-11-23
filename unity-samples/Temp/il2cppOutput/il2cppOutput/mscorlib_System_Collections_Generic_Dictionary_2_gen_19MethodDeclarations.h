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

// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2715;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2165;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t962;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>[]
struct KeyValuePair_2U5BU5D_t2979;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t66;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>>
struct IEnumerator_1_t2980;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1192;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,UnityEngine.TextEditor/TextEditOp>
struct KeyCollection_t2720;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,UnityEngine.TextEditor/TextEditOp>
struct ValueCollection_t2724;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__16.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor()
extern "C" void Dictionary_2__ctor_m20304_gshared (Dictionary_2_t2715 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m20304(__this, method) (( void (*) (Dictionary_2_t2715 *, const MethodInfo*))Dictionary_2__ctor_m20304_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m20306_gshared (Dictionary_2_t2715 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m20306(__this, ___comparer, method) (( void (*) (Dictionary_2_t2715 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m20306_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m20308_gshared (Dictionary_2_t2715 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m20308(__this, ___capacity, method) (( void (*) (Dictionary_2_t2715 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m20308_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m20310_gshared (Dictionary_2_t2715 * __this, SerializationInfo_t962 * ___info, StreamingContext_t963  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m20310(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2715 *, SerializationInfo_t962 *, StreamingContext_t963 , const MethodInfo*))Dictionary_2__ctor_m20310_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m20312_gshared (Dictionary_2_t2715 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m20312(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2715 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m20312_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m20314_gshared (Dictionary_2_t2715 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m20314(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2715 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m20314_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m20316_gshared (Dictionary_2_t2715 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m20316(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2715 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m20316_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m20318_gshared (Dictionary_2_t2715 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m20318(__this, ___key, method) (( bool (*) (Dictionary_2_t2715 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m20318_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m20320_gshared (Dictionary_2_t2715 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m20320(__this, ___key, method) (( void (*) (Dictionary_2_t2715 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m20320_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20322_gshared (Dictionary_2_t2715 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20322(__this, method) (( bool (*) (Dictionary_2_t2715 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m20322_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20324_gshared (Dictionary_2_t2715 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20324(__this, method) (( Object_t * (*) (Dictionary_2_t2715 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m20324_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20326_gshared (Dictionary_2_t2715 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20326(__this, method) (( bool (*) (Dictionary_2_t2715 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m20326_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20328_gshared (Dictionary_2_t2715 * __this, KeyValuePair_2_t2717  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20328(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2715 *, KeyValuePair_2_t2717 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m20328_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20330_gshared (Dictionary_2_t2715 * __this, KeyValuePair_2_t2717  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20330(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2715 *, KeyValuePair_2_t2717 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m20330_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20332_gshared (Dictionary_2_t2715 * __this, KeyValuePair_2U5BU5D_t2979* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20332(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2715 *, KeyValuePair_2U5BU5D_t2979*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m20332_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20334_gshared (Dictionary_2_t2715 * __this, KeyValuePair_2_t2717  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20334(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2715 *, KeyValuePair_2_t2717 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m20334_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m20336_gshared (Dictionary_2_t2715 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m20336(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2715 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m20336_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20338_gshared (Dictionary_2_t2715 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20338(__this, method) (( Object_t * (*) (Dictionary_2_t2715 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m20338_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20340_gshared (Dictionary_2_t2715 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20340(__this, method) (( Object_t* (*) (Dictionary_2_t2715 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m20340_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20342_gshared (Dictionary_2_t2715 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20342(__this, method) (( Object_t * (*) (Dictionary_2_t2715 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m20342_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m20344_gshared (Dictionary_2_t2715 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m20344(__this, method) (( int32_t (*) (Dictionary_2_t2715 *, const MethodInfo*))Dictionary_2_get_Count_m20344_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m20346_gshared (Dictionary_2_t2715 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m20346(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2715 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m20346_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m20348_gshared (Dictionary_2_t2715 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m20348(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2715 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m20348_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m20350_gshared (Dictionary_2_t2715 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m20350(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2715 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m20350_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m20352_gshared (Dictionary_2_t2715 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m20352(__this, ___size, method) (( void (*) (Dictionary_2_t2715 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m20352_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m20354_gshared (Dictionary_2_t2715 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m20354(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2715 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m20354_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2717  Dictionary_2_make_pair_m20356_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m20356(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2717  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m20356_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m20358_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m20358(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m20358_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m20360_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m20360(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m20360_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m20362_gshared (Dictionary_2_t2715 * __this, KeyValuePair_2U5BU5D_t2979* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m20362(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2715 *, KeyValuePair_2U5BU5D_t2979*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m20362_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Resize()
extern "C" void Dictionary_2_Resize_m20364_gshared (Dictionary_2_t2715 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m20364(__this, method) (( void (*) (Dictionary_2_t2715 *, const MethodInfo*))Dictionary_2_Resize_m20364_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m20366_gshared (Dictionary_2_t2715 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m20366(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2715 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m20366_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Clear()
extern "C" void Dictionary_2_Clear_m20368_gshared (Dictionary_2_t2715 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m20368(__this, method) (( void (*) (Dictionary_2_t2715 *, const MethodInfo*))Dictionary_2_Clear_m20368_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m20370_gshared (Dictionary_2_t2715 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m20370(__this, ___key, method) (( bool (*) (Dictionary_2_t2715 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m20370_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m20372_gshared (Dictionary_2_t2715 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m20372(__this, ___value, method) (( bool (*) (Dictionary_2_t2715 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m20372_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m20374_gshared (Dictionary_2_t2715 * __this, SerializationInfo_t962 * ___info, StreamingContext_t963  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m20374(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2715 *, SerializationInfo_t962 *, StreamingContext_t963 , const MethodInfo*))Dictionary_2_GetObjectData_m20374_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m20376_gshared (Dictionary_2_t2715 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m20376(__this, ___sender, method) (( void (*) (Dictionary_2_t2715 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m20376_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m20378_gshared (Dictionary_2_t2715 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m20378(__this, ___key, method) (( bool (*) (Dictionary_2_t2715 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m20378_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m20380_gshared (Dictionary_2_t2715 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m20380(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2715 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m20380_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Keys()
extern "C" KeyCollection_t2720 * Dictionary_2_get_Keys_m20382_gshared (Dictionary_2_t2715 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m20382(__this, method) (( KeyCollection_t2720 * (*) (Dictionary_2_t2715 *, const MethodInfo*))Dictionary_2_get_Keys_m20382_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Values()
extern "C" ValueCollection_t2724 * Dictionary_2_get_Values_m20384_gshared (Dictionary_2_t2715 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m20384(__this, method) (( ValueCollection_t2724 * (*) (Dictionary_2_t2715 *, const MethodInfo*))Dictionary_2_get_Values_m20384_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m20386_gshared (Dictionary_2_t2715 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m20386(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2715 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m20386_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m20388_gshared (Dictionary_2_t2715 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m20388(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2715 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m20388_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m20390_gshared (Dictionary_2_t2715 * __this, KeyValuePair_2_t2717  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m20390(__this, ___pair, method) (( bool (*) (Dictionary_2_t2715 *, KeyValuePair_2_t2717 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m20390_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::GetEnumerator()
extern "C" Enumerator_t2722  Dictionary_2_GetEnumerator_m20392_gshared (Dictionary_2_t2715 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m20392(__this, method) (( Enumerator_t2722  (*) (Dictionary_2_t2715 *, const MethodInfo*))Dictionary_2_GetEnumerator_m20392_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1193  Dictionary_2_U3CCopyToU3Em__0_m20394_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m20394(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1193  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m20394_gshared)(__this /* static, unused */, ___key, ___value, method)
