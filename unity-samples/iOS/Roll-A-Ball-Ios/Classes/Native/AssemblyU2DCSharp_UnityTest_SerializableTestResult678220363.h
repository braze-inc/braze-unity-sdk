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
#include "AssemblyU2DCSharp_UnityTest_TestResultState4167279327.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityTest.SerializableTestResult
struct  SerializableTestResult_t678220363  : public Il2CppObject
{
public:
	// UnityTest.TestResultState UnityTest.SerializableTestResult::resultState
	uint8_t ___resultState_0;
	// System.String UnityTest.SerializableTestResult::message
	String_t* ___message_1;
	// System.Boolean UnityTest.SerializableTestResult::executed
	bool ___executed_2;
	// System.String UnityTest.SerializableTestResult::name
	String_t* ___name_3;
	// System.String UnityTest.SerializableTestResult::fullName
	String_t* ___fullName_4;
	// System.String UnityTest.SerializableTestResult::id
	String_t* ___id_5;
	// System.Boolean UnityTest.SerializableTestResult::isSuccess
	bool ___isSuccess_6;
	// System.Double UnityTest.SerializableTestResult::duration
	double ___duration_7;
	// System.String UnityTest.SerializableTestResult::stackTrace
	String_t* ___stackTrace_8;
	// System.Boolean UnityTest.SerializableTestResult::isIgnored
	bool ___isIgnored_9;

public:
	inline static int32_t get_offset_of_resultState_0() { return static_cast<int32_t>(offsetof(SerializableTestResult_t678220363, ___resultState_0)); }
	inline uint8_t get_resultState_0() const { return ___resultState_0; }
	inline uint8_t* get_address_of_resultState_0() { return &___resultState_0; }
	inline void set_resultState_0(uint8_t value)
	{
		___resultState_0 = value;
	}

	inline static int32_t get_offset_of_message_1() { return static_cast<int32_t>(offsetof(SerializableTestResult_t678220363, ___message_1)); }
	inline String_t* get_message_1() const { return ___message_1; }
	inline String_t** get_address_of_message_1() { return &___message_1; }
	inline void set_message_1(String_t* value)
	{
		___message_1 = value;
		Il2CppCodeGenWriteBarrier(&___message_1, value);
	}

	inline static int32_t get_offset_of_executed_2() { return static_cast<int32_t>(offsetof(SerializableTestResult_t678220363, ___executed_2)); }
	inline bool get_executed_2() const { return ___executed_2; }
	inline bool* get_address_of_executed_2() { return &___executed_2; }
	inline void set_executed_2(bool value)
	{
		___executed_2 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(SerializableTestResult_t678220363, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier(&___name_3, value);
	}

	inline static int32_t get_offset_of_fullName_4() { return static_cast<int32_t>(offsetof(SerializableTestResult_t678220363, ___fullName_4)); }
	inline String_t* get_fullName_4() const { return ___fullName_4; }
	inline String_t** get_address_of_fullName_4() { return &___fullName_4; }
	inline void set_fullName_4(String_t* value)
	{
		___fullName_4 = value;
		Il2CppCodeGenWriteBarrier(&___fullName_4, value);
	}

	inline static int32_t get_offset_of_id_5() { return static_cast<int32_t>(offsetof(SerializableTestResult_t678220363, ___id_5)); }
	inline String_t* get_id_5() const { return ___id_5; }
	inline String_t** get_address_of_id_5() { return &___id_5; }
	inline void set_id_5(String_t* value)
	{
		___id_5 = value;
		Il2CppCodeGenWriteBarrier(&___id_5, value);
	}

	inline static int32_t get_offset_of_isSuccess_6() { return static_cast<int32_t>(offsetof(SerializableTestResult_t678220363, ___isSuccess_6)); }
	inline bool get_isSuccess_6() const { return ___isSuccess_6; }
	inline bool* get_address_of_isSuccess_6() { return &___isSuccess_6; }
	inline void set_isSuccess_6(bool value)
	{
		___isSuccess_6 = value;
	}

	inline static int32_t get_offset_of_duration_7() { return static_cast<int32_t>(offsetof(SerializableTestResult_t678220363, ___duration_7)); }
	inline double get_duration_7() const { return ___duration_7; }
	inline double* get_address_of_duration_7() { return &___duration_7; }
	inline void set_duration_7(double value)
	{
		___duration_7 = value;
	}

	inline static int32_t get_offset_of_stackTrace_8() { return static_cast<int32_t>(offsetof(SerializableTestResult_t678220363, ___stackTrace_8)); }
	inline String_t* get_stackTrace_8() const { return ___stackTrace_8; }
	inline String_t** get_address_of_stackTrace_8() { return &___stackTrace_8; }
	inline void set_stackTrace_8(String_t* value)
	{
		___stackTrace_8 = value;
		Il2CppCodeGenWriteBarrier(&___stackTrace_8, value);
	}

	inline static int32_t get_offset_of_isIgnored_9() { return static_cast<int32_t>(offsetof(SerializableTestResult_t678220363, ___isIgnored_9)); }
	inline bool get_isIgnored_9() const { return ___isIgnored_9; }
	inline bool* get_address_of_isIgnored_9() { return &___isIgnored_9; }
	inline void set_isIgnored_9(bool value)
	{
		___isIgnored_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
