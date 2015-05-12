#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t668;
// UnityEngine.RectOffset
struct RectOffset_t672;
// UnityEngine.RectTransform
struct RectTransform_t573;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t673;
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"

// System.Void UnityEngine.UI.LayoutGroup::.ctor()
 void LayoutGroup__ctor_m3175 (LayoutGroup_t668 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::get_padding()
 RectOffset_t672 * LayoutGroup_get_padding_m3176 (LayoutGroup_t668 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::set_padding(UnityEngine.RectOffset)
 void LayoutGroup_set_padding_m3177 (LayoutGroup_t668 * __this, RectOffset_t672 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::get_childAlignment()
 int32_t LayoutGroup_get_childAlignment_m3178 (LayoutGroup_t668 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::set_childAlignment(UnityEngine.TextAnchor)
 void LayoutGroup_set_childAlignment_m3179 (LayoutGroup_t668 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::get_rectTransform()
 RectTransform_t573 * LayoutGroup_get_rectTransform_m3180 (LayoutGroup_t668 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::get_rectChildren()
 List_1_t673 * LayoutGroup_get_rectChildren_m3181 (LayoutGroup_t668 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::CalculateLayoutInputHorizontal()
 void LayoutGroup_CalculateLayoutInputHorizontal_m3182 (LayoutGroup_t668 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::CalculateLayoutInputVertical()
// System.Single UnityEngine.UI.LayoutGroup::get_minWidth()
 float LayoutGroup_get_minWidth_m3183 (LayoutGroup_t668 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_preferredWidth()
 float LayoutGroup_get_preferredWidth_m3184 (LayoutGroup_t668 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_flexibleWidth()
 float LayoutGroup_get_flexibleWidth_m3185 (LayoutGroup_t668 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_minHeight()
 float LayoutGroup_get_minHeight_m3186 (LayoutGroup_t668 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_preferredHeight()
 float LayoutGroup_get_preferredHeight_m3187 (LayoutGroup_t668 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_flexibleHeight()
 float LayoutGroup_get_flexibleHeight_m3188 (LayoutGroup_t668 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.LayoutGroup::get_layoutPriority()
 int32_t LayoutGroup_get_layoutPriority_m3189 (LayoutGroup_t668 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::SetLayoutHorizontal()
// System.Void UnityEngine.UI.LayoutGroup::SetLayoutVertical()
// System.Void UnityEngine.UI.LayoutGroup::OnEnable()
 void LayoutGroup_OnEnable_m3190 (LayoutGroup_t668 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnDisable()
 void LayoutGroup_OnDisable_m3191 (LayoutGroup_t668 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnDidApplyAnimationProperties()
 void LayoutGroup_OnDidApplyAnimationProperties_m3192 (LayoutGroup_t668 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::GetTotalMinSize(System.Int32)
 float LayoutGroup_GetTotalMinSize_m3193 (LayoutGroup_t668 * __this, int32_t ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::GetTotalPreferredSize(System.Int32)
 float LayoutGroup_GetTotalPreferredSize_m3194 (LayoutGroup_t668 * __this, int32_t ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::GetTotalFlexibleSize(System.Int32)
 float LayoutGroup_GetTotalFlexibleSize_m3195 (LayoutGroup_t668 * __this, int32_t ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::GetStartOffset(System.Int32,System.Single)
 float LayoutGroup_GetStartOffset_m3196 (LayoutGroup_t668 * __this, int32_t ___axis, float ___requiredSpaceWithoutPadding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::SetLayoutInputForAxis(System.Single,System.Single,System.Single,System.Int32)
 void LayoutGroup_SetLayoutInputForAxis_m3197 (LayoutGroup_t668 * __this, float ___totalMin, float ___totalPreferred, float ___totalFlexible, int32_t ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::SetChildAlongAxis(UnityEngine.RectTransform,System.Int32,System.Single,System.Single)
 void LayoutGroup_SetChildAlongAxis_m3198 (LayoutGroup_t668 * __this, RectTransform_t573 * ___rect, int32_t ___axis, float ___pos, float ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutGroup::get_isRootLayoutGroup()
 bool LayoutGroup_get_isRootLayoutGroup_m3199 (LayoutGroup_t668 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnRectTransformDimensionsChange()
 void LayoutGroup_OnRectTransformDimensionsChange_m3200 (LayoutGroup_t668 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnTransformChildrenChanged()
 void LayoutGroup_OnTransformChildrenChanged_m3201 (LayoutGroup_t668 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::SetDirty()
 void LayoutGroup_SetDirty_m3202 (LayoutGroup_t668 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
