#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityTest.IntegrationTestRunner.TestRunnerCallbackList
struct TestRunnerCallbackList_t265;
// UnityTest.IntegrationTestRunner.ITestRunnerCallback
struct ITestRunnerCallback_t272;
// System.String
struct String_t;
// System.Collections.Generic.List`1<UnityTest.TestComponent>
struct List_1_t230;
// System.Collections.Generic.List`1<UnityTest.TestResult>
struct List_1_t231;
// UnityTest.TestResult
struct TestResult_t232;
// System.Collections.Generic.List`1<UnityTest.ITestComponent>
struct List_1_t228;

// System.Void UnityTest.IntegrationTestRunner.TestRunnerCallbackList::.ctor()
 void TestRunnerCallbackList__ctor_m1019 (TestRunnerCallbackList_t265 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.IntegrationTestRunner.TestRunnerCallbackList::Add(UnityTest.IntegrationTestRunner.ITestRunnerCallback)
 void TestRunnerCallbackList_Add_m1020 (TestRunnerCallbackList_t265 * __this, Object_t * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.IntegrationTestRunner.TestRunnerCallbackList::Remove(UnityTest.IntegrationTestRunner.ITestRunnerCallback)
 void TestRunnerCallbackList_Remove_m1021 (TestRunnerCallbackList_t265 * __this, Object_t * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.IntegrationTestRunner.TestRunnerCallbackList::RunStarted(System.String,System.Collections.Generic.List`1<UnityTest.TestComponent>)
 void TestRunnerCallbackList_RunStarted_m1022 (TestRunnerCallbackList_t265 * __this, String_t* ___platform, List_1_t230 * ___testsToRun, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.IntegrationTestRunner.TestRunnerCallbackList::RunFinished(System.Collections.Generic.List`1<UnityTest.TestResult>)
 void TestRunnerCallbackList_RunFinished_m1023 (TestRunnerCallbackList_t265 * __this, List_1_t231 * ___testResults, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.IntegrationTestRunner.TestRunnerCallbackList::TestStarted(UnityTest.TestResult)
 void TestRunnerCallbackList_TestStarted_m1024 (TestRunnerCallbackList_t265 * __this, TestResult_t232 * ___test, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.IntegrationTestRunner.TestRunnerCallbackList::TestFinished(UnityTest.TestResult)
 void TestRunnerCallbackList_TestFinished_m1025 (TestRunnerCallbackList_t265 * __this, TestResult_t232 * ___test, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.IntegrationTestRunner.TestRunnerCallbackList::TestRunInterrupted(System.Collections.Generic.List`1<UnityTest.ITestComponent>)
 void TestRunnerCallbackList_TestRunInterrupted_m1026 (TestRunnerCallbackList_t265 * __this, List_1_t228 * ___testsNotRun, MethodInfo* method) IL2CPP_METHOD_ATTR;
