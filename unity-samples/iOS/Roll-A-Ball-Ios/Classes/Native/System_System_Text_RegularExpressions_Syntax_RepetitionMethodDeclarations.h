#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.Repetition
struct Repetition_t1696;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t1687;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t1690;
// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t1691;

// System.Void System.Text.RegularExpressions.Syntax.Repetition::.ctor(System.Int32,System.Int32,System.Boolean)
 void Repetition__ctor_m7455 (Repetition_t1696 * __this, int32_t ___min, int32_t ___max, bool ___lazy, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.Repetition::get_Expression()
 Expression_t1687 * Repetition_get_Expression_m7456 (Repetition_t1696 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Repetition::set_Expression(System.Text.RegularExpressions.Syntax.Expression)
 void Repetition_set_Expression_m7457 (Repetition_t1696 * __this, Expression_t1687 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Syntax.Repetition::get_Minimum()
 int32_t Repetition_get_Minimum_m7458 (Repetition_t1696 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Repetition::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
 void Repetition_Compile_m7459 (Repetition_t1696 * __this, Object_t * ___cmp, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Repetition::GetWidth(System.Int32&,System.Int32&)
 void Repetition_GetWidth_m7460 (Repetition_t1696 * __this, int32_t* ___min, int32_t* ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Repetition::GetAnchorInfo(System.Boolean)
 AnchorInfo_t1691 * Repetition_GetAnchorInfo_m7461 (Repetition_t1696 * __this, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
