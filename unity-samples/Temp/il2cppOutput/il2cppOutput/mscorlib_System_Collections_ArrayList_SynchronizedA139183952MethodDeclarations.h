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

// System.Collections.ArrayList/SynchronizedArrayListWrapper
struct SynchronizedArrayListWrapper_t139183952;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.Object
struct Il2CppObject;
// System.Collections.ICollection
struct ICollection_t3761522009;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Collections.IComparer
struct IComparer_t2207526184;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_ArrayList2121638921.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::.ctor(System.Collections.ArrayList)
extern "C"  void SynchronizedArrayListWrapper__ctor_m4141735093 (SynchronizedArrayListWrapper_t139183952 * __this, ArrayList_t2121638921 * ___innerArrayList0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/SynchronizedArrayListWrapper::get_Item(System.Int32)
extern "C"  Il2CppObject * SynchronizedArrayListWrapper_get_Item_m678734312 (SynchronizedArrayListWrapper_t139183952 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::set_Item(System.Int32,System.Object)
extern "C"  void SynchronizedArrayListWrapper_set_Item_m3286476863 (SynchronizedArrayListWrapper_t139183952 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::get_Count()
extern "C"  int32_t SynchronizedArrayListWrapper_get_Count_m3690732372 (SynchronizedArrayListWrapper_t139183952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::get_Capacity()
extern "C"  int32_t SynchronizedArrayListWrapper_get_Capacity_m4073764791 (SynchronizedArrayListWrapper_t139183952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::set_Capacity(System.Int32)
extern "C"  void SynchronizedArrayListWrapper_set_Capacity_m3235728024 (SynchronizedArrayListWrapper_t139183952 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SynchronizedArrayListWrapper::get_IsFixedSize()
extern "C"  bool SynchronizedArrayListWrapper_get_IsFixedSize_m954881462 (SynchronizedArrayListWrapper_t139183952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SynchronizedArrayListWrapper::get_IsReadOnly()
extern "C"  bool SynchronizedArrayListWrapper_get_IsReadOnly_m2563021443 (SynchronizedArrayListWrapper_t139183952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SynchronizedArrayListWrapper::get_IsSynchronized()
extern "C"  bool SynchronizedArrayListWrapper_get_IsSynchronized_m4242880693 (SynchronizedArrayListWrapper_t139183952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/SynchronizedArrayListWrapper::get_SyncRoot()
extern "C"  Il2CppObject * SynchronizedArrayListWrapper_get_SyncRoot_m2182052385 (SynchronizedArrayListWrapper_t139183952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::Add(System.Object)
extern "C"  int32_t SynchronizedArrayListWrapper_Add_m1801020901 (SynchronizedArrayListWrapper_t139183952 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Clear()
extern "C"  void SynchronizedArrayListWrapper_Clear_m967709279 (SynchronizedArrayListWrapper_t139183952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SynchronizedArrayListWrapper::Contains(System.Object)
extern "C"  bool SynchronizedArrayListWrapper_Contains_m2141754631 (SynchronizedArrayListWrapper_t139183952 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::IndexOf(System.Object)
extern "C"  int32_t SynchronizedArrayListWrapper_IndexOf_m1643782589 (SynchronizedArrayListWrapper_t139183952 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::IndexOf(System.Object,System.Int32)
extern "C"  int32_t SynchronizedArrayListWrapper_IndexOf_m1797551674 (SynchronizedArrayListWrapper_t139183952 * __this, Il2CppObject * ___value0, int32_t ___startIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::IndexOf(System.Object,System.Int32,System.Int32)
extern "C"  int32_t SynchronizedArrayListWrapper_IndexOf_m632165597 (SynchronizedArrayListWrapper_t139183952 * __this, Il2CppObject * ___value0, int32_t ___startIndex1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Insert(System.Int32,System.Object)
extern "C"  void SynchronizedArrayListWrapper_Insert_m3041883752 (SynchronizedArrayListWrapper_t139183952 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::InsertRange(System.Int32,System.Collections.ICollection)
extern "C"  void SynchronizedArrayListWrapper_InsertRange_m3126926000 (SynchronizedArrayListWrapper_t139183952 * __this, int32_t ___index0, Il2CppObject * ___c1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Remove(System.Object)
extern "C"  void SynchronizedArrayListWrapper_Remove_m3298552256 (SynchronizedArrayListWrapper_t139183952 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::RemoveAt(System.Int32)
extern "C"  void SynchronizedArrayListWrapper_RemoveAt_m761260536 (SynchronizedArrayListWrapper_t139183952 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::CopyTo(System.Array)
extern "C"  void SynchronizedArrayListWrapper_CopyTo_m482181254 (SynchronizedArrayListWrapper_t139183952 * __this, Il2CppArray * ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::CopyTo(System.Array,System.Int32)
extern "C"  void SynchronizedArrayListWrapper_CopyTo_m1282221585 (SynchronizedArrayListWrapper_t139183952 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::CopyTo(System.Int32,System.Array,System.Int32,System.Int32)
extern "C"  void SynchronizedArrayListWrapper_CopyTo_m2945798331 (SynchronizedArrayListWrapper_t139183952 * __this, int32_t ___index0, Il2CppArray * ___array1, int32_t ___arrayIndex2, int32_t ___count3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ArrayList/SynchronizedArrayListWrapper::GetEnumerator()
extern "C"  Il2CppObject * SynchronizedArrayListWrapper_GetEnumerator_m1865470114 (SynchronizedArrayListWrapper_t139183952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::AddRange(System.Collections.ICollection)
extern "C"  void SynchronizedArrayListWrapper_AddRange_m3039635357 (SynchronizedArrayListWrapper_t139183952 * __this, Il2CppObject * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/SynchronizedArrayListWrapper::Clone()
extern "C"  Il2CppObject * SynchronizedArrayListWrapper_Clone_m4092650148 (SynchronizedArrayListWrapper_t139183952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Sort()
extern "C"  void SynchronizedArrayListWrapper_Sort_m3679045294 (SynchronizedArrayListWrapper_t139183952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Sort(System.Collections.IComparer)
extern "C"  void SynchronizedArrayListWrapper_Sort_m3231436016 (SynchronizedArrayListWrapper_t139183952 * __this, Il2CppObject * ___comparer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.ArrayList/SynchronizedArrayListWrapper::ToArray()
extern "C"  ObjectU5BU5D_t11523773* SynchronizedArrayListWrapper_ToArray_m1930965123 (SynchronizedArrayListWrapper_t139183952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Collections.ArrayList/SynchronizedArrayListWrapper::ToArray(System.Type)
extern "C"  Il2CppArray * SynchronizedArrayListWrapper_ToArray_m3090795384 (SynchronizedArrayListWrapper_t139183952 * __this, Type_t * ___elementType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
