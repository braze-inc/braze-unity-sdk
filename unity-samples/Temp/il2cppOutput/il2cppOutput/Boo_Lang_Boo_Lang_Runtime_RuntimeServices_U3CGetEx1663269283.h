#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo>
struct IEnumerator_1_t31172966;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC
struct  U3CGetExtensionMethodsU3Ec__IteratorC_t1663269283  : public Il2CppObject
{
public:
	// System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo> Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::<$s_49>__0
	Il2CppObject* ___U3CU24s_49U3E__0_0;
	// System.Reflection.MemberInfo Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::<member>__1
	MemberInfo_t * ___U3CmemberU3E__1_1;
	// System.Int32 Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::$PC
	int32_t ___U24PC_2;
	// System.Reflection.MethodInfo Boo.Lang.Runtime.RuntimeServices/<GetExtensionMethods>c__IteratorC::$current
	MethodInfo_t * ___U24current_3;

public:
	inline static int32_t get_offset_of_U3CU24s_49U3E__0_0() { return static_cast<int32_t>(offsetof(U3CGetExtensionMethodsU3Ec__IteratorC_t1663269283, ___U3CU24s_49U3E__0_0)); }
	inline Il2CppObject* get_U3CU24s_49U3E__0_0() const { return ___U3CU24s_49U3E__0_0; }
	inline Il2CppObject** get_address_of_U3CU24s_49U3E__0_0() { return &___U3CU24s_49U3E__0_0; }
	inline void set_U3CU24s_49U3E__0_0(Il2CppObject* value)
	{
		___U3CU24s_49U3E__0_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU24s_49U3E__0_0, value);
	}

	inline static int32_t get_offset_of_U3CmemberU3E__1_1() { return static_cast<int32_t>(offsetof(U3CGetExtensionMethodsU3Ec__IteratorC_t1663269283, ___U3CmemberU3E__1_1)); }
	inline MemberInfo_t * get_U3CmemberU3E__1_1() const { return ___U3CmemberU3E__1_1; }
	inline MemberInfo_t ** get_address_of_U3CmemberU3E__1_1() { return &___U3CmemberU3E__1_1; }
	inline void set_U3CmemberU3E__1_1(MemberInfo_t * value)
	{
		___U3CmemberU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CmemberU3E__1_1, value);
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CGetExtensionMethodsU3Ec__IteratorC_t1663269283, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CGetExtensionMethodsU3Ec__IteratorC_t1663269283, ___U24current_3)); }
	inline MethodInfo_t * get_U24current_3() const { return ___U24current_3; }
	inline MethodInfo_t ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(MethodInfo_t * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
