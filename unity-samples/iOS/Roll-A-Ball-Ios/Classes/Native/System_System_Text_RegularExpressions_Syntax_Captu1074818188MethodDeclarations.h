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

// System.Text.RegularExpressions.Syntax.CaptureAssertion
struct CaptureAssertion_t1074818188;
// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t3148194463;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t1439411180;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t93500931;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t563003706;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Syntax_Liter3148194463.h"
#include "System_System_Text_RegularExpressions_Syntax_Captu1439411180.h"

// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::.ctor(System.Text.RegularExpressions.Syntax.Literal)
extern "C"  void CaptureAssertion__ctor_m4132785567 (CaptureAssertion_t1074818188 * __this, Literal_t3148194463 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
extern "C"  void CaptureAssertion_set_CapturingGroup_m1020834945 (CaptureAssertion_t1074818188 * __this, CapturingGroup_t1439411180 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C"  void CaptureAssertion_Compile_m922447973 (CaptureAssertion_t1074818188 * __this, Il2CppObject * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.CaptureAssertion::IsComplex()
extern "C"  bool CaptureAssertion_IsComplex_m987845008 (CaptureAssertion_t1074818188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::get_Alternate()
extern "C"  ExpressionAssertion_t563003706 * CaptureAssertion_get_Alternate_m4248571978 (CaptureAssertion_t1074818188 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
