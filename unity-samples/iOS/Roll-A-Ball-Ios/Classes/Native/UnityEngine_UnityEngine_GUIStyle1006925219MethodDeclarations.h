#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.GUIStyle
struct GUIStyle_t1006925219;
// UnityEngine.GUIStyleState
struct GUIStyleState_t47287592;
// UnityEngine.RectOffset
struct RectOffset_t3394170884;
// UnityEngine.Font
struct Font_t1525081276;
// UnityEngine.GUIContent
struct GUIContent_t2432841515;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t1769722184;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GUIStyle1006925219.h"
#include "UnityEngine_UnityEngine_GUIStyleState47287592.h"
#include "UnityEngine_UnityEngine_RectOffset3394170884.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Font1525081276.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "UnityEngine_UnityEngine_GUIContent2432841515.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Texture1769722184.h"
#include "UnityEngine_UnityEngine_ImagePosition140947409.h"
#include "UnityEngine_UnityEngine_TextAnchor551935663.h"
#include "UnityEngine_UnityEngine_TextClipping2337595772.h"
#include "UnityEngine_UnityEngine_FontStyle1975910095.h"
#include "UnityEngine_UnityEngine_Internal_DrawArguments1561977533.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_Internal_DrawWithTextSelecti43446288.h"

// System.Void UnityEngine.GUIStyle::.ctor()
extern "C"  void GUIStyle__ctor_m478034167 (GUIStyle_t1006925219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::.ctor(UnityEngine.GUIStyle)
extern "C"  void GUIStyle__ctor_m584655914 (GUIStyle_t1006925219 * __this, GUIStyle_t1006925219 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::.cctor()
extern "C"  void GUIStyle__cctor_m1452061078 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Finalize()
extern "C"  void GUIStyle_Finalize_m3401789451 (GUIStyle_t1006925219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::InternalOnAfterDeserialize()
extern "C"  void GUIStyle_InternalOnAfterDeserialize_m1012732492 (GUIStyle_t1006925219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
extern "C"  GUIStyleState_t47287592 * GUIStyle_get_normal_m42729964 (GUIStyle_t1006925219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_normal(UnityEngine.GUIStyleState)
extern "C"  void GUIStyle_set_normal_m3590268413 (GUIStyle_t1006925219 * __this, GUIStyleState_t47287592 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_hover()
extern "C"  GUIStyleState_t47287592 * GUIStyle_get_hover_m3685402873 (GUIStyle_t1006925219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_hover(UnityEngine.GUIStyleState)
extern "C"  void GUIStyle_set_hover_m660294266 (GUIStyle_t1006925219 * __this, GUIStyleState_t47287592 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_active()
extern "C"  GUIStyleState_t47287592 * GUIStyle_get_active_m1150072907 (GUIStyle_t1006925219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_active(UnityEngine.GUIStyleState)
extern "C"  void GUIStyle_set_active_m79497342 (GUIStyle_t1006925219 * __this, GUIStyleState_t47287592 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_onNormal()
extern "C"  GUIStyleState_t47287592 * GUIStyle_get_onNormal_m3672490987 (GUIStyle_t1006925219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_onNormal(UnityEngine.GUIStyleState)
extern "C"  void GUIStyle_set_onNormal_m3860399646 (GUIStyle_t1006925219 * __this, GUIStyleState_t47287592 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_onHover()
extern "C"  GUIStyleState_t47287592 * GUIStyle_get_onHover_m3525397274 (GUIStyle_t1006925219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_onHover(UnityEngine.GUIStyleState)
extern "C"  void GUIStyle_set_onHover_m946102841 (GUIStyle_t1006925219 * __this, GUIStyleState_t47287592 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_onActive()
extern "C"  GUIStyleState_t47287592 * GUIStyle_get_onActive_m484866634 (GUIStyle_t1006925219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_onActive(UnityEngine.GUIStyleState)
extern "C"  void GUIStyle_set_onActive_m349628575 (GUIStyle_t1006925219 * __this, GUIStyleState_t47287592 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_focused()
extern "C"  GUIStyleState_t47287592 * GUIStyle_get_focused_m2717215092 (GUIStyle_t1006925219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_focused(UnityEngine.GUIStyleState)
extern "C"  void GUIStyle_set_focused_m1026899231 (GUIStyle_t1006925219 * __this, GUIStyleState_t47287592 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_onFocused()
extern "C"  GUIStyleState_t47287592 * GUIStyle_get_onFocused_m3570657109 (GUIStyle_t1006925219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_onFocused(UnityEngine.GUIStyleState)
extern "C"  void GUIStyle_set_onFocused_m811032862 (GUIStyle_t1006925219 * __this, GUIStyleState_t47287592 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_border()
extern "C"  RectOffset_t3394170884 * GUIStyle_get_border_m1826068707 (GUIStyle_t1006925219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_border(UnityEngine.RectOffset)
extern "C"  void GUIStyle_set_border_m3254356648 (GUIStyle_t1006925219 * __this, RectOffset_t3394170884 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_margin()
extern "C"  RectOffset_t3394170884 * GUIStyle_get_margin_m4279849445 (GUIStyle_t1006925219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_margin(UnityEngine.RectOffset)
extern "C"  void GUIStyle_set_margin_m698201642 (GUIStyle_t1006925219 * __this, RectOffset_t3394170884 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_padding()
extern "C"  RectOffset_t3394170884 * GUIStyle_get_padding_m3072941276 (GUIStyle_t1006925219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_padding(UnityEngine.RectOffset)
extern "C"  void GUIStyle_set_padding_m458170651 (GUIStyle_t1006925219 * __this, RectOffset_t3394170884 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_overflow()
extern "C"  RectOffset_t3394170884 * GUIStyle_get_overflow_m2862114233 (GUIStyle_t1006925219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_overflow(UnityEngine.RectOffset)
extern "C"  void GUIStyle_set_overflow_m3029326398 (GUIStyle_t1006925219 * __this, RectOffset_t3394170884 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::get_clipOffset()
extern "C"  Vector2_t3525329788  GUIStyle_get_clipOffset_m3134687732 (GUIStyle_t1006925219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_clipOffset(UnityEngine.Vector2)
extern "C"  void GUIStyle_set_clipOffset_m2780638285 (GUIStyle_t1006925219 * __this, Vector2_t3525329788  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.GUIStyle::get_font()
extern "C"  Font_t1525081276 * GUIStyle_get_font_m1061814606 (GUIStyle_t1006925219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_font(UnityEngine.Font)
extern "C"  void GUIStyle_set_font_m3587533075 (GUIStyle_t1006925219 * __this, Font_t1525081276 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_lineHeight()
extern "C"  float GUIStyle_get_lineHeight_m3977255453 (GUIStyle_t1006925219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_Draw(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void GUIStyle_Internal_Draw_m3671619263 (Il2CppObject * __this /* static, unused */, IntPtr_t ___target, Rect_t1525428817  ___position, GUIContent_t2432841515 * ___content, bool ___isHover, bool ___isActive, bool ___on, bool ___hasKeyboardFocus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void GUIStyle_Draw_m2853558582 (GUIStyle_t1006925219 * __this, Rect_t1525428817  ___position, bool ___isHover, bool ___isActive, bool ___on, bool ___hasKeyboardFocus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void GUIStyle_Draw_m645175538 (GUIStyle_t1006925219 * __this, Rect_t1525428817  ___position, String_t* ___text, bool ___isHover, bool ___isActive, bool ___on, bool ___hasKeyboardFocus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.Texture,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void GUIStyle_Draw_m1301423966 (GUIStyle_t1006925219 * __this, Rect_t1525428817  ___position, Texture_t1769722184 * ___image, bool ___isHover, bool ___isActive, bool ___on, bool ___hasKeyboardFocus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void GUIStyle_Draw_m860139579 (GUIStyle_t1006925219 * __this, Rect_t1525428817  ___position, GUIContent_t2432841515 * ___content, bool ___isHover, bool ___isActive, bool ___on, bool ___hasKeyboardFocus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
extern "C"  void GUIStyle_Draw_m2994577084 (GUIStyle_t1006925219 * __this, Rect_t1525428817  ___position, GUIContent_t2432841515 * ___content, int32_t ___controlID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C"  void GUIStyle_Draw_m489809217 (GUIStyle_t1006925219 * __this, Rect_t1525428817  ___position, GUIContent_t2432841515 * ___content, int32_t ___controlID, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::DrawCursor(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Int32)
extern "C"  void GUIStyle_DrawCursor_m4169664613 (GUIStyle_t1006925219 * __this, Rect_t1525428817  ___position, GUIContent_t2432841515 * ___content, int32_t ___controlID, int32_t ___Character, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::DrawWithTextSelection(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Int32,System.Int32,System.Boolean)
extern "C"  void GUIStyle_DrawWithTextSelection_m469195656 (GUIStyle_t1006925219 * __this, Rect_t1525428817  ___position, GUIContent_t2432841515 * ___content, int32_t ___controlID, int32_t ___firstSelectedCharacter, int32_t ___lastSelectedCharacter, bool ___drawSelectionAsComposition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::DrawWithTextSelection(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Int32,System.Int32)
extern "C"  void GUIStyle_DrawWithTextSelection_m984171349 (GUIStyle_t1006925219 * __this, Rect_t1525428817  ___position, GUIContent_t2432841515 * ___content, int32_t ___controlID, int32_t ___firstSelectedCharacter, int32_t ___lastSelectedCharacter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUIStyle::get_none()
extern "C"  GUIStyle_t1006925219 * GUIStyle_get_none_m2767659632 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::GetCursorPixelPosition(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
extern "C"  Vector2_t3525329788  GUIStyle_GetCursorPixelPosition_m296157110 (GUIStyle_t1006925219 * __this, Rect_t1525428817  ___position, GUIContent_t2432841515 * ___content, int32_t ___cursorStringIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIStyle::GetCursorStringIndex(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.Vector2)
extern "C"  int32_t GUIStyle_GetCursorStringIndex_m3223359742 (GUIStyle_t1006925219 * __this, Rect_t1525428817  ___position, GUIContent_t2432841515 * ___content, Vector2_t3525329788  ___cursorPixelPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIStyle::GetNumCharactersThatFitWithinWidth(System.String,System.Single)
extern "C"  int32_t GUIStyle_GetNumCharactersThatFitWithinWidth_m3286030319 (GUIStyle_t1006925219 * __this, String_t* ___text, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcSize(UnityEngine.GUIContent)
extern "C"  Vector2_t3525329788  GUIStyle_CalcSize_m2299809257 (GUIStyle_t1006925219 * __this, GUIContent_t2432841515 * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcSizeWithConstraints(UnityEngine.GUIContent,UnityEngine.Vector2)
extern "C"  Vector2_t3525329788  GUIStyle_CalcSizeWithConstraints_m3659418291 (GUIStyle_t1006925219 * __this, GUIContent_t2432841515 * ___content, Vector2_t3525329788  ___constraints, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcScreenSize(UnityEngine.Vector2)
extern "C"  Vector2_t3525329788  GUIStyle_CalcScreenSize_m1487928496 (GUIStyle_t1006925219 * __this, Vector2_t3525329788  ___contentSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::CalcHeight(UnityEngine.GUIContent,System.Single)
extern "C"  float GUIStyle_CalcHeight_m3565424293 (GUIStyle_t1006925219 * __this, GUIContent_t2432841515 * ___content, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_isHeightDependantOnWidth()
extern "C"  bool GUIStyle_get_isHeightDependantOnWidth_m1959928889 (GUIStyle_t1006925219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::CalcMinMaxWidth(UnityEngine.GUIContent,System.Single&,System.Single&)
extern "C"  void GUIStyle_CalcMinMaxWidth_m421008639 (GUIStyle_t1006925219 * __this, GUIContent_t2432841515 * ___content, float* ___minWidth, float* ___maxWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIStyle::ToString()
extern "C"  String_t* GUIStyle_ToString_m2491778876 (GUIStyle_t1006925219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Init()
extern "C"  void GUIStyle_Init_m3292093053 (GUIStyle_t1006925219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::InitCopy(UnityEngine.GUIStyle)
extern "C"  void GUIStyle_InitCopy_m3063430789 (GUIStyle_t1006925219 * __this, GUIStyle_t1006925219 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Cleanup()
extern "C"  void GUIStyle_Cleanup_m2498094777 (GUIStyle_t1006925219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIStyle::get_name()
extern "C"  String_t* GUIStyle_get_name_m4046186628 (GUIStyle_t1006925219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_name(System.String)
extern "C"  void GUIStyle_set_name_m4125925261 (GUIStyle_t1006925219 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)
extern "C"  IntPtr_t GUIStyle_GetStyleStatePtr_m2550872619 (GUIStyle_t1006925219 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::AssignStyleState(System.Int32,System.IntPtr)
extern "C"  void GUIStyle_AssignStyleState_m4030196091 (GUIStyle_t1006925219 * __this, int32_t ___idx, IntPtr_t ___srcStyleState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)
extern "C"  IntPtr_t GUIStyle_GetRectOffsetPtr_m1931607252 (GUIStyle_t1006925219 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::AssignRectOffset(System.Int32,System.IntPtr)
extern "C"  void GUIStyle_AssignRectOffset_m519705394 (GUIStyle_t1006925219 * __this, int32_t ___idx, IntPtr_t ___srcRectOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ImagePosition UnityEngine.GUIStyle::get_imagePosition()
extern "C"  int32_t GUIStyle_get_imagePosition_m3876152522 (GUIStyle_t1006925219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_imagePosition(UnityEngine.ImagePosition)
extern "C"  void GUIStyle_set_imagePosition_m1689669769 (GUIStyle_t1006925219 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextAnchor UnityEngine.GUIStyle::get_alignment()
extern "C"  int32_t GUIStyle_get_alignment_m1533628953 (GUIStyle_t1006925219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_alignment(UnityEngine.TextAnchor)
extern "C"  void GUIStyle_set_alignment_m4252900834 (GUIStyle_t1006925219 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_wordWrap()
extern "C"  bool GUIStyle_get_wordWrap_m3830782768 (GUIStyle_t1006925219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_wordWrap(System.Boolean)
extern "C"  void GUIStyle_set_wordWrap_m3800572853 (GUIStyle_t1006925219 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextClipping UnityEngine.GUIStyle::get_clipping()
extern "C"  int32_t GUIStyle_get_clipping_m2044798529 (GUIStyle_t1006925219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_clipping(UnityEngine.TextClipping)
extern "C"  void GUIStyle_set_clipping_m771351942 (GUIStyle_t1006925219 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::get_contentOffset()
extern "C"  Vector2_t3525329788  GUIStyle_get_contentOffset_m2092220605 (GUIStyle_t1006925219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_contentOffset(UnityEngine.Vector2)
extern "C"  void GUIStyle_set_contentOffset_m3385864054 (GUIStyle_t1006925219 * __this, Vector2_t3525329788  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_get_contentOffset(UnityEngine.Vector2&)
extern "C"  void GUIStyle_INTERNAL_get_contentOffset_m2078390432 (GUIStyle_t1006925219 * __this, Vector2_t3525329788 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_set_contentOffset(UnityEngine.Vector2&)
extern "C"  void GUIStyle_INTERNAL_set_contentOffset_m3891089324 (GUIStyle_t1006925219 * __this, Vector2_t3525329788 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::get_Internal_clipOffset()
extern "C"  Vector2_t3525329788  GUIStyle_get_Internal_clipOffset_m4123163318 (GUIStyle_t1006925219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_Internal_clipOffset(UnityEngine.Vector2)
extern "C"  void GUIStyle_set_Internal_clipOffset_m411599389 (GUIStyle_t1006925219 * __this, Vector2_t3525329788  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_get_Internal_clipOffset(UnityEngine.Vector2&)
extern "C"  void GUIStyle_INTERNAL_get_Internal_clipOffset_m3417369433 (GUIStyle_t1006925219 * __this, Vector2_t3525329788 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_set_Internal_clipOffset(UnityEngine.Vector2&)
extern "C"  void GUIStyle_INTERNAL_set_Internal_clipOffset_m188352869 (GUIStyle_t1006925219 * __this, Vector2_t3525329788 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_fixedWidth()
extern "C"  float GUIStyle_get_fixedWidth_m3249098964 (GUIStyle_t1006925219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_fixedWidth(System.Single)
extern "C"  void GUIStyle_set_fixedWidth_m2486234607 (GUIStyle_t1006925219 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_fixedHeight()
extern "C"  float GUIStyle_get_fixedHeight_m2441634427 (GUIStyle_t1006925219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_fixedHeight(System.Single)
extern "C"  void GUIStyle_set_fixedHeight_m2209877368 (GUIStyle_t1006925219 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_stretchWidth()
extern "C"  bool GUIStyle_get_stretchWidth_m38609341 (GUIStyle_t1006925219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_stretchWidth(System.Boolean)
extern "C"  void GUIStyle_set_stretchWidth_m829487234 (GUIStyle_t1006925219 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_stretchHeight()
extern "C"  bool GUIStyle_get_stretchHeight_m1700703922 (GUIStyle_t1006925219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)
extern "C"  void GUIStyle_set_stretchHeight_m703419995 (GUIStyle_t1006925219 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::Internal_GetLineHeight(System.IntPtr)
extern "C"  float GUIStyle_Internal_GetLineHeight_m4224806028 (Il2CppObject * __this /* static, unused */, IntPtr_t ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::SetFontInternal(UnityEngine.Font)
extern "C"  void GUIStyle_SetFontInternal_m2859258365 (GUIStyle_t1006925219 * __this, Font_t1525081276 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.GUIStyle::GetFontInternalDuringLoadingThread()
extern "C"  Font_t1525081276 * GUIStyle_GetFontInternalDuringLoadingThread_m1458608761 (GUIStyle_t1006925219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.GUIStyle::GetFontInternal()
extern "C"  Font_t1525081276 * GUIStyle_GetFontInternal_m2928804526 (GUIStyle_t1006925219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIStyle::get_fontSize()
extern "C"  int32_t GUIStyle_get_fontSize_m2938276678 (GUIStyle_t1006925219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
extern "C"  void GUIStyle_set_fontSize_m3621764235 (GUIStyle_t1006925219 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.FontStyle UnityEngine.GUIStyle::get_fontStyle()
extern "C"  int32_t GUIStyle_get_fontStyle_m3314019014 (GUIStyle_t1006925219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_fontStyle(UnityEngine.FontStyle)
extern "C"  void GUIStyle_set_fontStyle_m3298083597 (GUIStyle_t1006925219 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_richText()
extern "C"  bool GUIStyle_get_richText_m1558667173 (GUIStyle_t1006925219 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_richText(System.Boolean)
extern "C"  void GUIStyle_set_richText_m1293612906 (GUIStyle_t1006925219 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_Draw(UnityEngine.GUIContent,UnityEngine.Internal_DrawArguments&)
extern "C"  void GUIStyle_Internal_Draw_m3365779187 (Il2CppObject * __this /* static, unused */, GUIContent_t2432841515 * ___content, Internal_DrawArguments_t1561977533 * ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_Draw2(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C"  void GUIStyle_Internal_Draw2_m2706374407 (Il2CppObject * __this /* static, unused */, IntPtr_t ___style, Rect_t1525428817  ___position, GUIContent_t2432841515 * ___content, int32_t ___controlID, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_Draw2(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C"  void GUIStyle_INTERNAL_CALL_Internal_Draw2_m1512749466 (Il2CppObject * __this /* static, unused */, IntPtr_t ___style, Rect_t1525428817 * ___position, GUIContent_t2432841515 * ___content, int32_t ___controlID, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_DrawPrefixLabel(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C"  void GUIStyle_Internal_DrawPrefixLabel_m1343381847 (Il2CppObject * __this /* static, unused */, IntPtr_t ___style, Rect_t1525428817  ___position, GUIContent_t2432841515 * ___content, int32_t ___controlID, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_DrawPrefixLabel(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Boolean)
extern "C"  void GUIStyle_INTERNAL_CALL_Internal_DrawPrefixLabel_m3654921866 (Il2CppObject * __this /* static, unused */, IntPtr_t ___style, Rect_t1525428817 * ___position, GUIContent_t2432841515 * ___content, int32_t ___controlID, bool ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::Internal_GetCursorFlashOffset()
extern "C"  float GUIStyle_Internal_GetCursorFlashOffset_m3106442082 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_DrawCursor(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,UnityEngine.Color)
extern "C"  void GUIStyle_Internal_DrawCursor_m496261262 (Il2CppObject * __this /* static, unused */, IntPtr_t ___target, Rect_t1525428817  ___position, GUIContent_t2432841515 * ___content, int32_t ___pos, Color_t1588175760  ___cursorColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_DrawCursor(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Color&)
extern "C"  void GUIStyle_INTERNAL_CALL_Internal_DrawCursor_m330118499 (Il2CppObject * __this /* static, unused */, IntPtr_t ___target, Rect_t1525428817 * ___position, GUIContent_t2432841515 * ___content, int32_t ___pos, Color_t1588175760 * ___cursorColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_DrawWithTextSelection(UnityEngine.GUIContent,UnityEngine.Internal_DrawWithTextSelectionArguments&)
extern "C"  void GUIStyle_Internal_DrawWithTextSelection_m538670273 (Il2CppObject * __this /* static, unused */, GUIContent_t2432841515 * ___content, Internal_DrawWithTextSelectionArguments_t43446288 * ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)
extern "C"  void GUIStyle_SetDefaultFont_m1041826325 (Il2CppObject * __this /* static, unused */, Font_t1525081276 * ___font, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
extern "C"  void GUIStyle_Internal_GetCursorPixelPosition_m336331745 (Il2CppObject * __this /* static, unused */, IntPtr_t ___target, Rect_t1525428817  ___position, GUIContent_t2432841515 * ___content, int32_t ___cursorStringIndex, Vector2_t3525329788 * ___ret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
extern "C"  void GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m2602567800 (Il2CppObject * __this /* static, unused */, IntPtr_t ___target, Rect_t1525428817 * ___position, GUIContent_t2432841515 * ___content, int32_t ___cursorStringIndex, Vector2_t3525329788 * ___ret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIStyle::Internal_GetCursorStringIndex(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.Vector2)
extern "C"  int32_t GUIStyle_Internal_GetCursorStringIndex_m1275963970 (Il2CppObject * __this /* static, unused */, IntPtr_t ___target, Rect_t1525428817  ___position, GUIContent_t2432841515 * ___content, Vector2_t3525329788  ___cursorPixelPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIStyle::INTERNAL_CALL_Internal_GetCursorStringIndex(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,UnityEngine.Vector2&)
extern "C"  int32_t GUIStyle_INTERNAL_CALL_Internal_GetCursorStringIndex_m3457179887 (Il2CppObject * __this /* static, unused */, IntPtr_t ___target, Rect_t1525428817 * ___position, GUIContent_t2432841515 * ___content, Vector2_t3525329788 * ___cursorPixelPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUIStyle::Internal_GetNumCharactersThatFitWithinWidth(System.IntPtr,System.String,System.Single)
extern "C"  int32_t GUIStyle_Internal_GetNumCharactersThatFitWithinWidth_m470425907 (Il2CppObject * __this /* static, unused */, IntPtr_t ___target, String_t* ___text, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_CalcSize(System.IntPtr,UnityEngine.GUIContent,UnityEngine.Vector2&)
extern "C"  void GUIStyle_Internal_CalcSize_m1389308622 (Il2CppObject * __this /* static, unused */, IntPtr_t ___target, GUIContent_t2432841515 * ___content, Vector2_t3525329788 * ___ret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_CalcSizeWithConstraints(System.IntPtr,UnityEngine.GUIContent,UnityEngine.Vector2,UnityEngine.Vector2&)
extern "C"  void GUIStyle_Internal_CalcSizeWithConstraints_m484790978 (Il2CppObject * __this /* static, unused */, IntPtr_t ___target, GUIContent_t2432841515 * ___content, Vector2_t3525329788  ___maxSize, Vector2_t3525329788 * ___ret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_CalcSizeWithConstraints(System.IntPtr,UnityEngine.GUIContent,UnityEngine.Vector2&,UnityEngine.Vector2&)
extern "C"  void GUIStyle_INTERNAL_CALL_Internal_CalcSizeWithConstraints_m2048982689 (Il2CppObject * __this /* static, unused */, IntPtr_t ___target, GUIContent_t2432841515 * ___content, Vector2_t3525329788 * ___maxSize, Vector2_t3525329788 * ___ret, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::Internal_CalcHeight(System.IntPtr,UnityEngine.GUIContent,System.Single)
extern "C"  float GUIStyle_Internal_CalcHeight_m3448302985 (Il2CppObject * __this /* static, unused */, IntPtr_t ___target, GUIContent_t2432841515 * ___content, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_CalcMinMaxWidth(System.IntPtr,UnityEngine.GUIContent,System.Single&,System.Single&)
extern "C"  void GUIStyle_Internal_CalcMinMaxWidth_m1670371175 (Il2CppObject * __this /* static, unused */, IntPtr_t ___target, GUIContent_t2432841515 * ___content, float* ___minWidth, float* ___maxWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUIStyle::op_Implicit(System.String)
extern "C"  GUIStyle_t1006925219 * GUIStyle_op_Implicit_m169215436 (Il2CppObject * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
