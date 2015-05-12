#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.Group
struct Group_t1673;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t1675;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t1678;
// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t1679;

// System.Void System.Text.RegularExpressions.Syntax.Group::.ctor()
 void Group__ctor_m7338 (Group_t1673 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Group::AppendExpression(System.Text.RegularExpressions.Syntax.Expression)
 void Group_AppendExpression_m7339 (Group_t1673 * __this, Expression_t1675 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Group::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
 void Group_Compile_m7340 (Group_t1673 * __this, Object_t * ___cmp, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Group::GetWidth(System.Int32&,System.Int32&)
 void Group_GetWidth_m7341 (Group_t1673 * __this, int32_t* ___min, int32_t* ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Group::GetAnchorInfo(System.Boolean)
 AnchorInfo_t1679 * Group_GetAnchorInfo_m7342 (Group_t1673 * __this, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
