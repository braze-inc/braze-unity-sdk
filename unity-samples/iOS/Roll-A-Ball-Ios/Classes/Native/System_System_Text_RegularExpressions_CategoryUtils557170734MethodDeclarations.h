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

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Category3838697241.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Globalization_UnicodeCategory3612619569.h"

// System.Text.RegularExpressions.Category System.Text.RegularExpressions.CategoryUtils::CategoryFromName(System.String)
extern "C"  uint16_t CategoryUtils_CategoryFromName_m242979705 (Il2CppObject * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.CategoryUtils::IsCategory(System.Text.RegularExpressions.Category,System.Char)
extern "C"  bool CategoryUtils_IsCategory_m3802527410 (Il2CppObject * __this /* static, unused */, uint16_t ___cat, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.CategoryUtils::IsCategory(System.Globalization.UnicodeCategory,System.Char)
extern "C"  bool CategoryUtils_IsCategory_m60190548 (Il2CppObject * __this /* static, unused */, int32_t ___uc, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
