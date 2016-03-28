#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Runtime.Remoting.Contexts.Context
struct Context_t305277133;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ClientContextTerminatorSink
struct  ClientContextTerminatorSink_t2451196600  : public Il2CppObject
{
public:
	// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.Messaging.ClientContextTerminatorSink::_context
	Context_t305277133 * ____context_0;

public:
	inline static int32_t get_offset_of__context_0() { return static_cast<int32_t>(offsetof(ClientContextTerminatorSink_t2451196600, ____context_0)); }
	inline Context_t305277133 * get__context_0() const { return ____context_0; }
	inline Context_t305277133 ** get_address_of__context_0() { return &____context_0; }
	inline void set__context_0(Context_t305277133 * value)
	{
		____context_0 = value;
		Il2CppCodeGenWriteBarrier(&____context_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
