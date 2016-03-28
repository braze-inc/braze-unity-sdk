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

// System.Text.RegularExpressions.Syntax.CompositeExpression
struct CompositeExpression_t3952301679;
// System.Text.RegularExpressions.Syntax.ExpressionCollection
struct ExpressionCollection_t357621126;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.RegularExpressions.Syntax.CompositeExpression::.ctor()
extern "C"  void CompositeExpression__ctor_m839662857 (CompositeExpression_t3952301679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.ExpressionCollection System.Text.RegularExpressions.Syntax.CompositeExpression::get_Expressions()
extern "C"  ExpressionCollection_t357621126 * CompositeExpression_get_Expressions_m2158932996 (CompositeExpression_t3952301679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CompositeExpression::GetWidth(System.Int32&,System.Int32&,System.Int32)
extern "C"  void CompositeExpression_GetWidth_m925194962 (CompositeExpression_t3952301679 * __this, int32_t* ___min, int32_t* ___max, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.CompositeExpression::IsComplex()
extern "C"  bool CompositeExpression_IsComplex_m1954466275 (CompositeExpression_t3952301679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
