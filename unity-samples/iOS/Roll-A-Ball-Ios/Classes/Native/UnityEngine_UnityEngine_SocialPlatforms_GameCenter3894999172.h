#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.SocialPlatforms.Impl.Leaderboard
struct Leaderboard_t1422561091;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
struct  GcLeaderboard_t3894999172  : public Il2CppObject
{
public:
	// System.IntPtr UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::m_InternalLeaderboard
	IntPtr_t ___m_InternalLeaderboard_0;
	// UnityEngine.SocialPlatforms.Impl.Leaderboard UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::m_GenericLeaderboard
	Leaderboard_t1422561091 * ___m_GenericLeaderboard_1;

public:
	inline static int32_t get_offset_of_m_InternalLeaderboard_0() { return static_cast<int32_t>(offsetof(GcLeaderboard_t3894999172, ___m_InternalLeaderboard_0)); }
	inline IntPtr_t get_m_InternalLeaderboard_0() const { return ___m_InternalLeaderboard_0; }
	inline IntPtr_t* get_address_of_m_InternalLeaderboard_0() { return &___m_InternalLeaderboard_0; }
	inline void set_m_InternalLeaderboard_0(IntPtr_t value)
	{
		___m_InternalLeaderboard_0 = value;
	}

	inline static int32_t get_offset_of_m_GenericLeaderboard_1() { return static_cast<int32_t>(offsetof(GcLeaderboard_t3894999172, ___m_GenericLeaderboard_1)); }
	inline Leaderboard_t1422561091 * get_m_GenericLeaderboard_1() const { return ___m_GenericLeaderboard_1; }
	inline Leaderboard_t1422561091 ** get_address_of_m_GenericLeaderboard_1() { return &___m_GenericLeaderboard_1; }
	inline void set_m_GenericLeaderboard_1(Leaderboard_t1422561091 * value)
	{
		___m_GenericLeaderboard_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_GenericLeaderboard_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
