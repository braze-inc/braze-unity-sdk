#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState>
struct List_1_t694330712;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerInputModule/MouseState
struct  MouseState_t2990183180  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.PointerInputModule/ButtonState> UnityEngine.EventSystems.PointerInputModule/MouseState::m_TrackedButtons
	List_1_t694330712 * ___m_TrackedButtons_0;

public:
	inline static int32_t get_offset_of_m_TrackedButtons_0() { return static_cast<int32_t>(offsetof(MouseState_t2990183180, ___m_TrackedButtons_0)); }
	inline List_1_t694330712 * get_m_TrackedButtons_0() const { return ___m_TrackedButtons_0; }
	inline List_1_t694330712 ** get_address_of_m_TrackedButtons_0() { return &___m_TrackedButtons_0; }
	inline void set_m_TrackedButtons_0(List_1_t694330712 * value)
	{
		___m_TrackedButtons_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_TrackedButtons_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
