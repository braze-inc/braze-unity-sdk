#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.RectTransformUtility
struct RectTransformUtility_t729;
// UnityEngine.RectTransform
struct RectTransform_t559;
// UnityEngine.Camera
struct Camera_t172;
// UnityEngine.Transform
struct Transform_t179;
// UnityEngine.Canvas
struct Canvas_t561;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"

// System.Void UnityEngine.RectTransformUtility::.cctor()
 void RectTransformUtility__cctor_m4756 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera)
 bool RectTransformUtility_RectangleContainsScreenPoint_m3479 (Object_t * __this/* static, unused */, RectTransform_t559 * ___rect, Vector2_t184  ___screenPoint, Camera_t172 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)
 bool RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m4757 (Object_t * __this/* static, unused */, RectTransform_t559 * ___rect, Vector2_t184 * ___screenPoint, Camera_t172 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas)
 Vector2_t184  RectTransformUtility_PixelAdjustPoint_m3448 (Object_t * __this/* static, unused */, Vector2_t184  ___point, Transform_t179 * ___elementTransform, Canvas_t561 * ___canvas, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
 void RectTransformUtility_PixelAdjustPoint_m4758 (Object_t * __this/* static, unused */, Vector2_t184  ___point, Transform_t179 * ___elementTransform, Canvas_t561 * ___canvas, Vector2_t184 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
 void RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m4759 (Object_t * __this/* static, unused */, Vector2_t184 * ___point, Transform_t179 * ___elementTransform, Canvas_t561 * ___canvas, Vector2_t184 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)
 Rect_t78  RectTransformUtility_PixelAdjustRect_m3449 (Object_t * __this/* static, unused */, RectTransform_t559 * ___rectTransform, Canvas_t561 * ___canvas, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToWorldPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector3&)
 bool RectTransformUtility_ScreenPointToWorldPointInRectangle_m4760 (Object_t * __this/* static, unused */, RectTransform_t559 * ___rect, Vector2_t184  ___screenPoint, Camera_t172 * ___cam, Vector3_t188 * ___worldPoint, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
 bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m3524 (Object_t * __this/* static, unused */, RectTransform_t559 * ___rect, Vector2_t184  ___screenPoint, Camera_t172 * ___cam, Vector2_t184 * ___localPoint, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.RectTransformUtility::ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector2)
 Ray_t432  RectTransformUtility_ScreenPointToRay_m4761 (Object_t * __this/* static, unused */, Camera_t172 * ___cam, Vector2_t184  ___screenPos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::FlipLayoutOnAxis(UnityEngine.RectTransform,System.Int32,System.Boolean,System.Boolean)
 void RectTransformUtility_FlipLayoutOnAxis_m3656 (Object_t * __this/* static, unused */, RectTransform_t559 * ___rect, int32_t ___axis, bool ___keepPositioning, bool ___recursive, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::FlipLayoutAxes(UnityEngine.RectTransform,System.Boolean,System.Boolean)
 void RectTransformUtility_FlipLayoutAxes_m3655 (Object_t * __this/* static, unused */, RectTransform_t559 * ___rect, bool ___keepPositioning, bool ___recursive, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::GetTransposed(UnityEngine.Vector2)
 Vector2_t184  RectTransformUtility_GetTransposed_m4762 (Object_t * __this/* static, unused */, Vector2_t184  ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
