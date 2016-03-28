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

// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_t2158306392;
// System.Text.RegularExpressions.Group
struct Group_t3792618586;
// System.Object
struct Il2CppObject;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Group3792618586.h"
#include "mscorlib_System_Array2840145358.h"

// System.Void System.Text.RegularExpressions.GroupCollection::.ctor(System.Int32,System.Int32)
extern "C"  void GroupCollection__ctor_m1062211994 (GroupCollection_t2158306392 * __this, int32_t ___n, int32_t ___gap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.GroupCollection::get_Count()
extern "C"  int32_t GroupCollection_get_Count_m1046622944 (GroupCollection_t2158306392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.GroupCollection::get_IsSynchronized()
extern "C"  bool GroupCollection_get_IsSynchronized_m3587250101 (GroupCollection_t2158306392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Group System.Text.RegularExpressions.GroupCollection::get_Item(System.Int32)
extern "C"  Group_t3792618586 * GroupCollection_get_Item_m3306908978 (GroupCollection_t2158306392 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.GroupCollection::SetValue(System.Text.RegularExpressions.Group,System.Int32)
extern "C"  void GroupCollection_SetValue_m3728413090 (GroupCollection_t2158306392 * __this, Group_t3792618586 * ___g, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.RegularExpressions.GroupCollection::get_SyncRoot()
extern "C"  Il2CppObject * GroupCollection_get_SyncRoot_m63200083 (GroupCollection_t2158306392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.GroupCollection::CopyTo(System.Array,System.Int32)
extern "C"  void GroupCollection_CopyTo_m3663984873 (GroupCollection_t2158306392 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Text.RegularExpressions.GroupCollection::GetEnumerator()
extern "C"  Il2CppObject * GroupCollection_GetEnumerator_m1787152634 (GroupCollection_t2158306392 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
