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

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityTest.TestRunnerConfigurator
struct  TestRunnerConfigurator_t3601617748  : public Il2CppObject
{
public:
	// System.Boolean UnityTest.TestRunnerConfigurator::<isBatchRun>k__BackingField
	bool ___U3CisBatchRunU3Ek__BackingField_4;
	// System.Boolean UnityTest.TestRunnerConfigurator::<sendResultsOverNetwork>k__BackingField
	bool ___U3CsendResultsOverNetworkU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CisBatchRunU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TestRunnerConfigurator_t3601617748, ___U3CisBatchRunU3Ek__BackingField_4)); }
	inline bool get_U3CisBatchRunU3Ek__BackingField_4() const { return ___U3CisBatchRunU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CisBatchRunU3Ek__BackingField_4() { return &___U3CisBatchRunU3Ek__BackingField_4; }
	inline void set_U3CisBatchRunU3Ek__BackingField_4(bool value)
	{
		___U3CisBatchRunU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CsendResultsOverNetworkU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(TestRunnerConfigurator_t3601617748, ___U3CsendResultsOverNetworkU3Ek__BackingField_5)); }
	inline bool get_U3CsendResultsOverNetworkU3Ek__BackingField_5() const { return ___U3CsendResultsOverNetworkU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CsendResultsOverNetworkU3Ek__BackingField_5() { return &___U3CsendResultsOverNetworkU3Ek__BackingField_5; }
	inline void set_U3CsendResultsOverNetworkU3Ek__BackingField_5(bool value)
	{
		___U3CsendResultsOverNetworkU3Ek__BackingField_5 = value;
	}
};

struct TestRunnerConfigurator_t3601617748_StaticFields
{
public:
	// System.String UnityTest.TestRunnerConfigurator::integrationTestsNetwork
	String_t* ___integrationTestsNetwork_0;
	// System.String UnityTest.TestRunnerConfigurator::batchRunFileMarker
	String_t* ___batchRunFileMarker_1;
	// System.String UnityTest.TestRunnerConfigurator::testScenesToRun
	String_t* ___testScenesToRun_2;
	// System.String UnityTest.TestRunnerConfigurator::previousScenes
	String_t* ___previousScenes_3;

public:
	inline static int32_t get_offset_of_integrationTestsNetwork_0() { return static_cast<int32_t>(offsetof(TestRunnerConfigurator_t3601617748_StaticFields, ___integrationTestsNetwork_0)); }
	inline String_t* get_integrationTestsNetwork_0() const { return ___integrationTestsNetwork_0; }
	inline String_t** get_address_of_integrationTestsNetwork_0() { return &___integrationTestsNetwork_0; }
	inline void set_integrationTestsNetwork_0(String_t* value)
	{
		___integrationTestsNetwork_0 = value;
		Il2CppCodeGenWriteBarrier(&___integrationTestsNetwork_0, value);
	}

	inline static int32_t get_offset_of_batchRunFileMarker_1() { return static_cast<int32_t>(offsetof(TestRunnerConfigurator_t3601617748_StaticFields, ___batchRunFileMarker_1)); }
	inline String_t* get_batchRunFileMarker_1() const { return ___batchRunFileMarker_1; }
	inline String_t** get_address_of_batchRunFileMarker_1() { return &___batchRunFileMarker_1; }
	inline void set_batchRunFileMarker_1(String_t* value)
	{
		___batchRunFileMarker_1 = value;
		Il2CppCodeGenWriteBarrier(&___batchRunFileMarker_1, value);
	}

	inline static int32_t get_offset_of_testScenesToRun_2() { return static_cast<int32_t>(offsetof(TestRunnerConfigurator_t3601617748_StaticFields, ___testScenesToRun_2)); }
	inline String_t* get_testScenesToRun_2() const { return ___testScenesToRun_2; }
	inline String_t** get_address_of_testScenesToRun_2() { return &___testScenesToRun_2; }
	inline void set_testScenesToRun_2(String_t* value)
	{
		___testScenesToRun_2 = value;
		Il2CppCodeGenWriteBarrier(&___testScenesToRun_2, value);
	}

	inline static int32_t get_offset_of_previousScenes_3() { return static_cast<int32_t>(offsetof(TestRunnerConfigurator_t3601617748_StaticFields, ___previousScenes_3)); }
	inline String_t* get_previousScenes_3() const { return ___previousScenes_3; }
	inline String_t** get_address_of_previousScenes_3() { return &___previousScenes_3; }
	inline void set_previousScenes_3(String_t* value)
	{
		___previousScenes_3 = value;
		Il2CppCodeGenWriteBarrier(&___previousScenes_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
