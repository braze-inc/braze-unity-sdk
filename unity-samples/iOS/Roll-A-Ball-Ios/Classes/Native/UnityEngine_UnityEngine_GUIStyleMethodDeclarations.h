#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUIStyle
struct GUIStyle_t250;
// System.String
struct String_t;
// UnityEngine.GUIStyleState
struct GUIStyleState_t340;
// UnityEngine.RectOffset
struct RectOffset_t658;
// UnityEngine.GUIContent
struct GUIContent_t744;
// UnityEngine.Font
struct Font_t553;
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
 void GUIStyle__ctor_m4223 (GUIStyle_t250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::.ctor(UnityEngine.GUIStyle)
 void GUIStyle__ctor_m1463 (GUIStyle_t250 * __this, GUIStyle_t250 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::.cctor()
 void GUIStyle__cctor_m4224 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Finalize()
 void GUIStyle_Finalize_m4225 (GUIStyle_t250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Init()
 void GUIStyle_Init_m4226 (GUIStyle_t250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::InitCopy(UnityEngine.GUIStyle)
 void GUIStyle_InitCopy_m4227 (GUIStyle_t250 * __this, GUIStyle_t250 * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Cleanup()
 void GUIStyle_Cleanup_m4228 (GUIStyle_t250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIStyle::get_name()
 String_t* GUIStyle_get_name_m4229 (GUIStyle_t250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_name(System.String)
 void GUIStyle_set_name_m4230 (GUIStyle_t250 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyleState UnityEngine.GUIStyle::get_normal()
 GUIStyleState_t340 * GUIStyle_get_normal_m1464 (GUIStyle_t250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.GUIStyle::GetStyleStatePtr(System.Int32)
 IntPtr_t107 GUIStyle_GetStyleStatePtr_m4231 (GUIStyle_t250 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_margin()
 RectOffset_t658 * GUIStyle_get_margin_m4232 (GUIStyle_t250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.GUIStyle::get_padding()
 RectOffset_t658 * GUIStyle_get_padding_m4233 (GUIStyle_t250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr UnityEngine.GUIStyle::GetRectOffsetPtr(System.Int32)
 IntPtr_t107 GUIStyle_GetRectOffsetPtr_m4234 (GUIStyle_t250 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ImagePosition UnityEngine.GUIStyle::get_imagePosition()
 int32_t GUIStyle_get_imagePosition_m4235 (GUIStyle_t250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_wordWrap()
 bool GUIStyle_get_wordWrap_m4236 (GUIStyle_t250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_wordWrap(System.Boolean)
 void GUIStyle_set_wordWrap_m1469 (GUIStyle_t250 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_fixedWidth()
 float GUIStyle_get_fixedWidth_m4237 (GUIStyle_t250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_fixedHeight()
 float GUIStyle_get_fixedHeight_m4238 (GUIStyle_t250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_stretchWidth()
 bool GUIStyle_get_stretchWidth_m4239 (GUIStyle_t250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_stretchWidth(System.Boolean)
 void GUIStyle_set_stretchWidth_m4240 (GUIStyle_t250 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_stretchHeight()
 bool GUIStyle_get_stretchHeight_m4241 (GUIStyle_t250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_stretchHeight(System.Boolean)
 void GUIStyle_set_stretchHeight_m4242 (GUIStyle_t250 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::Internal_GetLineHeight(System.IntPtr)
 float GUIStyle_Internal_GetLineHeight_m4243 (Object_t * __this/* static, unused */, IntPtr_t107 ___target, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_fontSize(System.Int32)
 void GUIStyle_set_fontSize_m1467 (GUIStyle_t250 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::set_richText(System.Boolean)
 void GUIStyle_set_richText_m1470 (GUIStyle_t250 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::get_lineHeight()
 float GUIStyle_get_lineHeight_m4244 (GUIStyle_t250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_Draw(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
 void GUIStyle_Internal_Draw_m4245 (Object_t * __this/* static, unused */, IntPtr_t107 ___target, Rect_t78  ___position, GUIContent_t744 * ___content, bool ___isHover, bool ___isActive, bool ___on, bool ___hasKeyboardFocus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_Draw(UnityEngine.GUIContent,UnityEngine.Internal_DrawArguments&)
 void GUIStyle_Internal_Draw_m4246 (Object_t * __this/* static, unused */, GUIContent_t744 * ___content, Internal_DrawArguments_t858 * ___arguments, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
 void GUIStyle_Draw_m4247 (GUIStyle_t250 * __this, Rect_t78  ___position, bool ___isHover, bool ___isActive, bool ___on, bool ___hasKeyboardFocus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
 void GUIStyle_Draw_m4248 (GUIStyle_t250 * __this, Rect_t78  ___position, GUIContent_t744 * ___content, bool ___isHover, bool ___isActive, bool ___on, bool ___hasKeyboardFocus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
 void GUIStyle_Draw_m4249 (GUIStyle_t250 * __this, Rect_t78  ___position, GUIContent_t744 * ___content, int32_t ___controlID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Draw(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
 void GUIStyle_Draw_m4250 (GUIStyle_t250 * __this, Rect_t78  ___position, GUIContent_t744 * ___content, int32_t ___controlID, bool ___on, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_Draw2(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,System.Boolean)
 void GUIStyle_Internal_Draw2_m4251 (Object_t * __this/* static, unused */, IntPtr_t107 ___style, Rect_t78  ___position, GUIContent_t744 * ___content, int32_t ___controlID, bool ___on, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_Draw2(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,System.Boolean)
 void GUIStyle_INTERNAL_CALL_Internal_Draw2_m4252 (Object_t * __this/* static, unused */, IntPtr_t107 ___style, Rect_t78 * ___position, GUIContent_t744 * ___content, int32_t ___controlID, bool ___on, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::SetDefaultFont(UnityEngine.Font)
 void GUIStyle_SetDefaultFont_m4253 (Object_t * __this/* static, unused */, Font_t553 * ___font, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUIStyle::get_none()
 GUIStyle_t250 * GUIStyle_get_none_m4254 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::GetCursorPixelPosition(UnityEngine.Rect,UnityEngine.GUIContent,System.Int32)
 Vector2_t184  GUIStyle_GetCursorPixelPosition_m4255 (GUIStyle_t250 * __this, Rect_t78  ___position, GUIContent_t744 * ___content, int32_t ___cursorStringIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
 void GUIStyle_Internal_GetCursorPixelPosition_m4256 (Object_t * __this/* static, unused */, IntPtr_t107 ___target, Rect_t78  ___position, GUIContent_t744 * ___content, int32_t ___cursorStringIndex, Vector2_t184 * ___ret, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::INTERNAL_CALL_Internal_GetCursorPixelPosition(System.IntPtr,UnityEngine.Rect&,UnityEngine.GUIContent,System.Int32,UnityEngine.Vector2&)
 void GUIStyle_INTERNAL_CALL_Internal_GetCursorPixelPosition_m4257 (Object_t * __this/* static, unused */, IntPtr_t107 ___target, Rect_t78 * ___position, GUIContent_t744 * ___content, int32_t ___cursorStringIndex, Vector2_t184 * ___ret, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUIStyle::CalcSize(UnityEngine.GUIContent)
 Vector2_t184  GUIStyle_CalcSize_m4258 (GUIStyle_t250 * __this, GUIContent_t744 * ___content, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_CalcSize(System.IntPtr,UnityEngine.GUIContent,UnityEngine.Vector2&)
 void GUIStyle_Internal_CalcSize_m4259 (Object_t * __this/* static, unused */, IntPtr_t107 ___target, GUIContent_t744 * ___content, Vector2_t184 * ___ret, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::CalcHeight(UnityEngine.GUIContent,System.Single)
 float GUIStyle_CalcHeight_m4260 (GUIStyle_t250 * __this, GUIContent_t744 * ___content, float ___width, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUIStyle::Internal_CalcHeight(System.IntPtr,UnityEngine.GUIContent,System.Single)
 float GUIStyle_Internal_CalcHeight_m4261 (Object_t * __this/* static, unused */, IntPtr_t107 ___target, GUIContent_t744 * ___content, float ___width, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUIStyle::get_isHeightDependantOnWidth()
 bool GUIStyle_get_isHeightDependantOnWidth_m4262 (GUIStyle_t250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::CalcMinMaxWidth(UnityEngine.GUIContent,System.Single&,System.Single&)
 void GUIStyle_CalcMinMaxWidth_m4263 (GUIStyle_t250 * __this, GUIContent_t744 * ___content, float* ___minWidth, float* ___maxWidth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyle::Internal_CalcMinMaxWidth(System.IntPtr,UnityEngine.GUIContent,System.Single&,System.Single&)
 void GUIStyle_Internal_CalcMinMaxWidth_m4264 (Object_t * __this/* static, unused */, IntPtr_t107 ___target, GUIContent_t744 * ___content, float* ___minWidth, float* ___maxWidth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIStyle::ToString()
 String_t* GUIStyle_ToString_m4265 (GUIStyle_t250 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUIStyle::op_Implicit(System.String)
 GUIStyle_t250 * GUIStyle_op_Implicit_m1462 (Object_t * __this/* static, unused */, String_t* ___str, MethodInfo* method) IL2CPP_METHOD_ATTR;
