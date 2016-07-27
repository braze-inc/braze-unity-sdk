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

// UnityEngine.RectTransform
struct RectTransform_t3317474837;
// UnityEngine.Camera
struct Camera_t3533968274;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.Canvas
struct Canvas_t3534013893;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RectTransform3317474837.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_Canvas3534013893.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Ray1522967639.h"

// System.Void UnityEngine.RectTransformUtility::.cctor()
extern "C"  void RectTransformUtility__cctor_m4293768260 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera)
extern "C"  bool RectTransformUtility_RectangleContainsScreenPoint_m1460676684 (Il2CppObject * __this /* static, unused */, RectTransform_t3317474837 * ___rect0, Vector2_t3525329788  ___screenPoint1, Camera_t3533968274 * ___cam2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)
extern "C"  bool RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m1592514141 (Il2CppObject * __this /* static, unused */, RectTransform_t3317474837 * ___rect0, Vector2_t3525329788 * ___screenPoint1, Camera_t3533968274 * ___cam2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas)
extern "C"  Vector2_t3525329788  RectTransformUtility_PixelAdjustPoint_m2518308759 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788  ___point0, Transform_t284553113 * ___elementTransform1, Canvas_t3534013893 * ___canvas2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C"  void RectTransformUtility_PixelAdjustPoint_m1313063708 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788  ___point0, Transform_t284553113 * ___elementTransform1, Canvas_t3534013893 * ___canvas2, Vector2_t3525329788 * ___output3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C"  void RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m1509640863 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788 * ___point0, Transform_t284553113 * ___elementTransform1, Canvas_t3534013893 * ___canvas2, Vector2_t3525329788 * ___output3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)
extern "C"  Rect_t1525428817  RectTransformUtility_PixelAdjustRect_m3727716130 (Il2CppObject * __this /* static, unused */, RectTransform_t3317474837 * ___rectTransform0, Canvas_t3534013893 * ___canvas1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas,UnityEngine.Rect&)
extern "C"  void RectTransformUtility_INTERNAL_CALL_PixelAdjustRect_m1038323288 (Il2CppObject * __this /* static, unused */, RectTransform_t3317474837 * ___rectTransform0, Canvas_t3534013893 * ___canvas1, Rect_t1525428817 * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToWorldPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector3&)
extern "C"  bool RectTransformUtility_ScreenPointToWorldPointInRectangle_m3856201718 (Il2CppObject * __this /* static, unused */, RectTransform_t3317474837 * ___rect0, Vector2_t3525329788  ___screenPoint1, Camera_t3533968274 * ___cam2, Vector3_t3525329789 * ___worldPoint3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
extern "C"  bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m666650172 (Il2CppObject * __this /* static, unused */, RectTransform_t3317474837 * ___rect0, Vector2_t3525329788  ___screenPoint1, Camera_t3533968274 * ___cam2, Vector2_t3525329788 * ___localPoint3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.RectTransformUtility::ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector2)
extern "C"  Ray_t1522967639  RectTransformUtility_ScreenPointToRay_m1216104542 (Il2CppObject * __this /* static, unused */, Camera_t3533968274 * ___cam0, Vector2_t3525329788  ___screenPos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::FlipLayoutOnAxis(UnityEngine.RectTransform,System.Int32,System.Boolean,System.Boolean)
extern "C"  void RectTransformUtility_FlipLayoutOnAxis_m3487429352 (Il2CppObject * __this /* static, unused */, RectTransform_t3317474837 * ___rect0, int32_t ___axis1, bool ___keepPositioning2, bool ___recursive3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::FlipLayoutAxes(UnityEngine.RectTransform,System.Boolean,System.Boolean)
extern "C"  void RectTransformUtility_FlipLayoutAxes_m2163490602 (Il2CppObject * __this /* static, unused */, RectTransform_t3317474837 * ___rect0, bool ___keepPositioning1, bool ___recursive2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::GetTransposed(UnityEngine.Vector2)
extern "C"  Vector2_t3525329788  RectTransformUtility_GetTransposed_m2060823533 (Il2CppObject * __this /* static, unused */, Vector2_t3525329788  ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
