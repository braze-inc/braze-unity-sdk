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
struct TestResultRenderer_t2000577874;
// UnityTest.TestComponent
struct TestComponent_t2145733864;
// System.Collections.Generic.List`1<UnityTest.TestResult>
struct List_1_t2257740005;
// System.Collections.Generic.List`1<UnityTest.TestComponent>
struct List_1_t2942692833;
// UnityTest.TestRunnerConfigurator
struct TestRunnerConfigurator_t3601617748;
// UnityTest.IntegrationTestRunner.TestRunnerCallbackList
struct TestRunnerCallbackList_t3685272314;
// UnityTest.IntegrationTestRunner.IntegrationTestsProvider
struct IntegrationTestsProvider_t2398803635;
// System.Func`2<System.Type,System.String>
struct Func_2_t1392394819;
// System.Func`2<UnityTest.TestComponent,UnityTest.TestResult>
struct Func_2_t2720907372;
// System.Func`2<UnityTest.TestResult,UnityTest.ITestComponent>
struct Func_2_t687257643;
// System.Func`2<UnityTest.TestResult,System.Boolean>
struct Func_2_t1298570377;
// System.Func`2<UnityTest.TestResult,System.String>
struct Func_2_t2056053938;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_UnityTest_TestRunner_TestState812759807.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityTest.TestRunner
struct  TestRunner_t1475401471  : public MonoBehaviour_t3012272455
{
public:
	// UnityTest.TestComponent UnityTest.TestRunner::currentTest
	TestComponent_t2145733864 * ___currentTest_12;
	// System.Collections.Generic.List`1<UnityTest.TestResult> UnityTest.TestRunner::m_ResultList
	List_1_t2257740005 * ___m_ResultList_13;
	// System.Collections.Generic.List`1<UnityTest.TestComponent> UnityTest.TestRunner::m_TestComponents
	List_1_t2942692833 * ___m_TestComponents_14;
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
	TestRunnerConfigurator_t3601617748 * ___m_Configurator_20;
	// UnityTest.IntegrationTestRunner.TestRunnerCallbackList UnityTest.TestRunner::TestRunnerCallback
	TestRunnerCallbackList_t3685272314 * ___TestRunnerCallback_21;
	// UnityTest.IntegrationTestRunner.IntegrationTestsProvider UnityTest.TestRunner::m_TestsProvider
	IntegrationTestsProvider_t2398803635 * ___m_TestsProvider_22;

public:
	inline static int32_t get_offset_of_currentTest_12() { return static_cast<int32_t>(offsetof(TestRunner_t1475401471, ___currentTest_12)); }
	inline TestComponent_t2145733864 * get_currentTest_12() const { return ___currentTest_12; }
	inline TestComponent_t2145733864 ** get_address_of_currentTest_12() { return &___currentTest_12; }
	inline void set_currentTest_12(TestComponent_t2145733864 * value)
	{
		___currentTest_12 = value;
		Il2CppCodeGenWriteBarrier(&___currentTest_12, value);
	}

