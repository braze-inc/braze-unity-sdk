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
struct UtilityMethods_t132;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Decimal.h"

// System.Void Utilities.UtilityMethods::.ctor()
extern "C" void UtilityMethods__ctor_m632 (UtilityMethods_t132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Utilities.UtilityMethods::textIsValid(System.String)
extern "C" bool UtilityMethods_textIsValid_m633 (Object_t * __this /* static, unused */, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Utilities.UtilityMethods::ParseStringToInt(System.String,System.String,System.Int32&)
extern "C" bool UtilityMethods_ParseStringToInt_m634 (Object_t * __this /* static, unused */, String_t* ___text, String_t* ___ErrorDescription, int32_t* ___ParsedInt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Utilities.UtilityMethods::ParseStringToDecimal(System.String,System.String,System.Decimal&)
extern "C" bool UtilityMethods_ParseStringToDecimal_m635 (Object_t * __this /* static, unused */, String_t* ___text, String_t* ___ErrorDescription, Decimal_t62 * ___ParsedDecimal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
