#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t2956870243;

#include "mscorlib_System_Runtime_Remoting_Messaging_MethodD1854958641.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MethodCallDictionary
struct  MethodCallDictionary_t2149518511  : public MethodDictionary_t1854958641
{
public:

public:
};

struct MethodCallDictionary_t2149518511_StaticFields
{
public:
	// System.String[] System.Runtime.Remoting.Messaging.MethodCallDictionary::InternalKeys
	StringU5BU5D_t2956870243* ___InternalKeys_6;

public:
	inline static int32_t get_offset_of_InternalKeys_6() { return static_cast<int32_t>(offsetof(MethodCallDictionary_t2149518511_StaticFields, ___InternalKeys_6)); }
	inline StringU5BU5D_t2956870243* get_InternalKeys_6() const { return ___InternalKeys_6; }
	inline StringU5BU5D_t2956870243** get_address_of_InternalKeys_6() { return &___InternalKeys_6; }
	inline void set_InternalKeys_6(StringU5BU5D_t2956870243* value)
	{
		___InternalKeys_6 = value;
		Il2CppCodeGenWriteBarrier(&___InternalKeys_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
