#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.CaptureAssertion
struct CaptureAssertion_t1686;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t1681;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t1676;
// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t1685;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t1678;

// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::.ctor(System.Text.RegularExpressions.Syntax.Literal)
 void CaptureAssertion__ctor_m7374 (CaptureAssertion_t1686 * __this, Literal_t1685 * ___l, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
 void CaptureAssertion_set_CapturingGroup_m7375 (CaptureAssertion_t1686 * __this, CapturingGroup_t1681 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
 void CaptureAssertion_Compile_m7376 (CaptureAssertion_t1686 * __this, Object_t * ___cmp, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.CaptureAssertion::IsComplex()
 bool CaptureAssertion_IsComplex_m7377 (CaptureAssertion_t1686 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::get_Alternate()
 ExpressionAssertion_t1676 * CaptureAssertion_get_Alternate_m7378 (CaptureAssertion_t1686 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
