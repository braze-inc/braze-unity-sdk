#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayout
struct GUILayout_t840;
// System.String
struct String_t;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t343;
// UnityEngine.GUIStyle
struct GUIStyle_t250;
// UnityEngine.GUIContent
struct GUIContent_t744;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t344;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
 void GUILayout_Label_m1865 (Object_t * __this/* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t343* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 void GUILayout_Label_m1480 (Object_t * __this/* static, unused */, String_t* ___text, GUIStyle_t250 * ___style, GUILayoutOptionU5BU5D_t343* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::DoLabel(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 void GUILayout_DoLabel_m4045 (Object_t * __this/* static, unused */, GUIContent_t744 * ___content, GUIStyle_t250 * ___style, GUILayoutOptionU5BU5D_t343* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
 bool GUILayout_Button_m1496 (Object_t * __this/* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t343* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::DoButton(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 bool GUILayout_DoButton_m4046 (Object_t * __this/* static, unused */, GUIContent_t744 * ___content, GUIStyle_t250 * ___style, GUILayoutOptionU5BU5D_t343* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayout::TextArea(System.String,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 String_t* GUILayout_TextArea_m1494 (Object_t * __this/* static, unused */, String_t* ___text, GUIStyle_t250 * ___style, GUILayoutOptionU5BU5D_t343* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayout::DoTextField(System.String,System.Int32,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 String_t* GUILayout_DoTextField_m4047 (Object_t * __this/* static, unused */, String_t* ___text, int32_t ___maxLength, bool ___multiline, GUIStyle_t250 * ___style, GUILayoutOptionU5BU5D_t343* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUILayout::HorizontalSlider(System.Single,System.Single,System.Single,UnityEngine.GUILayoutOption[])
 float GUILayout_HorizontalSlider_m1866 (Object_t * __this/* static, unused */, float ___value, float ___leftValue, float ___rightValue, GUILayoutOptionU5BU5D_t343* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUILayout::DoHorizontalSlider(System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 float GUILayout_DoHorizontalSlider_m4048 (Object_t * __this/* static, unused */, float ___value, float ___leftValue, float ___rightValue, GUIStyle_t250 * ___slider, GUIStyle_t250 * ___thumb, GUILayoutOptionU5BU5D_t343* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUILayout::BeginScrollView(UnityEngine.Vector2,UnityEngine.GUILayoutOption[])
 Vector2_t184  GUILayout_BeginScrollView_m1484 (Object_t * __this/* static, unused */, Vector2_t184  ___scrollPosition, GUILayoutOptionU5BU5D_t343* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUILayout::BeginScrollView(UnityEngine.Vector2,System.Boolean,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
 Vector2_t184  GUILayout_BeginScrollView_m4049 (Object_t * __this/* static, unused */, Vector2_t184  ___scrollPosition, bool ___alwaysShowHorizontal, bool ___alwaysShowVertical, GUIStyle_t250 * ___horizontalScrollbar, GUIStyle_t250 * ___verticalScrollbar, GUIStyle_t250 * ___background, GUILayoutOptionU5BU5D_t343* ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndScrollView()
 void GUILayout_EndScrollView_m1495 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndScrollView(System.Boolean)
 void GUILayout_EndScrollView_m4050 (Object_t * __this/* static, unused */, bool ___handleScrollWheel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
 GUILayoutOption_t344 * GUILayout_Width_m1479 (Object_t * __this/* static, unused */, float ___width, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
 GUILayoutOption_t344 * GUILayout_Height_m4051 (Object_t * __this/* static, unused */, float ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::ExpandWidth(System.Boolean)
 GUILayoutOption_t344 * GUILayout_ExpandWidth_m1483 (Object_t * __this/* static, unused */, bool ___expand, MethodInfo* method) IL2CPP_METHOD_ATTR;
