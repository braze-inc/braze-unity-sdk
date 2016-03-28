#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_ValueType4014882752.h"
#include "mscorlib_System_Reflection_Emit_MethodToken2392331557.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.MethodToken
struct  MethodToken_t2392331557 
{
public:
	// System.Int32 System.Reflection.Emit.MethodToken::tokValue
	int32_t ___tokValue_0;

public:
	inline static int32_t get_offset_of_tokValue_0() { return static_cast<int32_t>(offsetof(MethodToken_t2392331557, ___tokValue_0)); }
	inline int32_t get_tokValue_0() const { return ___tokValue_0; }
	inline int32_t* get_address_of_tokValue_0() { return &___tokValue_0; }
	inline void set_tokValue_0(int32_t value)
	{
		___tokValue_0 = value;
	}
};

struct MethodToken_t2392331557_StaticFields
{
public:
	// System.Reflection.Emit.MethodToken System.Reflection.Emit.MethodToken::Empty
	MethodToken_t2392331557  ___Empty_1;

public:
	inline static int32_t get_offset_of_Empty_1() { return static_cast<int32_t>(offsetof(MethodToken_t2392331557_StaticFields, ___Empty_1)); }
	inline MethodToken_t2392331557  get_Empty_1() const { return ___Empty_1; }
	inline MethodToken_t2392331557 * get_address_of_Empty_1() { return &___Empty_1; }
	inline void set_Empty_1(MethodToken_t2392331557  value)
	{
		___Empty_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: System.Reflection.Emit.MethodToken
struct MethodToken_t2392331557_marshaled_pinvoke
{
	int32_t ___tokValue_0;
};
// Native definition for marshalling of: System.Reflection.Emit.MethodToken
struct MethodToken_t2392331557_marshaled_com
{
	int32_t ___tokValue_0;
};
