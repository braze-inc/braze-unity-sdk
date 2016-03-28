#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t3695912417;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_t2990183180;

#include "UnityEngine_UI_UnityEngine_EventSystems_BaseInputM3800378272.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerInputModule
struct  PointerInputModule_t1553882356  : public BaseInputModule_t3800378272
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> UnityEngine.EventSystems.PointerInputModule::m_PointerData
	Dictionary_2_t3695912417 * ___m_PointerData_10;
	// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::m_MouseState
	MouseState_t2990183180 * ___m_MouseState_11;

public:
	inline static int32_t get_offset_of_m_PointerData_10() { return static_cast<int32_t>(offsetof(PointerInputModule_t1553882356, ___m_PointerData_10)); }
	inline Dictionary_2_t3695912417 * get_m_PointerData_10() const { return ___m_PointerData_10; }
	inline Dictionary_2_t3695912417 ** get_address_of_m_PointerData_10() { return &___m_PointerData_10; }
	inline void set_m_PointerData_10(Dictionary_2_t3695912417 * value)
	{
		___m_PointerData_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_PointerData_10, value);
	}

	inline static int32_t get_offset_of_m_MouseState_11() { return static_cast<int32_t>(offsetof(PointerInputModule_t1553882356, ___m_MouseState_11)); }
	inline MouseState_t2990183180 * get_m_MouseState_11() const { return ___m_MouseState_11; }
	inline MouseState_t2990183180 ** get_address_of_m_MouseState_11() { return &___m_MouseState_11; }
	inline void set_m_MouseState_11(MouseState_t2990183180 * value)
	{
		___m_MouseState_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_MouseState_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
