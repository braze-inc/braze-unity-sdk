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

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2280;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t962;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t81;
// System.Object[]
struct ObjectU5BU5D_t87;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t66;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2165;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator__1.h"

// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
extern "C" void HashSet_1__ctor_m14427_gshared (HashSet_1_t2280 * __this, const MethodInfo* method);
#define HashSet_1__ctor_m14427(__this, method) (( void (*) (HashSet_1_t2280 *, const MethodInfo*))HashSet_1__ctor_m14427_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1__ctor_m14429_gshared (HashSet_1_t2280 * __this, SerializationInfo_t962 * ___info, StreamingContext_t963  ___context, const MethodInfo* method);
#define HashSet_1__ctor_m14429(__this, ___info, ___context, method) (( void (*) (HashSet_1_t2280 *, SerializationInfo_t962 *, StreamingContext_t963 , const MethodInfo*))HashSet_1__ctor_m14429_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14431_gshared (HashSet_1_t2280 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14431(__this, method) (( Object_t* (*) (HashSet_1_t2280 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14431_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14433_gshared (HashSet_1_t2280 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14433(__this, method) (( bool (*) (HashSet_1_t2280 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14433_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m14435_gshared (HashSet_1_t2280 * __this, ObjectU5BU5D_t87* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m14435(__this, ___array, ___index, method) (( void (*) (HashSet_1_t2280 *, ObjectU5BU5D_t87*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m14435_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m14437_gshared (HashSet_1_t2280 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m14437(__this, ___item, method) (( void (*) (HashSet_1_t2280 *, Object_t *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m14437_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HashSet_1_System_Collections_IEnumerable_GetEnumerator_m14439_gshared (HashSet_1_t2280 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m14439(__this, method) (( Object_t * (*) (HashSet_1_t2280 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m14439_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
extern "C" int32_t HashSet_1_get_Count_m14441_gshared (HashSet_1_t2280 * __this, const MethodInfo* method);
#define HashSet_1_get_Count_m14441(__this, method) (( int32_t (*) (HashSet_1_t2280 *, const MethodInfo*))HashSet_1_get_Count_m14441_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1_Init_m14443_gshared (HashSet_1_t2280 * __this, int32_t ___capacity, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1_Init_m14443(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t2280 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m14443_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::InitArrays(System.Int32)
extern "C" void HashSet_1_InitArrays_m14445_gshared (HashSet_1_t2280 * __this, int32_t ___size, const MethodInfo* method);
#define HashSet_1_InitArrays_m14445(__this, ___size, method) (( void (*) (HashSet_1_t2280 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m14445_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::SlotsContainsAt(System.Int32,System.Int32,T)
extern "C" bool HashSet_1_SlotsContainsAt_m14447_gshared (HashSet_1_t2280 * __this, int32_t ___index, int32_t ___hash, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_SlotsContainsAt_m14447(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t2280 *, int32_t, int32_t, Object_t *, const MethodInfo*))HashSet_1_SlotsContainsAt_m14447_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void HashSet_1_CopyTo_m14449_gshared (HashSet_1_t2280 * __this, ObjectU5BU5D_t87* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_CopyTo_m14449(__this, ___array, ___index, method) (( void (*) (HashSet_1_t2280 *, ObjectU5BU5D_t87*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m14449_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32,System.Int32)
extern "C" void HashSet_1_CopyTo_m14451_gshared (HashSet_1_t2280 * __this, ObjectU5BU5D_t87* ___array, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define HashSet_1_CopyTo_m14451(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t2280 *, ObjectU5BU5D_t87*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m14451_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Resize()
extern "C" void HashSet_1_Resize_m14453_gshared (HashSet_1_t2280 * __this, const MethodInfo* method);
#define HashSet_1_Resize_m14453(__this, method) (( void (*) (HashSet_1_t2280 *, const MethodInfo*))HashSet_1_Resize_m14453_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetLinkHashCode(System.Int32)
extern "C" int32_t HashSet_1_GetLinkHashCode_m14455_gshared (HashSet_1_t2280 * __this, int32_t ___index, const MethodInfo* method);
#define HashSet_1_GetLinkHashCode_m14455(__this, ___index, method) (( int32_t (*) (HashSet_1_t2280 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m14455_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetItemHashCode(T)
extern "C" int32_t HashSet_1_GetItemHashCode_m14457_gshared (HashSet_1_t2280 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_GetItemHashCode_m14457(__this, ___item, method) (( int32_t (*) (HashSet_1_t2280 *, Object_t *, const MethodInfo*))HashSet_1_GetItemHashCode_m14457_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
extern "C" bool HashSet_1_Add_m14458_gshared (HashSet_1_t2280 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Add_m14458(__this, ___item, method) (( bool (*) (HashSet_1_t2280 *, Object_t *, const MethodInfo*))HashSet_1_Add_m14458_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
extern "C" void HashSet_1_Clear_m14460_gshared (HashSet_1_t2280 * __this, const MethodInfo* method);
#define HashSet_1_Clear_m14460(__this, method) (( void (*) (HashSet_1_t2280 *, const MethodInfo*))HashSet_1_Clear_m14460_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
extern "C" bool HashSet_1_Contains_m14462_gshared (HashSet_1_t2280 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Contains_m14462(__this, ___item, method) (( bool (*) (HashSet_1_t2280 *, Object_t *, const MethodInfo*))HashSet_1_Contains_m14462_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
extern "C" bool HashSet_1_Remove_m14464_gshared (HashSet_1_t2280 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Remove_m14464(__this, ___item, method) (( bool (*) (HashSet_1_t2280 *, Object_t *, const MethodInfo*))HashSet_1_Remove_m14464_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1_GetObjectData_m14466_gshared (HashSet_1_t2280 * __this, SerializationInfo_t962 * ___info, StreamingContext_t963  ___context, const MethodInfo* method);
#define HashSet_1_GetObjectData_m14466(__this, ___info, ___context, method) (( void (*) (HashSet_1_t2280 *, SerializationInfo_t962 *, StreamingContext_t963 , const MethodInfo*))HashSet_1_GetObjectData_m14466_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::OnDeserialization(System.Object)
extern "C" void HashSet_1_OnDeserialization_m14468_gshared (HashSet_1_t2280 * __this, Object_t * ___sender, const MethodInfo* method);
#define HashSet_1_OnDeserialization_m14468(__this, ___sender, method) (( void (*) (HashSet_1_t2280 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m14468_gshared)(__this, ___sender, method)
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t2284  HashSet_1_GetEnumerator_m14469_gshared (HashSet_1_t2280 * __this, const MethodInfo* method);
#define HashSet_1_GetEnumerator_m14469(__this, method) (( Enumerator_t2284  (*) (HashSet_1_t2280 *, const MethodInfo*))HashSet_1_GetEnumerator_m14469_gshared)(__this, method)
