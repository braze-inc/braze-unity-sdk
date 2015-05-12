#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_t3104;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t76;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t77;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// System.Object[]
struct ObjectU5BU5D_t112;
// System.Collections.Generic.Queue`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Queue_1_Enumerator_gen_0.h"

// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
 void Queue_1__ctor_m15048_gshared (Queue_1_t3104 * __this, MethodInfo* method);
#define Queue_1__ctor_m15048(__this, method) (void)Queue_1__ctor_m15048_gshared((Queue_1_t3104 *)__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
 void Queue_1__ctor_m15049_gshared (Queue_1_t3104 * __this, Object_t* ___collection, MethodInfo* method);
#define Queue_1__ctor_m15049(__this, ___collection, method) (void)Queue_1__ctor_m15049_gshared((Queue_1_t3104 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void Queue_1_System_Collections_ICollection_CopyTo_m15051_gshared (Queue_1_t3104 * __this, Array_t * ___array, int32_t ___idx, MethodInfo* method);
#define Queue_1_System_Collections_ICollection_CopyTo_m15051(__this, ___array, ___idx, method) (void)Queue_1_System_Collections_ICollection_CopyTo_m15051_gshared((Queue_1_t3104 *)__this, (Array_t *)___array, (int32_t)___idx, method)
// System.Boolean System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
 bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m15053_gshared (Queue_1_t3104 * __this, MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m15053(__this, method) (bool)Queue_1_System_Collections_ICollection_get_IsSynchronized_m15053_gshared((Queue_1_t3104 *)__this, method)
// System.Object System.Collections.Generic.Queue`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
 Object_t * Queue_1_System_Collections_ICollection_get_SyncRoot_m15055_gshared (Queue_1_t3104 * __this, MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m15055(__this, method) (Object_t *)Queue_1_System_Collections_ICollection_get_SyncRoot_m15055_gshared((Queue_1_t3104 *)__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15057_gshared (Queue_1_t3104 * __this, MethodInfo* method);
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15057(__this, method) (Object_t*)Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m15057_gshared((Queue_1_t3104 *)__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Queue_1_System_Collections_IEnumerable_GetEnumerator_m15059_gshared (Queue_1_t3104 * __this, MethodInfo* method);
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m15059(__this, method) (Object_t *)Queue_1_System_Collections_IEnumerable_GetEnumerator_m15059_gshared((Queue_1_t3104 *)__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::CopyTo(T[],System.Int32)
 void Queue_1_CopyTo_m15061_gshared (Queue_1_t3104 * __this, ObjectU5BU5D_t112* ___array, int32_t ___idx, MethodInfo* method);
#define Queue_1_CopyTo_m15061(__this, ___array, ___idx, method) (void)Queue_1_CopyTo_m15061_gshared((Queue_1_t3104 *)__this, (ObjectU5BU5D_t112*)___array, (int32_t)___idx, method)
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
 Object_t * Queue_1_Dequeue_m15062_gshared (Queue_1_t3104 * __this, MethodInfo* method);
#define Queue_1_Dequeue_m15062(__this, method) (Object_t *)Queue_1_Dequeue_m15062_gshared((Queue_1_t3104 *)__this, method)
// T System.Collections.Generic.Queue`1<System.Object>::Peek()
 Object_t * Queue_1_Peek_m15064_gshared (Queue_1_t3104 * __this, MethodInfo* method);
#define Queue_1_Peek_m15064(__this, method) (Object_t *)Queue_1_Peek_m15064_gshared((Queue_1_t3104 *)__this, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
 void Queue_1_Enqueue_m15066_gshared (Queue_1_t3104 * __this, Object_t * ___item, MethodInfo* method);
#define Queue_1_Enqueue_m15066(__this, ___item, method) (void)Queue_1_Enqueue_m15066_gshared((Queue_1_t3104 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.Queue`1<System.Object>::SetCapacity(System.Int32)
 void Queue_1_SetCapacity_m15068_gshared (Queue_1_t3104 * __this, int32_t ___new_size, MethodInfo* method);
#define Queue_1_SetCapacity_m15068(__this, ___new_size, method) (void)Queue_1_SetCapacity_m15068_gshared((Queue_1_t3104 *)__this, (int32_t)___new_size, method)
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
 int32_t Queue_1_get_Count_m15069_gshared (Queue_1_t3104 * __this, MethodInfo* method);
#define Queue_1_get_Count_m15069(__this, method) (int32_t)Queue_1_get_Count_m15069_gshared((Queue_1_t3104 *)__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<System.Object>::GetEnumerator()
 Enumerator_t3106  Queue_1_GetEnumerator_m15071 (Queue_1_t3104 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
