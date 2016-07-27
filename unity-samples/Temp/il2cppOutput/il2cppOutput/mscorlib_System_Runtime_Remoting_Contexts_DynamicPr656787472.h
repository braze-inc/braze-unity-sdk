#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.ArrayList
struct ArrayList_t2121638921;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
struct  DynamicPropertyCollection_t656787472  : public Il2CppObject
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.Contexts.DynamicPropertyCollection::_properties
	ArrayList_t2121638921 * ____properties_0;

public:
	inline static int32_t get_offset_of__properties_0() { return static_cast<int32_t>(offsetof(DynamicPropertyCollection_t656787472, ____properties_0)); }
	inline ArrayList_t2121638921 * get__properties_0() const { return ____properties_0; }
	inline ArrayList_t2121638921 ** get_address_of__properties_0() { return &____properties_0; }
	inline void set__properties_0(ArrayList_t2121638921 * value)
	{
		____properties_0 = value;
		Il2CppCodeGenWriteBarrier(&____properties_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
