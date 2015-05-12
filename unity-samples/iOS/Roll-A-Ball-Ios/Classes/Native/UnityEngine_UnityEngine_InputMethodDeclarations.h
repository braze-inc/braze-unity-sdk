#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Input
struct Input_t449;
// System.String
struct String_t;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.IMECompositionMode
#include "UnityEngine_UnityEngine_IMECompositionMode.h"
// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"

// System.Void UnityEngine.Input::.cctor()
 void Input__cctor_m4537 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyInt(System.Int32)
 bool Input_GetKeyInt_m4538 (Object_t * __this/* static, unused */, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
 float Input_GetAxisRaw_m3320 (Object_t * __this/* static, unused */, String_t* ___axisName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
 bool Input_GetButtonDown_m3319 (Object_t * __this/* static, unused */, String_t* ___buttonName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
 bool Input_GetKey_m1991 (Object_t * __this/* static, unused */, int32_t ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
 bool Input_GetMouseButton_m3337 (Object_t * __this/* static, unused */, int32_t ___button, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
 bool Input_GetMouseButtonDown_m3298 (Object_t * __this/* static, unused */, int32_t ___button, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
 bool Input_GetMouseButtonUp_m3299 (Object_t * __this/* static, unused */, int32_t ___button, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
 Vector3_t188  Input_get_mousePosition_m1987 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta()
 Vector2_t184  Input_get_mouseScrollDelta_m3301 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::get_mousePresent()
 bool Input_get_mousePresent_m3318 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
 Touch_t451  Input_GetTouch_m1965 (Object_t * __this/* static, unused */, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Input::get_touchCount()
 int32_t Input_get_touchCount_m1964 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::get_touchSupported()
 bool Input_get_touchSupported_m3336 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Input::set_imeCompositionMode(UnityEngine.IMECompositionMode)
 void Input_set_imeCompositionMode_m3639 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Input::get_compositionString()
 String_t* Input_get_compositionString_m3565 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Input::INTERNAL_set_compositionCursorPos(UnityEngine.Vector2&)
 void Input_INTERNAL_set_compositionCursorPos_m4539 (Object_t * __this/* static, unused */, Vector2_t184 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Input::set_compositionCursorPos(UnityEngine.Vector2)
 void Input_set_compositionCursorPos_m3628 (Object_t * __this/* static, unused */, Vector2_t184  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
