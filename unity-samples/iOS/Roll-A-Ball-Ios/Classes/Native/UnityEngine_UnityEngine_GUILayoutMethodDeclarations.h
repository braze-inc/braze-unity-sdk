#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayout
struct GUILayout_t851;
// System.String
struct String_t;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t355;
// UnityEngine.GUIStyle
struct GUIStyle_t263;
// UnityEngine.GUIContent
struct GUIContent_t757;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t356;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
 void GUILayout_Label_m1971 (Object_t * __this/* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t355* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 void GUILayout_Label_m1586 (Object_t * __this/* static, unused */, String_t* ___text, GUIStyle_t263 * ___style, GUILayoutOptionU5BU5D_t355* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::DoLabel(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 void GUILayout_DoLabel_m4142 (Object_t * __this/* static, unused */, GUIContent_t757 * ___content, GUIStyle_t263 * ___style, GUILayoutOptionU5BU5D_t355* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
 bool GUILayout_Button_m1602 (Object_t * __this/* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t355* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::DoButton(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 bool GUILayout_DoButton_m4143 (Object_t * __this/* static, unused */, GUIContent_t757 * ___content, GUIStyle_t263 * ___style, GUILayoutOptionU5BU5D_t355* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayout::TextArea(System.String,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 String_t* GUILayout_TextArea_m1600 (Object_t * __this/* static, unused */, String_t* ___text, GUIStyle_t263 * ___style, GUILayoutOptionU5BU5D_t355* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayout::DoTextField(System.String,System.Int32,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 String_t* GUILayout_DoTextField_m4144 (Object_t * __this/* static, unused */, String_t* ___text, int32_t ___maxLength, bool ___multiline, GUIStyle_t263 * ___style, GUILayoutOptionU5BU5D_t355* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUILayout::HorizontalSlider(System.Single,System.Single,System.Single,UnityEngine.GUILayoutOption[])
 float GUILayout_HorizontalSlider_m1972 (Object_t * __this/* static, unused */, float ___value, float ___leftValue, float ___rightValue, GUILayoutOptionU5BU5D_t355* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUILayout::DoHorizontalSlider(System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 float GUILayout_DoHorizontalSlider_m4145 (Object_t * __this/* static, unused */, float ___value, float ___leftValue, float ___rightValue, GUIStyle_t263 * ___slider, GUIStyle_t263 * ___thumb, GUILayoutOptionU5BU5D_t355* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUILayout::BeginScrollView(UnityEngine.Vector2,UnityEngine.GUILayoutOption[])
 Vector2_t198  GUILayout_BeginScrollView_m1590 (Object_t * __this/* static, unused */, Vector2_t198  ___scrollPosition, GUILayoutOptionU5BU5D_t355* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUILayout::BeginScrollView(UnityEngine.Vector2,System.Boolean,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 Vector2_t198  GUILayout_BeginScrollView_m4146 (Object_t * __this/* static, unused */, Vector2_t198  ___scrollPosition, bool ___alwaysShowHorizontal, bool ___alwaysShowVertical, GUIStyle_t263 * ___horizontalScrollbar, GUIStyle_t263 * ___verticalScrollbar, GUIStyle_t263 * ___background, GUILayoutOptionU5BU5D_t355* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndScrollView()
 void GUILayout_EndScrollView_m1601 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndScrollView(System.Boolean)
 void GUILayout_EndScrollView_m4147 (Object_t * __this/* static, unused */, bool ___handleScrollWheel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
 GUILayoutOption_t356 * GUILayout_Width_m1585 (Object_t * __this/* static, unused */, float ___width, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
 GUILayoutOption_t356 * GUILayout_Height_m4148 (Object_t * __this/* static, unused */, float ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::ExpandWidth(System.Boolean)
 GUILayoutOption_t356 * GUILayout_ExpandWidth_m1589 (Object_t * __this/* static, unused */, bool ___expand, MethodInfo* method) IL2CPP_METHOD_ATTR;
