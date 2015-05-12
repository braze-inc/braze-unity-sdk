#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.QuickSearch
struct QuickSearch_t1664;
// System.String
struct String_t;

// System.Void System.Text.RegularExpressions.QuickSearch::.ctor(System.String,System.Boolean,System.Boolean)
 void QuickSearch__ctor_m7319 (QuickSearch_t1664 * __this, String_t* ___str, bool ___ignore, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.QuickSearch::.cctor()
 void QuickSearch__cctor_m7320 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.QuickSearch::get_Length()
 int32_t QuickSearch_get_Length_m7321 (QuickSearch_t1664 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.QuickSearch::Search(System.String,System.Int32,System.Int32)
 int32_t QuickSearch_Search_m7322 (QuickSearch_t1664 * __this, String_t* ___text, int32_t ___start, int32_t ___end, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.QuickSearch::SetupShiftTable()
 void QuickSearch_SetupShiftTable_m7323 (QuickSearch_t1664 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.QuickSearch::GetShiftDistance(System.Char)
 int32_t QuickSearch_GetShiftDistance_m7324 (QuickSearch_t1664 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Text.RegularExpressions.QuickSearch::GetChar(System.Char)
 uint16_t QuickSearch_GetChar_m7325 (QuickSearch_t1664 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
