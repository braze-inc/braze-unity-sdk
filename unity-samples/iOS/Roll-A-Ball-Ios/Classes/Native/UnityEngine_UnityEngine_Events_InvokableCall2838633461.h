#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Events.UnityAction
struct UnityAction_t909267611;

#include "UnityEngine_UnityEngine_Events_BaseInvokableCall1733537956.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall
struct  InvokableCall_t2838633461  : public BaseInvokableCall_t1733537956
{
public:
	// UnityEngine.Events.UnityAction UnityEngine.Events.InvokableCall::Delegate
	UnityAction_t909267611 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_t2838633461, ___Delegate_0)); }
	inline UnityAction_t909267611 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_t909267611 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_t909267611 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier(&___Delegate_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
