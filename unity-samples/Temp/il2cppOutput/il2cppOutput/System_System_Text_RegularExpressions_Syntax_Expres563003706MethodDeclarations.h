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

// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t563003706;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t1499093192;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t93500931;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Syntax_Expre1499093192.h"

// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::.ctor()
extern "C"  void ExpressionAssertion__ctor_m2776942238 (ExpressionAssertion_t563003706 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_Reverse(System.Boolean)
extern "C"  void ExpressionAssertion_set_Reverse_m3599260152 (ExpressionAssertion_t563003706 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_Negate(System.Boolean)
extern "C"  void ExpressionAssertion_set_Negate_m1902108060 (ExpressionAssertion_t563003706 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.ExpressionAssertion::get_TestExpression()
extern "C"  Expression_t1499093192 * ExpressionAssertion_get_TestExpression_m1374960432 (ExpressionAssertion_t563003706 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::set_TestExpression(System.Text.RegularExpressions.Syntax.Expression)
extern "C"  void ExpressionAssertion_set_TestExpression_m828897591 (ExpressionAssertion_t563003706 * __this, Expression_t1499093192 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.ExpressionAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C"  void ExpressionAssertion_Compile_m2907610857 (ExpressionAssertion_t563003706 * __this, Il2CppObject * ___cmp0, bool ___reverse1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.ExpressionAssertion::IsComplex()
extern "C"  bool ExpressionAssertion_IsComplex_m4273897720 (ExpressionAssertion_t563003706 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
