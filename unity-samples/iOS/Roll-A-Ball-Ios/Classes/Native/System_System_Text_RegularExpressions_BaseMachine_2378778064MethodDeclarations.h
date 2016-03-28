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

// System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator
struct MatchAppendEvaluator_t2378778064;
// System.Object
struct Il2CppObject;
// System.Text.RegularExpressions.Match
struct Match_t3797657504;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "System_System_Text_RegularExpressions_Match3797657504.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator::.ctor(System.Object,System.IntPtr)
extern "C"  void MatchAppendEvaluator__ctor_m44201646 (MatchAppendEvaluator_t2378778064 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator::Invoke(System.Text.RegularExpressions.Match,System.Text.StringBuilder)
extern "C"  void MatchAppendEvaluator_Invoke_m2910809428 (MatchAppendEvaluator_t2378778064 * __this, Match_t3797657504 * ___match, StringBuilder_t3822575854 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_MatchAppendEvaluator_t2378778064(Il2CppObject* delegate, Match_t3797657504 * ___match, StringBuilder_t3822575854 * ___sb);
// System.IAsyncResult System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator::BeginInvoke(System.Text.RegularExpressions.Match,System.Text.StringBuilder,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * MatchAppendEvaluator_BeginInvoke_m1979969071 (MatchAppendEvaluator_t2378778064 * __this, Match_t3797657504 * ___match, StringBuilder_t3822575854 * ___sb, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.BaseMachine/MatchAppendEvaluator::EndInvoke(System.IAsyncResult)
extern "C"  void MatchAppendEvaluator_EndInvoke_m4264062910 (MatchAppendEvaluator_t2378778064 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
