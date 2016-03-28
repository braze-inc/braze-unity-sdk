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

// Appboy.Utilities.EnumUtils
struct EnumUtils_t967784365;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Appboy.Utilities.EnumUtils::.ctor()
extern "C"  void EnumUtils__ctor_m839781542 (EnumUtils_t967784365 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Appboy.Utilities.EnumUtils::TryParse(System.Type,System.String,System.Boolean,System.Object)
extern "C"  Il2CppObject * EnumUtils_TryParse_m2279606401 (Il2CppObject * __this /* static, unused */, Type_t * ___enumType, String_t* ___value, bool ___ignoreCase, Il2CppObject * ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
