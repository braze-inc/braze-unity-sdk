#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t2646131550;
// UnityEngine.RectOffset
struct RectOffset_t3394170884;
// UnityEngine.RectTransform
struct RectTransform_t3317474837;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t4114433806;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RectOffset3394170884.h"
#include "UnityEngine_UnityEngine_TextAnchor551935663.h"
#include "UnityEngine_UnityEngine_RectTransform3317474837.h"

// System.Void UnityEngine.UI.LayoutGroup::.ctor()
extern "C"  void LayoutGroup__ctor_m1400544614 (LayoutGroup_t2646131550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::get_padding()
extern "C"  RectOffset_t3394170884 * LayoutGroup_get_padding_m3073855587 (LayoutGroup_t2646131550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::set_padding(UnityEngine.RectOffset)
extern "C"  void LayoutGroup_set_padding_m1597085962 (LayoutGroup_t2646131550 * __this, RectOffset_t3394170884 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::get_childAlignment()
extern "C"  int32_t LayoutGroup_get_childAlignment_m357689196 (LayoutGroup_t2646131550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::set_childAlignment(UnityEngine.TextAnchor)
extern "C"  void LayoutGroup_set_childAlignment_m2559376521 (LayoutGroup_t2646131550 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::get_rectTransform()
extern "C"  RectTransform_t3317474837 * LayoutGroup_get_rectTransform_m331638721 (LayoutGroup_t2646131550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::get_rectChildren()
extern "C"  List_1_t4114433806 * LayoutGroup_get_rectChildren_m2856991542 (LayoutGroup_t2646131550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::CalculateLayoutInputHorizontal()
extern "C"  void LayoutGroup_CalculateLayoutInputHorizontal_m89763996 (LayoutGroup_t2646131550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_minWidth()
extern "C"  float LayoutGroup_get_minWidth_m1427346727 (LayoutGroup_t2646131550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_preferredWidth()
extern "C"  float LayoutGroup_get_preferredWidth_m3558143640 (LayoutGroup_t2646131550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_flexibleWidth()
extern "C"  float LayoutGroup_get_flexibleWidth_m2519446442 (LayoutGroup_t2646131550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_minHeight()
extern "C"  float LayoutGroup_get_minHeight_m1801889928 (LayoutGroup_t2646131550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_preferredHeight()
extern "C"  float LayoutGroup_get_preferredHeight_m3432084791 (LayoutGroup_t2646131550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::get_flexibleHeight()
extern "C"  float LayoutGroup_get_flexibleHeight_m1297242725 (LayoutGroup_t2646131550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.LayoutGroup::get_layoutPriority()
extern "C"  int32_t LayoutGroup_get_layoutPriority_m3819074141 (LayoutGroup_t2646131550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnEnable()
extern "C"  void LayoutGroup_OnEnable_m88893536 (LayoutGroup_t2646131550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnDisable()
extern "C"  void LayoutGroup_OnDisable_m3196636877 (LayoutGroup_t2646131550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnDidApplyAnimationProperties()
extern "C"  void LayoutGroup_OnDidApplyAnimationProperties_m657723149 (LayoutGroup_t2646131550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::GetTotalMinSize(System.Int32)
extern "C"  float LayoutGroup_GetTotalMinSize_m3187537614 (LayoutGroup_t2646131550 * __this, int32_t ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::GetTotalPreferredSize(System.Int32)
extern "C"  float LayoutGroup_GetTotalPreferredSize_m2664141949 (LayoutGroup_t2646131550 * __this, int32_t ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::GetTotalFlexibleSize(System.Int32)
extern "C"  float LayoutGroup_GetTotalFlexibleSize_m2703956501 (LayoutGroup_t2646131550 * __this, int32_t ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutGroup::GetStartOffset(System.Int32,System.Single)
extern "C"  float LayoutGroup_GetStartOffset_m3060950207 (LayoutGroup_t2646131550 * __this, int32_t ___axis, float ___requiredSpaceWithoutPadding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::SetLayoutInputForAxis(System.Single,System.Single,System.Single,System.Int32)
extern "C"  void LayoutGroup_SetLayoutInputForAxis_m396008818 (LayoutGroup_t2646131550 * __this, float ___totalMin, float ___totalPreferred, float ___totalFlexible, int32_t ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::SetChildAlongAxis(UnityEngine.RectTransform,System.Int32,System.Single,System.Single)
extern "C"  void LayoutGroup_SetChildAlongAxis_m4214960168 (LayoutGroup_t2646131550 * __this, RectTransform_t3317474837 * ___rect, int32_t ___axis, float ___pos, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.LayoutGroup::get_isRootLayoutGroup()
extern "C"  bool LayoutGroup_get_isRootLayoutGroup_m3172189078 (LayoutGroup_t2646131550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnRectTransformDimensionsChange()
extern "C"  void LayoutGroup_OnRectTransformDimensionsChange_m30528906 (LayoutGroup_t2646131550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::OnTransformChildrenChanged()
extern "C"  void LayoutGroup_OnTransformChildrenChanged_m420993286 (LayoutGroup_t2646131550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.LayoutGroup::SetDirty()
extern "C"  void LayoutGroup_SetDirty_m321385774 (LayoutGroup_t2646131550 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
