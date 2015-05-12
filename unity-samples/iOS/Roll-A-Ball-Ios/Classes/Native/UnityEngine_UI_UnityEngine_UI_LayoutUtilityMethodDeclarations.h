#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.LayoutUtility
struct LayoutUtility_t679;
// UnityEngine.RectTransform
struct RectTransform_t573;
// System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>
struct Func_2_t678;
// UnityEngine.UI.ILayoutElement
struct ILayoutElement_t680;

// System.Single UnityEngine.UI.LayoutUtility::GetMinSize(UnityEngine.RectTransform,System.Int32)
 float LayoutUtility_GetMinSize_m3224 (Object_t * __this/* static, unused */, RectTransform_t573 * ___rect, int32_t ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetPreferredSize(UnityEngine.RectTransform,System.Int32)
 float LayoutUtility_GetPreferredSize_m3225 (Object_t * __this/* static, unused */, RectTransform_t573 * ___rect, int32_t ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetFlexibleSize(UnityEngine.RectTransform,System.Int32)
 float LayoutUtility_GetFlexibleSize_m3226 (Object_t * __this/* static, unused */, RectTransform_t573 * ___rect, int32_t ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetMinWidth(UnityEngine.RectTransform)
 float LayoutUtility_GetMinWidth_m3227 (Object_t * __this/* static, unused */, RectTransform_t573 * ___rect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetPreferredWidth(UnityEngine.RectTransform)
 float LayoutUtility_GetPreferredWidth_m3228 (Object_t * __this/* static, unused */, RectTransform_t573 * ___rect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetFlexibleWidth(UnityEngine.RectTransform)
 float LayoutUtility_GetFlexibleWidth_m3229 (Object_t * __this/* static, unused */, RectTransform_t573 * ___rect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetMinHeight(UnityEngine.RectTransform)
 float LayoutUtility_GetMinHeight_m3230 (Object_t * __this/* static, unused */, RectTransform_t573 * ___rect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetPreferredHeight(UnityEngine.RectTransform)
 float LayoutUtility_GetPreferredHeight_m3231 (Object_t * __this/* static, unused */, RectTransform_t573 * ___rect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetFlexibleHeight(UnityEngine.RectTransform)
 float LayoutUtility_GetFlexibleHeight_m3232 (Object_t * __this/* static, unused */, RectTransform_t573 * ___rect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetLayoutProperty(UnityEngine.RectTransform,System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>,System.Single)
 float LayoutUtility_GetLayoutProperty_m3233 (Object_t * __this/* static, unused */, RectTransform_t573 * ___rect, Func_2_t678 * ___property, float ___defaultValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::GetLayoutProperty(UnityEngine.RectTransform,System.Func`2<UnityEngine.UI.ILayoutElement,System.Single>,System.Single,UnityEngine.UI.ILayoutElement&)
 float LayoutUtility_GetLayoutProperty_m3234 (Object_t * __this/* static, unused */, RectTransform_t573 * ___rect, Func_2_t678 * ___property, float ___defaultValue, Object_t ** ___source, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetMinWidth>m__E(UnityEngine.UI.ILayoutElement)
 float LayoutUtility_U3CGetMinWidthU3Em__E_m3235 (Object_t * __this/* static, unused */, Object_t * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetPreferredWidth>m__F(UnityEngine.UI.ILayoutElement)
 float LayoutUtility_U3CGetPreferredWidthU3Em__F_m3236 (Object_t * __this/* static, unused */, Object_t * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetPreferredWidth>m__10(UnityEngine.UI.ILayoutElement)
 float LayoutUtility_U3CGetPreferredWidthU3Em__10_m3237 (Object_t * __this/* static, unused */, Object_t * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetFlexibleWidth>m__11(UnityEngine.UI.ILayoutElement)
 float LayoutUtility_U3CGetFlexibleWidthU3Em__11_m3238 (Object_t * __this/* static, unused */, Object_t * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetMinHeight>m__12(UnityEngine.UI.ILayoutElement)
 float LayoutUtility_U3CGetMinHeightU3Em__12_m3239 (Object_t * __this/* static, unused */, Object_t * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetPreferredHeight>m__13(UnityEngine.UI.ILayoutElement)
 float LayoutUtility_U3CGetPreferredHeightU3Em__13_m3240 (Object_t * __this/* static, unused */, Object_t * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetPreferredHeight>m__14(UnityEngine.UI.ILayoutElement)
 float LayoutUtility_U3CGetPreferredHeightU3Em__14_m3241 (Object_t * __this/* static, unused */, Object_t * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.LayoutUtility::<GetFlexibleHeight>m__15(UnityEngine.UI.ILayoutElement)
 float LayoutUtility_U3CGetFlexibleHeightU3Em__15_m3242 (Object_t * __this/* static, unused */, Object_t * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
