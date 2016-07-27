#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Security.Policy.CodeGroup
struct CodeGroup_t2846310733;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// System.Collections.Hashtable
struct Hashtable_t3875263730;
// System.Security.SecurityElement
struct SecurityElement_t2475331585;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Security_PolicyLevelType3058198577.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.PolicyLevel
struct  PolicyLevel_t1512127021  : public Il2CppObject
{
public:
	// System.String System.Security.Policy.PolicyLevel::label
	String_t* ___label_0;
	// System.Security.Policy.CodeGroup System.Security.Policy.PolicyLevel::root_code_group
	CodeGroup_t2846310733 * ___root_code_group_1;
	// System.Collections.ArrayList System.Security.Policy.PolicyLevel::full_trust_assemblies
	ArrayList_t2121638921 * ___full_trust_assemblies_2;
	// System.Collections.ArrayList System.Security.Policy.PolicyLevel::named_permission_sets
	ArrayList_t2121638921 * ___named_permission_sets_3;
	// System.String System.Security.Policy.PolicyLevel::_location
	String_t* ____location_4;
	// System.Security.PolicyLevelType System.Security.Policy.PolicyLevel::_type
	int32_t ____type_5;
	// System.Collections.Hashtable System.Security.Policy.PolicyLevel::fullNames
	Hashtable_t3875263730 * ___fullNames_6;
	// System.Security.SecurityElement System.Security.Policy.PolicyLevel::xml
	SecurityElement_t2475331585 * ___xml_7;

public:
	inline static int32_t get_offset_of_label_0() { return static_cast<int32_t>(offsetof(PolicyLevel_t1512127021, ___label_0)); }
	inline String_t* get_label_0() const { return ___label_0; }
	inline String_t** get_address_of_label_0() { return &___label_0; }
	inline void set_label_0(String_t* value)
	{
		___label_0 = value;
		Il2CppCodeGenWriteBarrier(&___label_0, value);
	}

	inline static int32_t get_offset_of_root_code_group_1() { return static_cast<int32_t>(offsetof(PolicyLevel_t1512127021, ___root_code_group_1)); }
	inline CodeGroup_t2846310733 * get_root_code_group_1() const { return ___root_code_group_1; }
	inline CodeGroup_t2846310733 ** get_address_of_root_code_group_1() { return &___root_code_group_1; }
	inline void set_root_code_group_1(CodeGroup_t2846310733 * value)
	{
		___root_code_group_1 = value;
		Il2CppCodeGenWriteBarrier(&___root_code_group_1, value);
	}

	inline static int32_t get_offset_of_full_trust_assemblies_2() { return static_cast<int32_t>(offsetof(PolicyLevel_t1512127021, ___full_trust_assemblies_2)); }
	inline ArrayList_t2121638921 * get_full_trust_assemblies_2() const { return ___full_trust_assemblies_2; }
	inline ArrayList_t2121638921 ** get_address_of_full_trust_assemblies_2() { return &___full_trust_assemblies_2; }
	inline void set_full_trust_assemblies_2(ArrayList_t2121638921 * value)
	{
		___full_trust_assemblies_2 = value;
		Il2CppCodeGenWriteBarrier(&___full_trust_assemblies_2, value);
	}

	inline static int32_t get_offset_of_named_permission_sets_3() { return static_cast<int32_t>(offsetof(PolicyLevel_t1512127021, ___named_permission_sets_3)); }
	inline ArrayList_t2121638921 * get_named_permission_sets_3() const { return ___named_permission_sets_3; }
	inline ArrayList_t2121638921 ** get_address_of_named_permission_sets_3() { return &___named_permission_sets_3; }
	inline void set_named_permission_sets_3(ArrayList_t2121638921 * value)
	{
		___named_permission_sets_3 = value;
		Il2CppCodeGenWriteBarrier(&___named_permission_sets_3, value);
	}

	inline static int32_t get_offset_of__location_4() { return static_cast<int32_t>(offsetof(PolicyLevel_t1512127021, ____location_4)); }
	inline String_t* get__location_4() const { return ____location_4; }
	inline String_t** get_address_of__location_4() { return &____location_4; }
	inline void set__location_4(String_t* value)
	{
		____location_4 = value;
		Il2CppCodeGenWriteBarrier(&____location_4, value);
	}

	inline static int32_t get_offset_of__type_5() { return static_cast<int32_t>(offsetof(PolicyLevel_t1512127021, ____type_5)); }
	inline int32_t get__type_5() const { return ____type_5; }
	inline int32_t* get_address_of__type_5() { return &____type_5; }
	inline void set__type_5(int32_t value)
	{
		____type_5 = value;
	}

	inline static int32_t get_offset_of_fullNames_6() { return static_cast<int32_t>(offsetof(PolicyLevel_t1512127021, ___fullNames_6)); }
	inline Hashtable_t3875263730 * get_fullNames_6() const { return ___fullNames_6; }
	inline Hashtable_t3875263730 ** get_address_of_fullNames_6() { return &___fullNames_6; }
	inline void set_fullNames_6(Hashtable_t3875263730 * value)
	{
		___fullNames_6 = value;
		Il2CppCodeGenWriteBarrier(&___fullNames_6, value);
	}

	inline static int32_t get_offset_of_xml_7() { return static_cast<int32_t>(offsetof(PolicyLevel_t1512127021, ___xml_7)); }
	inline SecurityElement_t2475331585 * get_xml_7() const { return ___xml_7; }
	inline SecurityElement_t2475331585 ** get_address_of_xml_7() { return &___xml_7; }
	inline void set_xml_7(SecurityElement_t2475331585 * value)
	{
		___xml_7 = value;
		Il2CppCodeGenWriteBarrier(&___xml_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
