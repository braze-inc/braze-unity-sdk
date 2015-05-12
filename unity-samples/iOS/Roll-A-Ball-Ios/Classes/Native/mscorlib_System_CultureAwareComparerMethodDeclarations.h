#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.CultureAwareComparer
struct CultureAwareComparer_t2301;
// System.Globalization.CultureInfo
struct CultureInfo_t1076;
// System.String
struct String_t;

// System.Void System.CultureAwareComparer::.ctor(System.Globalization.CultureInfo,System.Boolean)
 void CultureAwareComparer__ctor_m12010 (CultureAwareComparer_t2301 * __this, CultureInfo_t1076 * ___ci, bool ___ignore_case, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.CultureAwareComparer::Compare(System.String,System.String)
 int32_t CultureAwareComparer_Compare_m12011 (CultureAwareComparer_t2301 * __this, String_t* ___x, String_t* ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.CultureAwareComparer::Equals(System.String,System.String)
 bool CultureAwareComparer_Equals_m12012 (CultureAwareComparer_t2301 * __this, String_t* ___x, String_t* ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.CultureAwareComparer::GetHashCode(System.String)
 int32_t CultureAwareComparer_GetHashCode_m12013 (CultureAwareComparer_t2301 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
