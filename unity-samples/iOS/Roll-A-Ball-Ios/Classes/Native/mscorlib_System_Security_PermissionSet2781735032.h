#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Policy.PolicyLevel
struct PolicyLevel_t1512127021;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.PermissionSet
struct  PermissionSet_t2781735032  : public Il2CppObject
{
public:
	// System.Security.Policy.PolicyLevel System.Security.PermissionSet::<Resolver>k__BackingField
	PolicyLevel_t1512127021 * ___U3CResolverU3Ek__BackingField_0;
	// System.Boolean System.Security.PermissionSet::<DeclarativeSecurity>k__BackingField
	bool ___U3CDeclarativeSecurityU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CResolverU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PermissionSet_t2781735032, ___U3CResolverU3Ek__BackingField_0)); }
	inline PolicyLevel_t1512127021 * get_U3CResolverU3Ek__BackingField_0() const { return ___U3CResolverU3Ek__BackingField_0; }
	inline PolicyLevel_t1512127021 ** get_address_of_U3CResolverU3Ek__BackingField_0() { return &___U3CResolverU3Ek__BackingField_0; }
	inline void set_U3CResolverU3Ek__BackingField_0(PolicyLevel_t1512127021 * value)
	{
		___U3CResolverU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CResolverU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CDeclarativeSecurityU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PermissionSet_t2781735032, ___U3CDeclarativeSecurityU3Ek__BackingField_1)); }
	inline bool get_U3CDeclarativeSecurityU3Ek__BackingField_1() const { return ___U3CDeclarativeSecurityU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CDeclarativeSecurityU3Ek__BackingField_1() { return &___U3CDeclarativeSecurityU3Ek__BackingField_1; }
	inline void set_U3CDeclarativeSecurityU3Ek__BackingField_1(bool value)
	{
		___U3CDeclarativeSecurityU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
