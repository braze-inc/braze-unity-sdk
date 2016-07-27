#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.WeakReference
struct WeakReference_t2193916456;

#include "mscorlib_System_Runtime_Remoting_Identity1467752358.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ClientIdentity
struct  ClientIdentity_t544662673  : public Identity_t1467752358
{
public:
	// System.WeakReference System.Runtime.Remoting.ClientIdentity::_proxyReference
	WeakReference_t2193916456 * ____proxyReference_7;

public:
	inline static int32_t get_offset_of__proxyReference_7() { return static_cast<int32_t>(offsetof(ClientIdentity_t544662673, ____proxyReference_7)); }
	inline WeakReference_t2193916456 * get__proxyReference_7() const { return ____proxyReference_7; }
	inline WeakReference_t2193916456 ** get_address_of__proxyReference_7() { return &____proxyReference_7; }
	inline void set__proxyReference_7(WeakReference_t2193916456 * value)
	{
		____proxyReference_7 = value;
		Il2CppCodeGenWriteBarrier(&____proxyReference_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
