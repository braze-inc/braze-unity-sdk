#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.EventInfo/AddEventAdapter
struct AddEventAdapter_t836903542;

#include "mscorlib_System_Reflection_MemberInfo2843033814.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventInfo
struct  EventInfo_t  : public MemberInfo_t
{
public:
	// System.Reflection.EventInfo/AddEventAdapter System.Reflection.EventInfo::cached_add_event
	AddEventAdapter_t836903542 * ___cached_add_event_0;

public:
	inline static int32_t get_offset_of_cached_add_event_0() { return static_cast<int32_t>(offsetof(EventInfo_t, ___cached_add_event_0)); }
	inline AddEventAdapter_t836903542 * get_cached_add_event_0() const { return ___cached_add_event_0; }
	inline AddEventAdapter_t836903542 ** get_address_of_cached_add_event_0() { return &___cached_add_event_0; }
	inline void set_cached_add_event_0(AddEventAdapter_t836903542 * value)
	{
		___cached_add_event_0 = value;
		Il2CppCodeGenWriteBarrier(&___cached_add_event_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
