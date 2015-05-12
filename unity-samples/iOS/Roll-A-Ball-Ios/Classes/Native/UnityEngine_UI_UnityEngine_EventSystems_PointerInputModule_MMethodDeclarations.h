#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_t537;
// UnityEngine.EventSystems.PointerInputModule/ButtonState
struct ButtonState_t535;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t475;
// UnityEngine.EventSystems.PointerEventData/InputButton
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventData_Inp.h"
// UnityEngine.EventSystems.PointerEventData/FramePressState
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventData_Fra.h"

// System.Void UnityEngine.EventSystems.PointerInputModule/MouseState::.ctor()
 void MouseState__ctor_m2298 (MouseState_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerInputModule/MouseState::AnyPressesThisFrame()
 bool MouseState_AnyPressesThisFrame_m2299 (MouseState_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.PointerInputModule/MouseState::AnyReleasesThisFrame()
 bool MouseState_AnyReleasesThisFrame_m2300 (MouseState_t537 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.PointerInputModule/ButtonState UnityEngine.EventSystems.PointerInputModule/MouseState::GetButtonState(UnityEngine.EventSystems.PointerEventData/InputButton)
 ButtonState_t535 * MouseState_GetButtonState_m2301 (MouseState_t537 * __this, int32_t ___button, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.PointerInputModule/MouseState::SetButtonState(UnityEngine.EventSystems.PointerEventData/InputButton,UnityEngine.EventSystems.PointerEventData/FramePressState,UnityEngine.EventSystems.PointerEventData)
 void MouseState_SetButtonState_m2302 (MouseState_t537 * __this, int32_t ___button, int32_t ___stateForMouseButton, PointerEventData_t475 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
