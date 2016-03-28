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

// UnityEngine.EventSystems.PointerInputModule/ButtonState
struct ButtonState_t4192339039;
// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData
struct MouseButtonEventData_t3739491085;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerInp3739491085.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEven876188540.h"

// System.Void UnityEngine.EventSystems.PointerInputModule/ButtonState::.ctor()
extern "C"  void ButtonState__ctor_m858021496 (ButtonState_t4192339039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData UnityEngine.EventSystems.PointerInputModule/ButtonState::get_eventData()
extern "C"  MouseButtonEventData_t3739491085 * ButtonState_get_eventData_m3874795698 (ButtonState_t4192339039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule/ButtonState::set_eventData(UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData)
extern "C"  void ButtonState_set_eventData_m471696551 (ButtonState_t4192339039 * __this, MouseButtonEventData_t3739491085 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerInputModule/ButtonState::get_button()
extern "C"  int32_t ButtonState_get_button_m3169210133 (ButtonState_t4192339039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule/ButtonState::set_button(UnityEngine.EventSystems.PointerEventData/InputButton)
extern "C"  void ButtonState_set_button_m2005500214 (ButtonState_t4192339039 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
