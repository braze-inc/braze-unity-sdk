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

// System.Text.RegularExpressions.IntervalCollection/CostDelegate
struct CostDelegate_t3008899218;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "System_System_Text_RegularExpressions_Interval63637216.h"
#include "System_System_Text_RegularExpressions_Interval63637216MethodDeclarations.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Text.RegularExpressions.IntervalCollection/CostDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void CostDelegate__ctor_m731467895 (CostDelegate_t3008899218 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Text.RegularExpressions.IntervalCollection/CostDelegate::Invoke(System.Text.RegularExpressions.Interval)
extern "C"  double CostDelegate_Invoke_m212988972 (CostDelegate_t3008899218 * __this, Interval_t63637216  ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" double pinvoke_delegate_wrapper_CostDelegate_t3008899218(Il2CppObject* delegate, Interval_t63637216  ___i);
// System.IAsyncResult System.Text.RegularExpressions.IntervalCollection/CostDelegate::BeginInvoke(System.Text.RegularExpressions.Interval,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CostDelegate_BeginInvoke_m1041332600 (CostDelegate_t3008899218 * __this, Interval_t63637216  ___i, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Text.RegularExpressions.IntervalCollection/CostDelegate::EndInvoke(System.IAsyncResult)
extern "C"  double CostDelegate_EndInvoke_m917297514 (CostDelegate_t3008899218 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
