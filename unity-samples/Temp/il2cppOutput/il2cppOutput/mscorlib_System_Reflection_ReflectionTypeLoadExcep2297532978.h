#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Exception[]
struct ExceptionU5BU5D_t1629112493;
// System.Type[]
struct TypeU5BU5D_t3431720054;

#include "mscorlib_System_SystemException3155420757.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ReflectionTypeLoadException
struct  ReflectionTypeLoadException_t2297532978  : public SystemException_t3155420757
{
public:
	// System.Exception[] System.Reflection.ReflectionTypeLoadException::loaderExceptions
	ExceptionU5BU5D_t1629112493* ___loaderExceptions_11;
	// System.Type[] System.Reflection.ReflectionTypeLoadException::types
	TypeU5BU5D_t3431720054* ___types_12;

public:
	inline static int32_t get_offset_of_loaderExceptions_11() { return static_cast<int32_t>(offsetof(ReflectionTypeLoadException_t2297532978, ___loaderExceptions_11)); }
	inline ExceptionU5BU5D_t1629112493* get_loaderExceptions_11() const { return ___loaderExceptions_11; }
	inline ExceptionU5BU5D_t1629112493** get_address_of_loaderExceptions_11() { return &___loaderExceptions_11; }
	inline void set_loaderExceptions_11(ExceptionU5BU5D_t1629112493* value)
	{
		___loaderExceptions_11 = value;
		Il2CppCodeGenWriteBarrier(&___loaderExceptions_11, value);
	}

	inline static int32_t get_offset_of_types_12() { return static_cast<int32_t>(offsetof(ReflectionTypeLoadException_t2297532978, ___types_12)); }
	inline TypeU5BU5D_t3431720054* get_types_12() const { return ___types_12; }
	inline TypeU5BU5D_t3431720054** get_address_of_types_12() { return &___types_12; }
	inline void set_types_12(TypeU5BU5D_t3431720054* value)
	{
		___types_12 = value;
		Il2CppCodeGenWriteBarrier(&___types_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
