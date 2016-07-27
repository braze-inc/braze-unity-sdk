#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUIStyle
struct GUIStyle_t1006925219;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TestResultRenderer/Styles
struct  Styles_t2487059714  : public Il2CppObject
{
public:

public:
};

struct Styles_t2487059714_StaticFields
{
public:
	// UnityEngine.GUIStyle TestResultRenderer/Styles::SucceedLabelStyle
	GUIStyle_t1006925219 * ___SucceedLabelStyle_0;
	// UnityEngine.GUIStyle TestResultRenderer/Styles::FailedLabelStyle
	GUIStyle_t1006925219 * ___FailedLabelStyle_1;
	// UnityEngine.GUIStyle TestResultRenderer/Styles::FailedMessagesStyle
	GUIStyle_t1006925219 * ___FailedMessagesStyle_2;

public:
	inline static int32_t get_offset_of_SucceedLabelStyle_0() { return static_cast<int32_t>(offsetof(Styles_t2487059714_StaticFields, ___SucceedLabelStyle_0)); }
	inline GUIStyle_t1006925219 * get_SucceedLabelStyle_0() const { return ___SucceedLabelStyle_0; }
	inline GUIStyle_t1006925219 ** get_address_of_SucceedLabelStyle_0() { return &___SucceedLabelStyle_0; }
	inline void set_SucceedLabelStyle_0(GUIStyle_t1006925219 * value)
	{
		___SucceedLabelStyle_0 = value;
		Il2CppCodeGenWriteBarrier(&___SucceedLabelStyle_0, value);
	}

	inline static int32_t get_offset_of_FailedLabelStyle_1() { return static_cast<int32_t>(offsetof(Styles_t2487059714_StaticFields, ___FailedLabelStyle_1)); }
	inline GUIStyle_t1006925219 * get_FailedLabelStyle_1() const { return ___FailedLabelStyle_1; }
	inline GUIStyle_t1006925219 ** get_address_of_FailedLabelStyle_1() { return &___FailedLabelStyle_1; }
	inline void set_FailedLabelStyle_1(GUIStyle_t1006925219 * value)
	{
		___FailedLabelStyle_1 = value;
		Il2CppCodeGenWriteBarrier(&___FailedLabelStyle_1, value);
	}

	inline static int32_t get_offset_of_FailedMessagesStyle_2() { return static_cast<int32_t>(offsetof(Styles_t2487059714_StaticFields, ___FailedMessagesStyle_2)); }
	inline GUIStyle_t1006925219 * get_FailedMessagesStyle_2() const { return ___FailedMessagesStyle_2; }
	inline GUIStyle_t1006925219 ** get_address_of_FailedMessagesStyle_2() { return &___FailedMessagesStyle_2; }
	inline void set_FailedMessagesStyle_2(GUIStyle_t1006925219 * value)
	{
		___FailedMessagesStyle_2 = value;
		Il2CppCodeGenWriteBarrier(&___FailedMessagesStyle_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
