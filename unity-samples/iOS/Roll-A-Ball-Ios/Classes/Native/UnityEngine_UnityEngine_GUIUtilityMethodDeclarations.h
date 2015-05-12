#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUIUtility
struct GUIUtility_t863;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// UnityEngine.GUISkin
struct GUISkin_t848;
// System.Exception
struct Exception_t82;
// UnityEngine.FocusType
#include "UnityEngine_UnityEngine_FocusType.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.GUIUtility::.cctor()
 void GUIUtility__cctor_m4202 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::GetControlID(UnityEngine.FocusType)
 int32_t GUIUtility_GetControlID_m4203 (Object_t * __this/* static, unused */, int32_t ___focus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::GetControlID(System.Int32,UnityEngine.FocusType)
 int32_t GUIUtility_GetControlID_m4204 (Object_t * __this/* static, unused */, int32_t ___hint, int32_t ___focus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::GetControlID(System.Int32,UnityEngine.FocusType,UnityEngine.Rect)
 int32_t GUIUtility_GetControlID_m4205 (Object_t * __this/* static, unused */, int32_t ___hint, int32_t ___focus, Rect_t442  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::Internal_GetNextControlID2(System.Int32,UnityEngine.FocusType,UnityEngine.Rect)
 int32_t GUIUtility_Internal_GetNextControlID2_m4206 (Object_t * __this/* static, unused */, int32_t ___hint, int32_t ___focusType, Rect_t442  ___rect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::INTERNAL_CALL_Internal_GetNextControlID2(System.Int32,UnityEngine.FocusType,UnityEngine.Rect&)
 int32_t GUIUtility_INTERNAL_CALL_Internal_GetNextControlID2_m4207 (Object_t * __this/* static, unused */, int32_t ___hint, int32_t ___focusType, Rect_t442 * ___rect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object UnityEngine.GUIUtility::GetStateObject(System.Type,System.Int32)
 Object_t * GUIUtility_GetStateObject_m4208 (Object_t * __this/* static, unused */, Type_t * ___t, int32_t ___controlID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::get_hotControl()
 int32_t GUIUtility_get_hotControl_m4209 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::set_hotControl(System.Int32)
 void GUIUtility_set_hotControl_m4210 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::Internal_GetHotControl()
 int32_t GUIUtility_Internal_GetHotControl_m4211 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::Internal_SetHotControl(System.Int32)
 void GUIUtility_Internal_SetHotControl_m4212 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::get_keyboardControl()
 int32_t GUIUtility_get_keyboardControl_m4213 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::set_keyboardControl(System.Int32)
 void GUIUtility_set_keyboardControl_m4214 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIUtility::get_systemCopyBuffer()
 String_t* GUIUtility_get_systemCopyBuffer_m4215 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::set_systemCopyBuffer(System.String)
 void GUIUtility_set_systemCopyBuffer_m4216 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUIUtility::GetDefaultSkin()
 GUISkin_t848 * GUIUtility_GetDefaultSkin_m4217 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUIUtility::Internal_GetDefaultSkin(System.Int32)
 GUISkin_t848 * GUIUtility_Internal_GetDefaultSkin_m4218 (Object_t * __this/* static, unused */, int32_t ___skinMode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::BeginGUI(System.Int32,System.Int32,System.Int32)
 void GUIUtility_BeginGUI_m4219 (Object_t * __this/* static, unused */, int32_t ___skinMode, int32_t ___instanceID, int32_t ___useGUILayout, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::Internal_ExitGUI()
 void GUIUtility_Internal_ExitGUI_m4220 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::EndGUI(System.Int32)
 void GUIUtility_EndGUI_m4221 (Object_t * __this/* static, unused */, int32_t ___layoutType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIUtility::EndGUIFromException(System.Exception)
 bool GUIUtility_EndGUIFromException_m4222 (Object_t * __this/* static, unused */, Exception_t82 * ___exception, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIUtility::CheckOnGUI()
 void GUIUtility_CheckOnGUI_m4223 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIUtility::Internal_GetGUIDepth()
 int32_t GUIUtility_Internal_GetGUIDepth_m4224 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
