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

// System.Collections.SortedList
struct SortedList_t3322490541;
// System.Collections.IComparer
struct IComparer_t2207526184;
// System.Collections.IDictionary
struct IDictionary_t1654916945;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Object
struct Il2CppObject;
// System.Collections.ICollection
struct ICollection_t3761522009;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1541724277;
// System.Array
struct Il2CppArray;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Collections_SortedList_EnumeratorM3331444647.h"

// System.Void System.Collections.SortedList::.ctor()
extern "C"  void SortedList__ctor_m3703218657 (SortedList_t3322490541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::.ctor(System.Int32)
extern "C"  void SortedList__ctor_m3028782514 (SortedList_t3322490541 * __this, int32_t ___initialCapacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::.ctor(System.Collections.IComparer,System.Int32)
extern "C"  void SortedList__ctor_m690679828 (SortedList_t3322490541 * __this, Il2CppObject * ___comparer0, int32_t ___capacity1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::.ctor(System.Collections.IDictionary,System.Collections.IComparer)
extern "C"  void SortedList__ctor_m37047406 (SortedList_t3322490541 * __this, Il2CppObject * ___d0, Il2CppObject * ___comparer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::.cctor()
extern "C"  void SortedList__cctor_m2648532460 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.SortedList::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * SortedList_System_Collections_IEnumerable_GetEnumerator_m76581074 (SortedList_t3322490541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::get_Count()
extern "C"  int32_t SortedList_get_Count_m418925185 (SortedList_t3322490541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::get_IsSynchronized()
extern "C"  bool SortedList_get_IsSynchronized_m2706175784 (SortedList_t3322490541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::get_SyncRoot()
extern "C"  Il2CppObject * SortedList_get_SyncRoot_m808976468 (SortedList_t3322490541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::get_IsFixedSize()
extern "C"  bool SortedList_get_IsFixedSize_m296838179 (SortedList_t3322490541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::get_IsReadOnly()
extern "C"  bool SortedList_get_IsReadOnly_m47942262 (SortedList_t3322490541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.SortedList::get_Keys()
extern "C"  Il2CppObject * SortedList_get_Keys_m1002009284 (SortedList_t3322490541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::get_Item(System.Object)
extern "C"  Il2CppObject * SortedList_get_Item_m3913687818 (SortedList_t3322490541 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::set_Item(System.Object,System.Object)
extern "C"  void SortedList_set_Item_m3021572719 (SortedList_t3322490541 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::get_Capacity()
extern "C"  int32_t SortedList_get_Capacity_m3653672298 (SortedList_t3322490541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::set_Capacity(System.Int32)
extern "C"  void SortedList_set_Capacity_m1257766347 (SortedList_t3322490541 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::Add(System.Object,System.Object)
extern "C"  void SortedList_Add_m3440224898 (SortedList_t3322490541 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::Contains(System.Object)
extern "C"  bool SortedList_Contains_m2222218676 (SortedList_t3322490541 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.SortedList::GetEnumerator()
extern "C"  Il2CppObject * SortedList_GetEnumerator_m201395865 (SortedList_t3322490541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::Remove(System.Object)
extern "C"  void SortedList_Remove_m3031745197 (SortedList_t3322490541 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::CopyTo(System.Array,System.Int32)
extern "C"  void SortedList_CopyTo_m894370686 (SortedList_t3322490541 * __this, Il2CppArray * ___array0, int32_t ___arrayIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::Clone()
extern "C"  Il2CppObject * SortedList_Clone_m2984157137 (SortedList_t3322490541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::RemoveAt(System.Int32)
extern "C"  void SortedList_RemoveAt_m1080176299 (SortedList_t3322490541 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::IndexOfKey(System.Object)
extern "C"  int32_t SortedList_IndexOfKey_m3014350519 (SortedList_t3322490541 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.SortedList::ContainsKey(System.Object)
extern "C"  bool SortedList_ContainsKey_m4196656883 (SortedList_t3322490541 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::GetByIndex(System.Int32)
extern "C"  Il2CppObject * SortedList_GetByIndex_m3326735940 (SortedList_t3322490541 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::GetKey(System.Int32)
extern "C"  Il2CppObject * SortedList_GetKey_m2445586024 (SortedList_t3322490541 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::EnsureCapacity(System.Int32,System.Int32)
extern "C"  void SortedList_EnsureCapacity_m3463945643 (SortedList_t3322490541 * __this, int32_t ___n0, int32_t ___free1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::PutImpl(System.Object,System.Object,System.Boolean)
extern "C"  void SortedList_PutImpl_m1191987689 (SortedList_t3322490541 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, bool ___overwrite2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.SortedList::GetImpl(System.Object)
extern "C"  Il2CppObject * SortedList_GetImpl_m3718651850 (SortedList_t3322490541 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::InitTable(System.Int32,System.Boolean)
extern "C"  void SortedList_InitTable_m1786490575 (SortedList_t3322490541 * __this, int32_t ___capacity0, bool ___forceSize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.SortedList::CopyToArray(System.Array,System.Int32,System.Collections.SortedList/EnumeratorMode)
extern "C"  void SortedList_CopyToArray_m1106701690 (SortedList_t3322490541 * __this, Il2CppArray * ___arr0, int32_t ___i1, int32_t ___mode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.SortedList::Find(System.Object)
extern "C"  int32_t SortedList_Find_m658979188 (SortedList_t3322490541 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
