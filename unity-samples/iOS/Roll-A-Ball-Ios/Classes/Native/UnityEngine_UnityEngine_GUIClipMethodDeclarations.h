#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUIClip
struct GUIClip_t853;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.GUIClip::Push(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
 void GUIClip_Push_m4130 (Object_t * __this/* static, unused */, Rect_t78  ___screenRect, Vector2_t184  ___scrollOffset, Vector2_t184  ___renderOffset, bool ___resetOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIClip::INTERNAL_CALL_Push(UnityEngine.Rect&,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Boolean)
 void GUIClip_INTERNAL_CALL_Push_m4131 (Object_t * __this/* static, unused */, Rect_t78 * ___screenRect, Vector2_t184 * ___scrollOffset, Vector2_t184 * ___renderOffset, bool ___resetOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIClip::Pop()
 void GUIClip_Pop_m4132 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
