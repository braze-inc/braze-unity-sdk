#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUI
struct GUI_t79;
// UnityEngine.GUISkin
struct GUISkin_t835;
// System.String
struct String_t;
// UnityEngine.GUIContent
struct GUIContent_t744;
// UnityEngine.GUIStyle
struct GUIStyle_t250;
// UnityEngine.TextEditor
struct TextEditor_t743;
// System.String[]
struct StringU5BU5D_t3;
// UnityEngine.GUIContent[]
struct GUIContentU5BU5D_t838;
// UnityEngine.Rect[]
struct RectU5BU5D_t839;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t834;
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
 void GUI__cctor_m4009 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime UnityEngine.GUI::get_nextScrollStepTime()
 DateTime_t837  GUI_get_nextScrollStepTime_m4010 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
 void GUI_set_nextScrollStepTime_m4011 (Object_t * __this/* static, unused */, DateTime_t837  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::get_scrollTroughSide()
 int32_t GUI_get_scrollTroughSide_m4012 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_scrollTroughSide(System.Int32)
 void GUI_set_scrollTroughSide_m4013 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
 void GUI_set_skin_m4014 (Object_t * __this/* static, unused */, GUISkin_t835 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
 GUISkin_t835 * GUI_get_skin_m4015 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::get_changed()
 bool GUI_get_changed_m1867 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
 void GUI_set_changed_m1869 (Object_t * __this/* static, unused */, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::get_enabled()
 bool GUI_get_enabled_m4016 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_tooltip(System.String)
 void GUI_set_tooltip_m4017 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Internal_SetTooltip(System.String)
 void GUI_Internal_SetTooltip_m4018 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
 void GUI_Label_m447 (Object_t * __this/* static, unused */, Rect_t78  ___position, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
 void GUI_Label_m4019 (Object_t * __this/* static, unused */, Rect_t78  ___position, GUIContent_t744 * ___content, GUIStyle_t250 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoLabel(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
 void GUI_DoLabel_m4020 (Object_t * __this/* static, unused */, Rect_t78  ___position, GUIContent_t744 * ___content, IntPtr_t107 ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DoLabel(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
 void GUI_INTERNAL_CALL_DoLabel_m4021 (Object_t * __this/* static, unused */, Rect_t78 * ___position, GUIContent_t744 * ___content, IntPtr_t107 ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
 bool GUI_Button_m445 (Object_t * __this/* static, unused */, Rect_t78  ___position, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
 bool GUI_Button_m4022 (Object_t * __this/* static, unused */, Rect_t78  ___position, GUIContent_t744 * ___content, GUIStyle_t250 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoButton(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
 bool GUI_DoButton_m4023 (Object_t * __this/* static, unused */, Rect_t78  ___position, GUIContent_t744 * ___content, IntPtr_t107 ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoButton(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
 bool GUI_INTERNAL_CALL_DoButton_m4024 (Object_t * __this/* static, unused */, Rect_t78 * ___position, GUIContent_t744 * ___content, IntPtr_t107 ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoRepeatButton(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.FocusType)
 bool GUI_DoRepeatButton_m4025 (Object_t * __this/* static, unused */, Rect_t78  ___position, GUIContent_t744 * ___content, GUIStyle_t250 * ___style, int32_t ___focusType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUI::PasswordFieldGetStrToShow(System.String,System.Char)
 String_t* GUI_PasswordFieldGetStrToShow_m4026 (Object_t * __this/* static, unused */, String_t* ___password, uint16_t ___maskChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoTextField(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,System.String,System.Char)
 void GUI_DoTextField_m4027 (Object_t * __this/* static, unused */, Rect_t78  ___position, int32_t ___id, GUIContent_t744 * ___content, bool ___multiline, int32_t ___maxLength, GUIStyle_t250 * ___style, String_t* ___secureText, uint16_t ___maskChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::HandleTextFieldEventForTouchscreen(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,System.String,System.Char,UnityEngine.TextEditor)
 void GUI_HandleTextFieldEventForTouchscreen_m4028 (Object_t * __this/* static, unused */, Rect_t78  ___position, int32_t ___id, GUIContent_t744 * ___content, bool ___multiline, int32_t ___maxLength, GUIStyle_t250 * ___style, String_t* ___secureText, uint16_t ___maskChar, TextEditor_t743 * ___editor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::SelectionGrid(UnityEngine.Rect,System.Int32,System.String[],System.Int32)
 int32_t GUI_SelectionGrid_m446 (Object_t * __this/* static, unused */, Rect_t78  ___position, int32_t ___selected, StringU5BU5D_t3* ___texts, int32_t ___xCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::SelectionGrid(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent[],System.Int32,UnityEngine.GUIStyle)
 int32_t GUI_SelectionGrid_m4029 (Object_t * __this/* static, unused */, Rect_t78  ___position, int32_t ___selected, GUIContentU5BU5D_t838* ___contents, int32_t ___xCount, GUIStyle_t250 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::CalcTotalHorizSpacing(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
 int32_t GUI_CalcTotalHorizSpacing_m4030 (Object_t * __this/* static, unused */, int32_t ___xCount, GUIStyle_t250 * ___style, GUIStyle_t250 * ___firstStyle, GUIStyle_t250 * ___midStyle, GUIStyle_t250 * ___lastStyle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::DoButtonGrid(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent[],System.Int32,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
 int32_t GUI_DoButtonGrid_m4031 (Object_t * __this/* static, unused */, Rect_t78  ___position, int32_t ___selected, GUIContentU5BU5D_t838* ___contents, int32_t ___xCount, GUIStyle_t250 * ___style, GUIStyle_t250 * ___firstStyle, GUIStyle_t250 * ___midStyle, GUIStyle_t250 * ___lastStyle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect[] UnityEngine.GUI::CalcMouseRects(UnityEngine.Rect,System.Int32,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean)
 RectU5BU5D_t839* GUI_CalcMouseRects_m4032 (Object_t * __this/* static, unused */, Rect_t78  ___position, int32_t ___count, int32_t ___xCount, float ___elemWidth, float ___elemHeight, GUIStyle_t250 * ___style, GUIStyle_t250 * ___firstStyle, GUIStyle_t250 * ___midStyle, GUIStyle_t250 * ___lastStyle, bool ___addBorders, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::GetButtonGridMouseSelection(UnityEngine.Rect[],UnityEngine.Vector2,System.Boolean)
 int32_t GUI_GetButtonGridMouseSelection_m4033 (Object_t * __this/* static, unused */, RectU5BU5D_t839* ___buttonRects, Vector2_t184  ___mousePos, bool ___findNearest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::HorizontalSlider(UnityEngine.Rect,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
 float GUI_HorizontalSlider_m4034 (Object_t * __this/* static, unused */, Rect_t78  ___position, float ___value, float ___leftValue, float ___rightValue, GUIStyle_t250 * ___slider, GUIStyle_t250 * ___thumb, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::Slider(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean,System.Int32)
 float GUI_Slider_m4035 (Object_t * __this/* static, unused */, Rect_t78  ___position, float ___value, float ___size, float ___start, float ___end, GUIStyle_t250 * ___slider, GUIStyle_t250 * ___thumb, bool ___horiz, int32_t ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::get_usePageScrollbars()
 bool GUI_get_usePageScrollbars_m4036 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::HorizontalScrollbar(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
 float GUI_HorizontalScrollbar_m4037 (Object_t * __this/* static, unused */, Rect_t78  ___position, float ___value, float ___size, float ___leftValue, float ___rightValue, GUIStyle_t250 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::InternalRepaintEditorWindow()
 void GUI_InternalRepaintEditorWindow_m4038 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::ScrollerRepeatButton(System.Int32,UnityEngine.Rect,UnityEngine.GUIStyle)
 bool GUI_ScrollerRepeatButton_m4039 (Object_t * __this/* static, unused */, int32_t ___scrollerID, Rect_t78  ___rect, GUIStyle_t250 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::VerticalScrollbar(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
 float GUI_VerticalScrollbar_m4040 (Object_t * __this/* static, unused */, Rect_t78  ___position, float ___value, float ___size, float ___topValue, float ___bottomValue, GUIStyle_t250 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::Scroller(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean)
 float GUI_Scroller_m4041 (Object_t * __this/* static, unused */, Rect_t78  ___position, float ___value, float ___size, float ___leftValue, float ___rightValue, GUIStyle_t250 * ___slider, GUIStyle_t250 * ___thumb, GUIStyle_t250 * ___leftButton, GUIStyle_t250 * ___rightButton, bool ___horiz, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUI::BeginScrollView(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Rect,System.Boolean,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
 Vector2_t184  GUI_BeginScrollView_m4042 (Object_t * __this/* static, unused */, Rect_t78  ___position, Vector2_t184  ___scrollPosition, Rect_t78  ___viewRect, bool ___alwaysShowHorizontal, bool ___alwaysShowVertical, GUIStyle_t250 * ___horizontalScrollbar, GUIStyle_t250 * ___verticalScrollbar, GUIStyle_t250 * ___background, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::EndScrollView(System.Boolean)
 void GUI_EndScrollView_m4043 (Object_t * __this/* static, unused */, bool ___handleScrollWheel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
 void GUI_CallWindowDelegate_m4044 (Object_t * __this/* static, unused */, WindowFunction_t834 * ___func, int32_t ___id, GUISkin_t835 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t250 * ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
