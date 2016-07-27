#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType4014882752.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HumanLimit
struct  HumanLimit_t3638947579 
{
public:
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Min
	Vector3_t3525329789  ___m_Min_0;
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Max
	Vector3_t3525329789  ___m_Max_1;
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Center
	Vector3_t3525329789  ___m_Center_2;
	// System.Single UnityEngine.HumanLimit::m_AxisLength
	float ___m_AxisLength_3;
	// System.Int32 UnityEngine.HumanLimit::m_UseDefaultValues
	int32_t ___m_UseDefaultValues_4;

public:
	inline static int32_t get_offset_of_m_Min_0() { return static_cast<int32_t>(offsetof(HumanLimit_t3638947579, ___m_Min_0)); }
	inline Vector3_t3525329789  get_m_Min_0() const { return ___m_Min_0; }
	inline Vector3_t3525329789 * get_address_of_m_Min_0() { return &___m_Min_0; }
	inline void set_m_Min_0(Vector3_t3525329789  value)
	{
		___m_Min_0 = value;
	}

	inline static int32_t get_offset_of_m_Max_1() { return static_cast<int32_t>(offsetof(HumanLimit_t3638947579, ___m_Max_1)); }
	inline Vector3_t3525329789  get_m_Max_1() const { return ___m_Max_1; }
	inline Vector3_t3525329789 * get_address_of_m_Max_1() { return &___m_Max_1; }
	inline void set_m_Max_1(Vector3_t3525329789  value)
	{
		___m_Max_1 = value;
	}

	inline static int32_t get_offset_of_m_Center_2() { return static_cast<int32_t>(offsetof(HumanLimit_t3638947579, ___m_Center_2)); }
	inline Vector3_t3525329789  get_m_Center_2() const { return ___m_Center_2; }
	inline Vector3_t3525329789 * get_address_of_m_Center_2() { return &___m_Center_2; }
	inline void set_m_Center_2(Vector3_t3525329789  value)
	{
		___m_Center_2 = value;
	}

	inline static int32_t get_offset_of_m_AxisLength_3() { return static_cast<int32_t>(offsetof(HumanLimit_t3638947579, ___m_AxisLength_3)); }
	inline float get_m_AxisLength_3() const { return ___m_AxisLength_3; }
	inline float* get_address_of_m_AxisLength_3() { return &___m_AxisLength_3; }
	inline void set_m_AxisLength_3(float value)
	{
		___m_AxisLength_3 = value;
	}

	inline static int32_t get_offset_of_m_UseDefaultValues_4() { return static_cast<int32_t>(offsetof(HumanLimit_t3638947579, ___m_UseDefaultValues_4)); }
	inline int32_t get_m_UseDefaultValues_4() const { return ___m_UseDefaultValues_4; }
	inline int32_t* get_address_of_m_UseDefaultValues_4() { return &___m_UseDefaultValues_4; }
	inline void set_m_UseDefaultValues_4(int32_t value)
	{
		___m_UseDefaultValues_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityEngine.HumanLimit
struct HumanLimit_t3638947579_marshaled_pinvoke
{
	Vector3_t3525329789_marshaled_pinvoke ___m_Min_0;
	Vector3_t3525329789_marshaled_pinvoke ___m_Max_1;
	Vector3_t3525329789_marshaled_pinvoke ___m_Center_2;
	float ___m_AxisLength_3;
	int32_t ___m_UseDefaultValues_4;
};
// Native definition for marshalling of: UnityEngine.HumanLimit
struct HumanLimit_t3638947579_marshaled_com
{
	Vector3_t3525329789_marshaled_com ___m_Min_0;
	Vector3_t3525329789_marshaled_com ___m_Max_1;
	Vector3_t3525329789_marshaled_com ___m_Center_2;
	float ___m_AxisLength_3;
	int32_t ___m_UseDefaultValues_4;
};
