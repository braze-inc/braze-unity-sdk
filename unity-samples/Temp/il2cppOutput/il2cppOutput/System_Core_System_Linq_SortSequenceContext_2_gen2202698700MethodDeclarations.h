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

// System.Linq.SortSequenceContext`2<System.Object,System.Object>
struct SortSequenceContext_2_t2202698700;
// System.Func`2<System.Object,System.Object>
struct Func_2_t2135783352;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t3536813829;
// System.Linq.SortContext`1<System.Object>
struct SortContext_1_t70478024;
// System.Object[]
struct ObjectU5BU5D_t11523773;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_SortDirection2805156518.h"

// System.Void System.Linq.SortSequenceContext`2<System.Object,System.Object>::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection,System.Linq.SortContext`1<TElement>)
extern "C"  void SortSequenceContext_2__ctor_m858446130_gshared (SortSequenceContext_2_t2202698700 * __this, Func_2_t2135783352 * ___selector0, Il2CppObject* ___comparer1, int32_t ___direction2, SortContext_1_t70478024 * ___child_context3, const MethodInfo* method);
#define SortSequenceContext_2__ctor_m858446130(__this, ___selector0, ___comparer1, ___direction2, ___child_context3, method) ((  void (*) (SortSequenceContext_2_t2202698700 *, Func_2_t2135783352 *, Il2CppObject*, int32_t, SortContext_1_t70478024 *, const MethodInfo*))SortSequenceContext_2__ctor_m858446130_gshared)(__this, ___selector0, ___comparer1, ___direction2, ___child_context3, method)
// System.Void System.Linq.SortSequenceContext`2<System.Object,System.Object>::Initialize(TElement[])
extern "C"  void SortSequenceContext_2_Initialize_m2547711222_gshared (SortSequenceContext_2_t2202698700 * __this, ObjectU5BU5D_t11523773* ___elements0, const MethodInfo* method);
#define SortSequenceContext_2_Initialize_m2547711222(__this, ___elements0, method) ((  void (*) (SortSequenceContext_2_t2202698700 *, ObjectU5BU5D_t11523773*, const MethodInfo*))SortSequenceContext_2_Initialize_m2547711222_gshared)(__this, ___elements0, method)
// System.Int32 System.Linq.SortSequenceContext`2<System.Object,System.Object>::Compare(System.Int32,System.Int32)
extern "C"  int32_t SortSequenceContext_2_Compare_m594910141_gshared (SortSequenceContext_2_t2202698700 * __this, int32_t ___first_index0, int32_t ___second_index1, const MethodInfo* method);
#define SortSequenceContext_2_Compare_m594910141(__this, ___first_index0, ___second_index1, method) ((  int32_t (*) (SortSequenceContext_2_t2202698700 *, int32_t, int32_t, const MethodInfo*))SortSequenceContext_2_Compare_m594910141_gshared)(__this, ___first_index0, ___second_index1, method)
