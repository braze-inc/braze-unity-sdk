#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Graphic
struct Graphic_t579;
// UnityEngine.Material
struct Material_t413;
// UnityEngine.RectTransform
struct RectTransform_t573;
// UnityEngine.Canvas
struct Canvas_t575;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t574;
// UnityEngine.Texture
struct Texture_t464;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t580;
// UnityEngine.Camera
struct Camera_t186;
// UnityEngine.Events.UnityAction
struct UnityAction_t576;
// UnityEngine.Transform
struct Transform_t193;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.UI.Graphic::.ctor()
 void Graphic__ctor_m2478 (Graphic_t579 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::.cctor()
 void Graphic__cctor_m2479 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_defaultGraphicMaterial()
 Material_t413 * Graphic_get_defaultGraphicMaterial_m2480 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.Graphic::get_color()
 Color_t12  Graphic_get_color_m2481 (Graphic_t579 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color)
 void Graphic_set_color_m2482 (Graphic_t579 * __this, Color_t12  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetAllDirty()
 void Graphic_SetAllDirty_m2483 (Graphic_t579 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetLayoutDirty()
 void Graphic_SetLayoutDirty_m2484 (Graphic_t579 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetVerticesDirty()
 void Graphic_SetVerticesDirty_m2485 (Graphic_t579 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetMaterialDirty()
 void Graphic_SetMaterialDirty_m2486 (Graphic_t579 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnRectTransformDimensionsChange()
 void Graphic_OnRectTransformDimensionsChange_m2487 (Graphic_t579 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnBeforeTransformParentChanged()
 void Graphic_OnBeforeTransformParentChanged_m2488 (Graphic_t579 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnTransformParentChanged()
 void Graphic_OnTransformParentChanged_m2489 (Graphic_t579 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Graphic::get_depth()
 int32_t Graphic_get_depth_m2490 (Graphic_t579 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
 RectTransform_t573 * Graphic_get_rectTransform_m2491 (Graphic_t579 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Canvas UnityEngine.UI.Graphic::get_canvas()
 Canvas_t575 * Graphic_get_canvas_m2492 (Graphic_t579 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CacheCanvas()
 void Graphic_CacheCanvas_m2493 (Graphic_t579 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::get_canvasRenderer()
 CanvasRenderer_t574 * Graphic_get_canvasRenderer_m2494 (Graphic_t579 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_defaultMaterial()
 Material_t413 * Graphic_get_defaultMaterial_m2495 (Graphic_t579 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_material()
 Material_t413 * Graphic_get_material_m2496 (Graphic_t579 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material)
 void Graphic_set_material_m2497 (Graphic_t579 * __this, Material_t413 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Graphic::get_materialForRendering()
 Material_t413 * Graphic_get_materialForRendering_m2498 (Graphic_t579 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.Graphic::get_mainTexture()
 Texture_t464 * Graphic_get_mainTexture_m2499 (Graphic_t579 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnEnable()
 void Graphic_OnEnable_m2500 (Graphic_t579 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnDisable()
 void Graphic_OnDisable_m2501 (Graphic_t579 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SendGraphicEnabledDisabled()
 void Graphic_SendGraphicEnabledDisabled_m2502 (Graphic_t579 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::Rebuild(UnityEngine.UI.CanvasUpdate)
 void Graphic_Rebuild_m2503 (Graphic_t579 * __this, int32_t ___update, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UpdateGeometry()
 void Graphic_UpdateGeometry_m2504 (Graphic_t579 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UpdateMaterial()
 void Graphic_UpdateMaterial_m2505 (Graphic_t579 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnFillVBO(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
 void Graphic_OnFillVBO_m2506 (Graphic_t579 * __this, List_1_t580 * ___vbo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::OnDidApplyAnimationProperties()
 void Graphic_OnDidApplyAnimationProperties_m2507 (Graphic_t579 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::SetNativeSize()
 void Graphic_SetNativeSize_m2508 (Graphic_t579 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Graphic::Raycast(UnityEngine.Vector2,UnityEngine.Camera)
 bool Graphic_Raycast_m2509 (Graphic_t579 * __this, Vector2_t198  ___sp, Camera_t186 * ___eventCamera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.Graphic::PixelAdjustPoint(UnityEngine.Vector2)
 Vector2_t198  Graphic_PixelAdjustPoint_m2510 (Graphic_t579 * __this, Vector2_t198  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.UI.Graphic::GetPixelAdjustedRect()
 Rect_t442  Graphic_GetPixelAdjustedRect_m2511 (Graphic_t579 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CrossFadeColor(UnityEngine.Color,System.Single,System.Boolean,System.Boolean)
 void Graphic_CrossFadeColor_m2512 (Graphic_t579 * __this, Color_t12  ___targetColor, float ___duration, bool ___ignoreTimeScale, bool ___useAlpha, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CrossFadeColor(UnityEngine.Color,System.Single,System.Boolean,System.Boolean,System.Boolean)
 void Graphic_CrossFadeColor_m2513 (Graphic_t579 * __this, Color_t12  ___targetColor, float ___duration, bool ___ignoreTimeScale, bool ___useAlpha, bool ___useRGB, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.Graphic::CreateColorFromAlpha(System.Single)
 Color_t12  Graphic_CreateColorFromAlpha_m2514 (Object_t * __this/* static, unused */, float ___alpha, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::CrossFadeAlpha(System.Single,System.Single,System.Boolean)
 void Graphic_CrossFadeAlpha_m2515 (Graphic_t579 * __this, float ___alpha, float ___duration, bool ___ignoreTimeScale, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::RegisterDirtyLayoutCallback(UnityEngine.Events.UnityAction)
 void Graphic_RegisterDirtyLayoutCallback_m2516 (Graphic_t579 * __this, UnityAction_t576 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UnregisterDirtyLayoutCallback(UnityEngine.Events.UnityAction)
 void Graphic_UnregisterDirtyLayoutCallback_m2517 (Graphic_t579 * __this, UnityAction_t576 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::RegisterDirtyVerticesCallback(UnityEngine.Events.UnityAction)
 void Graphic_RegisterDirtyVerticesCallback_m2518 (Graphic_t579 * __this, UnityAction_t576 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UnregisterDirtyVerticesCallback(UnityEngine.Events.UnityAction)
 void Graphic_UnregisterDirtyVerticesCallback_m2519 (Graphic_t579 * __this, UnityAction_t576 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::RegisterDirtyMaterialCallback(UnityEngine.Events.UnityAction)
 void Graphic_RegisterDirtyMaterialCallback_m2520 (Graphic_t579 * __this, UnityAction_t576 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::UnregisterDirtyMaterialCallback(UnityEngine.Events.UnityAction)
 void Graphic_UnregisterDirtyMaterialCallback_m2521 (Graphic_t579 * __this, UnityAction_t576 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::<s_VboPool>m__4(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
 void Graphic_U3Cs_VboPoolU3Em__4_m2522 (Object_t * __this/* static, unused */, List_1_t580 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Graphic::<s_VboPool>m__5(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
 void Graphic_U3Cs_VboPoolU3Em__5_m2523 (Object_t * __this/* static, unused */, List_1_t580 * ___l, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Graphic::UnityEngine.UI.ICanvasElement.IsDestroyed()
 bool Graphic_UnityEngine_UI_ICanvasElement_IsDestroyed_m2524 (Graphic_t579 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.Graphic::UnityEngine.UI.ICanvasElement.get_transform()
 Transform_t193 * Graphic_UnityEngine_UI_ICanvasElement_get_transform_m2525 (Graphic_t579 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
