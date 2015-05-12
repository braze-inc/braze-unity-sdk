#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t1685;
// System.String
struct String_t;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t1678;
// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t1679;

// System.Void System.Text.RegularExpressions.Syntax.Literal::.ctor(System.String,System.Boolean)
 void Literal__ctor_m7391 (Literal_t1685 * __this, String_t* ___str, bool ___ignore, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Literal::CompileLiteral(System.String,System.Text.RegularExpressions.ICompiler,System.Boolean,System.Boolean)
 void Literal_CompileLiteral_m7392 (Object_t * __this/* static, unused */, String_t* ___str, Object_t * ___cmp, bool ___ignore, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Literal::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
 void Literal_Compile_m7393 (Literal_t1685 * __this, Object_t * ___cmp, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Literal::GetWidth(System.Int32&,System.Int32&)
 void Literal_GetWidth_m7394 (Literal_t1685 * __this, int32_t* ___min, int32_t* ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Literal::GetAnchorInfo(System.Boolean)
 AnchorInfo_t1679 * Literal_GetAnchorInfo_m7395 (Literal_t1685 * __this, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Literal::IsComplex()
 bool Literal_IsComplex_m7396 (Literal_t1685 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
