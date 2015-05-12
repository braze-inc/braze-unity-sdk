#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Mask
struct Mask_t682;
// UnityEngine.UI.Graphic
struct Graphic_t579;
// UnityEngine.RectTransform
struct RectTransform_t573;
// UnityEngine.Camera
struct Camera_t186;
// UnityEngine.Material
struct Material_t413;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.UI.Mask::.ctor()
 void Mask__ctor_m3248 (Mask_t682 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Graphic UnityEngine.UI.Mask::get_graphic()
 Graphic_t579 * Mask_get_graphic_m3249 (Mask_t682 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Mask::get_showMaskGraphic()
 bool Mask_get_showMaskGraphic_m3250 (Mask_t682 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::set_showMaskGraphic(System.Boolean)
 void Mask_set_showMaskGraphic_m3251 (Mask_t682 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Mask::get_rectTransform()
 RectTransform_t573 * Mask_get_rectTransform_m3252 (Mask_t682 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Mask::MaskEnabled()
 bool Mask_MaskEnabled_m3253 (Mask_t682 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::OnSiblingGraphicEnabledDisabled()
 void Mask_OnSiblingGraphicEnabledDisabled_m3254 (Mask_t682 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::NotifyMaskStateChanged()
 void Mask_NotifyMaskStateChanged_m3255 (Mask_t682 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::ClearCachedMaterial()
 void Mask_ClearCachedMaterial_m3256 (Mask_t682 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::OnEnable()
 void Mask_OnEnable_m3257 (Mask_t682 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::OnDisable()
 void Mask_OnDisable_m3258 (Mask_t682 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Mask::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
 bool Mask_IsRaycastLocationValid_m3259 (Mask_t682 * __this, Vector2_t198  ___sp, Camera_t186 * ___eventCamera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Mask::GetModifiedMaterial(UnityEngine.Material)
 Material_t413 * Mask_GetModifiedMaterial_m3260 (Mask_t682 * __this, Material_t413 * ___baseMaterial, MethodInfo* method) IL2CPP_METHOD_ATTR;
