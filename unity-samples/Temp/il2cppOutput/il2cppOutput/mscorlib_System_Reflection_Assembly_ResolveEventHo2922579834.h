#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.ModuleResolveEventHandler
struct ModuleResolveEventHandler_t3021119358;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly/ResolveEventHolder
struct  ResolveEventHolder_t2922579834  : public Il2CppObject
{
public:
	// System.Reflection.ModuleResolveEventHandler System.Reflection.Assembly/ResolveEventHolder::ModuleResolve
	ModuleResolveEventHandler_t3021119358 * ___ModuleResolve_0;

public:
	inline static int32_t get_offset_of_ModuleResolve_0() { return static_cast<int32_t>(offsetof(ResolveEventHolder_t2922579834, ___ModuleResolve_0)); }
	inline ModuleResolveEventHandler_t3021119358 * get_ModuleResolve_0() const { return ___ModuleResolve_0; }
	inline ModuleResolveEventHandler_t3021119358 ** get_address_of_ModuleResolve_0() { return &___ModuleResolve_0; }
	inline void set_ModuleResolve_0(ModuleResolveEventHandler_t3021119358 * value)
	{
		___ModuleResolve_0 = value;
		Il2CppCodeGenWriteBarrier(&___ModuleResolve_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
