#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUISkin
struct GUISkin_t848;
// UnityEngine.Font
struct Font_t567;
// UnityEngine.GUIStyle
struct GUIStyle_t263;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t867;
// UnityEngine.GUISettings
struct GUISettings_t865;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t19;

// System.Void UnityEngine.GUISkin::.ctor()
 void GUISkin__ctor_m4233 (GUISkin_t848 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::OnEnable()
 void GUISkin_OnEnable_m4234 (GUISkin_t848 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.GUISkin::get_font()
 Font_t567 * GUISkin_get_font_m4235 (GUISkin_t848 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_font(UnityEngine.Font)
 void GUISkin_set_font_m4236 (GUISkin_t848 * __this, Font_t567 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_box()
 GUIStyle_t263 * GUISkin_get_box_m4237 (GUISkin_t848 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_box(UnityEngine.GUIStyle)
 void GUISkin_set_box_m4238 (GUISkin_t848 * __this, GUIStyle_t263 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_label()
 GUIStyle_t263 * GUISkin_get_label_m4239 (GUISkin_t848 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_label(UnityEngine.GUIStyle)
 void GUISkin_set_label_m4240 (GUISkin_t848 * __this, GUIStyle_t263 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textField()
 GUIStyle_t263 * GUISkin_get_textField_m4241 (GUISkin_t848 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_textField(UnityEngine.GUIStyle)
 void GUISkin_set_textField_m4242 (GUISkin_t848 * __this, GUIStyle_t263 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textArea()
 GUIStyle_t263 * GUISkin_get_textArea_m4243 (GUISkin_t848 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_textArea(UnityEngine.GUIStyle)
 void GUISkin_set_textArea_m4244 (GUISkin_t848 * __this, GUIStyle_t263 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_button()
 GUIStyle_t263 * GUISkin_get_button_m4245 (GUISkin_t848 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_button(UnityEngine.GUIStyle)
 void GUISkin_set_button_m4246 (GUISkin_t848 * __this, GUIStyle_t263 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_toggle()
 GUIStyle_t263 * GUISkin_get_toggle_m4247 (GUISkin_t848 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_toggle(UnityEngine.GUIStyle)
 void GUISkin_set_toggle_m4248 (GUISkin_t848 * __this, GUIStyle_t263 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_window()
 GUIStyle_t263 * GUISkin_get_window_m4249 (GUISkin_t848 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_window(UnityEngine.GUIStyle)
 void GUISkin_set_window_m4250 (GUISkin_t848 * __this, GUIStyle_t263 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSlider()
 GUIStyle_t263 * GUISkin_get_horizontalSlider_m4251 (GUISkin_t848 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalSlider(UnityEngine.GUIStyle)
 void GUISkin_set_horizontalSlider_m4252 (GUISkin_t848 * __this, GUIStyle_t263 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSliderThumb()
 GUIStyle_t263 * GUISkin_get_horizontalSliderThumb_m4253 (GUISkin_t848 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalSliderThumb(UnityEngine.GUIStyle)
 void GUISkin_set_horizontalSliderThumb_m4254 (GUISkin_t848 * __this, GUIStyle_t263 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalSlider()
 GUIStyle_t263 * GUISkin_get_verticalSlider_m4255 (GUISkin_t848 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalSlider(UnityEngine.GUIStyle)
 void GUISkin_set_verticalSlider_m4256 (GUISkin_t848 * __this, GUIStyle_t263 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalSliderThumb()
 GUIStyle_t263 * GUISkin_get_verticalSliderThumb_m4257 (GUISkin_t848 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalSliderThumb(UnityEngine.GUIStyle)
 void GUISkin_set_verticalSliderThumb_m4258 (GUISkin_t848 * __this, GUIStyle_t263 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbar()
 GUIStyle_t263 * GUISkin_get_horizontalScrollbar_m4259 (GUISkin_t848 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalScrollbar(UnityEngine.GUIStyle)
 void GUISkin_set_horizontalScrollbar_m4260 (GUISkin_t848 * __this, GUIStyle_t263 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarThumb()
 GUIStyle_t263 * GUISkin_get_horizontalScrollbarThumb_m4261 (GUISkin_t848 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarThumb(UnityEngine.GUIStyle)
 void GUISkin_set_horizontalScrollbarThumb_m4262 (GUISkin_t848 * __this, GUIStyle_t263 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarLeftButton()
 GUIStyle_t263 * GUISkin_get_horizontalScrollbarLeftButton_m4263 (GUISkin_t848 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarLeftButton(UnityEngine.GUIStyle)
 void GUISkin_set_horizontalScrollbarLeftButton_m4264 (GUISkin_t848 * __this, GUIStyle_t263 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarRightButton()
 GUIStyle_t263 * GUISkin_get_horizontalScrollbarRightButton_m4265 (GUISkin_t848 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarRightButton(UnityEngine.GUIStyle)
 void GUISkin_set_horizontalScrollbarRightButton_m4266 (GUISkin_t848 * __this, GUIStyle_t263 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbar()
 GUIStyle_t263 * GUISkin_get_verticalScrollbar_m4267 (GUISkin_t848 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalScrollbar(UnityEngine.GUIStyle)
 void GUISkin_set_verticalScrollbar_m4268 (GUISkin_t848 * __this, GUIStyle_t263 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarThumb()
 GUIStyle_t263 * GUISkin_get_verticalScrollbarThumb_m4269 (GUISkin_t848 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalScrollbarThumb(UnityEngine.GUIStyle)
 void GUISkin_set_verticalScrollbarThumb_m4270 (GUISkin_t848 * __this, GUIStyle_t263 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarUpButton()
 GUIStyle_t263 * GUISkin_get_verticalScrollbarUpButton_m4271 (GUISkin_t848 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalScrollbarUpButton(UnityEngine.GUIStyle)
 void GUISkin_set_verticalScrollbarUpButton_m4272 (GUISkin_t848 * __this, GUIStyle_t263 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarDownButton()
 GUIStyle_t263 * GUISkin_get_verticalScrollbarDownButton_m4273 (GUISkin_t848 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalScrollbarDownButton(UnityEngine.GUIStyle)
 void GUISkin_set_verticalScrollbarDownButton_m4274 (GUISkin_t848 * __this, GUIStyle_t263 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_scrollView()
 GUIStyle_t263 * GUISkin_get_scrollView_m4275 (GUISkin_t848 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_scrollView(UnityEngine.GUIStyle)
 void GUISkin_set_scrollView_m4276 (GUISkin_t848 * __this, GUIStyle_t263 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle[] UnityEngine.GUISkin::get_customStyles()
 GUIStyleU5BU5D_t867* GUISkin_get_customStyles_m4277 (GUISkin_t848 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_customStyles(UnityEngine.GUIStyle[])
 void GUISkin_set_customStyles_m4278 (GUISkin_t848 * __this, GUIStyleU5BU5D_t867* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISettings UnityEngine.GUISkin::get_settings()
 GUISettings_t865 * GUISkin_get_settings_m4279 (GUISkin_t848 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_error()
 GUIStyle_t263 * GUISkin_get_error_m4280 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::Apply()
 void GUISkin_Apply_m4281 (GUISkin_t848 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::BuildStyleCache()
 void GUISkin_BuildStyleCache_m4282 (GUISkin_t848 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::GetStyle(System.String)
 GUIStyle_t263 * GUISkin_GetStyle_m4283 (GUISkin_t848 * __this, String_t* ___styleName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::FindStyle(System.String)
 GUIStyle_t263 * GUISkin_FindStyle_m4284 (GUISkin_t848 * __this, String_t* ___styleName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::MakeCurrent()
 void GUISkin_MakeCurrent_m4285 (GUISkin_t848 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.GUISkin::GetEnumerator()
 Object_t * GUISkin_GetEnumerator_m4286 (GUISkin_t848 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
