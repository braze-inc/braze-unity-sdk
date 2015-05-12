#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Image
struct Image_t582;
// UnityEngine.Sprite
struct Sprite_t581;
// UnityEngine.Texture
struct Texture_t450;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t566;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t384;
// UnityEngine.Camera
struct Camera_t172;
// UnityEngine.UI.Image/Type
#include "UnityEngine_UI_UnityEngine_UI_Image_Type.h"
// UnityEngine.UI.Image/FillMethod
#include "UnityEngine_UI_UnityEngine_UI_Image_FillMethod.h"
// UnityEngine.Vector4
#include "UnityEngine_UnityEngine_Vector4.h"
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.UI.Image::.ctor()
 void Image__ctor_m2439 (Image_t582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::.cctor()
 void Image__cctor_m2440 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite UnityEngine.UI.Image::get_sprite()
 Sprite_t581 * Image_get_sprite_m2441 (Image_t582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
 void Image_set_sprite_m2442 (Image_t582 * __this, Sprite_t581 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Sprite UnityEngine.UI.Image::get_overrideSprite()
 Sprite_t581 * Image_get_overrideSprite_m2443 (Image_t582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_overrideSprite(UnityEngine.Sprite)
 void Image_set_overrideSprite_m2444 (Image_t582 * __this, Sprite_t581 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Image/Type UnityEngine.UI.Image::get_type()
 int32_t Image_get_type_m2445 (Image_t582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_type(UnityEngine.UI.Image/Type)
 void Image_set_type_m2446 (Image_t582 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Image::get_preserveAspect()
 bool Image_get_preserveAspect_m2447 (Image_t582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_preserveAspect(System.Boolean)
 void Image_set_preserveAspect_m2448 (Image_t582 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Image::get_fillCenter()
 bool Image_get_fillCenter_m2449 (Image_t582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_fillCenter(System.Boolean)
 void Image_set_fillCenter_m2450 (Image_t582 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::get_fillMethod()
 int32_t Image_get_fillMethod_m2451 (Image_t582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_fillMethod(UnityEngine.UI.Image/FillMethod)
 void Image_set_fillMethod_m2452 (Image_t582 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_fillAmount()
 float Image_get_fillAmount_m2453 (Image_t582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
 void Image_set_fillAmount_m2454 (Image_t582 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Image::get_fillClockwise()
 bool Image_get_fillClockwise_m2455 (Image_t582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_fillClockwise(System.Boolean)
 void Image_set_fillClockwise_m2456 (Image_t582 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Image::get_fillOrigin()
 int32_t Image_get_fillOrigin_m2457 (Image_t582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_fillOrigin(System.Int32)
 void Image_set_fillOrigin_m2458 (Image_t582 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_eventAlphaThreshold()
 float Image_get_eventAlphaThreshold_m2459 (Image_t582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::set_eventAlphaThreshold(System.Single)
 void Image_set_eventAlphaThreshold_m2460 (Image_t582 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.Image::get_mainTexture()
 Texture_t450 * Image_get_mainTexture_m2461 (Image_t582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Image::get_hasBorder()
 bool Image_get_hasBorder_m2462 (Image_t582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_pixelsPerUnit()
 float Image_get_pixelsPerUnit_m2463 (Image_t582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::OnBeforeSerialize()
 void Image_OnBeforeSerialize_m2464 (Image_t582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::OnAfterDeserialize()
 void Image_OnAfterDeserialize_m2465 (Image_t582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.UI.Image::GetDrawingDimensions(System.Boolean)
 Vector4_t192  Image_GetDrawingDimensions_m2466 (Image_t582 * __this, bool ___shouldPreserveAspect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::SetNativeSize()
 void Image_SetNativeSize_m2467 (Image_t582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::OnFillVBO(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
 void Image_OnFillVBO_m2468 (Image_t582 * __this, List_1_t566 * ___vbo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::GenerateSimpleSprite(System.Collections.Generic.List`1<UnityEngine.UIVertex>,System.Boolean)
 void Image_GenerateSimpleSprite_m2469 (Image_t582 * __this, List_1_t566 * ___vbo, bool ___preserveAspect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::GenerateSlicedSprite(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
 void Image_GenerateSlicedSprite_m2470 (Image_t582 * __this, List_1_t566 * ___vbo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::GenerateTiledSprite(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
 void Image_GenerateTiledSprite_m2471 (Image_t582 * __this, List_1_t566 * ___vbo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::AddQuad(System.Collections.Generic.List`1<UnityEngine.UIVertex>,UnityEngine.UIVertex,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
 void Image_AddQuad_m2472 (Image_t582 * __this, List_1_t566 * ___vbo, UIVertex_t584  ___v, Vector2_t184  ___posMin, Vector2_t184  ___posMax, Vector2_t184  ___uvMin, Vector2_t184  ___uvMax, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.UI.Image::GetAdjustedBorders(UnityEngine.Vector4,UnityEngine.Rect)
 Vector4_t192  Image_GetAdjustedBorders_m2473 (Image_t582 * __this, Vector4_t192  ___border, Rect_t78  ___rect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::GenerateFilledSprite(System.Collections.Generic.List`1<UnityEngine.UIVertex>,System.Boolean)
 void Image_GenerateFilledSprite_m2474 (Image_t582 * __this, List_1_t566 * ___vbo, bool ___preserveAspect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Image::RadialCut(UnityEngine.Vector2[],UnityEngine.Vector2[],System.Single,System.Boolean,System.Int32)
 bool Image_RadialCut_m2475 (Object_t * __this/* static, unused */, Vector2U5BU5D_t384* ___xy, Vector2U5BU5D_t384* ___uv, float ___fill, bool ___invert, int32_t ___corner, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::RadialCut(UnityEngine.Vector2[],System.Single,System.Single,System.Boolean,System.Int32)
 void Image_RadialCut_m2476 (Object_t * __this/* static, unused */, Vector2U5BU5D_t384* ___xy, float ___cos, float ___sin, bool ___invert, int32_t ___corner, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::CalculateLayoutInputHorizontal()
 void Image_CalculateLayoutInputHorizontal_m2477 (Image_t582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Image::CalculateLayoutInputVertical()
 void Image_CalculateLayoutInputVertical_m2478 (Image_t582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_minWidth()
 float Image_get_minWidth_m2479 (Image_t582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_preferredWidth()
 float Image_get_preferredWidth_m2480 (Image_t582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_flexibleWidth()
 float Image_get_flexibleWidth_m2481 (Image_t582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_minHeight()
 float Image_get_minHeight_m2482 (Image_t582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_preferredHeight()
 float Image_get_preferredHeight_m2483 (Image_t582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Image::get_flexibleHeight()
 float Image_get_flexibleHeight_m2484 (Image_t582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Image::get_layoutPriority()
 int32_t Image_get_layoutPriority_m2485 (Image_t582 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Image::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
 bool Image_IsRaycastLocationValid_m2486 (Image_t582 * __this, Vector2_t184  ___screenPoint, Camera_t172 * ___eventCamera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.Image::MapCoordinate(UnityEngine.Vector2,UnityEngine.Rect)
 Vector2_t184  Image_MapCoordinate_m2487 (Image_t582 * __this, Vector2_t184  ___local, Rect_t78  ___rect, MethodInfo* method) IL2CPP_METHOD_ATTR;
