#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t3813794579;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.String
struct String_t;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityTest.MemberResolver
struct  MemberResolver_t576216413  : public Il2CppObject
{
public:
	// System.Object UnityTest.MemberResolver::m_CallingObjectRef
	Il2CppObject * ___m_CallingObjectRef_0;
	// System.Reflection.MemberInfo[] UnityTest.MemberResolver::m_Callstack
	MemberInfoU5BU5D_t3813794579* ___m_Callstack_1;
	// UnityEngine.GameObject UnityTest.MemberResolver::m_GameObject
	GameObject_t4012695102 * ___m_GameObject_2;
	// System.String UnityTest.MemberResolver::m_Path
	String_t* ___m_Path_3;

public:
	inline static int32_t get_offset_of_m_CallingObjectRef_0() { return static_cast<int32_t>(offsetof(MemberResolver_t576216413, ___m_CallingObjectRef_0)); }
	inline Il2CppObject * get_m_CallingObjectRef_0() const { return ___m_CallingObjectRef_0; }
	inline Il2CppObject ** get_address_of_m_CallingObjectRef_0() { return &___m_CallingObjectRef_0; }
	inline void set_m_CallingObjectRef_0(Il2CppObject * value)
	{
		___m_CallingObjectRef_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_CallingObjectRef_0, value);
	}

	inline static int32_t get_offset_of_m_Callstack_1() { return static_cast<int32_t>(offsetof(MemberResolver_t576216413, ___m_Callstack_1)); }
	inline MemberInfoU5BU5D_t3813794579* get_m_Callstack_1() const { return ___m_Callstack_1; }
	inline MemberInfoU5BU5D_t3813794579** get_address_of_m_Callstack_1() { return &___m_Callstack_1; }
	inline void set_m_Callstack_1(MemberInfoU5BU5D_t3813794579* value)
	{
		___m_Callstack_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_Callstack_1, value);
	}

	inline static int32_t get_offset_of_m_GameObject_2() { return static_cast<int32_t>(offsetof(MemberResolver_t576216413, ___m_GameObject_2)); }
	inline GameObject_t4012695102 * get_m_GameObject_2() const { return ___m_GameObject_2; }
	inline GameObject_t4012695102 ** get_address_of_m_GameObject_2() { return &___m_GameObject_2; }
	inline void set_m_GameObject_2(GameObject_t4012695102 * value)
	{
		___m_GameObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_GameObject_2, value);
	}

	inline static int32_t get_offset_of_m_Path_3() { return static_cast<int32_t>(offsetof(MemberResolver_t576216413, ___m_Path_3)); }
	inline String_t* get_m_Path_3() const { return ___m_Path_3; }
	inline String_t** get_address_of_m_Path_3() { return &___m_Path_3; }
	inline void set_m_Path_3(String_t* value)
	{
		___m_Path_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Path_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
