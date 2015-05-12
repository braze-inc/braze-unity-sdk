#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Hashtable
struct Hashtable_t426;
// System.Collections.IComparer
struct IComparer_t1577;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t1582;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t1114;
// System.Collections.IDictionary
struct IDictionary_t1572;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t971;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1583;
// System.Collections.IEnumerator
struct IEnumerator_t19;
// System.Array
struct Array_t;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1573;
// System.Collections.Hashtable/Slot[]
struct SlotU5BU5D_t1895;
// System.Int32[]
struct Int32U5BU5D_t1196;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Hashtable/EnumeratorMode
#include "mscorlib_System_Collections_Hashtable_EnumeratorMode.h"

// System.Void System.Collections.Hashtable::.ctor()
 void Hashtable__ctor_m6661 (Hashtable_t426 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single,System.Collections.IHashCodeProvider,System.Collections.IComparer)
 void Hashtable__ctor_m9207 (Hashtable_t426 * __this, int32_t ___capacity, float ___loadFactor, Object_t * ___hcp, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single)
 void Hashtable__ctor_m9208 (Hashtable_t426 * __this, int32_t ___capacity, float ___loadFactor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32)
 void Hashtable__ctor_m2044 (Hashtable_t426 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.Hashtable)
 void Hashtable__ctor_m9209 (Hashtable_t426 * __this, Hashtable_t426 * ___source, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Collections.IHashCodeProvider,System.Collections.IComparer)
 void Hashtable__ctor_m7637 (Hashtable_t426 * __this, int32_t ___capacity, Object_t * ___hcp, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.IDictionary,System.Single,System.Collections.IHashCodeProvider,System.Collections.IComparer)
 void Hashtable__ctor_m9210 (Hashtable_t426 * __this, Object_t * ___d, float ___loadFactor, Object_t * ___hcp, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.IDictionary,System.Collections.IHashCodeProvider,System.Collections.IComparer)
 void Hashtable__ctor_m7642 (Hashtable_t426 * __this, Object_t * ___d, Object_t * ___hcp, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.IHashCodeProvider,System.Collections.IComparer)
 void Hashtable__ctor_m7675 (Hashtable_t426 * __this, Object_t * ___hcp, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Hashtable__ctor_m9211 (Hashtable_t426 * __this, SerializationInfo_t971 * ___info, StreamingContext_t972  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Collections.IEqualityComparer)
 void Hashtable__ctor_m7648 (Hashtable_t426 * __this, int32_t ___capacity, Object_t * ___equalityComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single,System.Collections.IEqualityComparer)
 void Hashtable__ctor_m9212 (Hashtable_t426 * __this, int32_t ___capacity, float ___loadFactor, Object_t * ___equalityComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.cctor()
 void Hashtable__cctor_m9213 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Hashtable::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Hashtable_System_Collections_IEnumerable_GetEnumerator_m9214 (Hashtable_t426 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::set_comparer(System.Collections.IComparer)
 void Hashtable_set_comparer_m9215 (Hashtable_t426 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::set_hcp(System.Collections.IHashCodeProvider)
 void Hashtable_set_hcp_m9216 (Hashtable_t426 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::get_Count()
 int32_t Hashtable_get_Count_m7729 (Hashtable_t426 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::get_IsSynchronized()
 bool Hashtable_get_IsSynchronized_m9217 (Hashtable_t426 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable::get_SyncRoot()
 Object_t * Hashtable_get_SyncRoot_m9218 (Hashtable_t426 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Hashtable::get_Keys()
 Object_t * Hashtable_get_Keys_m7774 (Hashtable_t426 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Hashtable::get_Values()
 Object_t * Hashtable_get_Values_m6666 (Hashtable_t426 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable::get_Item(System.Object)
 Object_t * Hashtable_get_Item_m6663 (Hashtable_t426 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object)
 void Hashtable_set_Item_m2045 (Hashtable_t426 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::CopyTo(System.Array,System.Int32)
 void Hashtable_CopyTo_m9219 (Hashtable_t426 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Add(System.Object,System.Object)
 void Hashtable_Add_m6664 (Hashtable_t426 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Clear()
 void Hashtable_Clear_m7773 (Hashtable_t426 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::Contains(System.Object)
 bool Hashtable_Contains_m7730 (Hashtable_t426 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator()
 Object_t * Hashtable_GetEnumerator_m9220 (Hashtable_t426 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Remove(System.Object)
 void Hashtable_Remove_m6665 (Hashtable_t426 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::ContainsKey(System.Object)
 bool Hashtable_ContainsKey_m2046 (Hashtable_t426 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable::Clone()
 Object_t * Hashtable_Clone_m9221 (Hashtable_t426 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Hashtable_GetObjectData_m9222 (Hashtable_t426 * __this, SerializationInfo_t971 * ___info, StreamingContext_t972  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::OnDeserialization(System.Object)
 void Hashtable_OnDeserialization_m9223 (Hashtable_t426 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::GetHash(System.Object)
 int32_t Hashtable_GetHash_m9224 (Hashtable_t426 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::KeyEquals(System.Object,System.Object)
 bool Hashtable_KeyEquals_m9225 (Hashtable_t426 * __this, Object_t * ___item, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::AdjustThreshold()
 void Hashtable_AdjustThreshold_m9226 (Hashtable_t426 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::SetTable(System.Collections.Hashtable/Slot[],System.Int32[])
 void Hashtable_SetTable_m9227 (Hashtable_t426 * __this, SlotU5BU5D_t1895* ___table, Int32U5BU5D_t1196* ___hashes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::Find(System.Object)
 int32_t Hashtable_Find_m9228 (Hashtable_t426 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Rehash()
 void Hashtable_Rehash_m9229 (Hashtable_t426 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::PutImpl(System.Object,System.Object,System.Boolean)
 void Hashtable_PutImpl_m9230 (Hashtable_t426 * __this, Object_t * ___key, Object_t * ___value, bool ___overwrite, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::CopyToArray(System.Array,System.Int32,System.Collections.Hashtable/EnumeratorMode)
 void Hashtable_CopyToArray_m9231 (Hashtable_t426 * __this, Array_t * ___arr, int32_t ___i, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::TestPrime(System.Int32)
 bool Hashtable_TestPrime_m9232 (Object_t * __this/* static, unused */, int32_t ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::CalcPrime(System.Int32)
 int32_t Hashtable_CalcPrime_m9233 (Object_t * __this/* static, unused */, int32_t ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::ToPrime(System.Int32)
 int32_t Hashtable_ToPrime_m9234 (Object_t * __this/* static, unused */, int32_t ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