	inline static int32_t get_offset_of_m_ResultList_13() { return static_cast<int32_t>(offsetof(TestRunner_t1475401471, ___m_ResultList_13)); }
	inline List_1_t2257740005 * get_m_ResultList_13() const { return ___m_ResultList_13; }
	inline List_1_t2257740005 ** get_address_of_m_ResultList_13() { return &___m_ResultList_13; }
	inline void set_m_ResultList_13(List_1_t2257740005 * value)
	{
		___m_ResultList_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_ResultList_13, value);
	}

	inline static int32_t get_offset_of_m_TestComponents_14() { return static_cast<int32_t>(offsetof(TestRunner_t1475401471, ___m_TestComponents_14)); }
	inline List_1_t2942692833 * get_m_TestComponents_14() const { return ___m_TestComponents_14; }
	inline List_1_t2942692833 ** get_address_of_m_TestComponents_14() { return &___m_TestComponents_14; }
	inline void set_m_TestComponents_14(List_1_t2942692833 * value)
	{
		___m_TestComponents_14 = value;
		Il2CppCodeGenWriteBarrier(&___m_TestComponents_14, value);
	}

	inline static int32_t get_offset_of_m_StartTime_15() { return static_cast<int32_t>(offsetof(TestRunner_t1475401471, ___m_StartTime_15)); }
	inline double get_m_StartTime_15() const { return ___m_StartTime_15; }
	inline double* get_address_of_m_StartTime_15() { return &___m_StartTime_15; }
	inline void set_m_StartTime_15(double value)
	{
		___m_StartTime_15 = value;
	}

	inline static int32_t get_offset_of_m_ReadyToRun_16() { return static_cast<int32_t>(offsetof(TestRunner_t1475401471, ___m_ReadyToRun_16)); }
	inline bool get_m_ReadyToRun_16() const { return ___m_ReadyToRun_16; }
	inline bool* get_address_of_m_ReadyToRun_16() { return &___m_ReadyToRun_16; }
	inline void set_m_ReadyToRun_16(bool value)
	{
		___m_ReadyToRun_16 = value;
	}

	inline static int32_t get_offset_of_m_TestMessages_17() { return static_cast<int32_t>(offsetof(TestRunner_t1475401471, ___m_TestMessages_17)); }
	inline String_t* get_m_TestMessages_17() const { return ___m_TestMessages_17; }
	inline String_t** get_address_of_m_TestMessages_17() { return &___m_TestMessages_17; }
	inline void set_m_TestMessages_17(String_t* value)
	{
		___m_TestMessages_17 = value;
		Il2CppCodeGenWriteBarrier(&___m_TestMessages_17, value);
	}

	inline static int32_t get_offset_of_m_Stacktrace_18() { return static_cast<int32_t>(offsetof(TestRunner_t1475401471, ___m_Stacktrace_18)); }
	inline String_t* get_m_Stacktrace_18() const { return ___m_Stacktrace_18; }
	inline String_t** get_address_of_m_Stacktrace_18() { return &___m_Stacktrace_18; }
	inline void set_m_Stacktrace_18(String_t* value)
	{
		___m_Stacktrace_18 = value;
		Il2CppCodeGenWriteBarrier(&___m_Stacktrace_18, value);
	}

	inline static int32_t get_offset_of_m_TestState_19() { return static_cast<int32_t>(offsetof(TestRunner_t1475401471, ___m_TestState_19)); }
	inline int32_t get_m_TestState_19() const { return ___m_TestState_19; }
	inline int32_t* get_address_of_m_TestState_19() { return &___m_TestState_19; }
	inline void set_m_TestState_19(int32_t value)
	{
		___m_TestState_19 = value;
	}

	inline static int32_t get_offset_of_m_Configurator_20() { return static_cast<int32_t>(offsetof(TestRunner_t1475401471, ___m_Configurator_20)); }
	inline TestRunnerConfigurator_t3601617748 * get_m_Configurator_20() const { return ___m_Configurator_20; }
	inline TestRunnerConfigurator_t3601617748 ** get_address_of_m_Configurator_20() { return &___m_Configurator_20; }
	inline void set_m_Configurator_20(TestRunnerConfigurator_t3601617748 * value)
	{
		___m_Configurator_20 = value;
		Il2CppCodeGenWriteBarrier(&___m_Configurator_20, value);
	}

	inline static int32_t get_offset_of_TestRunnerCallback_21() { return static_cast<int32_t>(offsetof(TestRunner_t1475401471, ___TestRunnerCallback_21)); }
	inline TestRunnerCallbackList_t3685272314 * get_TestRunnerCallback_21() const { return ___TestRunnerCallback_21; }
	inline TestRunnerCallbackList_t3685272314 ** get_address_of_TestRunnerCallback_21() { return &___TestRunnerCallback_21; }
	inline void set_TestRunnerCallback_21(TestRunnerCallbackList_t3685272314 * value)
	{
		___TestRunnerCallback_21 = value;
		Il2CppCodeGenWriteBarrier(&___TestRunnerCallback_21, value);
	}

	inline static int32_t get_offset_of_m_TestsProvider_22() { return static_cast<int32_t>(offsetof(TestRunner_t1475401471, ___m_TestsProvider_22)); }
	inline IntegrationTestsProvider_t2398803635 * get_m_TestsProvider_22() const { return ___m_TestsProvider_22; }
	inline IntegrationTestsProvider_t2398803635 ** get_address_of_m_TestsProvider_22() { return &___m_TestsProvider_22; }
	inline void set_m_TestsProvider_22(IntegrationTestsProvider_t2398803635 * value)
	{
		___m_TestsProvider_22 = value;
		Il2CppCodeGenWriteBarrier(&___m_TestsProvider_22, value);
	}
};

