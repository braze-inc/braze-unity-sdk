#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// TestResultRenderer
struct TestResultRenderer_t229;
// UnityTest.TestComponent
struct TestComponent_t220;
// System.Collections.Generic.List`1<UnityTest.TestResult>
struct List_1_t241;
// System.Collections.Generic.List`1<UnityTest.TestComponent>
struct List_1_t242;
// UnityTest.TestRunnerConfigurator
struct TestRunnerConfigurator_t243;
// UnityTest.IntegrationTestRunner.TestRunnerCallbackList
struct TestRunnerCallbackList_t244;
// UnityTest.IntegrationTestRunner.IntegrationTestsProvider
struct IntegrationTestsProvider_t201;
// System.Func`2<System.Type,System.String>
struct Func_2_t194;
// System.Func`2<UnityTest.TestComponent,UnityTest.TestResult>
struct Func_2_t245;
// System.Func`2<UnityTest.TestResult,UnityTest.ITestComponent>
struct Func_2_t246;
// System.Func`2<UnityTest.TestResult,System.Boolean>
struct Func_2_t247;
// System.Func`2<UnityTest.TestResult,System.String>
struct Func_2_t248;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "AssemblyU2DCSharp_UnityTest_TestRunner_TestState.h"

// UnityTest.TestRunner
struct  TestRunner_t238  : public MonoBehaviour_t2
{
	// UnityTest.TestComponent UnityTest.TestRunner::currentTest
	TestComponent_t220 * ___currentTest_12;
	// System.Collections.Generic.List`1<UnityTest.TestResult> UnityTest.TestRunner::m_ResultList
	List_1_t241 * ___m_ResultList_13;
	// System.Collections.Generic.List`1<UnityTest.TestComponent> UnityTest.TestRunner::m_TestComponents
	List_1_t242 * ___m_TestComponents_14;
	// System.Double UnityTest.TestRunner::m_StartTime
	double ___m_StartTime_15;
	// System.Boolean UnityTest.TestRunner::m_ReadyToRun
	bool ___m_ReadyToRun_16;
	// System.String UnityTest.TestRunner::m_TestMessages
	String_t* ___m_TestMessages_17;
	// System.String UnityTest.TestRunner::m_Stacktrace
	String_t* ___m_Stacktrace_18;
	// UnityTest.TestRunner/TestState UnityTest.TestRunner::m_TestState
	int32_t ___m_TestState_19;
	// UnityTest.TestRunnerConfigurator UnityTest.TestRunner::m_Configurator
	TestRunnerConfigurator_t243 * ___m_Configurator_20;
	// UnityTest.IntegrationTestRunner.TestRunnerCallbackList UnityTest.TestRunner::TestRunnerCallback
	TestRunnerCallbackList_t244 * ___TestRunnerCallback_21;
	// UnityTest.IntegrationTestRunner.IntegrationTestsProvider UnityTest.TestRunner::m_TestsProvider
	IntegrationTestsProvider_t201 * ___m_TestsProvider_22;
};
struct TestRunner_t238_StaticFields{
	// System.Int32 UnityTest.TestRunner::TestSceneNumber
	int32_t ___TestSceneNumber_10;
	// TestResultRenderer UnityTest.TestRunner::k_ResultRenderer
	TestResultRenderer_t229 * ___k_ResultRenderer_11;
	// System.Func`2<System.Type,System.String> UnityTest.TestRunner::<>f__am$cacheD
	Func_2_t194 * ___U3CU3Ef__amU24cacheD_23;
	// System.Func`2<UnityTest.TestComponent,UnityTest.TestResult> UnityTest.TestRunner::<>f__am$cacheE
	Func_2_t245 * ___U3CU3Ef__amU24cacheE_24;
	// System.Func`2<UnityTest.TestResult,UnityTest.ITestComponent> UnityTest.TestRunner::<>f__am$cacheF
	Func_2_t246 * ___U3CU3Ef__amU24cacheF_25;
	// System.Func`2<UnityTest.TestResult,System.Boolean> UnityTest.TestRunner::<>f__am$cache10
	Func_2_t247 * ___U3CU3Ef__amU24cache10_26;
	// System.Func`2<UnityTest.TestResult,System.Boolean> UnityTest.TestRunner::<>f__am$cache11
	Func_2_t247 * ___U3CU3Ef__amU24cache11_27;
	// System.Func`2<UnityTest.TestResult,System.Boolean> UnityTest.TestRunner::<>f__am$cache12
	Func_2_t247 * ___U3CU3Ef__amU24cache12_28;
	// System.Func`2<UnityTest.TestResult,System.Boolean> UnityTest.TestRunner::<>f__am$cache13
	Func_2_t247 * ___U3CU3Ef__amU24cache13_29;
	// System.Func`2<UnityTest.TestResult,System.String> UnityTest.TestRunner::<>f__am$cache14
	Func_2_t248 * ___U3CU3Ef__amU24cache14_30;
	// System.Func`2<UnityTest.TestResult,System.Boolean> UnityTest.TestRunner::<>f__am$cache15
	Func_2_t247 * ___U3CU3Ef__amU24cache15_31;
	// System.Func`2<UnityTest.TestResult,System.Boolean> UnityTest.TestRunner::<>f__am$cache16
	Func_2_t247 * ___U3CU3Ef__amU24cache16_32;
	// System.Func`2<UnityTest.TestResult,System.Boolean> UnityTest.TestRunner::<>f__am$cache17
	Func_2_t247 * ___U3CU3Ef__amU24cache17_33;
	// System.Func`2<UnityTest.TestResult,System.String> UnityTest.TestRunner::<>f__am$cache18
	Func_2_t248 * ___U3CU3Ef__amU24cache18_34;
};
