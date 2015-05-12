#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Slider
struct Slider_t629;
// UnityEngine.RectTransform
struct RectTransform_t559;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t627;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t461;
// UnityEngine.Camera
struct Camera_t172;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t469;
// UnityEngine.UI.Selectable
struct Selectable_t545;
// UnityEngine.Transform
struct Transform_t179;
// UnityEngine.UI.Slider/Direction
#include "UnityEngine_UI_UnityEngine_UI_Slider_Direction.h"
// UnityEngine.UI.Slider/Axis
#include "UnityEngine_UI_UnityEngine_UI_Slider_Axis.h"
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"

// System.Void UnityEngine.UI.Slider::.ctor()
 void Slider__ctor_m2824 (Slider_t629 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Slider::get_fillRect()
 RectTransform_t559 * Slider_get_fillRect_m2825 (Slider_t629 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_fillRect(UnityEngine.RectTransform)
 void Slider_set_fillRect_m2826 (Slider_t629 * __this, RectTransform_t559 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Slider::get_handleRect()
 RectTransform_t559 * Slider_get_handleRect_m2827 (Slider_t629 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_handleRect(UnityEngine.RectTransform)
 void Slider_set_handleRect_m2828 (Slider_t629 * __this, RectTransform_t559 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::get_direction()
 int32_t Slider_get_direction_m2829 (Slider_t629 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_direction(UnityEngine.UI.Slider/Direction)
 void Slider_set_direction_m2830 (Slider_t629 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_minValue()
 float Slider_get_minValue_m2831 (Slider_t629 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_minValue(System.Single)
 void Slider_set_minValue_m2832 (Slider_t629 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_maxValue()
 float Slider_get_maxValue_m2833 (Slider_t629 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
 void Slider_set_maxValue_m2834 (Slider_t629 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::get_wholeNumbers()
 bool Slider_get_wholeNumbers_m2835 (Slider_t629 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_wholeNumbers(System.Boolean)
 void Slider_set_wholeNumbers_m2836 (Slider_t629 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_value()
 float Slider_get_value_m2837 (Slider_t629 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_value(System.Single)
 void Slider_set_value_m2838 (Slider_t629 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_normalizedValue()
 float Slider_get_normalizedValue_m2839 (Slider_t629 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_normalizedValue(System.Single)
 void Slider_set_normalizedValue_m2840 (Slider_t629 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::get_onValueChanged()
 SliderEvent_t627 * Slider_get_onValueChanged_m2841 (Slider_t629 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::set_onValueChanged(UnityEngine.UI.Slider/SliderEvent)
 void Slider_set_onValueChanged_m2842 (Slider_t629 * __this, SliderEvent_t627 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Slider::get_stepSize()
 float Slider_get_stepSize_m2843 (Slider_t629 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::Rebuild(UnityEngine.UI.CanvasUpdate)
 void Slider_Rebuild_m2844 (Slider_t629 * __this, int32_t ___executing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnEnable()
 void Slider_OnEnable_m2845 (Slider_t629 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnDisable()
 void Slider_OnDisable_m2846 (Slider_t629 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::UpdateCachedReferences()
 void Slider_UpdateCachedReferences_m2847 (Slider_t629 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::Set(System.Single)
 void Slider_Set_m2848 (Slider_t629 * __this, float ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::Set(System.Single,System.Boolean)
 void Slider_Set_m2849 (Slider_t629 * __this, float ___input, bool ___sendCallback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnRectTransformDimensionsChange()
 void Slider_OnRectTransformDimensionsChange_m2850 (Slider_t629 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Slider/Axis UnityEngine.UI.Slider::get_axis()
 int32_t Slider_get_axis_m2851 (Slider_t629 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::get_reverseValue()
 bool Slider_get_reverseValue_m2852 (Slider_t629 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::UpdateVisuals()
 void Slider_UpdateVisuals_m2853 (Slider_t629 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::UpdateDrag(UnityEngine.EventSystems.PointerEventData,UnityEngine.Camera)
 void Slider_UpdateDrag_m2854 (Slider_t629 * __this, PointerEventData_t461 * ___eventData, Camera_t172 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::MayDrag(UnityEngine.EventSystems.PointerEventData)
 bool Slider_MayDrag_m2855 (Slider_t629 * __this, PointerEventData_t461 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
 void Slider_OnPointerDown_m2856 (Slider_t629 * __this, PointerEventData_t461 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnDrag(UnityEngine.EventSystems.PointerEventData)
 void Slider_OnDrag_m2857 (Slider_t629 * __this, PointerEventData_t461 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnMove(UnityEngine.EventSystems.AxisEventData)
 void Slider_OnMove_m2858 (Slider_t629 * __this, AxisEventData_t469 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnLeft()
 Selectable_t545 * Slider_FindSelectableOnLeft_m2859 (Slider_t629 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnRight()
 Selectable_t545 * Slider_FindSelectableOnRight_m2860 (Slider_t629 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnUp()
 Selectable_t545 * Slider_FindSelectableOnUp_m2861 (Slider_t629 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Slider::FindSelectableOnDown()
 Selectable_t545 * Slider_FindSelectableOnDown_m2862 (Slider_t629 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
 void Slider_OnInitializePotentialDrag_m2863 (Slider_t629 * __this, PointerEventData_t461 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Slider::SetDirection(UnityEngine.UI.Slider/Direction,System.Boolean)
 void Slider_SetDirection_m2864 (Slider_t629 * __this, int32_t ___direction, bool ___includeRectLayouts, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Slider::UnityEngine.UI.ICanvasElement.IsDestroyed()
 bool Slider_UnityEngine_UI_ICanvasElement_IsDestroyed_m2865 (Slider_t629 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.Slider::UnityEngine.UI.ICanvasElement.get_transform()
 Transform_t179 * Slider_UnityEngine_UI_ICanvasElement_get_transform_m2866 (Slider_t629 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
