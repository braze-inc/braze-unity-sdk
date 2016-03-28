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
// UnityEngine.Object
struct Object_t3878351788;
struct Object_t3878351788_marshaled_pinvoke;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.ArgumentCache
struct  ArgumentCache_t2732610389  : public Il2CppObject
{
public:
	// UnityEngine.Object UnityEngine.Events.ArgumentCache::m_ObjectArgument
	Object_t3878351788 * ___m_ObjectArgument_3;
	// System.String UnityEngine.Events.ArgumentCache::m_ObjectArgumentAssemblyTypeName
	String_t* ___m_ObjectArgumentAssemblyTypeName_4;
	// System.Int32 UnityEngine.Events.ArgumentCache::m_IntArgument
	int32_t ___m_IntArgument_5;
	// System.Single UnityEngine.Events.ArgumentCache::m_FloatArgument
	float ___m_FloatArgument_6;
	// System.String UnityEngine.Events.ArgumentCache::m_StringArgument
	String_t* ___m_StringArgument_7;
	// System.Boolean UnityEngine.Events.ArgumentCache::m_BoolArgument
	bool ___m_BoolArgument_8;

public:
	inline static int32_t get_offset_of_m_ObjectArgument_3() { return static_cast<int32_t>(offsetof(ArgumentCache_t2732610389, ___m_ObjectArgument_3)); }
	inline Object_t3878351788 * get_m_ObjectArgument_3() const { return ___m_ObjectArgument_3; }
	inline Object_t3878351788 ** get_address_of_m_ObjectArgument_3() { return &___m_ObjectArgument_3; }
	inline void set_m_ObjectArgument_3(Object_t3878351788 * value)
	{
		___m_ObjectArgument_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_ObjectArgument_3, value);
	}

	inline static int32_t get_offset_of_m_ObjectArgumentAssemblyTypeName_4() { return static_cast<int32_t>(offsetof(ArgumentCache_t2732610389, ___m_ObjectArgumentAssemblyTypeName_4)); }
	inline String_t* get_m_ObjectArgumentAssemblyTypeName_4() const { return ___m_ObjectArgumentAssemblyTypeName_4; }
	inline String_t** get_address_of_m_ObjectArgumentAssemblyTypeName_4() { return &___m_ObjectArgumentAssemblyTypeName_4; }
	inline void set_m_ObjectArgumentAssemblyTypeName_4(String_t* value)
	{
		___m_ObjectArgumentAssemblyTypeName_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_ObjectArgumentAssemblyTypeName_4, value);
	}

	inline static int32_t get_offset_of_m_IntArgument_5() { return static_cast<int32_t>(offsetof(ArgumentCache_t2732610389, ___m_IntArgument_5)); }
	inline int32_t get_m_IntArgument_5() const { return ___m_IntArgument_5; }
	inline int32_t* get_address_of_m_IntArgument_5() { return &___m_IntArgument_5; }
	inline void set_m_IntArgument_5(int32_t value)
	{
		___m_IntArgument_5 = value;
	}

	inline static int32_t get_offset_of_m_FloatArgument_6() { return static_cast<int32_t>(offsetof(ArgumentCache_t2732610389, ___m_FloatArgument_6)); }
	inline float get_m_FloatArgument_6() const { return ___m_FloatArgument_6; }
	inline float* get_address_of_m_FloatArgument_6() { return &___m_FloatArgument_6; }
	inline void set_m_FloatArgument_6(float value)
	{
		___m_FloatArgument_6 = value;
	}

	inline static int32_t get_offset_of_m_StringArgument_7() { return static_cast<int32_t>(offsetof(ArgumentCache_t2732610389, ___m_StringArgument_7)); }
	inline String_t* get_m_StringArgument_7() const { return ___m_StringArgument_7; }
	inline String_t** get_address_of_m_StringArgument_7() { return &___m_StringArgument_7; }
	inline void set_m_StringArgument_7(String_t* value)
	{
		___m_StringArgument_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_StringArgument_7, value);
	}

	inline static int32_t get_offset_of_m_BoolArgument_8() { return static_cast<int32_t>(offsetof(ArgumentCache_t2732610389, ___m_BoolArgument_8)); }
	inline bool get_m_BoolArgument_8() const { return ___m_BoolArgument_8; }
	inline bool* get_address_of_m_BoolArgument_8() { return &___m_BoolArgument_8; }
	inline void set_m_BoolArgument_8(bool value)
	{
		___m_BoolArgument_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
