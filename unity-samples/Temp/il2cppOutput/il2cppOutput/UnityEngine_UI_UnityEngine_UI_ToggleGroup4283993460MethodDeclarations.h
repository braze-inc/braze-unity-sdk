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

// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t4283993460;
// UnityEngine.UI.Toggle
struct Toggle_t1499417981;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Toggle>
struct IEnumerable_1_t76605041;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_Toggle1499417981.h"

// System.Void UnityEngine.UI.ToggleGroup::.ctor()
extern "C"  void ToggleGroup__ctor_m1179503632 (ToggleGroup_t4283993460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ToggleGroup::get_allowSwitchOff()
extern "C"  bool ToggleGroup_get_allowSwitchOff_m1895769533 (ToggleGroup_t4283993460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::set_allowSwitchOff(System.Boolean)
extern "C"  void ToggleGroup_set_allowSwitchOff_m2429094938 (ToggleGroup_t4283993460 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::ValidateToggleIsInGroup(UnityEngine.UI.Toggle)
extern "C"  void ToggleGroup_ValidateToggleIsInGroup_m1953593831 (ToggleGroup_t4283993460 * __this, Toggle_t1499417981 * ___toggle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::NotifyToggleOn(UnityEngine.UI.Toggle)
extern "C"  void ToggleGroup_NotifyToggleOn_m2022309259 (ToggleGroup_t4283993460 * __this, Toggle_t1499417981 * ___toggle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::UnregisterToggle(UnityEngine.UI.Toggle)
extern "C"  void ToggleGroup_UnregisterToggle_m451307479 (ToggleGroup_t4283993460 * __this, Toggle_t1499417981 * ___toggle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::RegisterToggle(UnityEngine.UI.Toggle)
extern "C"  void ToggleGroup_RegisterToggle_m2622505488 (ToggleGroup_t4283993460 * __this, Toggle_t1499417981 * ___toggle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ToggleGroup::AnyTogglesOn()
extern "C"  bool ToggleGroup_AnyTogglesOn_m401060308 (ToggleGroup_t4283993460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Toggle> UnityEngine.UI.ToggleGroup::ActiveToggles()
extern "C"  Il2CppObject* ToggleGroup_ActiveToggles_m1762871396 (ToggleGroup_t4283993460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ToggleGroup::SetAllTogglesOff()
extern "C"  void ToggleGroup_SetAllTogglesOff_m4240216963 (ToggleGroup_t4283993460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ToggleGroup::<AnyTogglesOn>m__4(UnityEngine.UI.Toggle)
extern "C"  bool ToggleGroup_U3CAnyTogglesOnU3Em__4_m3428369122 (Il2CppObject * __this /* static, unused */, Toggle_t1499417981 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ToggleGroup::<ActiveToggles>m__5(UnityEngine.UI.Toggle)
extern "C"  bool ToggleGroup_U3CActiveTogglesU3Em__5_m3656404306 (Il2CppObject * __this /* static, unused */, Toggle_t1499417981 * ___x0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
