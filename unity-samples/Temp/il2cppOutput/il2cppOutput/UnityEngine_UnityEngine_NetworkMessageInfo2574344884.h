#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType4014882752.h"
#include "UnityEngine_UnityEngine_NetworkPlayer1281137372.h"
#include "UnityEngine_UnityEngine_NetworkViewID1450258043.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.NetworkMessageInfo
struct  NetworkMessageInfo_t2574344884 
{
public:
	// System.Double UnityEngine.NetworkMessageInfo::m_TimeStamp
	double ___m_TimeStamp_0;
	// UnityEngine.NetworkPlayer UnityEngine.NetworkMessageInfo::m_Sender
	NetworkPlayer_t1281137372  ___m_Sender_1;
	// UnityEngine.NetworkViewID UnityEngine.NetworkMessageInfo::m_ViewID
	NetworkViewID_t1450258043  ___m_ViewID_2;

public:
	inline static int32_t get_offset_of_m_TimeStamp_0() { return static_cast<int32_t>(offsetof(NetworkMessageInfo_t2574344884, ___m_TimeStamp_0)); }
	inline double get_m_TimeStamp_0() const { return ___m_TimeStamp_0; }
	inline double* get_address_of_m_TimeStamp_0() { return &___m_TimeStamp_0; }
	inline void set_m_TimeStamp_0(double value)
	{
		___m_TimeStamp_0 = value;
	}

	inline static int32_t get_offset_of_m_Sender_1() { return static_cast<int32_t>(offsetof(NetworkMessageInfo_t2574344884, ___m_Sender_1)); }
	inline NetworkPlayer_t1281137372  get_m_Sender_1() const { return ___m_Sender_1; }
	inline NetworkPlayer_t1281137372 * get_address_of_m_Sender_1() { return &___m_Sender_1; }
	inline void set_m_Sender_1(NetworkPlayer_t1281137372  value)
	{
		___m_Sender_1 = value;
	}

	inline static int32_t get_offset_of_m_ViewID_2() { return static_cast<int32_t>(offsetof(NetworkMessageInfo_t2574344884, ___m_ViewID_2)); }
	inline NetworkViewID_t1450258043  get_m_ViewID_2() const { return ___m_ViewID_2; }
	inline NetworkViewID_t1450258043 * get_address_of_m_ViewID_2() { return &___m_ViewID_2; }
	inline void set_m_ViewID_2(NetworkViewID_t1450258043  value)
	{
		___m_ViewID_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityEngine.NetworkMessageInfo
struct NetworkMessageInfo_t2574344884_marshaled_pinvoke
{
	double ___m_TimeStamp_0;
	NetworkPlayer_t1281137372_marshaled_pinvoke ___m_Sender_1;
	NetworkViewID_t1450258043_marshaled_pinvoke ___m_ViewID_2;
};
// Native definition for marshalling of: UnityEngine.NetworkMessageInfo
struct NetworkMessageInfo_t2574344884_marshaled_com
{
	double ___m_TimeStamp_0;
	NetworkPlayer_t1281137372_marshaled_com ___m_Sender_1;
	NetworkViewID_t1450258043_marshaled_com ___m_ViewID_2;
};
