#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUIStyle
struct GUIStyle_t263;
// System.String
struct String_t;
// UnityEngine.GUIStyleState
struct GUIStyleState_t353;
// UnityEngine.RectOffset
struct RectOffset_t672;
// UnityEngine.GUIContent
struct GUIContent_t757;
// UnityEngine.Font
struct Font_t567;
// UnityEngine.ImagePosition
#include "UnityEngine_UnityEngine_ImagePosition.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Internal_DrawArguments
#include "UnityEngine_UnityEngine_Internal_DrawArguments.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.GUIStyle::.ctor()
 void GUIStyle__ctor_m4314 (GUIStyle_t263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::.ctor(UnityEngine.GUIStyle)
 void GUIStyle__ctor_m1569 (GUIStyle_t263 * __this, GUIStyle_t263 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::.cctor()
 void GUIStyle__cctor_m4315 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Finalize()
 void GUIStyle_Finalize_m4316 (GUIStyle_t263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Init()
 void GUIStyle_Init_m4317 (GUIStyle_t263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::InitCopy(UnityEngine.GUIStyle)
 void GUIStyle_InitCopy_m4318 (GUIStyle_t263 * __this, GUIStyle_t263 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Cleanup()
 void GUIStyle_Cleanup_m4319 (GUIStyle_t263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIStyle::get_name()
 String_t* GUIStyle_get_name_m4320 (GUIStyle_t263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_name(System.String)
 void GUIStyle_set_name_m4321 (GUIStyle_t263 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
 GUIStyleState_t353 * GUIStyle_get_normal_m1570 (GUIStyle_t263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)
 IntPtr_t120 GUIStyle_GetStyleStatePtr_m4322 (GUIStyle_t263 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_margin()
 RectOffset_t672 * GUIStyle_get_margin_m4323 (GUIStyle_t263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_padding()
 RectOffset_t672 * GUIStyle_get_padding_m4324 (GUIStyle_t263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)
 IntPtr_t120 GUIStyle_GetRectOffsetPtr_m4325 (GUIStyle_t263 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ImagePosition UnityEngine.GUIStyle::get_imagePosition()
 int32_t GUIStyle_get_imagePosition_m4326 (GUIStyle_t263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_wordWrap()
 bool GUIStyle_get_wordWrap_m4327 (GUIStyle_t263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_wordWrap(System.Boolean)
 void GUIStyle_set_wordWrap_m1575 (GUIStyle_t263 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_fixedWidth()
 float GUIStyle_get_fixedWidth_m4328 (GUIStyle_t263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_fixedHeight()
 float GUIStyle_get_fixedHeight_m4329 (GUIStyle_t263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_stretchWidth()
 bool GUIStyle_get_stretchWidth_m4330 (GUIStyle_t263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_stretchWidth(System.Boolean)
 void GUIStyle_set_stretchWidth_m4331 (GUIStyle_t263 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_stretchHeight()
 bool GUIStyle_get_stretchHeight_m4332 (GUIStyle_t263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)
 void GUIStyle_set_stretchHeight_m4333 (GUIStyle_t263 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::Internal_GetLineHeight(System.IntPtr)
 float GUIStyle_Internal_GetLineHeight_m4334 (Object_t * __this/* static, unused */, IntPtr_t120 ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
 void GUIStyle_set_fontSize_m1573 (GUIStyle_t263 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_richText(System.Boolean)
 void GUIStyle_set_richText_m1576 (GUIStyle_t263 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_lineHeight()
 float GUIStyle_get_lineHeight_m4335 (GUIStyle_t263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_Draw(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
 void GUIStyle_Internal_Draw_m4336 (Object_t * __this/* static, unused */, IntPtr_t120 ___target, Rect_t442  ___position, GUIContent_t757 * ___content, bool ___isHover, bool ___isActive, bool ___on, bool ___hasKeyboardFocus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_Draw(UnityEngine.GUIContent,UnityEngine.Internal_DrawArguments&)
 void GUIStyle_Internal_Draw_m4337 (Object_t * __this/* static, unused */, GUIContent_t757 * ___content, Internal_DrawArguments_t869 * ___arguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
 void GUIStyle_Draw_m4338 (GUIStyle_t263 * __this, Rect_t442  ___position, bool ___isHover, bool ___isActive, bool ___on, bool ___hasKeyboardFocus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
 void GUIStyle_Draw_m4339 (GUIStyle_t263 * __this, Rect_t442  ___position, GUIContent_t757 * ___content, int32_t ___controlID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
 void GUIStyle_Draw_m4340 (GUIStyle_t263 * __this, Rect_t442  ___position, GUIContent_t757 * ___content, int32_t ___controlID, bool ___on, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_Draw2(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
 void GUIStyle_Internal_Draw2_m4341 (Object_t * __this/* static, unused */, IntPtr_t120 ___style, Rect_t442  ___position, GUIContent_t757 * ___content, int32_t ___controlID, bool ___on, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_Draw2(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Boolean)
 void GUIStyle_INTERNAL_CALL_Internal_Draw2_m4342 (Object_t * __this/* static, unused */, IntPtr_t120 ___style, Rect_t442 * ___position, GUIContent_t757 * ___content, int32_t ___controlID, bool ___on, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)
 void GUIStyle_SetDefaultFont_m4343 (Object_t * __this/* static, unused */, Font_t567 * ___font, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUIStyle::get_none()
 GUIStyle_t263 * GUIStyle_get_none_m4344 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::GetCursorPixelPosition(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
 Vector2_t198  GUIStyle_GetCursorPixelPosition_m4345 (GUIStyle_t263 * __this, Rect_t442  ___position, GUIContent_t757 * ___content, int32_t ___cursorStringIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
 void GUIStyle_Internal_GetCursorPixelPosition_m4346 (Object_t * __this/* static, unused */, IntPtr_t120 ___target, Rect_t442  ___position, GUIContent_t757 * ___content, int32_t ___cursorStringIndex, Vector2_t198 * ___ret, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
 void GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m4347 (Object_t * __this/* static, unused */, IntPtr_t120 ___target, Rect_t442 * ___position, GUIContent_t757 * ___content, int32_t ___cursorStringIndex, Vector2_t198 * ___ret, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcSize(UnityEngine.GUIContent)
 Vector2_t198  GUIStyle_CalcSize_m4348 (GUIStyle_t263 * __this, GUIContent_t757 * ___content, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_CalcSize(System.IntPtr,UnityEngine.GUIContent,UnityEngine.Vector2&)
 void GUIStyle_Internal_CalcSize_m4349 (Object_t * __this/* static, unused */, IntPtr_t120 ___target, GUIContent_t757 * ___content, Vector2_t198 * ___ret, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::CalcHeight(UnityEngine.GUIContent,System.Single)
 float GUIStyle_CalcHeight_m4350 (GUIStyle_t263 * __this, GUIContent_t757 * ___content, float ___width, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::Internal_CalcHeight(System.IntPtr,UnityEngine.GUIContent,System.Single)
 float GUIStyle_Internal_CalcHeight_m4351 (Object_t * __this/* static, unused */, IntPtr_t120 ___target, GUIContent_t757 * ___content, float ___width, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_isHeightDependantOnWidth()
 bool GUIStyle_get_isHeightDependantOnWidth_m4352 (GUIStyle_t263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::CalcMinMaxWidth(UnityEngine.GUIContent,System.Single&,System.Single&)
 void GUIStyle_CalcMinMaxWidth_m4353 (GUIStyle_t263 * __this, GUIContent_t757 * ___content, float* ___minWidth, float* ___maxWidth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_CalcMinMaxWidth(System.IntPtr,UnityEngine.GUIContent,System.Single&,System.Single&)
 void GUIStyle_Internal_CalcMinMaxWidth_m4354 (Object_t * __this/* static, unused */, IntPtr_t120 ___target, GUIContent_t757 * ___content, float* ___minWidth, float* ___maxWidth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIStyle::ToString()
 String_t* GUIStyle_ToString_m4355 (GUIStyle_t263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUIStyle::op_Implicit(System.String)
 GUIStyle_t263 * GUIStyle_op_Implicit_m1568 (Object_t * __this/* static, unused */, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