struct TestRunner_t1475401471_StaticFields
{
public:
	// System.Int32 UnityTest.TestRunner::TestSceneNumber
	int32_t ___TestSceneNumber_10;
	// TestResultRenderer UnityTest.TestRunner::k_ResultRenderer
	TestResultRenderer_t2000577874 * ___k_ResultRenderer_11;
	// System.Func`2<System.Type,System.String> UnityTest.TestRunner::<>f__am$cacheD
	Func_2_t1392394819 * ___U3CU3Ef__amU24cacheD_23;
	// System.Func`2<UnityTest.TestComponent,UnityTest.TestResult> UnityTest.TestRunner::<>f__am$cacheE
	Func_2_t2720907372 * ___U3CU3Ef__amU24cacheE_24;
	// System.Func`2<UnityTest.TestResult,UnityTest.ITestComponent> UnityTest.TestRunner::<>f__am$cacheF
	Func_2_t687257643 * ___U3CU3Ef__amU24cacheF_25;
	// System.Func`2<UnityTest.TestResult,System.Boolean> UnityTest.TestRunner::<>f__am$cache10
	Func_2_t1298570377 * ___U3CU3Ef__amU24cache10_26;
	// System.Func`2<UnityTest.TestResult,System.Boolean> UnityTest.TestRunner::<>f__am$cache11
	Func_2_t1298570377 * ___U3CU3Ef__amU24cache11_27;
	// System.Func`2<UnityTest.TestResult,System.Boolean> UnityTest.TestRunner::<>f__am$cache12
	Func_2_t1298570377 * ___U3CU3Ef__amU24cache12_28;
	// System.Func`2<UnityTest.TestResult,System.Boolean> UnityTest.TestRunner::<>f__am$cache13
	Func_2_t1298570377 * ___U3CU3Ef__amU24cache13_29;
	// System.Func`2<UnityTest.TestResult,System.String> UnityTest.TestRunner::<>f__am$cache14
	Func_2_t2056053938 * ___U3CU3Ef__amU24cache14_30;
	// System.Func`2<UnityTest.TestResult,System.Boolean> UnityTest.TestRunner::<>f__am$cache15
	Func_2_t1298570377 * ___U3CU3Ef__amU24cache15_31;
	// System.Func`2<UnityTest.TestResult,System.Boolean> UnityTest.TestRunner::<>f__am$cache16
	Func_2_t1298570377 * ___U3CU3Ef__amU24cache16_32;
	// System.Func`2<UnityTest.TestResult,System.Boolean> UnityTest.TestRunner::<>f__am$cache17
	Func_2_t1298570377 * ___U3CU3Ef__amU24cache17_33;
	// System.Func`2<UnityTest.TestResult,System.String> UnityTest.TestRunner::<>f__am$cache18
	Func_2_t2056053938 * ___U3CU3Ef__amU24cache18_34;

public:
	inline static int32_t get_offset_of_TestSceneNumber_10() { return static_cast<int32_t>(offsetof(TestRunner_t1475401471_StaticFields, ___TestSceneNumber_10)); }
	inline int32_t get_TestSceneNumber_10() const { return ___TestSceneNumber_10; }
	inline int32_t* get_address_of_TestSceneNumber_10() { return &___TestSceneNumber_10; }
	inline void set_TestSceneNumber_10(int32_t value)
	{
		___TestSceneNumber_10 = value;
	}

