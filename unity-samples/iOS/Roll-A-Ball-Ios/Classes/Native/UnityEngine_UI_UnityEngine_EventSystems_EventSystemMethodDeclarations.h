#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t473;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t470;
// UnityEngine.GameObject
struct GameObject_t154;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t471;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t475;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t476;
// System.String
struct String_t;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void UnityEngine.EventSystems.EventSystem::.ctor()
 void EventSystem__ctor_m2110 (EventSystem_t473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::.cctor()
 void EventSystem__cctor_m2111 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
 EventSystem_t473 * EventSystem_get_current_m2112 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_current(UnityEngine.EventSystems.EventSystem)
 void EventSystem_set_current_m2113 (Object_t * __this/* static, unused */, EventSystem_t473 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::get_sendNavigationEvents()
 bool EventSystem_get_sendNavigationEvents_m2114 (EventSystem_t473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_sendNavigationEvents(System.Boolean)
 void EventSystem_set_sendNavigationEvents_m2115 (EventSystem_t473 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.EventSystem::get_pixelDragThreshold()
 int32_t EventSystem_get_pixelDragThreshold_m2116 (EventSystem_t473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_pixelDragThreshold(System.Int32)
 void EventSystem_set_pixelDragThreshold_m2117 (EventSystem_t473 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::get_currentInputModule()
 BaseInputModule_t470 * EventSystem_get_currentInputModule_m2118 (EventSystem_t473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_firstSelectedGameObject()
 GameObject_t154 * EventSystem_get_firstSelectedGameObject_m2119 (EventSystem_t473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_firstSelectedGameObject(UnityEngine.GameObject)
 void EventSystem_set_firstSelectedGameObject_m2120 (EventSystem_t473 * __this, GameObject_t154 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_currentSelectedGameObject()
 GameObject_t154 * EventSystem_get_currentSelectedGameObject_m2121 (EventSystem_t473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_lastSelectedGameObject()
 GameObject_t154 * EventSystem_get_lastSelectedGameObject_m2122 (EventSystem_t473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::UpdateModules()
 void EventSystem_UpdateModules_m2123 (EventSystem_t473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::get_alreadySelecting()
 bool EventSystem_get_alreadySelecting_m2124 (EventSystem_t473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData)
 void EventSystem_SetSelectedGameObject_m2125 (EventSystem_t473 * __this, GameObject_t154 * ___selected, BaseEventData_t471 * ___pointer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::get_baseEventDataCache()
 BaseEventData_t471 * EventSystem_get_baseEventDataCache_m2126 (EventSystem_t473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject)
 void EventSystem_SetSelectedGameObject_m2127 (EventSystem_t473 * __this, GameObject_t154 * ___selected, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.EventSystem::RaycastComparer(UnityEngine.EventSystems.RaycastResult,UnityEngine.EventSystems.RaycastResult)
 int32_t EventSystem_RaycastComparer_m2128 (Object_t * __this/* static, unused */, RaycastResult_t477  ___lhs, RaycastResult_t477  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::RaycastAll(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
 void EventSystem_RaycastAll_m2129 (EventSystem_t473 * __this, PointerEventData_t475 * ___eventData, List_1_t476 * ___raycastResults, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject()
 bool EventSystem_IsPointerOverGameObject_m2130 (EventSystem_t473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject(System.Int32)
 bool EventSystem_IsPointerOverGameObject_m2131 (EventSystem_t473 * __this, int32_t ___pointerId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::OnEnable()
 void EventSystem_OnEnable_m2132 (EventSystem_t473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::OnDisable()
 void EventSystem_OnDisable_m2133 (EventSystem_t473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::TickModules()
 void EventSystem_TickModules_m2134 (EventSystem_t473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::Update()
 void EventSystem_Update_m2135 (EventSystem_t473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::ChangeEventModule(UnityEngine.EventSystems.BaseInputModule)
 void EventSystem_ChangeEventModule_m2136 (EventSystem_t473 * __this, BaseInputModule_t470 * ___module, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.EventSystem::ToString()
 String_t* EventSystem_ToString_m2137 (EventSystem_t473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
