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

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t3651192483;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1327917203;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t35553939;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Object
struct Il2CppObject;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_K1094945144.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C"  void KeyCollection__ctor_m3885369225_gshared (KeyCollection_t3651192483 * __this, Dictionary_2_t1327917203 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m3885369225(__this, ___dictionary, method) ((  void (*) (KeyCollection_t3651192483 *, Dictionary_2_t1327917203 *, const MethodInfo*))KeyCollection__ctor_m3885369225_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C"  void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m445186093_gshared (KeyCollection_t3651192483 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m445186093(__this, ___item, method) ((  void (*) (KeyCollection_t3651192483 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m445186093_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C"  void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m192629988_gshared (KeyCollection_t3651192483 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m192629988(__this, method) ((  void (*) (KeyCollection_t3651192483 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m192629988_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C"  bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m2289416641_gshared (KeyCollection_t3651192483 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m2289416641(__this, ___item, method) ((  bool (*) (KeyCollection_t3651192483 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m2289416641_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C"  bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m4172785510_gshared (KeyCollection_t3651192483 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m4172785510(__this, ___item, method) ((  bool (*) (KeyCollection_t3651192483 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m4172785510_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C"  Il2CppObject* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m2209143350_gshared (KeyCollection_t3651192483 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m2209143350(__this, method) ((  Il2CppObject* (*) (KeyCollection_t3651192483 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m2209143350_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void KeyCollection_System_Collections_ICollection_CopyTo_m3187473238_gshared (KeyCollection_t3651192483 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m3187473238(__this, ___array, ___index, method) ((  void (*) (KeyCollection_t3651192483 *, Il2CppArray *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m3187473238_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m2508903269_gshared (KeyCollection_t3651192483 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m2508903269(__this, method) ((  Il2CppObject * (*) (KeyCollection_t3651192483 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m2508903269_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C"  bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m3987195106_gshared (KeyCollection_t3651192483 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m3987195106(__this, method) ((  bool (*) (KeyCollection_t3651192483 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m3987195106_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m3494780948_gshared (KeyCollection_t3651192483 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m3494780948(__this, method) ((  bool (*) (KeyCollection_t3651192483 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m3494780948_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * KeyCollection_System_Collections_ICollection_get_SyncRoot_m3144129094_gshared (KeyCollection_t3651192483 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m3144129094(__this, method) ((  Il2CppObject * (*) (KeyCollection_t3651192483 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m3144129094_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::CopyTo(TKey[],System.Int32)
extern "C"  void KeyCollection_CopyTo_m2172375614_gshared (KeyCollection_t3651192483 * __this, Int32U5BU5D_t1809983122* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m2172375614(__this, ___array, ___index, method) ((  void (*) (KeyCollection_t3651192483 *, Int32U5BU5D_t1809983122*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m2172375614_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::GetEnumerator()
extern "C"  Enumerator_t1094945144  KeyCollection_GetEnumerator_m2291006859_gshared (KeyCollection_t3651192483 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m2291006859(__this, method) ((  Enumerator_t1094945144  (*) (KeyCollection_t3651192483 *, const MethodInfo*))KeyCollection_GetEnumerator_m2291006859_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>::get_Count()
extern "C"  int32_t KeyCollection_get_Count_m3431456206_gshared (KeyCollection_t3651192483 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m3431456206(__this, method) ((  int32_t (*) (KeyCollection_t3651192483 *, const MethodInfo*))KeyCollection_get_Count_m3431456206_gshared)(__this, method)
