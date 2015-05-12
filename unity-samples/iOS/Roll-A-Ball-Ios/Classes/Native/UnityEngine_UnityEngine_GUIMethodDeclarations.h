#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUI
struct GUI_t459;
// UnityEngine.GUISkin
struct GUISkin_t848;
// UnityEngine.GUIContent
struct GUIContent_t757;
// UnityEngine.GUIStyle
struct GUIStyle_t263;
// System.String
struct String_t;
// UnityEngine.TextEditor
struct TextEditor_t756;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t847;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.FocusType
#include "UnityEngine_UnityEngine_FocusType.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.GUI::.cctor()
 void GUI__cctor_m4114 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime UnityEngine.GUI::get_nextScrollStepTime()
 DateTime_t850  GUI_get_nextScrollStepTime_m4115 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
 void GUI_set_nextScrollStepTime_m4116 (Object_t * __this/* static, unused */, DateTime_t850  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::get_scrollTroughSide()
 int32_t GUI_get_scrollTroughSide_m4117 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_scrollTroughSide(System.Int32)
 void GUI_set_scrollTroughSide_m4118 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
 void GUI_set_skin_m4119 (Object_t * __this/* static, unused */, GUISkin_t848 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
 GUISkin_t848 * GUI_get_skin_m4120 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::get_changed()
 bool GUI_get_changed_m1973 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
 void GUI_set_changed_m1975 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
 void GUI_Label_m4121 (Object_t * __this/* static, unused */, Rect_t442  ___position, GUIContent_t757 * ___content, GUIStyle_t263 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoLabel(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
 void GUI_DoLabel_m4122 (Object_t * __this/* static, unused */, Rect_t442  ___position, GUIContent_t757 * ___content, IntPtr_t120 ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DoLabel(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
 void GUI_INTERNAL_CALL_DoLabel_m4123 (Object_t * __this/* static, unused */, Rect_t442 * ___position, GUIContent_t757 * ___content, IntPtr_t120 ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
 bool GUI_Button_m4124 (Object_t * __this/* static, unused */, Rect_t442  ___position, GUIContent_t757 * ___content, GUIStyle_t263 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoButton(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
 bool GUI_DoButton_m4125 (Object_t * __this/* static, unused */, Rect_t442  ___position, GUIContent_t757 * ___content, IntPtr_t120 ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoButton(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
 bool GUI_INTERNAL_CALL_DoButton_m4126 (Object_t * __this/* static, unused */, Rect_t442 * ___position, GUIContent_t757 * ___content, IntPtr_t120 ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoRepeatButton(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.FocusType)
 bool GUI_DoRepeatButton_m4127 (Object_t * __this/* static, unused */, Rect_t442  ___position, GUIContent_t757 * ___content, GUIStyle_t263 * ___style, int32_t ___focusType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUI::PasswordFieldGetStrToShow(System.String,System.Char)
 String_t* GUI_PasswordFieldGetStrToShow_m4128 (Object_t * __this/* static, unused */, String_t* ___password, uint16_t ___maskChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoTextField(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,System.String,System.Char)
 void GUI_DoTextField_m4129 (Object_t * __this/* static, unused */, Rect_t442  ___position, int32_t ___id, GUIContent_t757 * ___content, bool ___multiline, int32_t ___maxLength, GUIStyle_t263 * ___style, String_t* ___secureText, uint16_t ___maskChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::HandleTextFieldEventForTouchscreen(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,System.String,System.Char,UnityEngine.TextEditor)
 void GUI_HandleTextFieldEventForTouchscreen_m4130 (Object_t * __this/* static, unused */, Rect_t442  ___position, int32_t ___id, GUIContent_t757 * ___content, bool ___multiline, int32_t ___maxLength, GUIStyle_t263 * ___style, String_t* ___secureText, uint16_t ___maskChar, TextEditor_t756 * ___editor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::HorizontalSlider(UnityEngine.Rect,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
 float GUI_HorizontalSlider_m4131 (Object_t * __this/* static, unused */, Rect_t442  ___position, float ___value, float ___leftValue, float ___rightValue, GUIStyle_t263 * ___slider, GUIStyle_t263 * ___thumb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::Slider(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean,System.Int32)
 float GUI_Slider_m4132 (Object_t * __this/* static, unused */, Rect_t442  ___position, float ___value, float ___size, float ___start, float ___end, GUIStyle_t263 * ___slider, GUIStyle_t263 * ___thumb, bool ___horiz, int32_t ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::get_usePageScrollbars()
 bool GUI_get_usePageScrollbars_m4133 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::HorizontalScrollbar(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
 float GUI_HorizontalScrollbar_m4134 (Object_t * __this/* static, unused */, Rect_t442  ___position, float ___value, float ___size, float ___leftValue, float ___rightValue, GUIStyle_t263 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::InternalRepaintEditorWindow()
 void GUI_InternalRepaintEditorWindow_m4135 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::ScrollerRepeatButton(System.Int32,UnityEngine.Rect,UnityEngine.GUIStyle)
 bool GUI_ScrollerRepeatButton_m4136 (Object_t * __this/* static, unused */, int32_t ___scrollerID, Rect_t442  ___rect, GUIStyle_t263 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::VerticalScrollbar(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
 float GUI_VerticalScrollbar_m4137 (Object_t * __this/* static, unused */, Rect_t442  ___position, float ___value, float ___size, float ___topValue, float ___bottomValue, GUIStyle_t263 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::Scroller(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean)
 float GUI_Scroller_m4138 (Object_t * __this/* static, unused */, Rect_t442  ___position, float ___value, float ___size, float ___leftValue, float ___rightValue, GUIStyle_t263 * ___slider, GUIStyle_t263 * ___thumb, GUIStyle_t263 * ___leftButton, GUIStyle_t263 * ___rightButton, bool ___horiz, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUI::BeginScrollView(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Rect,System.Boolean,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
 Vector2_t198  GUI_BeginScrollView_m4139 (Object_t * __this/* static, unused */, Rect_t442  ___position, Vector2_t198  ___scrollPosition, Rect_t442  ___viewRect, bool ___alwaysShowHorizontal, bool ___alwaysShowVertical, GUIStyle_t263 * ___horizontalScrollbar, GUIStyle_t263 * ___verticalScrollbar, GUIStyle_t263 * ___background, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::EndScrollView(System.Boolean)
 void GUI_EndScrollView_m4140 (Object_t * __this/* static, unused */, bool ___handleScrollWheel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
 void GUI_CallWindowDelegate_m4141 (Object_t * __this/* static, unused */, WindowFunction_t847 * ___func, int32_t ___id, GUISkin_t848 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t263 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
