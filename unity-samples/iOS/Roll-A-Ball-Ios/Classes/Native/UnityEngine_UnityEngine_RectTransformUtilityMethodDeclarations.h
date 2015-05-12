#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.RectTransformUtility
struct RectTransformUtility_t742;
// UnityEngine.RectTransform
struct RectTransform_t573;
// UnityEngine.Camera
struct Camera_t186;
// UnityEngine.Transform
struct Transform_t193;
// UnityEngine.Canvas
struct Canvas_t575;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"

// System.Void UnityEngine.RectTransformUtility::.cctor()
 void RectTransformUtility__cctor_m4851 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera)
 bool RectTransformUtility_RectangleContainsScreenPoint_m3584 (Object_t * __this/* static, unused */, RectTransform_t573 * ___rect, Vector2_t198  ___screenPoint, Camera_t186 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)
 bool RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m4852 (Object_t * __this/* static, unused */, RectTransform_t573 * ___rect, Vector2_t198 * ___screenPoint, Camera_t186 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas)
 Vector2_t198  RectTransformUtility_PixelAdjustPoint_m3553 (Object_t * __this/* static, unused */, Vector2_t198  ___point, Transform_t193 * ___elementTransform, Canvas_t575 * ___canvas, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
 void RectTransformUtility_PixelAdjustPoint_m4853 (Object_t * __this/* static, unused */, Vector2_t198  ___point, Transform_t193 * ___elementTransform, Canvas_t575 * ___canvas, Vector2_t198 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
 void RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m4854 (Object_t * __this/* static, unused */, Vector2_t198 * ___point, Transform_t193 * ___elementTransform, Canvas_t575 * ___canvas, Vector2_t198 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)
 Rect_t442  RectTransformUtility_PixelAdjustRect_m3554 (Object_t * __this/* static, unused */, RectTransform_t573 * ___rectTransform, Canvas_t575 * ___canvas, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToWorldPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector3&)
 bool RectTransformUtility_ScreenPointToWorldPointInRectangle_m4855 (Object_t * __this/* static, unused */, RectTransform_t573 * ___rect, Vector2_t198  ___screenPoint, Camera_t186 * ___cam, Vector3_t202 * ___worldPoint, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
 bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m3629 (Object_t * __this/* static, unused */, RectTransform_t573 * ___rect, Vector2_t198  ___screenPoint, Camera_t186 * ___cam, Vector2_t198 * ___localPoint, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.RectTransformUtility::ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector2)
 Ray_t445  RectTransformUtility_ScreenPointToRay_m4856 (Object_t * __this/* static, unused */, Camera_t186 * ___cam, Vector2_t198  ___screenPos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::FlipLayoutOnAxis(UnityEngine.RectTransform,System.Int32,System.Boolean,System.Boolean)
 void RectTransformUtility_FlipLayoutOnAxis_m3761 (Object_t * __this/* static, unused */, RectTransform_t573 * ___rect, int32_t ___axis, bool ___keepPositioning, bool ___recursive, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::FlipLayoutAxes(UnityEngine.RectTransform,System.Boolean,System.Boolean)
 void RectTransformUtility_FlipLayoutAxes_m3760 (Object_t * __this/* static, unused */, RectTransform_t573 * ___rect, bool ___keepPositioning, bool ___recursive, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::GetTransposed(UnityEngine.Vector2)
 Vector2_t198  RectTransformUtility_GetTransposed_m4857 (Object_t * __this/* static, unused */, Vector2_t198  ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
