#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UI_UnityEngine_EventSystems_PointerInp1553882356.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.TouchInputModule
struct  TouchInputModule_t2251026098  : public PointerInputModule_t1553882356
{
public:
	// UnityEngine.Vector2 UnityEngine.EventSystems.TouchInputModule::m_LastMousePosition
	Vector2_t3525329788  ___m_LastMousePosition_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.TouchInputModule::m_MousePosition
	Vector2_t3525329788  ___m_MousePosition_13;
	// System.Boolean UnityEngine.EventSystems.TouchInputModule::m_ForceModuleActive
	bool ___m_ForceModuleActive_14;

public:
	inline static int32_t get_offset_of_m_LastMousePosition_12() { return static_cast<int32_t>(offsetof(TouchInputModule_t2251026098, ___m_LastMousePosition_12)); }
	inline Vector2_t3525329788  get_m_LastMousePosition_12() const { return ___m_LastMousePosition_12; }
	inline Vector2_t3525329788 * get_address_of_m_LastMousePosition_12() { return &___m_LastMousePosition_12; }
	inline void set_m_LastMousePosition_12(Vector2_t3525329788  value)
	{
		___m_LastMousePosition_12 = value;
	}

	inline static int32_t get_offset_of_m_MousePosition_13() { return static_cast<int32_t>(offsetof(TouchInputModule_t2251026098, ___m_MousePosition_13)); }
	inline Vector2_t3525329788  get_m_MousePosition_13() const { return ___m_MousePosition_13; }
	inline Vector2_t3525329788 * get_address_of_m_MousePosition_13() { return &___m_MousePosition_13; }
	inline void set_m_MousePosition_13(Vector2_t3525329788  value)
	{
		___m_MousePosition_13 = value;
	}

	inline static int32_t get_offset_of_m_ForceModuleActive_14() { return static_cast<int32_t>(offsetof(TouchInputModule_t2251026098, ___m_ForceModuleActive_14)); }
	inline bool get_m_ForceModuleActive_14() const { return ___m_ForceModuleActive_14; }
	inline bool* get_address_of_m_ForceModuleActive_14() { return &___m_ForceModuleActive_14; }
	inline void set_m_ForceModuleActive_14(bool value)
	{
		___m_ForceModuleActive_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
