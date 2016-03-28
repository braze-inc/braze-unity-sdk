#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// UnityTest.MemberResolver
struct MemberResolver_t576216413;

#include "AssemblyU2DCSharp_UnityTest_ActionBase1626794692.h"
#include "AssemblyU2DCSharp_UnityTest_ComparerBase_CompareTo3967268218.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityTest.ComparerBase
struct  ComparerBase_t2369876283  : public ActionBase_t1626794692
{
public:
	// UnityTest.ComparerBase/CompareToType UnityTest.ComparerBase::compareToType
	int32_t ___compareToType_7;
	// UnityEngine.GameObject UnityTest.ComparerBase::other
	GameObject_t4012695102 * ___other_8;
	// System.Object UnityTest.ComparerBase::m_ObjOtherVal
	Il2CppObject * ___m_ObjOtherVal_9;
	// System.String UnityTest.ComparerBase::otherPropertyPath
	String_t* ___otherPropertyPath_10;
	// UnityTest.MemberResolver UnityTest.ComparerBase::m_MemberResolverB
	MemberResolver_t576216413 * ___m_MemberResolverB_11;
	// System.Object UnityTest.ComparerBase::<ConstValue>k__BackingField
	Il2CppObject * ___U3CConstValueU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_compareToType_7() { return static_cast<int32_t>(offsetof(ComparerBase_t2369876283, ___compareToType_7)); }
	inline int32_t get_compareToType_7() const { return ___compareToType_7; }
	inline int32_t* get_address_of_compareToType_7() { return &___compareToType_7; }
	inline void set_compareToType_7(int32_t value)
	{
		___compareToType_7 = value;
	}

	inline static int32_t get_offset_of_other_8() { return static_cast<int32_t>(offsetof(ComparerBase_t2369876283, ___other_8)); }
	inline GameObject_t4012695102 * get_other_8() const { return ___other_8; }
	inline GameObject_t4012695102 ** get_address_of_other_8() { return &___other_8; }
	inline void set_other_8(GameObject_t4012695102 * value)
	{
		___other_8 = value;
		Il2CppCodeGenWriteBarrier(&___other_8, value);
	}

	inline static int32_t get_offset_of_m_ObjOtherVal_9() { return static_cast<int32_t>(offsetof(ComparerBase_t2369876283, ___m_ObjOtherVal_9)); }
	inline Il2CppObject * get_m_ObjOtherVal_9() const { return ___m_ObjOtherVal_9; }
	inline Il2CppObject ** get_address_of_m_ObjOtherVal_9() { return &___m_ObjOtherVal_9; }
	inline void set_m_ObjOtherVal_9(Il2CppObject * value)
	{
		___m_ObjOtherVal_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_ObjOtherVal_9, value);
	}

	inline static int32_t get_offset_of_otherPropertyPath_10() { return static_cast<int32_t>(offsetof(ComparerBase_t2369876283, ___otherPropertyPath_10)); }
	inline String_t* get_otherPropertyPath_10() const { return ___otherPropertyPath_10; }
	inline String_t** get_address_of_otherPropertyPath_10() { return &___otherPropertyPath_10; }
	inline void set_otherPropertyPath_10(String_t* value)
	{
		___otherPropertyPath_10 = value;
		Il2CppCodeGenWriteBarrier(&___otherPropertyPath_10, value);
	}

	inline static int32_t get_offset_of_m_MemberResolverB_11() { return static_cast<int32_t>(offsetof(ComparerBase_t2369876283, ___m_MemberResolverB_11)); }
	inline MemberResolver_t576216413 * get_m_MemberResolverB_11() const { return ___m_MemberResolverB_11; }
	inline MemberResolver_t576216413 ** get_address_of_m_MemberResolverB_11() { return &___m_MemberResolverB_11; }
	inline void set_m_MemberResolverB_11(MemberResolver_t576216413 * value)
	{
		___m_MemberResolverB_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_MemberResolverB_11, value);
	}

	inline static int32_t get_offset_of_U3CConstValueU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(ComparerBase_t2369876283, ___U3CConstValueU3Ek__BackingField_12)); }
	inline Il2CppObject * get_U3CConstValueU3Ek__BackingField_12() const { return ___U3CConstValueU3Ek__BackingField_12; }
	inline Il2CppObject ** get_address_of_U3CConstValueU3Ek__BackingField_12() { return &___U3CConstValueU3Ek__BackingField_12; }
	inline void set_U3CConstValueU3Ek__BackingField_12(Il2CppObject * value)
	{
		___U3CConstValueU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CConstValueU3Ek__BackingField_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
