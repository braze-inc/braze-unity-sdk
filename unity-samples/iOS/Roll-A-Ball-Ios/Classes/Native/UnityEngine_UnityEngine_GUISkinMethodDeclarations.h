#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUISkin
struct GUISkin_t835;
// UnityEngine.Font
struct Font_t553;
// UnityEngine.GUIStyle
struct GUIStyle_t250;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t856;
// UnityEngine.GUISettings
struct GUISettings_t854;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t21;

// System.Void UnityEngine.GUISkin::.ctor()
 void GUISkin__ctor_m4138 (GUISkin_t835 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::OnEnable()
 void GUISkin_OnEnable_m4139 (GUISkin_t835 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.GUISkin::get_font()
 Font_t553 * GUISkin_get_font_m4140 (GUISkin_t835 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_font(UnityEngine.Font)
 void GUISkin_set_font_m4141 (GUISkin_t835 * __this, Font_t553 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_box()
 GUIStyle_t250 * GUISkin_get_box_m4142 (GUISkin_t835 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_box(UnityEngine.GUIStyle)
 void GUISkin_set_box_m4143 (GUISkin_t835 * __this, GUIStyle_t250 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_label()
 GUIStyle_t250 * GUISkin_get_label_m4144 (GUISkin_t835 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_label(UnityEngine.GUIStyle)
 void GUISkin_set_label_m4145 (GUISkin_t835 * __this, GUIStyle_t250 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textField()
 GUIStyle_t250 * GUISkin_get_textField_m4146 (GUISkin_t835 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_textField(UnityEngine.GUIStyle)
 void GUISkin_set_textField_m4147 (GUISkin_t835 * __this, GUIStyle_t250 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textArea()
 GUIStyle_t250 * GUISkin_get_textArea_m4148 (GUISkin_t835 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_textArea(UnityEngine.GUIStyle)
 void GUISkin_set_textArea_m4149 (GUISkin_t835 * __this, GUIStyle_t250 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_button()
 GUIStyle_t250 * GUISkin_get_button_m4150 (GUISkin_t835 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_button(UnityEngine.GUIStyle)
 void GUISkin_set_button_m4151 (GUISkin_t835 * __this, GUIStyle_t250 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_toggle()
 GUIStyle_t250 * GUISkin_get_toggle_m4152 (GUISkin_t835 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_toggle(UnityEngine.GUIStyle)
 void GUISkin_set_toggle_m4153 (GUISkin_t835 * __this, GUIStyle_t250 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_window()
 GUIStyle_t250 * GUISkin_get_window_m4154 (GUISkin_t835 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_window(UnityEngine.GUIStyle)
 void GUISkin_set_window_m4155 (GUISkin_t835 * __this, GUIStyle_t250 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSlider()
 GUIStyle_t250 * GUISkin_get_horizontalSlider_m4156 (GUISkin_t835 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalSlider(UnityEngine.GUIStyle)
 void GUISkin_set_horizontalSlider_m4157 (GUISkin_t835 * __this, GUIStyle_t250 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSliderThumb()
 GUIStyle_t250 * GUISkin_get_horizontalSliderThumb_m4158 (GUISkin_t835 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalSliderThumb(UnityEngine.GUIStyle)
 void GUISkin_set_horizontalSliderThumb_m4159 (GUISkin_t835 * __this, GUIStyle_t250 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalSlider()
 GUIStyle_t250 * GUISkin_get_verticalSlider_m4160 (GUISkin_t835 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalSlider(UnityEngine.GUIStyle)
 void GUISkin_set_verticalSlider_m4161 (GUISkin_t835 * __this, GUIStyle_t250 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalSliderThumb()
 GUIStyle_t250 * GUISkin_get_verticalSliderThumb_m4162 (GUISkin_t835 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalSliderThumb(UnityEngine.GUIStyle)
 void GUISkin_set_verticalSliderThumb_m4163 (GUISkin_t835 * __this, GUIStyle_t250 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbar()
 GUIStyle_t250 * GUISkin_get_horizontalScrollbar_m4164 (GUISkin_t835 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalScrollbar(UnityEngine.GUIStyle)
 void GUISkin_set_horizontalScrollbar_m4165 (GUISkin_t835 * __this, GUIStyle_t250 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarThumb()
 GUIStyle_t250 * GUISkin_get_horizontalScrollbarThumb_m4166 (GUISkin_t835 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarThumb(UnityEngine.GUIStyle)
 void GUISkin_set_horizontalScrollbarThumb_m4167 (GUISkin_t835 * __this, GUIStyle_t250 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarLeftButton()
 GUIStyle_t250 * GUISkin_get_horizontalScrollbarLeftButton_m4168 (GUISkin_t835 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarLeftButton(UnityEngine.GUIStyle)
 void GUISkin_set_horizontalScrollbarLeftButton_m4169 (GUISkin_t835 * __this, GUIStyle_t250 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarRightButton()
 GUIStyle_t250 * GUISkin_get_horizontalScrollbarRightButton_m4170 (GUISkin_t835 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarRightButton(UnityEngine.GUIStyle)
 void GUISkin_set_horizontalScrollbarRightButton_m4171 (GUISkin_t835 * __this, GUIStyle_t250 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbar()
 GUIStyle_t250 * GUISkin_get_verticalScrollbar_m4172 (GUISkin_t835 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalScrollbar(UnityEngine.GUIStyle)
 void GUISkin_set_verticalScrollbar_m4173 (GUISkin_t835 * __this, GUIStyle_t250 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarThumb()
 GUIStyle_t250 * GUISkin_get_verticalScrollbarThumb_m4174 (GUISkin_t835 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalScrollbarThumb(UnityEngine.GUIStyle)
 void GUISkin_set_verticalScrollbarThumb_m4175 (GUISkin_t835 * __this, GUIStyle_t250 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarUpButton()
 GUIStyle_t250 * GUISkin_get_verticalScrollbarUpButton_m4176 (GUISkin_t835 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalScrollbarUpButton(UnityEngine.GUIStyle)
 void GUISkin_set_verticalScrollbarUpButton_m4177 (GUISkin_t835 * __this, GUIStyle_t250 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarDownButton()
 GUIStyle_t250 * GUISkin_get_verticalScrollbarDownButton_m4178 (GUISkin_t835 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalScrollbarDownButton(UnityEngine.GUIStyle)
 void GUISkin_set_verticalScrollbarDownButton_m4179 (GUISkin_t835 * __this, GUIStyle_t250 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_scrollView()
 GUIStyle_t250 * GUISkin_get_scrollView_m4180 (GUISkin_t835 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_scrollView(UnityEngine.GUIStyle)
 void GUISkin_set_scrollView_m4181 (GUISkin_t835 * __this, GUIStyle_t250 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle[] UnityEngine.GUISkin::get_customStyles()
 GUIStyleU5BU5D_t856* GUISkin_get_customStyles_m4182 (GUISkin_t835 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_customStyles(UnityEngine.GUIStyle[])
 void GUISkin_set_customStyles_m4183 (GUISkin_t835 * __this, GUIStyleU5BU5D_t856* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISettings UnityEngine.GUISkin::get_settings()
 GUISettings_t854 * GUISkin_get_settings_m4184 (GUISkin_t835 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_error()
 GUIStyle_t250 * GUISkin_get_error_m4185 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::Apply()
 void GUISkin_Apply_m4186 (GUISkin_t835 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::BuildStyleCache()
 void GUISkin_BuildStyleCache_m4187 (GUISkin_t835 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::GetStyle(System.String)
 GUIStyle_t250 * GUISkin_GetStyle_m4188 (GUISkin_t835 * __this, String_t* ___styleName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::FindStyle(System.String)
 GUIStyle_t250 * GUISkin_FindStyle_m4189 (GUISkin_t835 * __this, String_t* ___styleName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::MakeCurrent()
 void GUISkin_MakeCurrent_m4190 (GUISkin_t835 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.GUISkin::GetEnumerator()
 Object_t * GUISkin_GetEnumerator_m4191 (GUISkin_t835 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
