#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Shadow
struct Shadow_t680;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t566;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void UnityEngine.UI.Shadow::.ctor()
 void Shadow__ctor_m3171 (Shadow_t680 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.Shadow::get_effectColor()
 Color_t341  Shadow_get_effectColor_m3172 (Shadow_t680 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::set_effectColor(UnityEngine.Color)
 void Shadow_set_effectColor_m3173 (Shadow_t680 * __this, Color_t341  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.Shadow::get_effectDistance()
 Vector2_t184  Shadow_get_effectDistance_m3174 (Shadow_t680 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::set_effectDistance(UnityEngine.Vector2)
 void Shadow_set_effectDistance_m3175 (Shadow_t680 * __this, Vector2_t184  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Shadow::get_useGraphicAlpha()
 bool Shadow_get_useGraphicAlpha_m3176 (Shadow_t680 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::set_useGraphicAlpha(System.Boolean)
 void Shadow_set_useGraphicAlpha_m3177 (Shadow_t680 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::ApplyShadow(System.Collections.Generic.List`1<UnityEngine.UIVertex>,UnityEngine.Color32,System.Int32,System.Int32,System.Single,System.Single)
 void Shadow_ApplyShadow_m3178 (Shadow_t680 * __this, List_1_t566 * ___verts, Color32_t682  ___color, int32_t ___start, int32_t ___end, float ___x, float ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Shadow::ModifyVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
 void Shadow_ModifyVertices_m3179 (Shadow_t680 * __this, List_1_t566 * ___verts, MethodInfo* method) IL2CPP_METHOD_ATTR;
