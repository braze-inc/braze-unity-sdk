#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Appboy.Utilities.EnumUtils
struct EnumUtils_t15;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;

// System.Void Appboy.Utilities.EnumUtils::.ctor()
 void EnumUtils__ctor_m98 (EnumUtils_t15 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Appboy.Utilities.EnumUtils::TryParse(System.Type,System.String,System.Boolean,System.Object)
 Object_t * EnumUtils_TryParse_m99 (Object_t * __this/* static, unused */, Type_t * ___enumType, String_t* ___value, bool ___ignoreCase, Object_t * ___defaultValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
