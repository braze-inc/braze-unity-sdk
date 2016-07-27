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
struct TestRunnerConfigurator_t3601617748;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;
// UnityTest.IntegrationTestRunner.ITestRunnerCallback
struct ITestRunnerCallback_t1357861317;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void UnityTest.TestRunnerConfigurator::.ctor()
extern "C"  void TestRunnerConfigurator__ctor_m1062408509 (TestRunnerConfigurator_t3601617748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunnerConfigurator::.cctor()
extern "C"  void TestRunnerConfigurator__cctor_m2387796496 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunnerConfigurator::get_isBatchRun()
extern "C"  bool TestRunnerConfigurator_get_isBatchRun_m974877247 (TestRunnerConfigurator_t3601617748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunnerConfigurator::set_isBatchRun(System.Boolean)
extern "C"  void TestRunnerConfigurator_set_isBatchRun_m2613545526 (TestRunnerConfigurator_t3601617748 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityTest.TestRunnerConfigurator::get_sendResultsOverNetwork()
extern "C"  bool TestRunnerConfigurator_get_sendResultsOverNetwork_m433787856 (TestRunnerConfigurator_t3601617748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunnerConfigurator::set_sendResultsOverNetwork(System.Boolean)
extern "C"  void TestRunnerConfigurator_set_sendResultsOverNetwork_m3622533639 (TestRunnerConfigurator_t3601617748 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestRunnerConfigurator::GetIntegrationTestScenes(System.Int32)
extern "C"  String_t* TestRunnerConfigurator_GetIntegrationTestScenes_m2983808754 (TestRunnerConfigurator_t3601617748 * __this, int32_t ___testSceneNum0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunnerConfigurator::CheckForSendingResultsOverNetwork()
extern "C"  void TestRunnerConfigurator_CheckForSendingResultsOverNetwork_m948457048 (TestRunnerConfigurator_t3601617748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestRunnerConfigurator::GetTextFromTextAsset(System.String)
extern "C"  String_t* TestRunnerConfigurator_GetTextFromTextAsset_m3400178338 (Il2CppObject * __this /* static, unused */, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityTest.TestRunnerConfigurator::GetTextFromTempFile(System.String)
extern "C"  String_t* TestRunnerConfigurator_GetTextFromTempFile_m3084582541 (Il2CppObject * __this /* static, unused */, String_t* ___fileName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityTest.TestRunnerConfigurator::CheckForBatchMode()
extern "C"  void TestRunnerConfigurator_CheckForBatchMode_m3381215927 (TestRunnerConfigurator_t3601617748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.String> UnityTest.TestRunnerConfigurator::GetAvailableNetworkIPs()
extern "C"  List_1_t1765447871 * TestRunnerConfigurator_GetAvailableNetworkIPs_m807358729 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityTest.IntegrationTestRunner.ITestRunnerCallback UnityTest.TestRunnerConfigurator::ResolveNetworkConnection()
extern "C"  Il2CppObject * TestRunnerConfigurator_ResolveNetworkConnection_m2502225321 (TestRunnerConfigurator_t3601617748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
