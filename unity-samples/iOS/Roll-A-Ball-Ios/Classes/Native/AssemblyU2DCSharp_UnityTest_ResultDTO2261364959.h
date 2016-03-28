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
// ITestResult
struct ITestResult_t1350342776;

#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_UnityTest_ResultDTO_MessageType794775489.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityTest.ResultDTO
struct  ResultDTO_t2261364959  : public Il2CppObject
{
public:
	// UnityTest.ResultDTO/MessageType UnityTest.ResultDTO::messageType
	uint8_t ___messageType_0;
	// System.Int32 UnityTest.ResultDTO::levelCount
	int32_t ___levelCount_1;
	// System.Int32 UnityTest.ResultDTO::loadedLevel
	int32_t ___loadedLevel_2;
	// System.String UnityTest.ResultDTO::loadedLevelName
	String_t* ___loadedLevelName_3;
	// System.String UnityTest.ResultDTO::testName
	String_t* ___testName_4;
	// System.Single UnityTest.ResultDTO::testTimeout
	float ___testTimeout_5;
	// ITestResult UnityTest.ResultDTO::testResult
	Il2CppObject * ___testResult_6;

public:
	inline static int32_t get_offset_of_messageType_0() { return static_cast<int32_t>(offsetof(ResultDTO_t2261364959, ___messageType_0)); }
	inline uint8_t get_messageType_0() const { return ___messageType_0; }
	inline uint8_t* get_address_of_messageType_0() { return &___messageType_0; }
	inline void set_messageType_0(uint8_t value)
	{
		___messageType_0 = value;
	}

	inline static int32_t get_offset_of_levelCount_1() { return static_cast<int32_t>(offsetof(ResultDTO_t2261364959, ___levelCount_1)); }
	inline int32_t get_levelCount_1() const { return ___levelCount_1; }
	inline int32_t* get_address_of_levelCount_1() { return &___levelCount_1; }
	inline void set_levelCount_1(int32_t value)
	{
		___levelCount_1 = value;
	}

	inline static int32_t get_offset_of_loadedLevel_2() { return static_cast<int32_t>(offsetof(ResultDTO_t2261364959, ___loadedLevel_2)); }
	inline int32_t get_loadedLevel_2() const { return ___loadedLevel_2; }
	inline int32_t* get_address_of_loadedLevel_2() { return &___loadedLevel_2; }
	inline void set_loadedLevel_2(int32_t value)
	{
		___loadedLevel_2 = value;
	}

	inline static int32_t get_offset_of_loadedLevelName_3() { return static_cast<int32_t>(offsetof(ResultDTO_t2261364959, ___loadedLevelName_3)); }
	inline String_t* get_loadedLevelName_3() const { return ___loadedLevelName_3; }
	inline String_t** get_address_of_loadedLevelName_3() { return &___loadedLevelName_3; }
	inline void set_loadedLevelName_3(String_t* value)
	{
		___loadedLevelName_3 = value;
		Il2CppCodeGenWriteBarrier(&___loadedLevelName_3, value);
	}

	inline static int32_t get_offset_of_testName_4() { return static_cast<int32_t>(offsetof(ResultDTO_t2261364959, ___testName_4)); }
	inline String_t* get_testName_4() const { return ___testName_4; }
	inline String_t** get_address_of_testName_4() { return &___testName_4; }
	inline void set_testName_4(String_t* value)
	{
		___testName_4 = value;
		Il2CppCodeGenWriteBarrier(&___testName_4, value);
	}

	inline static int32_t get_offset_of_testTimeout_5() { return static_cast<int32_t>(offsetof(ResultDTO_t2261364959, ___testTimeout_5)); }
	inline float get_testTimeout_5() const { return ___testTimeout_5; }
	inline float* get_address_of_testTimeout_5() { return &___testTimeout_5; }
	inline void set_testTimeout_5(float value)
	{
		___testTimeout_5 = value;
	}

	inline static int32_t get_offset_of_testResult_6() { return static_cast<int32_t>(offsetof(ResultDTO_t2261364959, ___testResult_6)); }
	inline Il2CppObject * get_testResult_6() const { return ___testResult_6; }
	inline Il2CppObject ** get_address_of_testResult_6() { return &___testResult_6; }
	inline void set_testResult_6(Il2CppObject * value)
	{
		___testResult_6 = value;
		Il2CppCodeGenWriteBarrier(&___testResult_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
