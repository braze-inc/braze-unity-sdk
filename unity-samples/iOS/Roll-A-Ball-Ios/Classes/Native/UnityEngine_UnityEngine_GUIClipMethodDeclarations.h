#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUIClip
struct GUIClip_t864;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.GUIClip::Push(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
 void GUIClip_Push_m4225 (Object_t * __this/* static, unused */, Rect_t442  ___screenRect, Vector2_t198  ___scrollOffset, Vector2_t198  ___renderOffset, bool ___resetOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIClip::INTERNAL_CALL_Push(UnityEngine.Rect&,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Boolean)
 void GUIClip_INTERNAL_CALL_Push_m4226 (Object_t * __this/* static, unused */, Rect_t442 * ___screenRect, Vector2_t198 * ___scrollOffset, Vector2_t198 * ___renderOffset, bool ___resetOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIClip::Pop()
 void GUIClip_Pop_m4227 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
