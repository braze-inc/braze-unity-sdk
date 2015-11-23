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

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t2250;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t80;
// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t81;
// System.Collections.IEnumerator
struct IEnumerator_t66;
// System.Object[]
struct ObjectU5BU5D_t87;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
extern "C" void Queue_1__ctor_m14015_gshared (Queue_1_t2250 * __this, const MethodInfo* method);
#define Queue_1__ctor_m14015(__this, method) (( void (*) (Queue_1_t2250 *, const MethodInfo*))Queue_1__ctor_m14015_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void Queue_1__ctor_m14016_gshared (Queue_1_t2250 * __this, Object_t* ___collection, const MethodInfo* method);
#define Queue_1__ctor_m14016(__this, ___collection, method) (( void (*) (Queue_1_t2250 *, Object_t*, const MethodInfo*))Queue_1__ctor_m14016_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Queue_1_System_Collections_ICollection_CopyTo_m14018_gshared (Queue_1_t2250 * __this, Array_t * ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_CopyTo_m14018(__this, ___array, ___idx, method) (( void (*) (Queue_1_t2250 *, Array_t *, int32_t, const MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m14018_gshared)(__this, ___array, ___idx, method)
// System.Boolean System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m14020_gshared (Queue_1_t2250 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m14020(__this, method) (( bool (*) (Queue_1_t2250 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_IsSynchronized_m14020_gshared)(__this, method)
// System.Object System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Queue_1_System_Collections_ICollection_get_SyncRoot_m14022_gshared (Queue_1_t2250 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m14022(__this, method) (( Object_t * (*) (Queue_1_t2250 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m14022_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14024_gshared (Queue_1_t2250 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14024(__this, method) (( Object_t* (*) (Queue_1_t2250 *, const MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14024_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Queue_1_System_Collections_IEnumerable_GetEnumerator_m14026_gshared (Queue_1_t2250 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m14026(__this, method) (( Object_t * (*) (Queue_1_t2250 *, const MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m14026_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Queue_1_CopyTo_m14028_gshared (Queue_1_t2250 * __this, ObjectU5BU5D_t87* ___array, int32_t ___idx, const MethodInfo* method);
#define Queue_1_CopyTo_m14028(__this, ___array, ___idx, method) (( void (*) (Queue_1_t2250 *, ObjectU5BU5D_t87*, int32_t, const MethodInfo*))Queue_1_CopyTo_m14028_gshared)(__this, ___array, ___idx, method)
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
extern "C" Object_t * Queue_1_Dequeue_m14029_gshared (Queue_1_t2250 * __this, const MethodInfo* method);
#define Queue_1_Dequeue_m14029(__this, method) (( Object_t * (*) (Queue_1_t2250 *, const MethodInfo*))Queue_1_Dequeue_m14029_gshared)(__this, method)
// T System.Collections.Generic.Queue`1<System.Object>::Peek()
extern "C" Object_t * Queue_1_Peek_m14031_gshared (Queue_1_t2250 * __this, const MethodInfo* method);
#define Queue_1_Peek_m14031(__this, method) (( Object_t * (*) (Queue_1_t2250 *, const MethodInfo*))Queue_1_Peek_m14031_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
extern "C" void Queue_1_Enqueue_m14033_gshared (Queue_1_t2250 * __this, Object_t * ___item, const MethodInfo* method);
#define Queue_1_Enqueue_m14033(__this, ___item, method) (( void (*) (Queue_1_t2250 *, Object_t *, const MethodInfo*))Queue_1_Enqueue_m14033_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::SetCapacity(System.Int32)
extern "C" void Queue_1_SetCapacity_m14035_gshared (Queue_1_t2250 * __this, int32_t ___new_size, const MethodInfo* method);
#define Queue_1_SetCapacity_m14035(__this, ___new_size, method) (( void (*) (Queue_1_t2250 *, int32_t, const MethodInfo*))Queue_1_SetCapacity_m14035_gshared)(__this, ___new_size, method)
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
extern "C" int32_t Queue_1_get_Count_m14037_gshared (Queue_1_t2250 * __this, const MethodInfo* method);
#define Queue_1_get_Count_m14037(__this, method) (( int32_t (*) (Queue_1_t2250 *, const MethodInfo*))Queue_1_get_Count_m14037_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2251  Queue_1_GetEnumerator_m14039_gshared (Queue_1_t2250 * __this, const MethodInfo* method);
#define Queue_1_GetEnumerator_m14039(__this, method) (( Enumerator_t2251  (*) (Queue_1_t2250 *, const MethodInfo*))Queue_1_GetEnumerator_m14039_gshared)(__this, method)
