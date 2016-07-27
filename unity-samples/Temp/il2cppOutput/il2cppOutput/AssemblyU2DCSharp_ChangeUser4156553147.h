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

// ChangeUser
struct  ChangeUser_t4156553147  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.InputField ChangeUser::UserIDField
	InputField_t2345609593 * ___UserIDField_2;

public:
	inline static int32_t get_offset_of_UserIDField_2() { return static_cast<int32_t>(offsetof(ChangeUser_t4156553147, ___UserIDField_2)); }
	inline InputField_t2345609593 * get_UserIDField_2() const { return ___UserIDField_2; }
	inline InputField_t2345609593 ** get_address_of_UserIDField_2() { return &___UserIDField_2; }
	inline void set_UserIDField_2(InputField_t2345609593 * value)
	{
		___UserIDField_2 = value;
		Il2CppCodeGenWriteBarrier(&___UserIDField_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
