#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.EventSystems.PointerInputModule
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerInputModule.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_t527  : public PointerInputModule_t525
{
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_NextAction
	float ___m_NextAction_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMousePosition
	Vector2_t184  ___m_LastMousePosition_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_MousePosition
	Vector2_t184  ___m_MousePosition_14;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_HorizontalAxis
	String_t* ___m_HorizontalAxis_15;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_VerticalAxis
	String_t* ___m_VerticalAxis_16;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_SubmitButton
	String_t* ___m_SubmitButton_17;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_CancelButton
	String_t* ___m_CancelButton_18;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_InputActionsPerSecond
	float ___m_InputActionsPerSecond_19;
	// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::m_AllowActivationOnMobileDevice
	bool ___m_AllowActivationOnMobileDevice_20;
};
