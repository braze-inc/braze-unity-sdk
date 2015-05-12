#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayoutUtility
struct GUILayoutUtility_t844;
// UnityEngine.GUIStyle
struct GUIStyle_t250;
// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t842;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t343;
// System.String
struct String_t;
// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_t841;
// System.Type
struct Type_t;
// UnityEngine.GUIContent
struct GUIContent_t744;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.GUILayoutUtility::.cctor()
 void GUILayoutUtility__cctor_m4053 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::SelectIDList(System.Int32,System.Boolean)
 LayoutCache_t842 * GUILayoutUtility_SelectIDList_m4054 (Object_t * __this/* static, unused */, int32_t ___instanceID, bool ___isWindow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Begin(System.Int32)
 void GUILayoutUtility_Begin_m4055 (Object_t * __this/* static, unused */, int32_t ___instanceID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::BeginWindow(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 void GUILayoutUtility_BeginWindow_m4056 (Object_t * __this/* static, unused */, int32_t ___windowID, GUIStyle_t250 * ___style, GUILayoutOptionU5BU5D_t343* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::EndGroup(System.String)
 void GUILayoutUtility_EndGroup_m4057 (Object_t * __this/* static, unused */, String_t* ___groupName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Layout()
 void GUILayoutUtility_Layout_m4058 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutFromEditorWindow()
 void GUILayoutUtility_LayoutFromEditorWindow_m4059 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutFreeGroup(UnityEngine.GUILayoutGroup)
 void GUILayoutUtility_LayoutFreeGroup_m4060 (Object_t * __this/* static, unused */, GUILayoutGroup_t841 * ___toplevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::LayoutSingleGroup(UnityEngine.GUILayoutGroup)
 void GUILayoutUtility_LayoutSingleGroup_m4061 (Object_t * __this/* static, unused */, GUILayoutGroup_t841 * ___i, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::Internal_GetWindowRect(System.Int32)
 Rect_t78  GUILayoutUtility_Internal_GetWindowRect_m4062 (Object_t * __this/* static, unused */, int32_t ___windowID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::Internal_MoveWindow(System.Int32,UnityEngine.Rect)
 void GUILayoutUtility_Internal_MoveWindow_m4063 (Object_t * __this/* static, unused */, int32_t ___windowID, Rect_t78  ___r, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::INTERNAL_CALL_Internal_MoveWindow(System.Int32,UnityEngine.Rect&)
 void GUILayoutUtility_INTERNAL_CALL_Internal_MoveWindow_m4064 (Object_t * __this/* static, unused */, int32_t ___windowID, Rect_t78 * ___r, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility::CreateGUILayoutGroupInstanceOfType(System.Type)
 GUILayoutGroup_t841 * GUILayoutUtility_CreateGUILayoutGroupInstanceOfType_m4065 (Object_t * __this/* static, unused */, Type_t * ___LayoutType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility::BeginLayoutGroup(UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[],System.Type)
 GUILayoutGroup_t841 * GUILayoutUtility_BeginLayoutGroup_m4066 (Object_t * __this/* static, unused */, GUIStyle_t250 * ___style, GUILayoutOptionU5BU5D_t343* ___options, Type_t * ___LayoutType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayoutUtility::EndLayoutGroup()
 void GUILayoutUtility_EndLayoutGroup_m4067 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::GetRect(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 Rect_t78  GUILayoutUtility_GetRect_m4068 (Object_t * __this/* static, unused */, GUIContent_t744 * ___content, GUIStyle_t250 * ___style, GUILayoutOptionU5BU5D_t343* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayoutUtility::DoGetRect(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 Rect_t78  GUILayoutUtility_DoGetRect_m4069 (Object_t * __this/* static, unused */, GUIContent_t744 * ___content, GUIStyle_t250 * ___style, GUILayoutOptionU5BU5D_t343* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUILayoutUtility::get_spaceStyle()
 GUIStyle_t250 * GUILayoutUtility_get_spaceStyle_m4070 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
