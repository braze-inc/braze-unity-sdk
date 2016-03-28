#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t571418633;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2055500882  : public Il2CppObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t571418633 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2055500882, ____identity_0)); }
	inline ServerIdentity_t571418633 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t571418633 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t571418633 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier(&____identity_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