	inline static int32_t get_offset_of_k_ResultRenderer_11() { return static_cast<int32_t>(offsetof(TestRunner_t1475401471_StaticFields, ___k_ResultRenderer_11)); }
	inline TestResultRenderer_t2000577874 * get_k_ResultRenderer_11() const { return ___k_ResultRenderer_11; }
	inline TestResultRenderer_t2000577874 ** get_address_of_k_ResultRenderer_11() { return &___k_ResultRenderer_11; }
	inline void set_k_ResultRenderer_11(TestResultRenderer_t2000577874 * value)
	{
		___k_ResultRenderer_11 = value;
		Il2CppCodeGenWriteBarrier(&___k_ResultRenderer_11, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheD_23() { return static_cast<int32_t>(offsetof(TestRunner_t1475401471_StaticFields, ___U3CU3Ef__amU24cacheD_23)); }
	inline Func_2_t1392394819 * get_U3CU3Ef__amU24cacheD_23() const { return ___U3CU3Ef__amU24cacheD_23; }
	inline Func_2_t1392394819 ** get_address_of_U3CU3Ef__amU24cacheD_23() { return &___U3CU3Ef__amU24cacheD_23; }
	inline void set_U3CU3Ef__amU24cacheD_23(Func_2_t1392394819 * value)
	{
		___U3CU3Ef__amU24cacheD_23 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheD_23, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheE_24() { return static_cast<int32_t>(offsetof(TestRunner_t1475401471_StaticFields, ___U3CU3Ef__amU24cacheE_24)); }
	inline Func_2_t2720907372 * get_U3CU3Ef__amU24cacheE_24() const { return ___U3CU3Ef__amU24cacheE_24; }
	inline Func_2_t2720907372 ** get_address_of_U3CU3Ef__amU24cacheE_24() { return &___U3CU3Ef__amU24cacheE_24; }
	inline void set_U3CU3Ef__amU24cacheE_24(Func_2_t2720907372 * value)
	{
		___U3CU3Ef__amU24cacheE_24 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheE_24, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheF_25() { return static_cast<int32_t>(offsetof(TestRunner_t1475401471_StaticFields, ___U3CU3Ef__amU24cacheF_25)); }
	inline Func_2_t687257643 * get_U3CU3Ef__amU24cacheF_25() const { return ___U3CU3Ef__amU24cacheF_25; }
	inline Func_2_t687257643 ** get_address_of_U3CU3Ef__amU24cacheF_25() { return &___U3CU3Ef__amU24cacheF_25; }
	inline void set_U3CU3Ef__amU24cacheF_25(Func_2_t687257643 * value)
	{
		___U3CU3Ef__amU24cacheF_25 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cacheF_25, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache10_26() { return static_cast<int32_t>(offsetof(TestRunner_t1475401471_StaticFields, ___U3CU3Ef__amU24cache10_26)); }
	inline Func_2_t1298570377 * get_U3CU3Ef__amU24cache10_26() const { return ___U3CU3Ef__amU24cache10_26; }
	inline Func_2_t1298570377 ** get_address_of_U3CU3Ef__amU24cache10_26() { return &___U3CU3Ef__amU24cache10_26; }
	inline void set_U3CU3Ef__amU24cache10_26(Func_2_t1298570377 * value)
	{
		___U3CU3Ef__amU24cache10_26 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache10_26, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache11_27() { return static_cast<int32_t>(offsetof(TestRunner_t1475401471_StaticFields, ___U3CU3Ef__amU24cache11_27)); }
	inline Func_2_t1298570377 * get_U3CU3Ef__amU24cache11_27() const { return ___U3CU3Ef__amU24cache11_27; }
	inline Func_2_t1298570377 ** get_address_of_U3CU3Ef__amU24cache11_27() { return &___U3CU3Ef__amU24cache11_27; }
	inline void set_U3CU3Ef__amU24cache11_27(Func_2_t1298570377 * value)
	{
		___U3CU3Ef__amU24cache11_27 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache11_27, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache12_28() { return static_cast<int32_t>(offsetof(TestRunner_t1475401471_StaticFields, ___U3CU3Ef__amU24cache12_28)); }
	inline Func_2_t1298570377 * get_U3CU3Ef__amU24cache12_28() const { return ___U3CU3Ef__amU24cache12_28; }
	inline Func_2_t1298570377 ** get_address_of_U3CU3Ef__amU24cache12_28() { return &___U3CU3Ef__amU24cache12_28; }
	inline void set_U3CU3Ef__amU24cache12_28(Func_2_t1298570377 * value)
	{
		___U3CU3Ef__amU24cache12_28 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache12_28, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache13_29() { return static_cast<int32_t>(offsetof(TestRunner_t1475401471_StaticFields, ___U3CU3Ef__amU24cache13_29)); }
	inline Func_2_t1298570377 * get_U3CU3Ef__amU24cache13_29() const { return ___U3CU3Ef__amU24cache13_29; }
	inline Func_2_t1298570377 ** get_address_of_U3CU3Ef__amU24cache13_29() { return &___U3CU3Ef__amU24cache13_29; }
	inline void set_U3CU3Ef__amU24cache13_29(Func_2_t1298570377 * value)
	{
		___U3CU3Ef__amU24cache13_29 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache13_29, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache14_30() { return static_cast<int32_t>(offsetof(TestRunner_t1475401471_StaticFields, ___U3CU3Ef__amU24cache14_30)); }
	inline Func_2_t2056053938 * get_U3CU3Ef__amU24cache14_30() const { return ___U3CU3Ef__amU24cache14_30; }
	inline Func_2_t2056053938 ** get_address_of_U3CU3Ef__amU24cache14_30() { return &___U3CU3Ef__amU24cache14_30; }
	inline void set_U3CU3Ef__amU24cache14_30(Func_2_t2056053938 * value)
	{
		___U3CU3Ef__amU24cache14_30 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache14_30, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache15_31() { return static_cast<int32_t>(offsetof(TestRunner_t1475401471_StaticFields, ___U3CU3Ef__amU24cache15_31)); }
	inline Func_2_t1298570377 * get_U3CU3Ef__amU24cache15_31() const { return ___U3CU3Ef__amU24cache15_31; }
	inline Func_2_t1298570377 ** get_address_of_U3CU3Ef__amU24cache15_31() { return &___U3CU3Ef__amU24cache15_31; }
	inline void set_U3CU3Ef__amU24cache15_31(Func_2_t1298570377 * value)
	{
		___U3CU3Ef__amU24cache15_31 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache15_31, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache16_32() { return static_cast<int32_t>(offsetof(TestRunner_t1475401471_StaticFields, ___U3CU3Ef__amU24cache16_32)); }
	inline Func_2_t1298570377 * get_U3CU3Ef__amU24cache16_32() const { return ___U3CU3Ef__amU24cache16_32; }
	inline Func_2_t1298570377 ** get_address_of_U3CU3Ef__amU24cache16_32() { return &___U3CU3Ef__amU24cache16_32; }
	inline void set_U3CU3Ef__amU24cache16_32(Func_2_t1298570377 * value)
	{
		___U3CU3Ef__amU24cache16_32 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache16_32, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache17_33() { return static_cast<int32_t>(offsetof(TestRunner_t1475401471_StaticFields, ___U3CU3Ef__amU24cache17_33)); }
	inline Func_2_t1298570377 * get_U3CU3Ef__amU24cache17_33() const { return ___U3CU3Ef__amU24cache17_33; }
	inline Func_2_t1298570377 ** get_address_of_U3CU3Ef__amU24cache17_33() { return &___U3CU3Ef__amU24cache17_33; }
	inline void set_U3CU3Ef__amU24cache17_33(Func_2_t1298570377 * value)
	{
		___U3CU3Ef__amU24cache17_33 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache17_33, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache18_34() { return static_cast<int32_t>(offsetof(TestRunner_t1475401471_StaticFields, ___U3CU3Ef__amU24cache18_34)); }
	inline Func_2_t2056053938 * get_U3CU3Ef__amU24cache18_34() const { return ___U3CU3Ef__amU24cache18_34; }
	inline Func_2_t2056053938 ** get_address_of_U3CU3Ef__amU24cache18_34() { return &___U3CU3Ef__amU24cache18_34; }
	inline void set_U3CU3Ef__amU24cache18_34(Func_2_t2056053938 * value)
	{
		___U3CU3Ef__amU24cache18_34 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache18_34, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
