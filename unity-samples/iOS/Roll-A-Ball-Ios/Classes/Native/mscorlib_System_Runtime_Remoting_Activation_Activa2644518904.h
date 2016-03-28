#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Runtime.Remoting.Activation.IActivator
struct IActivator_t2632194320;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Activation.ActivationServices
struct  ActivationServices_t2644518904  : public Il2CppObject
{
public:

public:
};

struct ActivationServices_t2644518904_StaticFields
{
public:
	// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.ActivationServices::_constructionActivator
	Il2CppObject * ____constructionActivator_0;

public:
	inline static int32_t get_offset_of__constructionActivator_0() { return static_cast<int32_t>(offsetof(ActivationServices_t2644518904_StaticFields, ____constructionActivator_0)); }
	inline Il2CppObject * get__constructionActivator_0() const { return ____constructionActivator_0; }
	inline Il2CppObject ** get_address_of__constructionActivator_0() { return &____constructionActivator_0; }
	inline void set__constructionActivator_0(Il2CppObject * value)
	{
		____constructionActivator_0 = value;
		Il2CppCodeGenWriteBarrier(&____constructionActivator_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
