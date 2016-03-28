#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.ClipperRegistry
struct ClipperRegistry_t694640915;
// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.IClipper>
struct IndexedSet_1_t3411304698;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ClipperRegistry
struct  ClipperRegistry_t694640915  : public Il2CppObject
{
public:
	// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.IClipper> UnityEngine.UI.ClipperRegistry::m_Clippers
	IndexedSet_1_t3411304698 * ___m_Clippers_1;

public:
	inline static int32_t get_offset_of_m_Clippers_1() { return static_cast<int32_t>(offsetof(ClipperRegistry_t694640915, ___m_Clippers_1)); }
	inline IndexedSet_1_t3411304698 * get_m_Clippers_1() const { return ___m_Clippers_1; }
	inline IndexedSet_1_t3411304698 ** get_address_of_m_Clippers_1() { return &___m_Clippers_1; }
	inline void set_m_Clippers_1(IndexedSet_1_t3411304698 * value)
	{
		___m_Clippers_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_Clippers_1, value);
	}
};

struct ClipperRegistry_t694640915_StaticFields
{
public:
	// UnityEngine.UI.ClipperRegistry UnityEngine.UI.ClipperRegistry::s_Instance
	ClipperRegistry_t694640915 * ___s_Instance_0;

public:
	inline static int32_t get_offset_of_s_Instance_0() { return static_cast<int32_t>(offsetof(ClipperRegistry_t694640915_StaticFields, ___s_Instance_0)); }
	inline ClipperRegistry_t694640915 * get_s_Instance_0() const { return ___s_Instance_0; }
	inline ClipperRegistry_t694640915 ** get_address_of_s_Instance_0() { return &___s_Instance_0; }
	inline void set_s_Instance_0(ClipperRegistry_t694640915 * value)
	{
		___s_Instance_0 = value;
		Il2CppCodeGenWriteBarrier(&___s_Instance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
