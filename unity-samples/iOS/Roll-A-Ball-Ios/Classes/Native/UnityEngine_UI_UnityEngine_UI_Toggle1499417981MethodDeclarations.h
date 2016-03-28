#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.UI.Toggle
struct Toggle_t1499417981;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t4283993460;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t3205101634;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t3547103726;
// UnityEngine.Transform
struct Transform_t284553113;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_ToggleGroup4283993460.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate941568618.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve3205101634.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseEventD3547103726.h"

// System.Void UnityEngine.UI.Toggle::.ctor()
extern "C"  void Toggle__ctor_m4173251063 (Toggle_t1499417981 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::get_group()
extern "C"  ToggleGroup_t4283993460 * Toggle_get_group_m514230010 (Toggle_t1499417981 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::set_group(UnityEngine.UI.ToggleGroup)
extern "C"  void Toggle_set_group_m4294827183 (Toggle_t1499417981 * __this, ToggleGroup_t4283993460 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C"  void Toggle_Rebuild_m1120034174 (Toggle_t1499417981 * __this, int32_t ___executing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::LayoutComplete()
extern "C"  void Toggle_LayoutComplete_m3030592304 (Toggle_t1499417981 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::GraphicUpdateComplete()
extern "C"  void Toggle_GraphicUpdateComplete_m1104468671 (Toggle_t1499417981 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::OnEnable()
extern "C"  void Toggle_OnEnable_m975679023 (Toggle_t1499417981 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::OnDisable()
extern "C"  void Toggle_OnDisable_m622215902 (Toggle_t1499417981 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::OnDidApplyAnimationProperties()
extern "C"  void Toggle_OnDidApplyAnimationProperties_m3936866462 (Toggle_t1499417981 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::SetToggleGroup(UnityEngine.UI.ToggleGroup,System.Boolean)
extern "C"  void Toggle_SetToggleGroup_m4196871663 (Toggle_t1499417981 * __this, ToggleGroup_t4283993460 * ___newGroup, bool ___setMemberValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
extern "C"  bool Toggle_get_isOn_m2105608497 (Toggle_t1499417981 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
extern "C"  void Toggle_set_isOn_m3467664234 (Toggle_t1499417981 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::Set(System.Boolean)
extern "C"  void Toggle_Set_m1284620590 (Toggle_t1499417981 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::Set(System.Boolean,System.Boolean)
extern "C"  void Toggle_Set_m1795838095 (Toggle_t1499417981 * __this, bool ___value, bool ___sendCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::PlayEffect(System.Boolean)
extern "C"  void Toggle_PlayEffect_m2897367561 (Toggle_t1499417981 * __this, bool ___instant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::Start()
extern "C"  void Toggle_Start_m3120388855 (Toggle_t1499417981 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::InternalToggle()
extern "C"  void Toggle_InternalToggle_m3534245278 (Toggle_t1499417981 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Toggle_OnPointerClick_m3273211815 (Toggle_t1499417981 * __this, PointerEventData_t3205101634 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Toggle::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C"  void Toggle_OnSubmit_m2658606814 (Toggle_t1499417981 * __this, BaseEventData_t3547103726 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Toggle::UnityEngine.UI.ICanvasElement.IsDestroyed()
extern "C"  bool Toggle_UnityEngine_UI_ICanvasElement_IsDestroyed_m3606481250 (Toggle_t1499417981 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.Toggle::UnityEngine.UI.ICanvasElement.get_transform()
extern "C"  Transform_t284553113 * Toggle_UnityEngine_UI_ICanvasElement_get_transform_m4001149958 (Toggle_t1499417981 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
