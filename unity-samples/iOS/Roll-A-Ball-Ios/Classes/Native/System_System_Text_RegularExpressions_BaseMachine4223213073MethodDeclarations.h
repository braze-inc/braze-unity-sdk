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

// System.Text.RegularExpressions.BaseMachine
struct BaseMachine_t4223213073;
// System.String
struct String_t;
// System.Text.RegularExpressions.Regex
struct Regex_t3802381858;
// System.Text.RegularExpressions.Match
struct Match_t3797657504;
// System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator
struct MatchAppendEvaluator_t2378778064;
// System.Text.RegularExpressions.MatchEvaluator
struct MatchEvaluator_t510977541;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Regex3802381858.h"
#include "mscorlib_System_String968488902.h"
#include "System_System_Text_RegularExpressions_BaseMachine_2378778064.h"
#include "System_System_Text_RegularExpressions_MatchEvaluato510977541.h"

// System.Void System.Text.RegularExpressions.BaseMachine::.ctor()
extern "C"  void BaseMachine__ctor_m17432691 (BaseMachine_t4223213073 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.BaseMachine::Replace(System.Text.RegularExpressions.Regex,System.String,System.String,System.Int32,System.Int32)
extern "C"  String_t* BaseMachine_Replace_m3336556800 (BaseMachine_t4223213073 * __this, Regex_t3802381858 * ___regex, String_t* ___input, String_t* ___replacement, int32_t ___count, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.BaseMachine::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
extern "C"  Match_t3797657504 * BaseMachine_Scan_m223381495 (BaseMachine_t4223213073 * __this, Regex_t3802381858 * ___regex, String_t* ___text, int32_t ___start, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.BaseMachine::LTRReplace(System.Text.RegularExpressions.Regex,System.String,System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator,System.Int32,System.Int32,System.Boolean)
extern "C"  String_t* BaseMachine_LTRReplace_m3233399719 (BaseMachine_t4223213073 * __this, Regex_t3802381858 * ___regex, String_t* ___input, MatchAppendEvaluator_t2378778064 * ___evaluator, int32_t ___count, int32_t ___startat, bool ___needs_groups_or_captures, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.BaseMachine::RTLReplace(System.Text.RegularExpressions.Regex,System.String,System.Text.RegularExpressions.MatchEvaluator,System.Int32,System.Int32)
extern "C"  String_t* BaseMachine_RTLReplace_m1984309653 (BaseMachine_t4223213073 * __this, Regex_t3802381858 * ___regex, String_t* ___input, MatchEvaluator_t510977541 * ___evaluator, int32_t ___count, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
