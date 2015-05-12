#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t459;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t456;
// UnityEngine.GameObject
struct GameObject_t140;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t457;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t461;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t462;
// System.String
struct String_t;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void UnityEngine.EventSystems.EventSystem::.ctor()
 void EventSystem__ctor_m2004 (EventSystem_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::.cctor()
 void EventSystem__cctor_m2005 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
 EventSystem_t459 * EventSystem_get_current_m2006 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_current(UnityEngine.EventSystems.EventSystem)
 void EventSystem_set_current_m2007 (Object_t * __this/* static, unused */, EventSystem_t459 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::get_sendNavigationEvents()
 bool EventSystem_get_sendNavigationEvents_m2008 (EventSystem_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_sendNavigationEvents(System.Boolean)
 void EventSystem_set_sendNavigationEvents_m2009 (EventSystem_t459 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.EventSystem::get_pixelDragThreshold()
 int32_t EventSystem_get_pixelDragThreshold_m2010 (EventSystem_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_pixelDragThreshold(System.Int32)
 void EventSystem_set_pixelDragThreshold_m2011 (EventSystem_t459 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::get_currentInputModule()
 BaseInputModule_t456 * EventSystem_get_currentInputModule_m2012 (EventSystem_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_firstSelectedGameObject()
 GameObject_t140 * EventSystem_get_firstSelectedGameObject_m2013 (EventSystem_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::set_firstSelectedGameObject(UnityEngine.GameObject)
 void EventSystem_set_firstSelectedGameObject_m2014 (EventSystem_t459 * __this, GameObject_t140 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_currentSelectedGameObject()
 GameObject_t140 * EventSystem_get_currentSelectedGameObject_m2015 (EventSystem_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::get_lastSelectedGameObject()
 GameObject_t140 * EventSystem_get_lastSelectedGameObject_m2016 (EventSystem_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::UpdateModules()
 void EventSystem_UpdateModules_m2017 (EventSystem_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::get_alreadySelecting()
 bool EventSystem_get_alreadySelecting_m2018 (EventSystem_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject,UnityEngine.EventSystems.BaseEventData)
 void EventSystem_SetSelectedGameObject_m2019 (EventSystem_t459 * __this, GameObject_t140 * ___selected, BaseEventData_t457 * ___pointer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::get_baseEventDataCache()
 BaseEventData_t457 * EventSystem_get_baseEventDataCache_m2020 (EventSystem_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::SetSelectedGameObject(UnityEngine.GameObject)
 void EventSystem_SetSelectedGameObject_m2021 (EventSystem_t459 * __this, GameObject_t140 * ___selected, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.EventSystems.EventSystem::RaycastComparer(UnityEngine.EventSystems.RaycastResult,UnityEngine.EventSystems.RaycastResult)
 int32_t EventSystem_RaycastComparer_m2022 (Object_t * __this/* static, unused */, RaycastResult_t463  ___lhs, RaycastResult_t463  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::RaycastAll(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
 void EventSystem_RaycastAll_m2023 (EventSystem_t459 * __this, PointerEventData_t461 * ___eventData, List_1_t462 * ___raycastResults, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject()
 bool EventSystem_IsPointerOverGameObject_m2024 (EventSystem_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject(System.Int32)
 bool EventSystem_IsPointerOverGameObject_m2025 (EventSystem_t459 * __this, int32_t ___pointerId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::OnEnable()
 void EventSystem_OnEnable_m2026 (EventSystem_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::OnDisable()
 void EventSystem_OnDisable_m2027 (EventSystem_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::TickModules()
 void EventSystem_TickModules_m2028 (EventSystem_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::Update()
 void EventSystem_Update_m2029 (EventSystem_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventSystem::ChangeEventModule(UnityEngine.EventSystems.BaseInputModule)
 void EventSystem_ChangeEventModule_m2030 (EventSystem_t459 * __this, BaseInputModule_t456 * ___module, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.EventSystems.EventSystem::ToString()
 String_t* EventSystem_ToString_m2031 (EventSystem_t459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
