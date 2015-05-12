#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ScrollRect
struct ScrollRect_t632;
// UnityEngine.RectTransform
struct RectTransform_t573;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t625;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_t629;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t475;
// UnityEngine.Transform
struct Transform_t193;
// UnityEngine.UI.ScrollRect/MovementType
#include "UnityEngine_UI_UnityEngine_UI_ScrollRect_MovementType.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"

// System.Void UnityEngine.UI.ScrollRect::.ctor()
 void ScrollRect__ctor_m2812 (ScrollRect_t632 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_content()
 RectTransform_t573 * ScrollRect_get_content_m2813 (ScrollRect_t632 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_content(UnityEngine.RectTransform)
 void ScrollRect_set_content_m2814 (ScrollRect_t632 * __this, RectTransform_t573 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_horizontal()
 bool ScrollRect_get_horizontal_m2815 (ScrollRect_t632 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontal(System.Boolean)
 void ScrollRect_set_horizontal_m2816 (ScrollRect_t632 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_vertical()
 bool ScrollRect_get_vertical_m2817 (ScrollRect_t632 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_vertical(System.Boolean)
 void ScrollRect_set_vertical_m2818 (ScrollRect_t632 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ScrollRect/MovementType UnityEngine.UI.ScrollRect::get_movementType()
 int32_t ScrollRect_get_movementType_m2819 (ScrollRect_t632 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_movementType(UnityEngine.UI.ScrollRect/MovementType)
 void ScrollRect_set_movementType_m2820 (ScrollRect_t632 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_elasticity()
 float ScrollRect_get_elasticity_m2821 (ScrollRect_t632 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_elasticity(System.Single)
 void ScrollRect_set_elasticity_m2822 (ScrollRect_t632 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_inertia()
 bool ScrollRect_get_inertia_m2823 (ScrollRect_t632 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_inertia(System.Boolean)
 void ScrollRect_set_inertia_m2824 (ScrollRect_t632 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_decelerationRate()
 float ScrollRect_get_decelerationRate_m2825 (ScrollRect_t632 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_decelerationRate(System.Single)
 void ScrollRect_set_decelerationRate_m2826 (ScrollRect_t632 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_scrollSensitivity()
 float ScrollRect_get_scrollSensitivity_m2827 (ScrollRect_t632 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_scrollSensitivity(System.Single)
 void ScrollRect_set_scrollSensitivity_m2828 (ScrollRect_t632 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::get_horizontalScrollbar()
 Scrollbar_t625 * ScrollRect_get_horizontalScrollbar_m2829 (ScrollRect_t632 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontalScrollbar(UnityEngine.UI.Scrollbar)
 void ScrollRect_set_horizontalScrollbar_m2830 (ScrollRect_t632 * __this, Scrollbar_t625 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::get_verticalScrollbar()
 Scrollbar_t625 * ScrollRect_get_verticalScrollbar_m2831 (ScrollRect_t632 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_verticalScrollbar(UnityEngine.UI.Scrollbar)
 void ScrollRect_set_verticalScrollbar_m2832 (ScrollRect_t632 * __this, Scrollbar_t625 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::get_onValueChanged()
 ScrollRectEvent_t629 * ScrollRect_get_onValueChanged_m2833 (ScrollRect_t632 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_onValueChanged(UnityEngine.UI.ScrollRect/ScrollRectEvent)
 void ScrollRect_set_onValueChanged_m2834 (ScrollRect_t632 * __this, ScrollRectEvent_t629 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_viewRect()
 RectTransform_t573 * ScrollRect_get_viewRect_m2835 (ScrollRect_t632 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::get_velocity()
 Vector2_t198  ScrollRect_get_velocity_m2836 (ScrollRect_t632 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_velocity(UnityEngine.Vector2)
 void ScrollRect_set_velocity_m2837 (ScrollRect_t632 * __this, Vector2_t198  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::Rebuild(UnityEngine.UI.CanvasUpdate)
 void ScrollRect_Rebuild_m2838 (ScrollRect_t632 * __this, int32_t ___executing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnEnable()
 void ScrollRect_OnEnable_m2839 (ScrollRect_t632 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnDisable()
 void ScrollRect_OnDisable_m2840 (ScrollRect_t632 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::IsActive()
 bool ScrollRect_IsActive_m2841 (ScrollRect_t632 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::EnsureLayoutHasRebuilt()
 void ScrollRect_EnsureLayoutHasRebuilt_m2842 (ScrollRect_t632 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::StopMovement()
 void ScrollRect_StopMovement_m2843 (ScrollRect_t632 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnScroll(UnityEngine.EventSystems.PointerEventData)
 void ScrollRect_OnScroll_m2844 (ScrollRect_t632 * __this, PointerEventData_t475 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
 void ScrollRect_OnInitializePotentialDrag_m2845 (ScrollRect_t632 * __this, PointerEventData_t475 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
 void ScrollRect_OnBeginDrag_m2846 (ScrollRect_t632 * __this, PointerEventData_t475 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
 void ScrollRect_OnEndDrag_m2847 (ScrollRect_t632 * __this, PointerEventData_t475 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnDrag(UnityEngine.EventSystems.PointerEventData)
 void ScrollRect_OnDrag_m2848 (ScrollRect_t632 * __this, PointerEventData_t475 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetContentAnchoredPosition(UnityEngine.Vector2)
 void ScrollRect_SetContentAnchoredPosition_m2849 (ScrollRect_t632 * __this, Vector2_t198  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::LateUpdate()
 void ScrollRect_LateUpdate_m2850 (ScrollRect_t632 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdatePrevData()
 void ScrollRect_UpdatePrevData_m2851 (ScrollRect_t632 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateScrollbars(UnityEngine.Vector2)
 void ScrollRect_UpdateScrollbars_m2852 (ScrollRect_t632 * __this, Vector2_t198  ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::get_normalizedPosition()
 Vector2_t198  ScrollRect_get_normalizedPosition_m2853 (ScrollRect_t632 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_normalizedPosition(UnityEngine.Vector2)
 void ScrollRect_set_normalizedPosition_m2854 (ScrollRect_t632 * __this, Vector2_t198  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_horizontalNormalizedPosition()
 float ScrollRect_get_horizontalNormalizedPosition_m2855 (ScrollRect_t632 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontalNormalizedPosition(System.Single)
 void ScrollRect_set_horizontalNormalizedPosition_m2856 (ScrollRect_t632 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_verticalNormalizedPosition()
 float ScrollRect_get_verticalNormalizedPosition_m2857 (ScrollRect_t632 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_verticalNormalizedPosition(System.Single)
 void ScrollRect_set_verticalNormalizedPosition_m2858 (ScrollRect_t632 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetHorizontalNormalizedPosition(System.Single)
 void ScrollRect_SetHorizontalNormalizedPosition_m2859 (ScrollRect_t632 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetVerticalNormalizedPosition(System.Single)
 void ScrollRect_SetVerticalNormalizedPosition_m2860 (ScrollRect_t632 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetNormalizedPosition(System.Single,System.Int32)
 void ScrollRect_SetNormalizedPosition_m2861 (ScrollRect_t632 * __this, float ___value, int32_t ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::RubberDelta(System.Single,System.Single)
 float ScrollRect_RubberDelta_m2862 (Object_t * __this/* static, unused */, float ___overStretching, float ___viewSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateBounds()
 void ScrollRect_UpdateBounds_m2863 (ScrollRect_t632 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.UI.ScrollRect::GetBounds()
 Bounds_t169  ScrollRect_GetBounds_m2864 (ScrollRect_t632 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::CalculateOffset(UnityEngine.Vector2)
 Vector2_t198  ScrollRect_CalculateOffset_m2865 (ScrollRect_t632 * __this, Vector2_t198  ___delta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::UnityEngine.UI.ICanvasElement.IsDestroyed()
 bool ScrollRect_UnityEngine_UI_ICanvasElement_IsDestroyed_m2866 (ScrollRect_t632 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.ScrollRect::UnityEngine.UI.ICanvasElement.get_transform()
 Transform_t193 * ScrollRect_UnityEngine_UI_ICanvasElement_get_transform_m2867 (ScrollRect_t632 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
