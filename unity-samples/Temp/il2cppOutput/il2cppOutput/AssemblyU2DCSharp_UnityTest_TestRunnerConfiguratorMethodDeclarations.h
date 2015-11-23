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

// UnityTest.TestRunnerConfigurator
struct TestRunnerConfigurator_t243;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t64;
// UnityTest.IntegrationTestRunner.ITestRunnerCallback
struct ITestRunnerCallback_t269;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityTest.TestRunnerConfigurator::.ctor()
extern "C" void TestRunnerConfigurator__ctor_m1010 (TestRunnerConfigurator_t243 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunnerConfigurator::.cctor()
extern "C" void TestRunnerConfigurator__cctor_m1011 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunnerConfigurator::get_isBatchRun()
extern "C" bool TestRunnerConfigurator_get_isBatchRun_m1012 (TestRunnerConfigurator_t243 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunnerConfigurator::set_isBatchRun(System.Boolean)
extern "C" void TestRunnerConfigurator_set_isBatchRun_m1013 (TestRunnerConfigurator_t243 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunnerConfigurator::get_sendResultsOverNetwork()
extern "C" bool TestRunnerConfigurator_get_sendResultsOverNetwork_m1014 (TestRunnerConfigurator_t243 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunnerConfigurator::set_sendResultsOverNetwork(System.Boolean)
extern "C" void TestRunnerConfigurator_set_sendResultsOverNetwork_m1015 (TestRunnerConfigurator_t243 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestRunnerConfigurator::GetIntegrationTestScenes(System.Int32)
extern "C" String_t* TestRunnerConfigurator_GetIntegrationTestScenes_m1016 (TestRunnerConfigurator_t243 * __this, int32_t ___testSceneNum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunnerConfigurator::CheckForSendingResultsOverNetwork()
extern "C" void TestRunnerConfigurator_CheckForSendingResultsOverNetwork_m1017 (TestRunnerConfigurator_t243 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestRunnerConfigurator::GetTextFromTextAsset(System.String)
extern "C" String_t* TestRunnerConfigurator_GetTextFromTextAsset_m1018 (Object_t * __this /* static, unused */, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestRunnerConfigurator::GetTextFromTempFile(System.String)
extern "C" String_t* TestRunnerConfigurator_GetTextFromTempFile_m1019 (Object_t * __this /* static, unused */, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunnerConfigurator::CheckForBatchMode()
extern "C" void TestRunnerConfigurator_CheckForBatchMode_m1020 (TestRunnerConfigurator_t243 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> UnityTest.TestRunnerConfigurator::GetAvailableNetworkIPs()
extern "C" List_1_t64 * TestRunnerConfigurator_GetAvailableNetworkIPs_m1021 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.IntegrationTestRunner.ITestRunnerCallback UnityTest.TestRunnerConfigurator::ResolveNetworkConnection()
extern "C" Object_t * TestRunnerConfigurator_ResolveNetworkConnection_m1022 (TestRunnerConfigurator_t243 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
