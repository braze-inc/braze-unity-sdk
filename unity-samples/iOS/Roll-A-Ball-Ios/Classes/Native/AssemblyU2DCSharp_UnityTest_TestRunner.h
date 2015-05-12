#pragma once
#include <stdint.h>
// System.String
struct String_t;
// TestResultRenderer
struct TestResultRenderer_t256;
// UnityTest.TestComponent
struct TestComponent_t247;
// System.Collections.Generic.List`1<UnityTest.TestResult>
struct List_1_t231;
// System.Collections.Generic.List`1<UnityTest.TestComponent>
struct List_1_t230;
// UnityTest.TestRunnerConfigurator
struct TestRunnerConfigurator_t264;
// UnityTest.IntegrationTestRunner.TestRunnerCallbackList
struct TestRunnerCallbackList_t265;
// UnityTest.IntegrationTestRunner.IntegrationTestsProvider
struct IntegrationTestsProvider_t227;
// System.Func`2<System.Type,System.String>
struct Func_2_t215;
// System.Func`2<UnityTest.TestComponent,UnityTest.TestResult>
struct Func_2_t266;
// System.Func`2<UnityTest.TestResult,UnityTest.ITestComponent>
struct Func_2_t267;
// System.Func`2<UnityTest.TestResult,System.Boolean>
struct Func_2_t268;
// System.Func`2<UnityTest.TestResult,System.String>
struct Func_2_t269;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityTest.TestRunner/TestState
#include "AssemblyU2DCSharp_UnityTest_TestRunner_TestState.h"
// UnityTest.TestRunner
struct TestRunner_t259  : public MonoBehaviour_t2
{
	// UnityTest.TestComponent UnityTest.TestRunner::currentTest
	TestComponent_t247 * ___currentTest_11;
	// System.Collections.Generic.List`1<UnityTest.TestResult> UnityTest.TestRunner::m_ResultList
	List_1_t231 * ___m_ResultList_12;
	// System.Collections.Generic.List`1<UnityTest.TestComponent> UnityTest.TestRunner::m_TestComponents
	List_1_t230 * ___m_TestComponents_13;
	// System.Double UnityTest.TestRunner::m_StartTime
	double ___m_StartTime_14;
	// System.Boolean UnityTest.TestRunner::m_ReadyToRun
	bool ___m_ReadyToRun_15;
	// System.String UnityTest.TestRunner::m_TestMessages
	String_t* ___m_TestMessages_16;
	// System.String UnityTest.TestRunner::m_Stacktrace
	String_t* ___m_Stacktrace_17;
	// UnityTest.TestRunner/TestState UnityTest.TestRunner::m_TestState
	int32_t ___m_TestState_18;
	// UnityTest.TestRunnerConfigurator UnityTest.TestRunner::m_Configurator
	TestRunnerConfigurator_t264 * ___m_Configurator_19;
	// UnityTest.IntegrationTestRunner.TestRunnerCallbackList UnityTest.TestRunner::TestRunnerCallback
	TestRunnerCallbackList_t265 * ___TestRunnerCallback_20;
	// UnityTest.IntegrationTestRunner.IntegrationTestsProvider UnityTest.TestRunner::m_TestsProvider
	IntegrationTestsProvider_t227 * ___m_TestsProvider_21;
};
struct TestRunner_t259_StaticFields{
	// System.String UnityTest.TestRunner::k_Prefix
	String_t* ___k_Prefix_2;
	// System.String UnityTest.TestRunner::k_StartedMessage
	String_t* ___k_StartedMessage_3;
	// System.String UnityTest.TestRunner::k_FinishedMessage
	String_t* ___k_FinishedMessage_4;
	// System.String UnityTest.TestRunner::k_TimeoutMessage
	String_t* ___k_TimeoutMessage_5;
	// System.String UnityTest.TestRunner::k_FailedMessage
	String_t* ___k_FailedMessage_6;
	// System.String UnityTest.TestRunner::k_FailedExceptionMessage
	String_t* ___k_FailedExceptionMessage_7;
	// System.String UnityTest.TestRunner::k_IgnoredMessage
	String_t* ___k_IgnoredMessage_8;
	// System.String UnityTest.TestRunner::k_InterruptedMessage
	String_t* ___k_InterruptedMessage_9;
	// TestResultRenderer UnityTest.TestRunner::k_ResultRenderer
	TestResultRenderer_t256 * ___k_ResultRenderer_10;
	// System.Func`2<System.Type,System.String> UnityTest.TestRunner::<>f__am$cacheC
	Func_2_t215 * ___U3CU3Ef__am$cacheC_22;
	// System.Func`2<UnityTest.TestComponent,UnityTest.TestResult> UnityTest.TestRunner::<>f__am$cacheD
	Func_2_t266 * ___U3CU3Ef__am$cacheD_23;
	// System.Func`2<UnityTest.TestResult,UnityTest.ITestComponent> UnityTest.TestRunner::<>f__am$cacheE
	Func_2_t267 * ___U3CU3Ef__am$cacheE_24;
	// System.Func`2<UnityTest.TestResult,System.Boolean> UnityTest.TestRunner::<>f__am$cacheF
	Func_2_t268 * ___U3CU3Ef__am$cacheF_25;
	// System.Func`2<UnityTest.TestResult,System.Boolean> UnityTest.TestRunner::<>f__am$cache10
	Func_2_t268 * ___U3CU3Ef__am$cache10_26;
	// System.Func`2<UnityTest.TestResult,System.Boolean> UnityTest.TestRunner::<>f__am$cache11
	Func_2_t268 * ___U3CU3Ef__am$cache11_27;
	// System.Func`2<UnityTest.TestResult,System.Boolean> UnityTest.TestRunner::<>f__am$cache12
	Func_2_t268 * ___U3CU3Ef__am$cache12_28;
	// System.Func`2<UnityTest.TestResult,System.String> UnityTest.TestRunner::<>f__am$cache13
	Func_2_t269 * ___U3CU3Ef__am$cache13_29;
	// System.Func`2<UnityTest.TestResult,System.Boolean> UnityTest.TestRunner::<>f__am$cache14
	Func_2_t268 * ___U3CU3Ef__am$cache14_30;
	// System.Func`2<UnityTest.TestResult,System.Boolean> UnityTest.TestRunner::<>f__am$cache15
	Func_2_t268 * ___U3CU3Ef__am$cache15_31;
	// System.Func`2<UnityTest.TestResult,System.Boolean> UnityTest.TestRunner::<>f__am$cache16
	Func_2_t268 * ___U3CU3Ef__am$cache16_32;
	// System.Func`2<UnityTest.TestResult,System.String> UnityTest.TestRunner::<>f__am$cache17
	Func_2_t269 * ___U3CU3Ef__am$cache17_33;
};
