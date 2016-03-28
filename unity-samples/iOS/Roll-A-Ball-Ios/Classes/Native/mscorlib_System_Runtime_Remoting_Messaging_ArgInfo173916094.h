#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Reflection.MethodBase
struct MethodBase_t3461000640;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ArgInfo
struct  ArgInfo_t173916094  : public Il2CppObject
{
public:
	// System.Int32[] System.Runtime.Remoting.Messaging.ArgInfo::_paramMap
	Int32U5BU5D_t1809983122* ____paramMap_0;
	// System.Int32 System.Runtime.Remoting.Messaging.ArgInfo::_inoutArgCount
	int32_t ____inoutArgCount_1;
	// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ArgInfo::_method
	MethodBase_t3461000640 * ____method_2;

public:
	inline static int32_t get_offset_of__paramMap_0() { return static_cast<int32_t>(offsetof(ArgInfo_t173916094, ____paramMap_0)); }
	inline Int32U5BU5D_t1809983122* get__paramMap_0() const { return ____paramMap_0; }
	inline Int32U5BU5D_t1809983122** get_address_of__paramMap_0() { return &____paramMap_0; }
	inline void set__paramMap_0(Int32U5BU5D_t1809983122* value)
	{
		____paramMap_0 = value;
		Il2CppCodeGenWriteBarrier(&____paramMap_0, value);
	}

	inline static int32_t get_offset_of__inoutArgCount_1() { return static_cast<int32_t>(offsetof(ArgInfo_t173916094, ____inoutArgCount_1)); }
	inline int32_t get__inoutArgCount_1() const { return ____inoutArgCount_1; }
	inline int32_t* get_address_of__inoutArgCount_1() { return &____inoutArgCount_1; }
	inline void set__inoutArgCount_1(int32_t value)
	{
		____inoutArgCount_1 = value;
	}

	inline static int32_t get_offset_of__method_2() { return static_cast<int32_t>(offsetof(ArgInfo_t173916094, ____method_2)); }
	inline MethodBase_t3461000640 * get__method_2() const { return ____method_2; }
	inline MethodBase_t3461000640 ** get_address_of__method_2() { return &____method_2; }
	inline void set__method_2(MethodBase_t3461000640 * value)
	{
		____method_2 = value;
		Il2CppCodeGenWriteBarrier(&____method_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
