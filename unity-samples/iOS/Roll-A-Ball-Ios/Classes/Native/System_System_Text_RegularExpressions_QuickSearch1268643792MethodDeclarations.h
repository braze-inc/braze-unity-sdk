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

// System.Text.RegularExpressions.QuickSearch
struct QuickSearch_t1268643792;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Text.RegularExpressions.QuickSearch::.ctor(System.String,System.Boolean,System.Boolean)
extern "C"  void QuickSearch__ctor_m2383021006 (QuickSearch_t1268643792 * __this, String_t* ___str, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.QuickSearch::.cctor()
extern "C"  void QuickSearch__cctor_m3095711897 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.QuickSearch::get_Length()
extern "C"  int32_t QuickSearch_get_Length_m2171114063 (QuickSearch_t1268643792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.QuickSearch::Search(System.String,System.Int32,System.Int32)
extern "C"  int32_t QuickSearch_Search_m3059452826 (QuickSearch_t1268643792 * __this, String_t* ___text, int32_t ___start, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.QuickSearch::SetupShiftTable()
extern "C"  void QuickSearch_SetupShiftTable_m73996795 (QuickSearch_t1268643792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.QuickSearch::GetShiftDistance(System.Char)
extern "C"  int32_t QuickSearch_GetShiftDistance_m2673548988 (QuickSearch_t1268643792 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.RegularExpressions.QuickSearch::GetChar(System.Char)
extern "C"  uint16_t QuickSearch_GetChar_m2212630365 (QuickSearch_t1268643792 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
