#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t455;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t456;
// UnityEngine.GameObject
struct GameObject_t140;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t457;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t458;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t459;
// UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t459  : public UIBehaviour_t460
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t455 * ___m_SystemInputModules_2;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t456 * ___m_CurrentInputModule_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t140 * ___m_FirstSelected_4;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_5;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t140 * ___m_CurrentSelected_7;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_LastSelected
	GameObject_t140 * ___m_LastSelected_8;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_9;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t457 * ___m_DummyData_10;
};
struct EventSystem_t459_StaticFields{
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t458 * ___s_RaycastComparer_11;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::<current>k__BackingField
	EventSystem_t459 * ___U3CcurrentU3Ek__BackingField_12;
};
