#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityTest.TestRunnerConfigurator
struct TestRunnerConfigurator_t264;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t4;
// UnityTest.IntegrationTestRunner.ITestRunnerCallback
struct ITestRunnerCallback_t272;

// System.Void UnityTest.TestRunnerConfigurator::.ctor()
 void TestRunnerConfigurator__ctor_m1027 (TestRunnerConfigurator_t264 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunnerConfigurator::.cctor()
 void TestRunnerConfigurator__cctor_m1028 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunnerConfigurator::get_isBatchRun()
 bool TestRunnerConfigurator_get_isBatchRun_m1029 (TestRunnerConfigurator_t264 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunnerConfigurator::set_isBatchRun(System.Boolean)
 void TestRunnerConfigurator_set_isBatchRun_m1030 (TestRunnerConfigurator_t264 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunnerConfigurator::get_sendResultsOverNetwork()
 bool TestRunnerConfigurator_get_sendResultsOverNetwork_m1031 (TestRunnerConfigurator_t264 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunnerConfigurator::set_sendResultsOverNetwork(System.Boolean)
 void TestRunnerConfigurator_set_sendResultsOverNetwork_m1032 (TestRunnerConfigurator_t264 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunnerConfigurator::CheckForSendingResultsOverNetwork()
 void TestRunnerConfigurator_CheckForSendingResultsOverNetwork_m1033 (TestRunnerConfigurator_t264 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestRunnerConfigurator::GetTextFromTextAsset(System.String)
 String_t* TestRunnerConfigurator_GetTextFromTextAsset_m1034 (Object_t * __this/* static, unused */, String_t* ___fileName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestRunnerConfigurator::GetTextFromTempFile(System.String)
 String_t* TestRunnerConfigurator_GetTextFromTempFile_m1035 (Object_t * __this/* static, unused */, String_t* ___fileName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunnerConfigurator::CheckForBatchMode()
 void TestRunnerConfigurator_CheckForBatchMode_m1036 (TestRunnerConfigurator_t264 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> UnityTest.TestRunnerConfigurator::GetAvailableNetworkIPs()
 List_1_t4 * TestRunnerConfigurator_GetAvailableNetworkIPs_m1037 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.IntegrationTestRunner.ITestRunnerCallback UnityTest.TestRunnerConfigurator::ResolveNetworkConnection()
 Object_t * TestRunnerConfigurator_ResolveNetworkConnection_m1038 (TestRunnerConfigurator_t264 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
