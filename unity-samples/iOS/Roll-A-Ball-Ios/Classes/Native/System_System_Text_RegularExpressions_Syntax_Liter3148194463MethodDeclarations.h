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

// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t3148194463;
// System.String
struct String_t;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t93500931;
// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t1997143859;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Text.RegularExpressions.Syntax.Literal::.ctor(System.String,System.Boolean)
extern "C"  void Literal__ctor_m1496565524 (Literal_t3148194463 * __this, String_t* ___str, bool ___ignore, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Literal::CompileLiteral(System.String,System.Text.RegularExpressions.ICompiler,System.Boolean,System.Boolean)
extern "C"  void Literal_CompileLiteral_m187321040 (Il2CppObject * __this /* static, unused */, String_t* ___str, Il2CppObject * ___cmp, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Literal::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C"  void Literal_Compile_m2265605006 (Literal_t3148194463 * __this, Il2CppObject * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Literal::GetWidth(System.Int32&,System.Int32&)
extern "C"  void Literal_GetWidth_m2047345525 (Literal_t3148194463 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.Literal::GetAnchorInfo(System.Boolean)
extern "C"  AnchorInfo_t1997143859 * Literal_GetAnchorInfo_m193937285 (Literal_t3148194463 * __this, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Literal::IsComplex()
extern "C"  bool Literal_IsComplex_m712383539 (Literal_t3148194463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
