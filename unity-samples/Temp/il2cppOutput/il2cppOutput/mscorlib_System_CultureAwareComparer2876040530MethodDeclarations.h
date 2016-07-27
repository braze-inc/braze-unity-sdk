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

// System.CultureAwareComparer
struct CultureAwareComparer_t2876040530;
// System.Globalization.CultureInfo
struct CultureInfo_t3603717042;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Globalization_CultureInfo3603717042.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.CultureAwareComparer::.ctor(System.Globalization.CultureInfo,System.Boolean)
extern "C"  void CultureAwareComparer__ctor_m3948021717 (CultureAwareComparer_t2876040530 * __this, CultureInfo_t3603717042 * ___ci0, bool ___ignore_case1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.CultureAwareComparer::Compare(System.String,System.String)
extern "C"  int32_t CultureAwareComparer_Compare_m797802695 (CultureAwareComparer_t2876040530 * __this, String_t* ___x0, String_t* ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.CultureAwareComparer::Equals(System.String,System.String)
extern "C"  bool CultureAwareComparer_Equals_m1431689813 (CultureAwareComparer_t2876040530 * __this, String_t* ___x0, String_t* ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.CultureAwareComparer::GetHashCode(System.String)
extern "C"  int32_t CultureAwareComparer_GetHashCode_m2106379807 (CultureAwareComparer_t2876040530 * __this, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
