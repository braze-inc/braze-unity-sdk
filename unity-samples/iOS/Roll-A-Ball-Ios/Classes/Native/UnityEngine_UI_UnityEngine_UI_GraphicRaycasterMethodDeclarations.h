#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.GraphicRaycaster
struct GraphicRaycaster_t570;
// UnityEngine.Canvas
struct Canvas_t561;
// UnityEngine.Camera
struct Camera_t172;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t461;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t462;
// System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
struct List_1_t568;
// UnityEngine.UI.Graphic
struct Graphic_t565;
// UnityEngine.UI.GraphicRaycaster/BlockingObjects
#include "UnityEngine_UI_UnityEngine_UI_GraphicRaycaster_BlockingObjec.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.UI.GraphicRaycaster::.ctor()
 void GraphicRaycaster__ctor_m2420 (GraphicRaycaster_t570 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::.cctor()
 void GraphicRaycaster__cctor_m2421 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.GraphicRaycaster::get_sortOrderPriority()
 int32_t GraphicRaycaster_get_sortOrderPriority_m2422 (GraphicRaycaster_t570 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.GraphicRaycaster::get_renderOrderPriority()
 int32_t GraphicRaycaster_get_renderOrderPriority_m2423 (GraphicRaycaster_t570 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.GraphicRaycaster::get_ignoreReversedGraphics()
 bool GraphicRaycaster_get_ignoreReversedGraphics_m2424 (GraphicRaycaster_t570 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::set_ignoreReversedGraphics(System.Boolean)
 void GraphicRaycaster_set_ignoreReversedGraphics_m2425 (GraphicRaycaster_t570 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.GraphicRaycaster/BlockingObjects UnityEngine.UI.GraphicRaycaster::get_blockingObjects()
 int32_t GraphicRaycaster_get_blockingObjects_m2426 (GraphicRaycaster_t570 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::set_blockingObjects(UnityEngine.UI.GraphicRaycaster/BlockingObjects)
 void GraphicRaycaster_set_blockingObjects_m2427 (GraphicRaycaster_t570 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Canvas UnityEngine.UI.GraphicRaycaster::get_canvas()
 Canvas_t561 * GraphicRaycaster_get_canvas_m2428 (GraphicRaycaster_t570 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>)
 void GraphicRaycaster_Raycast_m2429 (GraphicRaycaster_t570 * __this, PointerEventData_t461 * ___eventData, List_1_t462 * ___resultAppendList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.UI.GraphicRaycaster::get_eventCamera()
 Camera_t172 * GraphicRaycaster_get_eventCamera_m2430 (GraphicRaycaster_t570 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRaycaster::Raycast(UnityEngine.Canvas,UnityEngine.Camera,UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.UI.Graphic>)
 void GraphicRaycaster_Raycast_m2431 (Object_t * __this/* static, unused */, Canvas_t561 * ___canvas, Camera_t172 * ___eventCamera, Vector2_t184  ___pointerPosition, List_1_t568 * ___results, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.GraphicRaycaster::<Raycast>m__6(UnityEngine.UI.Graphic,UnityEngine.UI.Graphic)
 int32_t GraphicRaycaster_U3CRaycastU3Em__6_m2432 (Object_t * __this/* static, unused */, Graphic_t565 * ___g1, Graphic_t565 * ___g2, MethodInfo* method) IL2CPP_METHOD_ATTR;
