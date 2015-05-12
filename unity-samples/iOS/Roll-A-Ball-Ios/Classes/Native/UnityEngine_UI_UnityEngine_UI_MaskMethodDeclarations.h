#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Mask
struct Mask_t668;
// UnityEngine.UI.Graphic
struct Graphic_t565;
// UnityEngine.RectTransform
struct RectTransform_t559;
// UnityEngine.Camera
struct Camera_t172;
// UnityEngine.Material
struct Material_t401;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.UI.Mask::.ctor()
 void Mask__ctor_m3142 (Mask_t668 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Graphic UnityEngine.UI.Mask::get_graphic()
 Graphic_t565 * Mask_get_graphic_m3143 (Mask_t668 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Mask::get_showMaskGraphic()
 bool Mask_get_showMaskGraphic_m3144 (Mask_t668 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::set_showMaskGraphic(System.Boolean)
 void Mask_set_showMaskGraphic_m3145 (Mask_t668 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Mask::get_rectTransform()
 RectTransform_t559 * Mask_get_rectTransform_m3146 (Mask_t668 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Mask::MaskEnabled()
 bool Mask_MaskEnabled_m3147 (Mask_t668 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::OnSiblingGraphicEnabledDisabled()
 void Mask_OnSiblingGraphicEnabledDisabled_m3148 (Mask_t668 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::NotifyMaskStateChanged()
 void Mask_NotifyMaskStateChanged_m3149 (Mask_t668 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::ClearCachedMaterial()
 void Mask_ClearCachedMaterial_m3150 (Mask_t668 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::OnEnable()
 void Mask_OnEnable_m3151 (Mask_t668 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Mask::OnDisable()
 void Mask_OnDisable_m3152 (Mask_t668 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Mask::IsRaycastLocationValid(UnityEngine.Vector2,UnityEngine.Camera)
 bool Mask_IsRaycastLocationValid_m3153 (Mask_t668 * __this, Vector2_t184  ___sp, Camera_t172 * ___eventCamera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.UI.Mask::GetModifiedMaterial(UnityEngine.Material)
 Material_t401 * Mask_GetModifiedMaterial_m3154 (Mask_t668 * __this, Material_t401 * ___baseMaterial, MethodInfo* method) IL2CPP_METHOD_ATTR;
