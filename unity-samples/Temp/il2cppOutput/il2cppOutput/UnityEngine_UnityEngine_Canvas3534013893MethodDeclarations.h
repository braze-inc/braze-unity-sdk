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

// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t1153522766;
// UnityEngine.Canvas
struct Canvas_t3534013893;
// UnityEngine.Camera
struct Camera_t3533968274;
// UnityEngine.Material
struct Material_t1886596500;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Canvas_WillRenderCanvases1153522766.h"
#include "UnityEngine_UnityEngine_RenderMode415265990.h"

// System.Void UnityEngine.Canvas::add_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
extern "C"  void Canvas_add_willRenderCanvases_m716439881 (Il2CppObject * __this /* static, unused */, WillRenderCanvases_t1153522766 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::remove_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
extern "C"  void Canvas_remove_willRenderCanvases_m158291336 (Il2CppObject * __this /* static, unused */, WillRenderCanvases_t1153522766 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
extern "C"  int32_t Canvas_get_renderMode_m3669121200 (Canvas_t3534013893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Canvas::get_isRootCanvas()
extern "C"  bool Canvas_get_isRootCanvas_m4030632706 (Canvas_t3534013893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
extern "C"  Camera_t3533968274 * Canvas_get_worldCamera_m2621449230 (Canvas_t3534013893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Canvas::get_scaleFactor()
extern "C"  float Canvas_get_scaleFactor_m1187077271 (Canvas_t3534013893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::set_scaleFactor(System.Single)
extern "C"  void Canvas_set_scaleFactor_m2206436828 (Canvas_t3534013893 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Canvas::get_referencePixelsPerUnit()
extern "C"  float Canvas_get_referencePixelsPerUnit_m3759589197 (Canvas_t3534013893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::set_referencePixelsPerUnit(System.Single)
extern "C"  void Canvas_set_referencePixelsPerUnit_m1910706966 (Canvas_t3534013893 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Canvas::get_pixelPerfect()
extern "C"  bool Canvas_get_pixelPerfect_m2847994693 (Canvas_t3534013893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Canvas::get_renderOrder()
extern "C"  int32_t Canvas_get_renderOrder_m2295969794 (Canvas_t3534013893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Canvas::get_overrideSorting()
extern "C"  bool Canvas_get_overrideSorting_m3812884636 (Canvas_t3534013893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::set_overrideSorting(System.Boolean)
extern "C"  void Canvas_set_overrideSorting_m1850487749 (Canvas_t3534013893 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Canvas::get_sortingOrder()
extern "C"  int32_t Canvas_get_sortingOrder_m1274160674 (Canvas_t3534013893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::set_sortingOrder(System.Int32)
extern "C"  void Canvas_set_sortingOrder_m1522807655 (Canvas_t3534013893 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Canvas::get_sortingLayerID()
extern "C"  int32_t Canvas_get_sortingLayerID_m3425838272 (Canvas_t3534013893 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::set_sortingLayerID(System.Int32)
extern "C"  void Canvas_set_sortingLayerID_m2317502469 (Canvas_t3534013893 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Canvas::GetDefaultCanvasMaterial()
extern "C"  Material_t1886596500 * Canvas_GetDefaultCanvasMaterial_m1655363178 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::SendWillRenderCanvases()
extern "C"  void Canvas_SendWillRenderCanvases_m1768133093 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Canvas::ForceUpdateCanvases()
extern "C"  void Canvas_ForceUpdateCanvases_m1970133101 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
