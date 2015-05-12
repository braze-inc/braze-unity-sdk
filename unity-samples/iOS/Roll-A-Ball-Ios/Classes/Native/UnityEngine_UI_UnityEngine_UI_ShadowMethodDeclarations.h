#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Shadow
struct Shadow_t694;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t580;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void UnityEngine.UI.Shadow::.ctor()
 void Shadow__ctor_m3277 (Shadow_t694 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.Shadow::get_effectColor()
 Color_t12  Shadow_get_effectColor_m3278 (Shadow_t694 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::set_effectColor(UnityEngine.Color)
 void Shadow_set_effectColor_m3279 (Shadow_t694 * __this, Color_t12  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.Shadow::get_effectDistance()
 Vector2_t198  Shadow_get_effectDistance_m3280 (Shadow_t694 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::set_effectDistance(UnityEngine.Vector2)
 void Shadow_set_effectDistance_m3281 (Shadow_t694 * __this, Vector2_t198  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Shadow::get_useGraphicAlpha()
 bool Shadow_get_useGraphicAlpha_m3282 (Shadow_t694 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::set_useGraphicAlpha(System.Boolean)
 void Shadow_set_useGraphicAlpha_m3283 (Shadow_t694 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::ApplyShadow(System.Collections.Generic.List`1<UnityEngine.UIVertex>,UnityEngine.Color32,System.Int32,System.Int32,System.Single,System.Single)
 void Shadow_ApplyShadow_m3284 (Shadow_t694 * __this, List_1_t580 * ___verts, Color32_t696  ___color, int32_t ___start, int32_t ___end, float ___x, float ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::ModifyVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
 void Shadow_ModifyVertices_m3285 (Shadow_t694 * __this, List_1_t580 * ___verts, MethodInfo* method) IL2CPP_METHOD_ATTR;
