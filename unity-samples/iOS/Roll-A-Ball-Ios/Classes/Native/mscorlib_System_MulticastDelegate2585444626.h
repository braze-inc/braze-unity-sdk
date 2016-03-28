#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.MulticastDelegate
struct MulticastDelegate_t2585444626;

#include "mscorlib_System_Delegate3660574010.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t2585444626  : public Delegate_t3660574010
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t2585444626 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t2585444626 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t2585444626, ___prev_9)); }
	inline MulticastDelegate_t2585444626 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t2585444626 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t2585444626 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier(&___prev_9, value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t2585444626, ___kpm_next_10)); }
	inline MulticastDelegate_t2585444626 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t2585444626 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t2585444626 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier(&___kpm_next_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
