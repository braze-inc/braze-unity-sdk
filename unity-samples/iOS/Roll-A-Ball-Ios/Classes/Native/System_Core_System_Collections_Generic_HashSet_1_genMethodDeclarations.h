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

// System.Collections.Generic.HashSet`1<Appboy.Models.CardCategory>
struct HashSet_1_t38;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t962;
// System.Collections.Generic.IEnumerator`1<Appboy.Models.CardCategory>
struct IEnumerator_1_t2904;
// Appboy.Models.CardCategory[]
struct CardCategoryU5BU5D_t2196;
// System.Collections.IEnumerator
struct IEnumerator_t66;
// System.Collections.Generic.IEqualityComparer`1<Appboy.Models.CardCategory>
struct IEqualityComparer_1_t2198;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Appboy_Models_CardCategory.h"
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator_.h"

// System.Void System.Collections.Generic.HashSet`1<Appboy.Models.CardCategory>::.ctor()
extern "C" void HashSet_1__ctor_m565_gshared (HashSet_1_t38 * __this, const MethodInfo* method);
#define HashSet_1__ctor_m565(__this, method) (( void (*) (HashSet_1_t38 *, const MethodInfo*))HashSet_1__ctor_m565_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<Appboy.Models.CardCategory>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1__ctor_m13480_gshared (HashSet_1_t38 * __this, SerializationInfo_t962 * ___info, StreamingContext_t963  ___context, const MethodInfo* method);
#define HashSet_1__ctor_m13480(__this, ___info, ___context, method) (( void (*) (HashSet_1_t38 *, SerializationInfo_t962 *, StreamingContext_t963 , const MethodInfo*))HashSet_1__ctor_m13480_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<Appboy.Models.CardCategory>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13481_gshared (HashSet_1_t38 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13481(__this, method) (( Object_t* (*) (HashSet_1_t38 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13481_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<Appboy.Models.CardCategory>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13482_gshared (HashSet_1_t38 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13482(__this, method) (( bool (*) (HashSet_1_t38 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13482_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<Appboy.Models.CardCategory>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m13483_gshared (HashSet_1_t38 * __this, CardCategoryU5BU5D_t2196* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m13483(__this, ___array, ___index, method) (( void (*) (HashSet_1_t38 *, CardCategoryU5BU5D_t2196*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m13483_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<Appboy.Models.CardCategory>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m13484_gshared (HashSet_1_t38 * __this, int32_t ___item, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m13484(__this, ___item, method) (( void (*) (HashSet_1_t38 *, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m13484_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<Appboy.Models.CardCategory>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HashSet_1_System_Collections_IEnumerable_GetEnumerator_m13485_gshared (HashSet_1_t38 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m13485(__this, method) (( Object_t * (*) (HashSet_1_t38 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m13485_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<Appboy.Models.CardCategory>::get_Count()
extern "C" int32_t HashSet_1_get_Count_m13486_gshared (HashSet_1_t38 * __this, const MethodInfo* method);
#define HashSet_1_get_Count_m13486(__this, method) (( int32_t (*) (HashSet_1_t38 *, const MethodInfo*))HashSet_1_get_Count_m13486_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<Appboy.Models.CardCategory>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1_Init_m13487_gshared (HashSet_1_t38 * __this, int32_t ___capacity, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1_Init_m13487(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t38 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m13487_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<Appboy.Models.CardCategory>::InitArrays(System.Int32)
extern "C" void HashSet_1_InitArrays_m13488_gshared (HashSet_1_t38 * __this, int32_t ___size, const MethodInfo* method);
#define HashSet_1_InitArrays_m13488(__this, ___size, method) (( void (*) (HashSet_1_t38 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m13488_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<Appboy.Models.CardCategory>::SlotsContainsAt(System.Int32,System.Int32,T)
extern "C" bool HashSet_1_SlotsContainsAt_m13489_gshared (HashSet_1_t38 * __this, int32_t ___index, int32_t ___hash, int32_t ___item, const MethodInfo* method);
#define HashSet_1_SlotsContainsAt_m13489(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t38 *, int32_t, int32_t, int32_t, const MethodInfo*))HashSet_1_SlotsContainsAt_m13489_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<Appboy.Models.CardCategory>::CopyTo(T[],System.Int32)
extern "C" void HashSet_1_CopyTo_m13490_gshared (HashSet_1_t38 * __this, CardCategoryU5BU5D_t2196* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_CopyTo_m13490(__this, ___array, ___index, method) (( void (*) (HashSet_1_t38 *, CardCategoryU5BU5D_t2196*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m13490_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<Appboy.Models.CardCategory>::CopyTo(T[],System.Int32,System.Int32)
extern "C" void HashSet_1_CopyTo_m13491_gshared (HashSet_1_t38 * __this, CardCategoryU5BU5D_t2196* ___array, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define HashSet_1_CopyTo_m13491(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t38 *, CardCategoryU5BU5D_t2196*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m13491_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<Appboy.Models.CardCategory>::Resize()
extern "C" void HashSet_1_Resize_m13492_gshared (HashSet_1_t38 * __this, const MethodInfo* method);
#define HashSet_1_Resize_m13492(__this, method) (( void (*) (HashSet_1_t38 *, const MethodInfo*))HashSet_1_Resize_m13492_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<Appboy.Models.CardCategory>::GetLinkHashCode(System.Int32)
extern "C" int32_t HashSet_1_GetLinkHashCode_m13493_gshared (HashSet_1_t38 * __this, int32_t ___index, const MethodInfo* method);
#define HashSet_1_GetLinkHashCode_m13493(__this, ___index, method) (( int32_t (*) (HashSet_1_t38 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m13493_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<Appboy.Models.CardCategory>::GetItemHashCode(T)
extern "C" int32_t HashSet_1_GetItemHashCode_m13494_gshared (HashSet_1_t38 * __this, int32_t ___item, const MethodInfo* method);
#define HashSet_1_GetItemHashCode_m13494(__this, ___item, method) (( int32_t (*) (HashSet_1_t38 *, int32_t, const MethodInfo*))HashSet_1_GetItemHashCode_m13494_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<Appboy.Models.CardCategory>::Add(T)
extern "C" bool HashSet_1_Add_m566_gshared (HashSet_1_t38 * __this, int32_t ___item, const MethodInfo* method);
#define HashSet_1_Add_m566(__this, ___item, method) (( bool (*) (HashSet_1_t38 *, int32_t, const MethodInfo*))HashSet_1_Add_m566_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<Appboy.Models.CardCategory>::Clear()
extern "C" void HashSet_1_Clear_m13495_gshared (HashSet_1_t38 * __this, const MethodInfo* method);
#define HashSet_1_Clear_m13495(__this, method) (( void (*) (HashSet_1_t38 *, const MethodInfo*))HashSet_1_Clear_m13495_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<Appboy.Models.CardCategory>::Contains(T)
extern "C" bool HashSet_1_Contains_m13496_gshared (HashSet_1_t38 * __this, int32_t ___item, const MethodInfo* method);
#define HashSet_1_Contains_m13496(__this, ___item, method) (( bool (*) (HashSet_1_t38 *, int32_t, const MethodInfo*))HashSet_1_Contains_m13496_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<Appboy.Models.CardCategory>::Remove(T)
extern "C" bool HashSet_1_Remove_m13497_gshared (HashSet_1_t38 * __this, int32_t ___item, const MethodInfo* method);
#define HashSet_1_Remove_m13497(__this, ___item, method) (( bool (*) (HashSet_1_t38 *, int32_t, const MethodInfo*))HashSet_1_Remove_m13497_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<Appboy.Models.CardCategory>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1_GetObjectData_m13498_gshared (HashSet_1_t38 * __this, SerializationInfo_t962 * ___info, StreamingContext_t963  ___context, const MethodInfo* method);
#define HashSet_1_GetObjectData_m13498(__this, ___info, ___context, method) (( void (*) (HashSet_1_t38 *, SerializationInfo_t962 *, StreamingContext_t963 , const MethodInfo*))HashSet_1_GetObjectData_m13498_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<Appboy.Models.CardCategory>::OnDeserialization(System.Object)
extern "C" void HashSet_1_OnDeserialization_m13499_gshared (HashSet_1_t38 * __this, Object_t * ___sender, const MethodInfo* method);
#define HashSet_1_OnDeserialization_m13499(__this, ___sender, method) (( void (*) (HashSet_1_t38 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m13499_gshared)(__this, ___sender, method)
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<Appboy.Models.CardCategory>::GetEnumerator()
extern "C" Enumerator_t114  HashSet_1_GetEnumerator_m567_gshared (HashSet_1_t38 * __this, const MethodInfo* method);
#define HashSet_1_GetEnumerator_m567(__this, method) (( Enumerator_t114  (*) (HashSet_1_t38 *, const MethodInfo*))HashSet_1_GetEnumerator_m567_gshared)(__this, method)
