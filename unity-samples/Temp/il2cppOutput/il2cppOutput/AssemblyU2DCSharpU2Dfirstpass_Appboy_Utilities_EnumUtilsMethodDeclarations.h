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
struct EnumUtils_t7;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Appboy.Utilities.EnumUtils::.ctor()
extern "C" void EnumUtils__ctor_m99 (EnumUtils_t7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Appboy.Utilities.EnumUtils::TryParse(System.Type,System.String,System.Boolean,System.Object)
extern "C" Object_t * EnumUtils_TryParse_m100 (Object_t * __this /* static, unused */, Type_t * ___enumType, String_t* ___value, bool ___ignoreCase, Object_t * ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
