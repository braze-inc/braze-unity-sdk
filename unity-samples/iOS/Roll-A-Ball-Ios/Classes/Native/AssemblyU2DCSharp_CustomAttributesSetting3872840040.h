#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.InputField
struct InputField_t2345609593;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CustomAttributesSetting
struct  CustomAttributesSetting_t3872840040  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.InputField CustomAttributesSetting::IncrementKeyField
	InputField_t2345609593 * ___IncrementKeyField_2;
	// UnityEngine.UI.InputField CustomAttributesSetting::IncrementValueField
	InputField_t2345609593 * ___IncrementValueField_3;

public:
	inline static int32_t get_offset_of_IncrementKeyField_2() { return static_cast<int32_t>(offsetof(CustomAttributesSetting_t3872840040, ___IncrementKeyField_2)); }
	inline InputField_t2345609593 * get_IncrementKeyField_2() const { return ___IncrementKeyField_2; }
	inline InputField_t2345609593 ** get_address_of_IncrementKeyField_2() { return &___IncrementKeyField_2; }
	inline void set_IncrementKeyField_2(InputField_t2345609593 * value)
	{
		___IncrementKeyField_2 = value;
		Il2CppCodeGenWriteBarrier(&___IncrementKeyField_2, value);
	}

	inline static int32_t get_offset_of_IncrementValueField_3() { return static_cast<int32_t>(offsetof(CustomAttributesSetting_t3872840040, ___IncrementValueField_3)); }
	inline InputField_t2345609593 * get_IncrementValueField_3() const { return ___IncrementValueField_3; }
	inline InputField_t2345609593 ** get_address_of_IncrementValueField_3() { return &___IncrementValueField_3; }
	inline void set_IncrementValueField_3(InputField_t2345609593 * value)
	{
		___IncrementValueField_3 = value;
		Il2CppCodeGenWriteBarrier(&___IncrementValueField_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
