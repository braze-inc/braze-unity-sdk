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

// System.Collections.ArrayList/ArrayListWrapper
struct ArrayListWrapper_t3057374748;
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

// System.Void System.Collections.ArrayList/ArrayListWrapper::.ctor(System.Collections.ArrayList)
extern "C"  void ArrayListWrapper__ctor_m2531120873 (ArrayListWrapper_t3057374748 * __this, ArrayList_t2121638921 * ___innerArrayList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/ArrayListWrapper::get_Item(System.Int32)
extern "C"  Il2CppObject * ArrayListWrapper_get_Item_m4057977780 (ArrayListWrapper_t3057374748 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::set_Item(System.Int32,System.Object)
extern "C"  void ArrayListWrapper_set_Item_m602076299 (ArrayListWrapper_t3057374748 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::get_Count()
extern "C"  int32_t ArrayListWrapper_get_Count_m452148104 (ArrayListWrapper_t3057374748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::get_Capacity()
extern "C"  int32_t ArrayListWrapper_get_Capacity_m1260206851 (ArrayListWrapper_t3057374748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::set_Capacity(System.Int32)
extern "C"  void ArrayListWrapper_set_Capacity_m2188723684 (ArrayListWrapper_t3057374748 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::get_IsFixedSize()
extern "C"  bool ArrayListWrapper_get_IsFixedSize_m3370166250 (ArrayListWrapper_t3057374748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::get_IsReadOnly()
extern "C"  bool ArrayListWrapper_get_IsReadOnly_m2086744527 (ArrayListWrapper_t3057374748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::get_IsSynchronized()
extern "C"  bool ArrayListWrapper_get_IsSynchronized_m109922817 (ArrayListWrapper_t3057374748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/ArrayListWrapper::get_SyncRoot()
extern "C"  Il2CppObject * ArrayListWrapper_get_SyncRoot_m427241453 (ArrayListWrapper_t3057374748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::Add(System.Object)
extern "C"  int32_t ArrayListWrapper_Add_m4158350129 (ArrayListWrapper_t3057374748 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Clear()
extern "C"  void ArrayListWrapper_Clear_m3530269331 (ArrayListWrapper_t3057374748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/ArrayListWrapper::Contains(System.Object)
extern "C"  bool ArrayListWrapper_Contains_m1021145147 (ArrayListWrapper_t3057374748 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::IndexOf(System.Object)
extern "C"  int32_t ArrayListWrapper_IndexOf_m3076823305 (ArrayListWrapper_t3057374748 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::IndexOf(System.Object,System.Int32)
extern "C"  int32_t ArrayListWrapper_IndexOf_m3633003118 (ArrayListWrapper_t3057374748 * __this, Il2CppObject * ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/ArrayListWrapper::IndexOf(System.Object,System.Int32,System.Int32)
extern "C"  int32_t ArrayListWrapper_IndexOf_m3715286313 (ArrayListWrapper_t3057374748 * __this, Il2CppObject * ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Insert(System.Int32,System.Object)
extern "C"  void ArrayListWrapper_Insert_m218981812 (ArrayListWrapper_t3057374748 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::InsertRange(System.Int32,System.Collections.ICollection)
extern "C"  void ArrayListWrapper_InsertRange_m1261127932 (ArrayListWrapper_t3057374748 * __this, int32_t ___index, Il2CppObject * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Remove(System.Object)
extern "C"  void ArrayListWrapper_Remove_m2062487284 (ArrayListWrapper_t3057374748 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::RemoveAt(System.Int32)
extern "C"  void ArrayListWrapper_RemoveAt_m1097952068 (ArrayListWrapper_t3057374748 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::CopyTo(System.Array)
extern "C"  void ArrayListWrapper_CopyTo_m26666194 (ArrayListWrapper_t3057374748 * __this, Il2CppArray * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::CopyTo(System.Array,System.Int32)
extern "C"  void ArrayListWrapper_CopyTo_m2160991557 (ArrayListWrapper_t3057374748 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::CopyTo(System.Int32,System.Array,System.Int32,System.Int32)
extern "C"  void ArrayListWrapper_CopyTo_m127332079 (ArrayListWrapper_t3057374748 * __this, int32_t ___index, Il2CppArray * ___array, int32_t ___arrayIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ArrayList/ArrayListWrapper::GetEnumerator()
extern "C"  Il2CppObject * ArrayListWrapper_GetEnumerator_m568286678 (ArrayListWrapper_t3057374748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::AddRange(System.Collections.ICollection)
extern "C"  void ArrayListWrapper_AddRange_m819293673 (ArrayListWrapper_t3057374748 * __this, Il2CppObject * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/ArrayListWrapper::Clone()
extern "C"  Il2CppObject * ArrayListWrapper_Clone_m1229511256 (ArrayListWrapper_t3057374748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Sort()
extern "C"  void ArrayListWrapper_Sort_m20930554 (ArrayListWrapper_t3057374748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/ArrayListWrapper::Sort(System.Collections.IComparer)
extern "C"  void ArrayListWrapper_Sort_m408534076 (ArrayListWrapper_t3057374748 * __this, Il2CppObject * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.ArrayList/ArrayListWrapper::ToArray()
extern "C"  ObjectU5BU5D_t11523773* ArrayListWrapper_ToArray_m1651255351 (ArrayListWrapper_t3057374748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Collections.ArrayList/ArrayListWrapper::ToArray(System.Type)
extern "C"  Il2CppArray * ArrayListWrapper_ToArray_m2775301700 (ArrayListWrapper_t3057374748 * __this, Type_t * ___elementType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
