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

// System.Collections.CollectionBase
struct CollectionBase_t851261505;
// System.Array
struct Il2CppArray;
// System.Object
struct Il2CppObject;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.Collections.IList
struct IList_t1612618265;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Collections.CollectionBase::.ctor()
extern "C"  void CollectionBase__ctor_m3181013581 (CollectionBase_t851261505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void CollectionBase_System_Collections_ICollection_CopyTo_m634775447 (CollectionBase_t851261505 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.CollectionBase::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * CollectionBase_System_Collections_ICollection_get_SyncRoot_m3961010597 (CollectionBase_t851261505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CollectionBase::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool CollectionBase_System_Collections_ICollection_get_IsSynchronized_m1284188723 (CollectionBase_t851261505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CollectionBase::System.Collections.IList.Add(System.Object)
extern "C"  int32_t CollectionBase_System_Collections_IList_Add_m161097623 (CollectionBase_t851261505 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CollectionBase::System.Collections.IList.Contains(System.Object)
extern "C"  bool CollectionBase_System_Collections_IList_Contains_m2561799305 (CollectionBase_t851261505 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CollectionBase::System.Collections.IList.IndexOf(System.Object)
extern "C"  int32_t CollectionBase_System_Collections_IList_IndexOf_m2310978159 (CollectionBase_t851261505 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C"  void CollectionBase_System_Collections_IList_Insert_m917928546 (CollectionBase_t851261505 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.IList.Remove(System.Object)
extern "C"  void CollectionBase_System_Collections_IList_Remove_m872150918 (CollectionBase_t851261505 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CollectionBase::System.Collections.IList.get_IsFixedSize()
extern "C"  bool CollectionBase_System_Collections_IList_get_IsFixedSize_m2924084920 (CollectionBase_t851261505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CollectionBase::System.Collections.IList.get_IsReadOnly()
extern "C"  bool CollectionBase_System_Collections_IList_get_IsReadOnly_m271239489 (CollectionBase_t851261505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.CollectionBase::System.Collections.IList.get_Item(System.Int32)
extern "C"  Il2CppObject * CollectionBase_System_Collections_IList_get_Item_m2255771116 (CollectionBase_t851261505 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void CollectionBase_System_Collections_IList_set_Item_m2274989497 (CollectionBase_t851261505 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CollectionBase::get_Count()
extern "C"  int32_t CollectionBase_get_Count_m313265901 (CollectionBase_t851261505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.CollectionBase::GetEnumerator()
extern "C"  Il2CppObject * CollectionBase_GetEnumerator_m661855675 (CollectionBase_t851261505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::Clear()
extern "C"  void CollectionBase_Clear_m587146872 (CollectionBase_t851261505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::RemoveAt(System.Int32)
extern "C"  void CollectionBase_RemoveAt_m3296919743 (CollectionBase_t851261505 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Collections.CollectionBase::get_InnerList()
extern "C"  ArrayList_t2121638921 * CollectionBase_get_InnerList_m2840879970 (CollectionBase_t851261505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList System.Collections.CollectionBase::get_List()
extern "C"  Il2CppObject * CollectionBase_get_List_m2531266242 (CollectionBase_t851261505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnClear()
extern "C"  void CollectionBase_OnClear_m777794841 (CollectionBase_t851261505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnClearComplete()
extern "C"  void CollectionBase_OnClearComplete_m606486578 (CollectionBase_t851261505 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnInsert(System.Int32,System.Object)
extern "C"  void CollectionBase_OnInsert_m4273696622 (CollectionBase_t851261505 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnInsertComplete(System.Int32,System.Object)
extern "C"  void CollectionBase_OnInsertComplete_m722388807 (CollectionBase_t851261505 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnRemove(System.Int32,System.Object)
extern "C"  void CollectionBase_OnRemove_m4013840057 (CollectionBase_t851261505 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnRemoveComplete(System.Int32,System.Object)
extern "C"  void CollectionBase_OnRemoveComplete_m2848404370 (CollectionBase_t851261505 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnSet(System.Int32,System.Object,System.Object)
extern "C"  void CollectionBase_OnSet_m3575325083 (CollectionBase_t851261505 * __this, int32_t ___index0, Il2CppObject * ___oldValue1, Il2CppObject * ___newValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnSetComplete(System.Int32,System.Object,System.Object)
extern "C"  void CollectionBase_OnSetComplete_m2205481652 (CollectionBase_t851261505 * __this, int32_t ___index0, Il2CppObject * ___oldValue1, Il2CppObject * ___newValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnValidate(System.Object)
extern "C"  void CollectionBase_OnValidate_m2432491880 (CollectionBase_t851261505 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
