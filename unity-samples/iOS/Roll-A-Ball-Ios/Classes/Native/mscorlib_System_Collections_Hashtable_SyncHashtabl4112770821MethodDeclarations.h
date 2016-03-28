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

// System.Collections.Hashtable/SyncHashtable
struct SyncHashtable_t4112770821;
// System.Collections.Hashtable
struct Hashtable_t3875263730;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
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

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Hashtable3875263730.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Array2840145358.h"

// System.Void System.Collections.Hashtable/SyncHashtable::.ctor(System.Collections.Hashtable)
extern "C"  void SyncHashtable__ctor_m3716654572 (SyncHashtable_t4112770821 * __this, Hashtable_t3875263730 * ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void SyncHashtable__ctor_m330612341 (SyncHashtable_t4112770821 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Hashtable/SyncHashtable::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * SyncHashtable_System_Collections_IEnumerable_GetEnumerator_m4026891787 (SyncHashtable_t4112770821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void SyncHashtable_GetObjectData_m765378770 (SyncHashtable_t4112770821 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable/SyncHashtable::get_Count()
extern "C"  int32_t SyncHashtable_get_Count_m3563238812 (SyncHashtable_t4112770821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable/SyncHashtable::get_IsSynchronized()
extern "C"  bool SyncHashtable_get_IsSynchronized_m3501702649 (SyncHashtable_t4112770821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable/SyncHashtable::get_SyncRoot()
extern "C"  Il2CppObject * SyncHashtable_get_SyncRoot_m513487403 (SyncHashtable_t4112770821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Hashtable/SyncHashtable::get_Keys()
extern "C"  Il2CppObject * SyncHashtable_get_Keys_m4083312137 (SyncHashtable_t4112770821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Hashtable/SyncHashtable::get_Values()
extern "C"  Il2CppObject * SyncHashtable_get_Values_m830409911 (SyncHashtable_t4112770821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable/SyncHashtable::get_Item(System.Object)
extern "C"  Il2CppObject * SyncHashtable_get_Item_m2996310803 (SyncHashtable_t4112770821 * __this, Il2CppObject * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::set_Item(System.Object,System.Object)
extern "C"  void SyncHashtable_set_Item_m1054132354 (SyncHashtable_t4112770821 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::CopyTo(System.Array,System.Int32)
extern "C"  void SyncHashtable_CopyTo_m3853140753 (SyncHashtable_t4112770821 * __this, Il2CppArray * ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::Add(System.Object,System.Object)
extern "C"  void SyncHashtable_Add_m626175119 (SyncHashtable_t4112770821 * __this, Il2CppObject * ___key, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::Clear()
extern "C"  void SyncHashtable_Clear_m1117089631 (SyncHashtable_t4112770821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable/SyncHashtable::Contains(System.Object)
extern "C"  bool SyncHashtable_Contains_m2133514563 (SyncHashtable_t4112770821 * __this, Il2CppObject * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Hashtable/SyncHashtable::GetEnumerator()
extern "C"  Il2CppObject * SyncHashtable_GetEnumerator_m1352826924 (SyncHashtable_t4112770821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::Remove(System.Object)
extern "C"  void SyncHashtable_Remove_m1658619584 (SyncHashtable_t4112770821 * __this, Il2CppObject * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable/SyncHashtable::ContainsKey(System.Object)
extern "C"  bool SyncHashtable_ContainsKey_m3017313540 (SyncHashtable_t4112770821 * __this, Il2CppObject * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable/SyncHashtable::Clone()
extern "C"  Il2CppObject * SyncHashtable_Clone_m1874575834 (SyncHashtable_t4112770821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
