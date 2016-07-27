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

// UnityTest.IntegrationTestRunner.TestRunnerCallbackList
struct TestRunnerCallbackList_t3685272314;
// UnityTest.IntegrationTestRunner.ITestRunnerCallback
struct ITestRunnerCallback_t1357861317;
// System.String
struct String_t;
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
#include "AssemblyU2DCSharp_UnityTest_TestResult1460781036.h"

// System.Void UnityTest.IntegrationTestRunner.TestRunnerCallbackList::.ctor()
extern "C"  void TestRunnerCallbackList__ctor_m594101303 (TestRunnerCallbackList_t3685272314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.IntegrationTestRunner.TestRunnerCallbackList::Add(UnityTest.IntegrationTestRunner.ITestRunnerCallback)
extern "C"  void TestRunnerCallbackList_Add_m4076792843 (TestRunnerCallbackList_t3685272314 * __this, Il2CppObject * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.IntegrationTestRunner.TestRunnerCallbackList::Remove(UnityTest.IntegrationTestRunner.ITestRunnerCallback)
extern "C"  void TestRunnerCallbackList_Remove_m3982661680 (TestRunnerCallbackList_t3685272314 * __this, Il2CppObject * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.IntegrationTestRunner.TestRunnerCallbackList::RunStarted(System.String,System.Collections.Generic.List`1<UnityTest.TestComponent>)
extern "C"  void TestRunnerCallbackList_RunStarted_m1078047855 (TestRunnerCallbackList_t3685272314 * __this, String_t* ___platform0, List_1_t2942692833 * ___testsToRun1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.IntegrationTestRunner.TestRunnerCallbackList::RunFinished(System.Collections.Generic.List`1<UnityTest.TestResult>)
extern "C"  void TestRunnerCallbackList_RunFinished_m1883291382 (TestRunnerCallbackList_t3685272314 * __this, List_1_t2257740005 * ___testResults0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.IntegrationTestRunner.TestRunnerCallbackList::AllScenesFinished()
extern "C"  void TestRunnerCallbackList_AllScenesFinished_m3555333071 (TestRunnerCallbackList_t3685272314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.IntegrationTestRunner.TestRunnerCallbackList::TestStarted(UnityTest.TestResult)
extern "C"  void TestRunnerCallbackList_TestStarted_m686797614 (TestRunnerCallbackList_t3685272314 * __this, TestResult_t1460781036 * ___test0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.IntegrationTestRunner.TestRunnerCallbackList::TestFinished(UnityTest.TestResult)
extern "C"  void TestRunnerCallbackList_TestFinished_m676189403 (TestRunnerCallbackList_t3685272314 * __this, TestResult_t1460781036 * ___test0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.IntegrationTestRunner.TestRunnerCallbackList::TestRunInterrupted(System.Collections.Generic.List`1<UnityTest.ITestComponent>)
extern "C"  void TestRunnerCallbackList_TestRunInterrupted_m4084049253 (TestRunnerCallbackList_t3685272314 * __this, List_1_t396651576 * ___testsNotRun0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
