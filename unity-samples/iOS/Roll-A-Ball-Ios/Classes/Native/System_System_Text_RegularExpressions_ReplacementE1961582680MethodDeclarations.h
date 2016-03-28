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

// System.Text.RegularExpressions.ReplacementEvaluator
struct ReplacementEvaluator_t1961582680;
// System.Text.RegularExpressions.Regex
struct Regex_t3802381858;
// System.String
struct String_t;
// System.Text.RegularExpressions.Match
struct Match_t3797657504;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Regex3802381858.h"
#include "mscorlib_System_String968488902.h"
#include "System_System_Text_RegularExpressions_Match3797657504.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"

// System.Void System.Text.RegularExpressions.ReplacementEvaluator::.ctor(System.Text.RegularExpressions.Regex,System.String)
extern "C"  void ReplacementEvaluator__ctor_m2774850658 (ReplacementEvaluator_t1961582680 * __this, Regex_t3802381858 * ___regex, String_t* ___replacement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.ReplacementEvaluator::Evaluate(System.Text.RegularExpressions.Match)
extern "C"  String_t* ReplacementEvaluator_Evaluate_m4205324994 (ReplacementEvaluator_t1961582680 * __this, Match_t3797657504 * ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::EvaluateAppend(System.Text.RegularExpressions.Match,System.Text.StringBuilder)
extern "C"  void ReplacementEvaluator_EvaluateAppend_m4266406947 (ReplacementEvaluator_t1961582680 * __this, Match_t3797657504 * ___match, StringBuilder_t3822575854 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.ReplacementEvaluator::get_NeedsGroupsOrCaptures()
extern "C"  bool ReplacementEvaluator_get_NeedsGroupsOrCaptures_m1475641324 (ReplacementEvaluator_t1961582680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::Ensure(System.Int32)
extern "C"  void ReplacementEvaluator_Ensure_m619661651 (ReplacementEvaluator_t1961582680 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::AddFromReplacement(System.Int32,System.Int32)
extern "C"  void ReplacementEvaluator_AddFromReplacement_m4144056411 (ReplacementEvaluator_t1961582680 * __this, int32_t ___start, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::AddInt(System.Int32)
extern "C"  void ReplacementEvaluator_AddInt_m3650451619 (ReplacementEvaluator_t1961582680 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.ReplacementEvaluator::Compile()
extern "C"  void ReplacementEvaluator_Compile_m763546001 (ReplacementEvaluator_t1961582680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.ReplacementEvaluator::CompileTerm(System.Int32&)
extern "C"  int32_t ReplacementEvaluator_CompileTerm_m2939168366 (ReplacementEvaluator_t1961582680 * __this, int32_t* ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
