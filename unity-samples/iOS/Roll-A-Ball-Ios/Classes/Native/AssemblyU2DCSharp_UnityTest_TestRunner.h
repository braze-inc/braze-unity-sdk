#pragma once
#include <stdint.h>
// TestResultRenderer
struct TestResultRenderer_t269;
// UnityTest.TestComponent
struct TestComponent_t260;
// System.Collections.Generic.List`1<UnityTest.TestResult>
struct List_1_t244;
// System.Collections.Generic.List`1<UnityTest.TestComponent>
struct List_1_t243;
// System.String
struct String_t;
// UnityTest.TestRunnerConfigurator
struct TestRunnerConfigurator_t277;
// UnityTest.IntegrationTestRunner.TestRunnerCallbackList
struct TestRunnerCallbackList_t278;
// UnityTest.IntegrationTestRunner.IntegrationTestsProvider
struct IntegrationTestsProvider_t240;
// System.Func`2<System.Type,System.String>
struct Func_2_t228;
// System.Func`2<UnityTest.TestComponent,UnityTest.TestResult>
struct Func_2_t279;
// System.Func`2<UnityTest.TestResult,UnityTest.ITestComponent>
struct Func_2_t280;
// System.Func`2<UnityTest.TestResult,System.Boolean>
struct Func_2_t281;
// System.Func`2<UnityTest.TestResult,System.String>
struct Func_2_t282;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityTest.TestRunner/TestState
#include "AssemblyU2DCSharp_UnityTest_TestRunner_TestState.h"
// UnityTest.TestRunner
struct TestRunner_t272  : public MonoBehaviour_t2
{
	// UnityTest.TestComponent UnityTest.TestRunner::currentTest
	TestComponent_t260 * ___currentTest_3;
	// System.Collections.Generic.List`1<UnityTest.TestResult> UnityTest.TestRunner::m_ResultList
	List_1_t244 * ___m_ResultList_4;
	// System.Collections.Generic.List`1<UnityTest.TestComponent> UnityTest.TestRunner::m_TestComponents
	List_1_t243 * ___m_TestComponents_5;
	// System.Double UnityTest.TestRunner::m_StartTime
	double ___m_StartTime_6;
	// System.Boolean UnityTest.TestRunner::m_ReadyToRun
	bool ___m_ReadyToRun_7;
	// System.String UnityTest.TestRunner::m_TestMessages
	String_t* ___m_TestMessages_8;
	// System.String UnityTest.TestRunner::m_Stacktrace
	String_t* ___m_Stacktrace_9;
	// UnityTest.TestRunner/TestState UnityTest.TestRunner::m_TestState
	int32_t ___m_TestState_10;
	// UnityTest.TestRunnerConfigurator UnityTest.TestRunner::m_Configurator
	TestRunnerConfigurator_t277 * ___m_Configurator_11;
	// UnityTest.IntegrationTestRunner.TestRunnerCallbackList UnityTest.TestRunner::TestRunnerCallback
	TestRunnerCallbackList_t278 * ___TestRunnerCallback_12;
	// UnityTest.IntegrationTestRunner.IntegrationTestsProvider UnityTest.TestRunner::m_TestsProvider
	IntegrationTestsProvider_t240 * ___m_TestsProvider_13;
};
struct TestRunner_t272_StaticFields{
	// TestResultRenderer UnityTest.TestRunner::k_ResultRenderer
	TestResultRenderer_t269 * ___k_ResultRenderer_2;
	// System.String UnityTest.TestRunner::k_Prefix
	String_t* ___k_Prefix_14;
	// System.String UnityTest.TestRunner::k_StartedMessage
	String_t* ___k_StartedMessage_15;
	// System.String UnityTest.TestRunner::k_FinishedMessage
	String_t* ___k_FinishedMessage_16;
	// System.String UnityTest.TestRunner::k_TimeoutMessage
	String_t* ___k_TimeoutMessage_17;
	// System.String UnityTest.TestRunner::k_FailedMessage
	String_t* ___k_FailedMessage_18;
	// System.String UnityTest.TestRunner::k_FailedExceptionMessage
	String_t* ___k_FailedExceptionMessage_19;
	// System.String UnityTest.TestRunner::k_IgnoredMessage
	String_t* ___k_IgnoredMessage_20;
	// System.String UnityTest.TestRunner::k_InterruptedMessage
	String_t* ___k_InterruptedMessage_21;
	// System.Func`2<System.Type,System.String> UnityTest.TestRunner::<>f__am$cache14
	Func_2_t228 * ___U3CU3Ef__am$cache14_22;
	// System.Func`2<UnityTest.TestComponent,UnityTest.TestResult> UnityTest.TestRunner::<>f__am$cache15
	Func_2_t279 * ___U3CU3Ef__am$cache15_23;
	// System.Func`2<UnityTest.TestResult,UnityTest.ITestComponent> UnityTest.TestRunner::<>f__am$cache16
	Func_2_t280 * ___U3CU3Ef__am$cache16_24;
	// System.Func`2<UnityTest.TestResult,System.Boolean> UnityTest.TestRunner::<>f__am$cache17
	Func_2_t281 * ___U3CU3Ef__am$cache17_25;
	// System.Func`2<UnityTest.TestResult,System.Boolean> UnityTest.TestRunner::<>f__am$cache18
	Func_2_t281 * ___U3CU3Ef__am$cache18_26;
	// System.Func`2<UnityTest.TestResult,System.Boolean> UnityTest.TestRunner::<>f__am$cache19
	Func_2_t281 * ___U3CU3Ef__am$cache19_27;
	// System.Func`2<UnityTest.TestResult,System.Boolean> UnityTest.TestRunner::<>f__am$cache1A
	Func_2_t281 * ___U3CU3Ef__am$cache1A_28;
	// System.Func`2<UnityTest.TestResult,System.String> UnityTest.TestRunner::<>f__am$cache1B
	Func_2_t282 * ___U3CU3Ef__am$cache1B_29;
	// System.Func`2<UnityTest.TestResult,System.Boolean> UnityTest.TestRunner::<>f__am$cache1C
	Func_2_t281 * ___U3CU3Ef__am$cache1C_30;
	// System.Func`2<UnityTest.TestResult,System.Boolean> UnityTest.TestRunner::<>f__am$cache1D
	Func_2_t281 * ___U3CU3Ef__am$cache1D_31;
	// System.Func`2<UnityTest.TestResult,System.Boolean> UnityTest.TestRunner::<>f__am$cache1E
	Func_2_t281 * ___U3CU3Ef__am$cache1E_32;
	// System.Func`2<UnityTest.TestResult,System.String> UnityTest.TestRunner::<>f__am$cache1F
	Func_2_t282 * ___U3CU3Ef__am$cache1F_33;
};
