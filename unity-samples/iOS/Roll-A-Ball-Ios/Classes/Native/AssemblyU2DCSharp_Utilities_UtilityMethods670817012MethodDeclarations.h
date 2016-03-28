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

// Utilities.UtilityMethods
struct UtilityMethods_t670817012;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Decimal1688557254.h"

// System.Void Utilities.UtilityMethods::.ctor()
extern "C"  void UtilityMethods__ctor_m2707785105 (UtilityMethods_t670817012 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Utilities.UtilityMethods::textIsValid(System.String)
extern "C"  bool UtilityMethods_textIsValid_m563377698 (Il2CppObject * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Utilities.UtilityMethods::ParseStringToInt(System.String,System.String,System.Int32&)
extern "C"  bool UtilityMethods_ParseStringToInt_m3028442748 (Il2CppObject * __this /* static, unused */, String_t* ___text, String_t* ___ErrorDescription, int32_t* ___ParsedInt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Utilities.UtilityMethods::ParseStringToDecimal(System.String,System.String,System.Decimal&)
extern "C"  bool UtilityMethods_ParseStringToDecimal_m2338240285 (Il2CppObject * __this /* static, unused */, String_t* ___text, String_t* ___ErrorDescription, Decimal_t1688557254 * ___ParsedDecimal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
