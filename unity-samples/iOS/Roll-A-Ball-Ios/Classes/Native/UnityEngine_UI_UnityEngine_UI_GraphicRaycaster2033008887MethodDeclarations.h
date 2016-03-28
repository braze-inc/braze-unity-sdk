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

// UnityEngine.UI.GraphicRaycaster
struct GraphicRaycaster_t2033008887;
// UnityEngine.Canvas
struct Canvas_t3534013893;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t3205101634;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t1756857658;
// UnityEngine.Camera
struct Camera_t3533968274;
// System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
struct List_1_t1730843082;
// UnityEngine.UI.Graphic
struct Graphic_t933884113;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_GraphicRaycaster_Blo3349705471.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve3205101634.h"
#include "UnityEngine_UnityEngine_Canvas3534013893.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UI_UnityEngine_UI_Graphic933884113.h"

// System.Void UnityEngine.UI.GraphicRaycaster::.ctor()
extern "C"  void GraphicRaycaster__ctor_m361051581 (GraphicRaycaster_t2033008887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::.cctor()
extern "C"  void GraphicRaycaster__cctor_m2120568208 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.GraphicRaycaster::get_sortOrderPriority()
extern "C"  int32_t GraphicRaycaster_get_sortOrderPriority_m2826757774 (GraphicRaycaster_t2033008887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.GraphicRaycaster::get_renderOrderPriority()
extern "C"  int32_t GraphicRaycaster_get_renderOrderPriority_m4133744982 (GraphicRaycaster_t2033008887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.GraphicRaycaster::get_ignoreReversedGraphics()
extern "C"  bool GraphicRaycaster_get_ignoreReversedGraphics_m4072803617 (GraphicRaycaster_t2033008887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::set_ignoreReversedGraphics(System.Boolean)
extern "C"  void GraphicRaycaster_set_ignoreReversedGraphics_m1428686170 (GraphicRaycaster_t2033008887 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.GraphicRaycaster/BlockingObjects UnityEngine.UI.GraphicRaycaster::get_blockingObjects()
extern "C"  int32_t GraphicRaycaster_get_blockingObjects_m3655591395 (GraphicRaycaster_t2033008887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::set_blockingObjects(UnityEngine.UI.GraphicRaycaster/BlockingObjects)
extern "C"  void GraphicRaycaster_set_blockingObjects_m421631540 (GraphicRaycaster_t2033008887 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Canvas UnityEngine.UI.GraphicRaycaster::get_canvas()
extern "C"  Canvas_t3534013893 * GraphicRaycaster_get_canvas_m1333156416 (GraphicRaycaster_t2033008887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
extern "C"  void GraphicRaycaster_Raycast_m1880111711 (GraphicRaycaster_t2033008887 * __this, PointerEventData_t3205101634 * ___eventData, List_1_t1756857658 * ___resultAppendList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.UI.GraphicRaycaster::get_eventCamera()
extern "C"  Camera_t3533968274 * GraphicRaycaster_get_eventCamera_m2522555180 (GraphicRaycaster_t2033008887 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::Raycast(UnityEngine.Canvas,UnityEngine.Camera,UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.UI.Graphic>)
extern "C"  void GraphicRaycaster_Raycast_m3191301018 (Il2CppObject * __this /* static, unused */, Canvas_t3534013893 * ___canvas, Camera_t3533968274 * ___eventCamera, Vector2_t3525329788  ___pointerPosition, List_1_t1730843082 * ___results, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.GraphicRaycaster::<Raycast>m__3(UnityEngine.UI.Graphic,UnityEngine.UI.Graphic)
extern "C"  int32_t GraphicRaycaster_U3CRaycastU3Em__3_m3990589484 (Il2CppObject * __this /* static, unused */, Graphic_t933884113 * ___g1, Graphic_t933884113 * ___g2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
