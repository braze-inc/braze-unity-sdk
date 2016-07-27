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

// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_t318449694;
// System.Text.RegularExpressions.Match
struct Match_t3797657504;
// System.Object
struct Il2CppObject;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Collections.ICollection
struct ICollection_t3761522009;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Match3797657504.h"
#include "mscorlib_System_Array2840145358.h"

// System.Void System.Text.RegularExpressions.MatchCollection::.ctor(System.Text.RegularExpressions.Match)
extern "C"  void MatchCollection__ctor_m1982569902 (MatchCollection_t318449694 * __this, Match_t3797657504 * ___start0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.MatchCollection::get_Count()
extern "C"  int32_t MatchCollection_get_Count_m4071817434 (MatchCollection_t318449694 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.MatchCollection::get_IsSynchronized()
extern "C"  bool MatchCollection_get_IsSynchronized_m1523540731 (MatchCollection_t318449694 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.MatchCollection::get_Item(System.Int32)
extern "C"  Match_t3797657504 * MatchCollection_get_Item_m2495033586 (MatchCollection_t318449694 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.RegularExpressions.MatchCollection::get_SyncRoot()
extern "C"  Il2CppObject * MatchCollection_get_SyncRoot_m2333479705 (MatchCollection_t318449694 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.MatchCollection::CopyTo(System.Array,System.Int32)
extern "C"  void MatchCollection_CopyTo_m2665262947 (MatchCollection_t318449694 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Text.RegularExpressions.MatchCollection::GetEnumerator()
extern "C"  Il2CppObject * MatchCollection_GetEnumerator_m3446344180 (MatchCollection_t318449694 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.MatchCollection::TryToGet(System.Int32)
extern "C"  bool MatchCollection_TryToGet_m1603574341 (MatchCollection_t318449694 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Text.RegularExpressions.MatchCollection::get_FullList()
extern "C"  Il2CppObject * MatchCollection_get_FullList_m3038253348 (MatchCollection_t318449694 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
