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
struct TestRunnerCallbackList_t244;
// UnityTest.IntegrationTestRunner.ITestRunnerCallback
struct ITestRunnerCallback_t269;
// System.String
struct String_t;
// System.Collections.Generic.List`1<UnityTest.TestComponent>
struct List_1_t242;
// System.Collections.Generic.List`1<UnityTest.TestResult>
struct List_1_t241;
// UnityTest.TestResult
struct TestResult_t226;
// System.Collections.Generic.List`1<UnityTest.ITestComponent>
struct List_1_t263;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityTest.IntegrationTestRunner.TestRunnerCallbackList::.ctor()
extern "C" void TestRunnerCallbackList__ctor_m1001 (TestRunnerCallbackList_t244 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.IntegrationTestRunner.TestRunnerCallbackList::Add(UnityTest.IntegrationTestRunner.ITestRunnerCallback)
extern "C" void TestRunnerCallbackList_Add_m1002 (TestRunnerCallbackList_t244 * __this, Object_t * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.IntegrationTestRunner.TestRunnerCallbackList::Remove(UnityTest.IntegrationTestRunner.ITestRunnerCallback)
extern "C" void TestRunnerCallbackList_Remove_m1003 (TestRunnerCallbackList_t244 * __this, Object_t * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.IntegrationTestRunner.TestRunnerCallbackList::RunStarted(System.String,System.Collections.Generic.List`1<UnityTest.TestComponent>)
extern "C" void TestRunnerCallbackList_RunStarted_m1004 (TestRunnerCallbackList_t244 * __this, String_t* ___platform, List_1_t242 * ___testsToRun, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.IntegrationTestRunner.TestRunnerCallbackList::RunFinished(System.Collections.Generic.List`1<UnityTest.TestResult>)
extern "C" void TestRunnerCallbackList_RunFinished_m1005 (TestRunnerCallbackList_t244 * __this, List_1_t241 * ___testResults, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.IntegrationTestRunner.TestRunnerCallbackList::AllScenesFinished()
extern "C" void TestRunnerCallbackList_AllScenesFinished_m1006 (TestRunnerCallbackList_t244 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.IntegrationTestRunner.TestRunnerCallbackList::TestStarted(UnityTest.TestResult)
extern "C" void TestRunnerCallbackList_TestStarted_m1007 (TestRunnerCallbackList_t244 * __this, TestResult_t226 * ___test, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.IntegrationTestRunner.TestRunnerCallbackList::TestFinished(UnityTest.TestResult)
extern "C" void TestRunnerCallbackList_TestFinished_m1008 (TestRunnerCallbackList_t244 * __this, TestResult_t226 * ___test, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.IntegrationTestRunner.TestRunnerCallbackList::TestRunInterrupted(System.Collections.Generic.List`1<UnityTest.ITestComponent>)
extern "C" void TestRunnerCallbackList_TestRunInterrupted_m1009 (TestRunnerCallbackList_t244 * __this, List_1_t263 * ___testsNotRun, const MethodInfo* method) IL2CPP_METHOD_ATTR;
