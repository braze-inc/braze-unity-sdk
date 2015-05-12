#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.GraphicRegistry
struct GraphicRegistry_t571;
// UnityEngine.Canvas
struct Canvas_t561;
// UnityEngine.UI.Graphic
struct Graphic_t565;
// System.Collections.Generic.IList`1<UnityEngine.UI.Graphic>
struct IList_1_t573;

// System.Void UnityEngine.UI.GraphicRegistry::.ctor()
 void GraphicRegistry__ctor_m2433 (GraphicRegistry_t571 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRegistry::.cctor()
 void GraphicRegistry__cctor_m2434 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.GraphicRegistry UnityEngine.UI.GraphicRegistry::get_instance()
 GraphicRegistry_t571 * GraphicRegistry_get_instance_m2435 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRegistry::RegisterGraphicForCanvas(UnityEngine.Canvas,UnityEngine.UI.Graphic)
 void GraphicRegistry_RegisterGraphicForCanvas_m2436 (Object_t * __this/* static, unused */, Canvas_t561 * ___c, Graphic_t565 * ___graphic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.GraphicRegistry::UnregisterGraphicForCanvas(UnityEngine.Canvas,UnityEngine.UI.Graphic)
 void GraphicRegistry_UnregisterGraphicForCanvas_m2437 (Object_t * __this/* static, unused */, Canvas_t561 * ___c, Graphic_t565 * ___graphic, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRegistry::GetGraphicsForCanvas(UnityEngine.Canvas)
 Object_t* GraphicRegistry_GetGraphicsForCanvas_m2438 (Object_t * __this/* static, unused */, Canvas_t561 * ___canvas, MethodInfo* method) IL2CPP_METHOD_ATTR;
