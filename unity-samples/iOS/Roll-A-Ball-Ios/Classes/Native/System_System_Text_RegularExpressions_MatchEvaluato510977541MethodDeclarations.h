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

// System.Text.RegularExpressions.MatchEvaluator
struct MatchEvaluator_t510977541;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Text.RegularExpressions.Match
struct Match_t3797657504;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "System_System_Text_RegularExpressions_Match3797657504.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Text.RegularExpressions.MatchEvaluator::.ctor(System.Object,System.IntPtr)
extern "C"  void MatchEvaluator__ctor_m2957600143 (MatchEvaluator_t510977541 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.MatchEvaluator::Invoke(System.Text.RegularExpressions.Match)
extern "C"  String_t* MatchEvaluator_Invoke_m3215261838 (MatchEvaluator_t510977541 * __this, Match_t3797657504 * ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" String_t* pinvoke_delegate_wrapper_MatchEvaluator_t510977541(Il2CppObject* delegate, Match_t3797657504 * ___match);
// System.IAsyncResult System.Text.RegularExpressions.MatchEvaluator::BeginInvoke(System.Text.RegularExpressions.Match,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * MatchEvaluator_BeginInvoke_m3315747252 (MatchEvaluator_t510977541 * __this, Match_t3797657504 * ___match, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.MatchEvaluator::EndInvoke(System.IAsyncResult)
extern "C"  String_t* MatchEvaluator_EndInvoke_m3976645020 (MatchEvaluator_t510977541 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
