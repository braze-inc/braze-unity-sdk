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
struct Button_t492;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t489;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t465;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t428;
// System.Collections.IEnumerator
struct IEnumerator_t66;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.Button::.ctor()
extern "C" void Button__ctor_m2079 (Button_t492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C" ButtonClickedEvent_t489 * Button_get_onClick_m2080 (Button_t492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::set_onClick(UnityEngine.UI.Button/ButtonClickedEvent)
extern "C" void Button_set_onClick_m2081 (Button_t492 * __this, ButtonClickedEvent_t489 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::Press()
extern "C" void Button_Press_m2082 (Button_t492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void Button_OnPointerClick_m2083 (Button_t492 * __this, PointerEventData_t465 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void Button_OnSubmit_m2084 (Button_t492 * __this, BaseEventData_t428 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Button::OnFinishSubmit()
extern "C" Object_t * Button_OnFinishSubmit_m2085 (Button_t492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
