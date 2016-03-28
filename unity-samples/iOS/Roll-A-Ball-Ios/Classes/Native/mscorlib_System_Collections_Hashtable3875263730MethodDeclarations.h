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

// System.Collections.Hashtable
struct Hashtable_t3875263730;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t2093096743;
// System.Collections.IComparer
struct IComparer_t2207526184;
// System.Collections.IDictionary
struct IDictionary_t1654916945;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1661793090;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Object
struct Il2CppObject;
// System.Collections.ICollection
struct ICollection_t3761522009;
// System.Array
struct Il2CppArray;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1541724277;
// System.Collections.Hashtable/Slot[]
struct SlotU5BU5D_t1015578539;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Hashtable3875263730.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Collections_Hashtable_EnumeratorMo3331444647.h"

// System.Void System.Collections.Hashtable::.ctor()
extern "C"  void Hashtable__ctor_m1514037738 (Hashtable_t3875263730 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single,System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C"  void Hashtable__ctor_m880032671 (Hashtable_t3875263730 * __this, int32_t ___capacity, float ___loadFactor, Il2CppObject * ___hcp, Il2CppObject * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single)
extern "C"  void Hashtable__ctor_m2919534560 (Hashtable_t3875263730 * __this, int32_t ___capacity, float ___loadFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32)
extern "C"  void Hashtable__ctor_m2902886459 (Hashtable_t3875263730 * __this, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.Hashtable)
extern "C"  void Hashtable__ctor_m556844962 (Hashtable_t3875263730 * __this, Hashtable_t3875263730 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C"  void Hashtable__ctor_m2095001914 (Hashtable_t3875263730 * __this, int32_t ___capacity, Il2CppObject * ___hcp, Il2CppObject * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.IDictionary,System.Single,System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C"  void Hashtable__ctor_m775991879 (Hashtable_t3875263730 * __this, Il2CppObject * ___d, float ___loadFactor, Il2CppObject * ___hcp, Il2CppObject * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.IDictionary,System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C"  void Hashtable__ctor_m1961291234 (Hashtable_t3875263730 * __this, Il2CppObject * ___d, Il2CppObject * ___hcp, Il2CppObject * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C"  void Hashtable__ctor_m346689243 (Hashtable_t3875263730 * __this, Il2CppObject * ___hcp, Il2CppObject * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Hashtable__ctor_m2213883947 (Hashtable_t3875263730 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Collections.IEqualityComparer)
extern "C"  void Hashtable__ctor_m553622419 (Hashtable_t3875263730 * __this, int32_t ___capacity, Il2CppObject * ___equalityComparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single,System.Collections.IEqualityComparer)
extern "C"  void Hashtable__ctor_m2202593038 (Hashtable_t3875263730 * __this, int32_t ___capacity, float ___loadFactor, Il2CppObject * ___equalityComparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.cctor()
extern "C"  void Hashtable__cctor_m3503400707 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Hashtable::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Hashtable_System_Collections_IEnumerable_GetEnumerator_m2131971349 (Hashtable_t3875263730 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::set_comparer(System.Collections.IComparer)
extern "C"  void Hashtable_set_comparer_m3192953638 (Hashtable_t3875263730 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::set_hcp(System.Collections.IHashCodeProvider)
extern "C"  void Hashtable_set_hcp_m3304781571 (Hashtable_t3875263730 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::get_Count()
extern "C"  int32_t Hashtable_get_Count_m3337476178 (Hashtable_t3875263730 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::get_IsSynchronized()
extern "C"  bool Hashtable_get_IsSynchronized_m1352381059 (Hashtable_t3875263730 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable::get_SyncRoot()
extern "C"  Il2CppObject * Hashtable_get_SyncRoot_m2620554101 (Hashtable_t3875263730 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Hashtable::get_Keys()
extern "C"  Il2CppObject * Hashtable_get_Keys_m17177747 (Hashtable_t3875263730 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Hashtable::get_Values()
extern "C"  Il2CppObject * Hashtable_get_Values_m1695500481 (Hashtable_t3875263730 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable::get_Item(System.Object)
extern "C"  Il2CppObject * Hashtable_get_Item_m492674313 (Hashtable_t3875263730 * __this, Il2CppObject * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object)
extern "C"  void Hashtable_set_Item_m1018975416 (Hashtable_t3875263730 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::CopyTo(System.Array,System.Int32)
extern "C"  void Hashtable_CopyTo_m3581696583 (Hashtable_t3875263730 * __this, Il2CppArray * ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Add(System.Object,System.Object)
extern "C"  void Hashtable_Add_m2279986841 (Hashtable_t3875263730 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Clear()
extern "C"  void Hashtable_Clear_m3215138325 (Hashtable_t3875263730 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::Contains(System.Object)
extern "C"  bool Hashtable_Contains_m1066475641 (Hashtable_t3875263730 * __this, Il2CppObject * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator()
extern "C"  Il2CppObject * Hashtable_GetEnumerator_m737865954 (Hashtable_t3875263730 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Remove(System.Object)
extern "C"  void Hashtable_Remove_m2304720630 (Hashtable_t3875263730 * __this, Il2CppObject * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::ContainsKey(System.Object)
extern "C"  bool Hashtable_ContainsKey_m1913745934 (Hashtable_t3875263730 * __this, Il2CppObject * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable::Clone()
extern "C"  Il2CppObject * Hashtable_Clone_m3562010576 (Hashtable_t3875263730 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Hashtable_GetObjectData_m4219804808 (Hashtable_t3875263730 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::OnDeserialization(System.Object)
extern "C"  void Hashtable_OnDeserialization_m2896861916 (Hashtable_t3875263730 * __this, Il2CppObject * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Collections.Hashtable::Synchronized(System.Collections.Hashtable)
extern "C"  Hashtable_t3875263730 * Hashtable_Synchronized_m4005846889 (Il2CppObject * __this /* static, unused */, Hashtable_t3875263730 * ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::GetHash(System.Object)
extern "C"  int32_t Hashtable_GetHash_m527227236 (Hashtable_t3875263730 * __this, Il2CppObject * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::KeyEquals(System.Object,System.Object)
extern "C"  bool Hashtable_KeyEquals_m1149622430 (Hashtable_t3875263730 * __this, Il2CppObject * ___item, Il2CppObject * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::AdjustThreshold()
extern "C"  void Hashtable_AdjustThreshold_m2169901284 (Hashtable_t3875263730 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::SetTable(System.Collections.Hashtable/Slot[],System.Int32[])
extern "C"  void Hashtable_SetTable_m463771856 (Hashtable_t3875263730 * __this, SlotU5BU5D_t1015578539* ___table, Int32U5BU5D_t1809983122* ___hashes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::Find(System.Object)
extern "C"  int32_t Hashtable_Find_m3443418693 (Hashtable_t3875263730 * __this, Il2CppObject * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Rehash()
extern "C"  void Hashtable_Rehash_m3720779099 (Hashtable_t3875263730 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::PutImpl(System.Object,System.Object,System.Boolean)
extern "C"  void Hashtable_PutImpl_m3449217138 (Hashtable_t3875263730 * __this, Il2CppObject * ___key, Il2CppObject * ___value, bool ___overwrite, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::CopyToArray(System.Array,System.Int32,System.Collections.Hashtable/EnumeratorMode)
extern "C"  void Hashtable_CopyToArray_m3683911294 (Hashtable_t3875263730 * __this, Il2CppArray * ___arr, int32_t ___i, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::TestPrime(System.Int32)
extern "C"  bool Hashtable_TestPrime_m2080981348 (Il2CppObject * __this /* static, unused */, int32_t ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::CalcPrime(System.Int32)
extern "C"  int32_t Hashtable_CalcPrime_m1477965287 (Il2CppObject * __this /* static, unused */, int32_t ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::ToPrime(System.Int32)
extern "C"  int32_t Hashtable_ToPrime_m840372929 (Il2CppObject * __this /* static, unused */, int32_t ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
