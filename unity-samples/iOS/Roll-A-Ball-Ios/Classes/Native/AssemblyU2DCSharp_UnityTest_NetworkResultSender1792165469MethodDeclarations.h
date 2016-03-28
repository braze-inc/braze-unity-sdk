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

// UnityTest.NetworkResultSender
struct NetworkResultSender_t1792165469;
// System.String
struct String_t;
// UnityTest.ResultDTO
struct ResultDTO_t2261364959;
// System.Collections.Generic.List`1<UnityTest.TestComponent>
struct List_1_t2942692833;
// System.Collections.Generic.List`1<UnityTest.TestResult>
struct List_1_t2257740005;
// UnityTest.TestResult
struct TestResult_t1460781036;
// System.Collections.Generic.List`1<UnityTest.ITestComponent>
struct List_1_t396651576;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_UnityTest_ResultDTO2261364959.h"
#include "AssemblyU2DCSharp_UnityTest_TestResult1460781036.h"

// System.Void UnityTest.NetworkResultSender::.ctor(System.String,System.Int32)
extern "C"  void NetworkResultSender__ctor_m850250023 (NetworkResultSender_t1792165469 * __this, String_t* ___ip, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.NetworkResultSender::SendDTO(UnityTest.ResultDTO)
extern "C"  bool NetworkResultSender_SendDTO_m1451533212 (NetworkResultSender_t1792165469 * __this, ResultDTO_t2261364959 * ___dto, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.NetworkResultSender::Ping()
extern "C"  bool NetworkResultSender_Ping_m3936134960 (NetworkResultSender_t1792165469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.NetworkResultSender::RunStarted(System.String,System.Collections.Generic.List`1<UnityTest.TestComponent>)
extern "C"  void NetworkResultSender_RunStarted_m1783198196 (NetworkResultSender_t1792165469 * __this, String_t* ___platform, List_1_t2942692833 * ___testsToRun, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.NetworkResultSender::RunFinished(System.Collections.Generic.List`1<UnityTest.TestResult>)
extern "C"  void NetworkResultSender_RunFinished_m3820365435 (NetworkResultSender_t1792165469 * __this, List_1_t2257740005 * ___testResults, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.NetworkResultSender::TestStarted(UnityTest.TestResult)
extern "C"  void NetworkResultSender_TestStarted_m2118069705 (NetworkResultSender_t1792165469 * __this, TestResult_t1460781036 * ___test, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.NetworkResultSender::TestFinished(UnityTest.TestResult)
extern "C"  void NetworkResultSender_TestFinished_m2095951264 (NetworkResultSender_t1792165469 * __this, TestResult_t1460781036 * ___test, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.NetworkResultSender::AllScenesFinished()
extern "C"  void NetworkResultSender_AllScenesFinished_m3544082858 (NetworkResultSender_t1792165469 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.NetworkResultSender::TestRunInterrupted(System.Collections.Generic.List`1<UnityTest.ITestComponent>)
extern "C"  void NetworkResultSender_TestRunInterrupted_m2913781952 (NetworkResultSender_t1792165469 * __this, List_1_t396651576 * ___testsNotRun, const MethodInfo* method) IL2CPP_METHOD_ATTR;
