#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayoutUtility
struct GUILayoutUtility_t855;
// UnityEngine.GUIStyle
struct GUIStyle_t263;
// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t853;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t355;
// System.String
struct String_t;
// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_t852;
// System.Type
struct Type_t;
// UnityEngine.GUIContent
struct GUIContent_t757;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.GUILayoutUtility::.cctor()
 void GUILayoutUtility__cctor_m4150 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::SelectIDList(System.Int32,System.Boolean)
 LayoutCache_t853 * GUILayoutUtility_SelectIDList_m4151 (Object_t * __this/* static, unused */, int32_t ___instanceID, bool ___isWindow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Begin(System.Int32)
 void GUILayoutUtility_Begin_m4152 (Object_t * __this/* static, unused */, int32_t ___instanceID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::BeginWindow(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 void GUILayoutUtility_BeginWindow_m4153 (Object_t * __this/* static, unused */, int32_t ___windowID, GUIStyle_t263 * ___style, GUILayoutOptionU5BU5D_t355* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::EndGroup(System.String)
 void GUILayoutUtility_EndGroup_m4154 (Object_t * __this/* static, unused */, String_t* ___groupName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Layout()
 void GUILayoutUtility_Layout_m4155 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutFromEditorWindow()
 void GUILayoutUtility_LayoutFromEditorWindow_m4156 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutFreeGroup(UnityEngine.GUILayoutGroup)
 void GUILayoutUtility_LayoutFreeGroup_m4157 (Object_t * __this/* static, unused */, GUILayoutGroup_t852 * ___toplevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutSingleGroup(UnityEngine.GUILayoutGroup)
 void GUILayoutUtility_LayoutSingleGroup_m4158 (Object_t * __this/* static, unused */, GUILayoutGroup_t852 * ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)
 Rect_t442  GUILayoutUtility_Internal_GetWindowRect_m4159 (Object_t * __this/* static, unused */, int32_t ___windowID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow(System.Int32,UnityEngine.Rect)
 void GUILayoutUtility_Internal_MoveWindow_m4160 (Object_t * __this/* static, unused */, int32_t ___windowID, Rect_t442  ___r, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::INTERNAL_CALL_Internal_MoveWindow(System.Int32,UnityEngine.Rect&)
 void GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m4161 (Object_t * __this/* static, unused */, int32_t ___windowID, Rect_t442 * ___r, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility::CreateGUILayoutGroupInstanceOfType(System.Type)
 GUILayoutGroup_t852 * GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m4162 (Object_t * __this/* static, unused */, Type_t * ___LayoutType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility::BeginLayoutGroup(UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[],System.Type)
 GUILayoutGroup_t852 * GUILayoutUtility_BeginLayoutGroup_m4163 (Object_t * __this/* static, unused */, GUIStyle_t263 * ___style, GUILayoutOptionU5BU5D_t355* ___options, Type_t * ___LayoutType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::EndLayoutGroup()
 void GUILayoutUtility_EndLayoutGroup_m4164 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::GetRect(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 Rect_t442  GUILayoutUtility_GetRect_m4165 (Object_t * __this/* static, unused */, GUIContent_t757 * ___content, GUIStyle_t263 * ___style, GUILayoutOptionU5BU5D_t355* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::DoGetRect(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 Rect_t442  GUILayoutUtility_DoGetRect_m4166 (Object_t * __this/* static, unused */, GUIContent_t757 * ___content, GUIStyle_t263 * ___style, GUILayoutOptionU5BU5D_t355* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUILayoutUtility::get_spaceStyle()
 GUIStyle_t263 * GUILayoutUtility_get_spaceStyle_m4167 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
