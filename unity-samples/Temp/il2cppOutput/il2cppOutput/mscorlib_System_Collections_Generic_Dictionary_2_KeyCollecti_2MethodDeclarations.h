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

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t2167;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t2163;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t81;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t66;
// System.Object[]
struct ObjectU5BU5D_t87;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_3.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m13020_gshared (KeyCollection_t2167 * __this, Dictionary_2_t2163 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m13020(__this, ___dictionary, method) (( void (*) (KeyCollection_t2167 *, Dictionary_2_t2163 *, const MethodInfo*))KeyCollection__ctor_m13020_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m13021_gshared (KeyCollection_t2167 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m13021(__this, ___item, method) (( void (*) (KeyCollection_t2167 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m13021_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m13022_gshared (KeyCollection_t2167 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m13022(__this, method) (( void (*) (KeyCollection_t2167 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m13022_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m13023_gshared (KeyCollection_t2167 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m13023(__this, ___item, method) (( bool (*) (KeyCollection_t2167 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m13023_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m13024_gshared (KeyCollection_t2167 * __this, Object_t * ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m13024(__this, ___item, method) (( bool (*) (KeyCollection_t2167 *, Object_t *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m13024_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m13025_gshared (KeyCollection_t2167 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m13025(__this, method) (( Object_t* (*) (KeyCollection_t2167 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m13025_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m13026_gshared (KeyCollection_t2167 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m13026(__this, ___array, ___index, method) (( void (*) (KeyCollection_t2167 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m13026_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m13027_gshared (KeyCollection_t2167 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m13027(__this, method) (( Object_t * (*) (KeyCollection_t2167 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m13027_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m13028_gshared (KeyCollection_t2167 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m13028(__this, method) (( bool (*) (KeyCollection_t2167 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m13028_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m13029_gshared (KeyCollection_t2167 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m13029(__this, method) (( bool (*) (KeyCollection_t2167 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m13029_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m13030_gshared (KeyCollection_t2167 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m13030(__this, method) (( Object_t * (*) (KeyCollection_t2167 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m13030_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m13031_gshared (KeyCollection_t2167 * __this, ObjectU5BU5D_t87* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m13031(__this, ___array, ___index, method) (( void (*) (KeyCollection_t2167 *, ObjectU5BU5D_t87*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m13031_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t2168  KeyCollection_GetEnumerator_m13032_gshared (KeyCollection_t2167 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m13032(__this, method) (( Enumerator_t2168  (*) (KeyCollection_t2167 *, const MethodInfo*))KeyCollection_GetEnumerator_m13032_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m13033_gshared (KeyCollection_t2167 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m13033(__this, method) (( int32_t (*) (KeyCollection_t2167 *, const MethodInfo*))KeyCollection_get_Count_m13033_gshared)(__this, method)
