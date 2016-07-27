#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t3878351788  : public Il2CppObject
{
public:
	// System.Int32 UnityEngine.Object::m_InstanceID
	int32_t ___m_InstanceID_0;
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_1;

public:
	inline static int32_t get_offset_of_m_InstanceID_0() { return static_cast<int32_t>(offsetof(Object_t3878351788, ___m_InstanceID_0)); }
	inline int32_t get_m_InstanceID_0() const { return ___m_InstanceID_0; }
	inline int32_t* get_address_of_m_InstanceID_0() { return &___m_InstanceID_0; }
	inline void set_m_InstanceID_0(int32_t value)
	{
		___m_InstanceID_0 = value;
	}

	inline static int32_t get_offset_of_m_CachedPtr_1() { return static_cast<int32_t>(offsetof(Object_t3878351788, ___m_CachedPtr_1)); }
	inline IntPtr_t get_m_CachedPtr_1() const { return ___m_CachedPtr_1; }
	inline IntPtr_t* get_address_of_m_CachedPtr_1() { return &___m_CachedPtr_1; }
	inline void set_m_CachedPtr_1(IntPtr_t value)
	{
		___m_CachedPtr_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityEngine.Object
struct Object_t3878351788_marshaled_pinvoke
{
	int32_t ___m_InstanceID_0;
	intptr_t ___m_CachedPtr_1;
};
// Native definition for marshalling of: UnityEngine.Object
struct Object_t3878351788_marshaled_com
{
	int32_t ___m_InstanceID_0;
	intptr_t ___m_CachedPtr_1;
};
