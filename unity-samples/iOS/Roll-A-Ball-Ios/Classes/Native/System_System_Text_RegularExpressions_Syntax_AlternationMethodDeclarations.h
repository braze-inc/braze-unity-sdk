#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.Alternation
struct Alternation_t1687;
// System.Text.RegularExpressions.Syntax.ExpressionCollection
struct ExpressionCollection_t1677;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t1675;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t1678;

// System.Void System.Text.RegularExpressions.Syntax.Alternation::.ctor()
 void Alternation__ctor_m7386 (Alternation_t1687 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.ExpressionCollection System.Text.RegularExpressions.Syntax.Alternation::get_Alternatives()
 ExpressionCollection_t1677 * Alternation_get_Alternatives_m7387 (Alternation_t1687 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Alternation::AddAlternative(System.Text.RegularExpressions.Syntax.Expression)
 void Alternation_AddAlternative_m7388 (Alternation_t1687 * __this, Expression_t1675 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Alternation::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
 void Alternation_Compile_m7389 (Alternation_t1687 * __this, Object_t * ___cmp, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Alternation::GetWidth(System.Int32&,System.Int32&)
 void Alternation_GetWidth_m7390 (Alternation_t1687 * __this, int32_t* ___min, int32_t* ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
