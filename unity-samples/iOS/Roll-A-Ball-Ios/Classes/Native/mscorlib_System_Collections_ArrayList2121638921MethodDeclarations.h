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

// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.Collections.ICollection
struct ICollection_t3761522009;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Object
struct Il2CppObject;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Collections.IComparer
struct IComparer_t2207526184;
// System.Type
struct Type_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Collections_ArrayList2121638921.h"

// System.Void System.Collections.ArrayList::.ctor()
extern "C"  void ArrayList__ctor_m1878432947 (ArrayList_t2121638921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.ctor(System.Collections.ICollection)
extern "C"  void ArrayList__ctor_m2944534244 (ArrayList_t2121638921 * __this, Il2CppObject * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.ctor(System.Int32)
extern "C"  void ArrayList__ctor_m3809992068 (ArrayList_t2121638921 * __this, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.ctor(System.Object[],System.Int32,System.Int32)
extern "C"  void ArrayList__ctor_m2092447551 (ArrayList_t2121638921 * __this, ObjectU5BU5D_t11523773* ___array, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.cctor()
extern "C"  void ArrayList__cctor_m1914750298 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList::get_Item(System.Int32)
extern "C"  Il2CppObject * ArrayList_get_Item_m1166987603 (ArrayList_t2121638921 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::set_Item(System.Int32,System.Object)
extern "C"  void ArrayList_set_Item_m2414691872 (ArrayList_t2121638921 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::get_Count()
extern "C"  int32_t ArrayList_get_Count_m2097776283 (ArrayList_t2121638921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::get_Capacity()
extern "C"  int32_t ArrayList_get_Capacity_m3412570896 (ArrayList_t2121638921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::set_Capacity(System.Int32)
extern "C"  void ArrayList_set_Capacity_m1308073401 (ArrayList_t2121638921 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList::get_IsFixedSize()
extern "C"  bool ArrayList_get_IsFixedSize_m251458097 (ArrayList_t2121638921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList::get_IsReadOnly()
extern "C"  bool ArrayList_get_IsReadOnly_m3925803688 (ArrayList_t2121638921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList::get_IsSynchronized()
extern "C"  bool ArrayList_get_IsSynchronized_m3702851162 (ArrayList_t2121638921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList::get_SyncRoot()
extern "C"  Il2CppObject * ArrayList_get_SyncRoot_m3144760460 (ArrayList_t2121638921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::EnsureCapacity(System.Int32)
extern "C"  void ArrayList_EnsureCapacity_m3260945178 (ArrayList_t2121638921 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Shift(System.Int32,System.Int32)
extern "C"  void ArrayList_Shift_m1958944947 (ArrayList_t2121638921 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::Add(System.Object)
extern "C"  int32_t ArrayList_Add_m3739290814 (ArrayList_t2121638921 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Clear()
extern "C"  void ArrayList_Clear_m3579533534 (ArrayList_t2121638921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList::Contains(System.Object)
extern "C"  bool ArrayList_Contains_m3069487426 (ArrayList_t2121638921 * __this, Il2CppObject * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::IndexOf(System.Object)
extern "C"  int32_t ArrayList_IndexOf_m3912283158 (ArrayList_t2121638921 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::IndexOf(System.Object,System.Int32)
extern "C"  int32_t ArrayList_IndexOf_m3469098113 (ArrayList_t2121638921 * __this, Il2CppObject * ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::IndexOf(System.Object,System.Int32,System.Int32)
extern "C"  int32_t ArrayList_IndexOf_m2652961270 (ArrayList_t2121638921 * __this, Il2CppObject * ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Insert(System.Int32,System.Object)
extern "C"  void ArrayList_Insert_m3577288841 (ArrayList_t2121638921 * __this, int32_t ___index, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::InsertRange(System.Int32,System.Collections.ICollection)
extern "C"  void ArrayList_InsertRange_m149552657 (ArrayList_t2121638921 * __this, int32_t ___index, Il2CppObject * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Remove(System.Object)
extern "C"  void ArrayList_Remove_m2154849791 (ArrayList_t2121638921 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::RemoveAt(System.Int32)
extern "C"  void ArrayList_RemoveAt_m3961189785 (ArrayList_t2121638921 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::CopyTo(System.Array)
extern "C"  void ArrayList_CopyTo_m1415118951 (ArrayList_t2121638921 * __this, Il2CppArray * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::CopyTo(System.Array,System.Int32)
extern "C"  void ArrayList_CopyTo_m329661392 (ArrayList_t2121638921 * __this, Il2CppArray * ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::CopyTo(System.Int32,System.Array,System.Int32,System.Int32)
extern "C"  void ArrayList_CopyTo_m3681134010 (ArrayList_t2121638921 * __this, int32_t ___index, Il2CppArray * ___array, int32_t ___arrayIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator()
extern "C"  Il2CppObject * ArrayList_GetEnumerator_m286938677 (ArrayList_t2121638921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection)
extern "C"  void ArrayList_AddRange_m92466430 (ArrayList_t2121638921 * __this, Il2CppObject * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Sort()
extern "C"  void ArrayList_Sort_m1269445711 (ArrayList_t2121638921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Sort(System.Collections.IComparer)
extern "C"  void ArrayList_Sort_m3766841105 (ArrayList_t2121638921 * __this, Il2CppObject * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.ArrayList::ToArray()
extern "C"  ObjectU5BU5D_t11523773* ArrayList_ToArray_m4285016508 (ArrayList_t2121638921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Collections.ArrayList::ToArray(System.Type)
extern "C"  Il2CppArray * ArrayList_ToArray_m810504347 (ArrayList_t2121638921 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList::Clone()
extern "C"  Il2CppObject * ArrayList_Clone_m3926405785 (ArrayList_t2121638921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::ThrowNewArgumentOutOfRangeException(System.String,System.Object,System.String)
extern "C"  void ArrayList_ThrowNewArgumentOutOfRangeException_m2507388507 (Il2CppObject * __this /* static, unused */, String_t* ___name, Il2CppObject * ___actual, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Collections.ArrayList::Synchronized(System.Collections.ArrayList)
extern "C"  ArrayList_t2121638921 * ArrayList_Synchronized_m4034047634 (Il2CppObject * __this /* static, unused */, ArrayList_t2121638921 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Collections.ArrayList::ReadOnly(System.Collections.ArrayList)
extern "C"  ArrayList_t2121638921 * ArrayList_ReadOnly_m1881161056 (Il2CppObject * __this /* static, unused */, ArrayList_t2121638921 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
