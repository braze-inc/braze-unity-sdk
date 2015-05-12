#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.GraphicRaycaster
struct GraphicRaycaster_t584;
// UnityEngine.Canvas
struct Canvas_t575;
// UnityEngine.Camera
struct Camera_t186;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t475;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t476;
// System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
struct List_1_t582;
// UnityEngine.UI.Graphic
struct Graphic_t579;
// UnityEngine.UI.GraphicRaycaster/BlockingObjects
#include "UnityEngine_UI_UnityEngine_UI_GraphicRaycaster_BlockingObjec.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.UI.GraphicRaycaster::.ctor()
 void GraphicRaycaster__ctor_m2526 (GraphicRaycaster_t584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::.cctor()
 void GraphicRaycaster__cctor_m2527 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.GraphicRaycaster::get_sortOrderPriority()
 int32_t GraphicRaycaster_get_sortOrderPriority_m2528 (GraphicRaycaster_t584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.GraphicRaycaster::get_renderOrderPriority()
 int32_t GraphicRaycaster_get_renderOrderPriority_m2529 (GraphicRaycaster_t584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.GraphicRaycaster::get_ignoreReversedGraphics()
 bool GraphicRaycaster_get_ignoreReversedGraphics_m2530 (GraphicRaycaster_t584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::set_ignoreReversedGraphics(System.Boolean)
 void GraphicRaycaster_set_ignoreReversedGraphics_m2531 (GraphicRaycaster_t584 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.GraphicRaycaster/BlockingObjects UnityEngine.UI.GraphicRaycaster::get_blockingObjects()
 int32_t GraphicRaycaster_get_blockingObjects_m2532 (GraphicRaycaster_t584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::set_blockingObjects(UnityEngine.UI.GraphicRaycaster/BlockingObjects)
 void GraphicRaycaster_set_blockingObjects_m2533 (GraphicRaycaster_t584 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Canvas UnityEngine.UI.GraphicRaycaster::get_canvas()
 Canvas_t575 * GraphicRaycaster_get_canvas_m2534 (GraphicRaycaster_t584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
 void GraphicRaycaster_Raycast_m2535 (GraphicRaycaster_t584 * __this, PointerEventData_t475 * ___eventData, List_1_t476 * ___resultAppendList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.UI.GraphicRaycaster::get_eventCamera()
 Camera_t186 * GraphicRaycaster_get_eventCamera_m2536 (GraphicRaycaster_t584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::Raycast(UnityEngine.Canvas,UnityEngine.Camera,UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.UI.Graphic>)
 void GraphicRaycaster_Raycast_m2537 (Object_t * __this/* static, unused */, Canvas_t575 * ___canvas, Camera_t186 * ___eventCamera, Vector2_t198  ___pointerPosition, List_1_t582 * ___results, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.GraphicRaycaster::<Raycast>m__6(UnityEngine.UI.Graphic,UnityEngine.UI.Graphic)
 int32_t GraphicRaycaster_U3CRaycastU3Em__6_m2538 (Object_t * __this/* static, unused */, Graphic_t579 * ___g1, Graphic_t579 * ___g2, MethodInfo* method) IL2CPP_METHOD_ATTR;
