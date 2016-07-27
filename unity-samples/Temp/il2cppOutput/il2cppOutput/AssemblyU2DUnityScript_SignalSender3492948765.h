#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ReceiverItem[]
struct ReceiverItemU5BU5D_t844544247;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SignalSender
struct  SignalSender_t3492948765  : public Il2CppObject
{
public:
	// System.Boolean SignalSender::onlyOnce
	bool ___onlyOnce_0;
	// ReceiverItem[] SignalSender::receivers
	ReceiverItemU5BU5D_t844544247* ___receivers_1;
	// System.Boolean SignalSender::hasFired
	bool ___hasFired_2;

public:
	inline static int32_t get_offset_of_onlyOnce_0() { return static_cast<int32_t>(offsetof(SignalSender_t3492948765, ___onlyOnce_0)); }
	inline bool get_onlyOnce_0() const { return ___onlyOnce_0; }
	inline bool* get_address_of_onlyOnce_0() { return &___onlyOnce_0; }
	inline void set_onlyOnce_0(bool value)
	{
		___onlyOnce_0 = value;
	}

	inline static int32_t get_offset_of_receivers_1() { return static_cast<int32_t>(offsetof(SignalSender_t3492948765, ___receivers_1)); }
	inline ReceiverItemU5BU5D_t844544247* get_receivers_1() const { return ___receivers_1; }
	inline ReceiverItemU5BU5D_t844544247** get_address_of_receivers_1() { return &___receivers_1; }
	inline void set_receivers_1(ReceiverItemU5BU5D_t844544247* value)
	{
		___receivers_1 = value;
		Il2CppCodeGenWriteBarrier(&___receivers_1, value);
	}

	inline static int32_t get_offset_of_hasFired_2() { return static_cast<int32_t>(offsetof(SignalSender_t3492948765, ___hasFired_2)); }
	inline bool get_hasFired_2() const { return ___hasFired_2; }
	inline bool* get_address_of_hasFired_2() { return &___hasFired_2; }
	inline void set_hasFired_2(bool value)
	{
		___hasFired_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
