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

// UnityEngine.UI.Button
struct Button_t990034267;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t962981669;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t3205101634;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t3547103726;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_Button_ButtonClickedE962981669.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve3205101634.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseEventD3547103726.h"

// System.Void UnityEngine.UI.Button::.ctor()
extern "C"  void Button__ctor_m3363033049 (Button_t990034267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C"  ButtonClickedEvent_t962981669 * Button_get_onClick_m1145127631 (Button_t990034267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::set_onClick(UnityEngine.UI.Button/ButtonClickedEvent)
extern "C"  void Button_set_onClick_m2495243460 (Button_t990034267 * __this, ButtonClickedEvent_t962981669 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::Press()
extern "C"  void Button_Press_m3889091706 (Button_t990034267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Button_OnPointerClick_m2363576585 (Button_t990034267 * __this, PointerEventData_t3205101634 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C"  void Button_OnSubmit_m3916273468 (Button_t990034267 * __this, BaseEventData_t3547103726 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Button::OnFinishSubmit()
extern "C"  Il2CppObject * Button_OnFinishSubmit_m46760755 (Button_t990034267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
