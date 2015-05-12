#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Graphic
struct Graphic_t565;
// UnityEngine.Material
struct Material_t401;
// UnityEngine.RectTransform
struct RectTransform_t559;
// UnityEngine.Canvas
struct Canvas_t561;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t560;
// UnityEngine.Texture
struct Texture_t450;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t566;
// UnityEngine.Camera
struct Camera_t172;
// UnityEngine.Events.UnityAction
struct UnityAction_t562;
// UnityEngine.Transform
struct Transform_t179;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.UI.Graphic::.ctor()
 void Graphic__ctor_m2372 (Graphic_t565 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::.cctor()
 void Graphic__cctor_m2373 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_defaultGraphicMaterial()
 Material_t401 * Graphic_get_defaultGraphicMaterial_m2374 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.Graphic::get_color()
 Color_t341  Graphic_get_color_m2375 (Graphic_t565 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color)
 void Graphic_set_color_m2376 (Graphic_t565 * __this, Color_t341  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetAllDirty()
 void Graphic_SetAllDirty_m2377 (Graphic_t565 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetLayoutDirty()
 void Graphic_SetLayoutDirty_m2378 (Graphic_t565 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetVerticesDirty()
 void Graphic_SetVerticesDirty_m2379 (Graphic_t565 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetMaterialDirty()
 void Graphic_SetMaterialDirty_m2380 (Graphic_t565 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnRectTransformDimensionsChange()
 void Graphic_OnRectTransformDimensionsChange_m2381 (Graphic_t565 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnBeforeTransformParentChanged()
 void Graphic_OnBeforeTransformParentChanged_m2382 (Graphic_t565 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnTransformParentChanged()
 void Graphic_OnTransformParentChanged_m2383 (Graphic_t565 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Graphic::get_depth()
 int32_t Graphic_get_depth_m2384 (Graphic_t565 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
 RectTransform_t559 * Graphic_get_rectTransform_m2385 (Graphic_t565 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Canvas UnityEngine.UI.Graphic::get_canvas()
 Canvas_t561 * Graphic_get_canvas_m2386 (Graphic_t565 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CacheCanvas()
 void Graphic_CacheCanvas_m2387 (Graphic_t565 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::get_canvasRenderer()
 CanvasRenderer_t560 * Graphic_get_canvasRenderer_m2388 (Graphic_t565 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_defaultMaterial()
 Material_t401 * Graphic_get_defaultMaterial_m2389 (Graphic_t565 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_material()
 Material_t401 * Graphic_get_material_m2390 (Graphic_t565 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material)
 void Graphic_set_material_m2391 (Graphic_t565 * __this, Material_t401 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_materialForRendering()
 Material_t401 * Graphic_get_materialForRendering_m2392 (Graphic_t565 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.Graphic::get_mainTexture()
 Texture_t450 * Graphic_get_mainTexture_m2393 (Graphic_t565 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnEnable()
 void Graphic_OnEnable_m2394 (Graphic_t565 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnDisable()
 void Graphic_OnDisable_m2395 (Graphic_t565 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SendGraphicEnabledDisabled()
 void Graphic_SendGraphicEnabledDisabled_m2396 (Graphic_t565 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::Rebuild(UnityEngine.UI.CanvasUpdate)
 void Graphic_Rebuild_m2397 (Graphic_t565 * __this, int32_t ___update, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UpdateGeometry()
 void Graphic_UpdateGeometry_m2398 (Graphic_t565 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UpdateMaterial()
 void Graphic_UpdateMaterial_m2399 (Graphic_t565 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnFillVBO(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
 void Graphic_OnFillVBO_m2400 (Graphic_t565 * __this, List_1_t566 * ___vbo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnDidApplyAnimationProperties()
 void Graphic_OnDidApplyAnimationProperties_m2401 (Graphic_t565 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetNativeSize()
 void Graphic_SetNativeSize_m2402 (Graphic_t565 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Graphic::Raycast(UnityEngine.Vector2,UnityEngine.Camera)
 bool Graphic_Raycast_m2403 (Graphic_t565 * __this, Vector2_t184  ___sp, Camera_t172 * ___eventCamera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.Graphic::PixelAdjustPoint(UnityEngine.Vector2)
 Vector2_t184  Graphic_PixelAdjustPoint_m2404 (Graphic_t565 * __this, Vector2_t184  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.UI.Graphic::GetPixelAdjustedRect()
 Rect_t78  Graphic_GetPixelAdjustedRect_m2405 (Graphic_t565 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CrossFadeColor(UnityEngine.Color,System.Single,System.Boolean,System.Boolean)
 void Graphic_CrossFadeColor_m2406 (Graphic_t565 * __this, Color_t341  ___targetColor, float ___duration, bool ___ignoreTimeScale, bool ___useAlpha, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CrossFadeColor(UnityEngine.Color,System.Single,System.Boolean,System.Boolean,System.Boolean)
 void Graphic_CrossFadeColor_m2407 (Graphic_t565 * __this, Color_t341  ___targetColor, float ___duration, bool ___ignoreTimeScale, bool ___useAlpha, bool ___useRGB, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.Graphic::CreateColorFromAlpha(System.Single)
 Color_t341  Graphic_CreateColorFromAlpha_m2408 (Object_t * __this/* static, unused */, float ___alpha, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CrossFadeAlpha(System.Single,System.Single,System.Boolean)
 void Graphic_CrossFadeAlpha_m2409 (Graphic_t565 * __this, float ___alpha, float ___duration, bool ___ignoreTimeScale, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::RegisterDirtyLayoutCallback(UnityEngine.Events.UnityAction)
 void Graphic_RegisterDirtyLayoutCallback_m2410 (Graphic_t565 * __this, UnityAction_t562 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UnregisterDirtyLayoutCallback(UnityEngine.Events.UnityAction)
 void Graphic_UnregisterDirtyLayoutCallback_m2411 (Graphic_t565 * __this, UnityAction_t562 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::RegisterDirtyVerticesCallback(UnityEngine.Events.UnityAction)
 void Graphic_RegisterDirtyVerticesCallback_m2412 (Graphic_t565 * __this, UnityAction_t562 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UnregisterDirtyVerticesCallback(UnityEngine.Events.UnityAction)
 void Graphic_UnregisterDirtyVerticesCallback_m2413 (Graphic_t565 * __this, UnityAction_t562 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::RegisterDirtyMaterialCallback(UnityEngine.Events.UnityAction)
 void Graphic_RegisterDirtyMaterialCallback_m2414 (Graphic_t565 * __this, UnityAction_t562 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UnregisterDirtyMaterialCallback(UnityEngine.Events.UnityAction)
 void Graphic_UnregisterDirtyMaterialCallback_m2415 (Graphic_t565 * __this, UnityAction_t562 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::<s_VboPool>m__4(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
 void Graphic_U3Cs_VboPoolU3Em__4_m2416 (Object_t * __this/* static, unused */, List_1_t566 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::<s_VboPool>m__5(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
 void Graphic_U3Cs_VboPoolU3Em__5_m2417 (Object_t * __this/* static, unused */, List_1_t566 * ___l, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Graphic::UnityEngine.UI.ICanvasElement.IsDestroyed()
 bool Graphic_UnityEngine_UI_ICanvasElement_IsDestroyed_m2418 (Graphic_t565 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.Graphic::UnityEngine.UI.ICanvasElement.get_transform()
 Transform_t179 * Graphic_UnityEngine_UI_ICanvasElement_get_transform_m2419 (Graphic_t565 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
