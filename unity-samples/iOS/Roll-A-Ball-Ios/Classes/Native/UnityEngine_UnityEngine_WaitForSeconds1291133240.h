#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_YieldInstruction3557331758.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t1291133240  : public YieldInstruction_t3557331758
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t1291133240, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityEngine.WaitForSeconds
struct WaitForSeconds_t1291133240_marshaled_pinvoke : public YieldInstruction_t3557331758_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for marshalling of: UnityEngine.WaitForSeconds
struct WaitForSeconds_t1291133240_marshaled_com : public YieldInstruction_t3557331758_marshaled_com
{
	float ___m_Seconds_0;
};
