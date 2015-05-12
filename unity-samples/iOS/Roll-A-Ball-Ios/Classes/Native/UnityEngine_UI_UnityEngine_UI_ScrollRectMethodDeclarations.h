#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ScrollRect
struct ScrollRect_t618;
// UnityEngine.RectTransform
struct RectTransform_t559;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t611;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_t615;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t461;
// UnityEngine.Transform
struct Transform_t179;
// UnityEngine.UI.ScrollRect/MovementType
#include "UnityEngine_UI_UnityEngine_UI_ScrollRect_MovementType.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"

// System.Void UnityEngine.UI.ScrollRect::.ctor()
 void ScrollRect__ctor_m2706 (ScrollRect_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_content()
 RectTransform_t559 * ScrollRect_get_content_m2707 (ScrollRect_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_content(UnityEngine.RectTransform)
 void ScrollRect_set_content_m2708 (ScrollRect_t618 * __this, RectTransform_t559 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_horizontal()
 bool ScrollRect_get_horizontal_m2709 (ScrollRect_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontal(System.Boolean)
 void ScrollRect_set_horizontal_m2710 (ScrollRect_t618 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_vertical()
 bool ScrollRect_get_vertical_m2711 (ScrollRect_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_vertical(System.Boolean)
 void ScrollRect_set_vertical_m2712 (ScrollRect_t618 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ScrollRect/MovementType UnityEngine.UI.ScrollRect::get_movementType()
 int32_t ScrollRect_get_movementType_m2713 (ScrollRect_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_movementType(UnityEngine.UI.ScrollRect/MovementType)
 void ScrollRect_set_movementType_m2714 (ScrollRect_t618 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_elasticity()
 float ScrollRect_get_elasticity_m2715 (ScrollRect_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_elasticity(System.Single)
 void ScrollRect_set_elasticity_m2716 (ScrollRect_t618 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_inertia()
 bool ScrollRect_get_inertia_m2717 (ScrollRect_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_inertia(System.Boolean)
 void ScrollRect_set_inertia_m2718 (ScrollRect_t618 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_decelerationRate()
 float ScrollRect_get_decelerationRate_m2719 (ScrollRect_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_decelerationRate(System.Single)
 void ScrollRect_set_decelerationRate_m2720 (ScrollRect_t618 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_scrollSensitivity()
 float ScrollRect_get_scrollSensitivity_m2721 (ScrollRect_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_scrollSensitivity(System.Single)
 void ScrollRect_set_scrollSensitivity_m2722 (ScrollRect_t618 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::get_horizontalScrollbar()
 Scrollbar_t611 * ScrollRect_get_horizontalScrollbar_m2723 (ScrollRect_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontalScrollbar(UnityEngine.UI.Scrollbar)
 void ScrollRect_set_horizontalScrollbar_m2724 (ScrollRect_t618 * __this, Scrollbar_t611 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::get_verticalScrollbar()
 Scrollbar_t611 * ScrollRect_get_verticalScrollbar_m2725 (ScrollRect_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_verticalScrollbar(UnityEngine.UI.Scrollbar)
 void ScrollRect_set_verticalScrollbar_m2726 (ScrollRect_t618 * __this, Scrollbar_t611 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::get_onValueChanged()
 ScrollRectEvent_t615 * ScrollRect_get_onValueChanged_m2727 (ScrollRect_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_onValueChanged(UnityEngine.UI.ScrollRect/ScrollRectEvent)
 void ScrollRect_set_onValueChanged_m2728 (ScrollRect_t618 * __this, ScrollRectEvent_t615 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_viewRect()
 RectTransform_t559 * ScrollRect_get_viewRect_m2729 (ScrollRect_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::get_velocity()
 Vector2_t184  ScrollRect_get_velocity_m2730 (ScrollRect_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_velocity(UnityEngine.Vector2)
 void ScrollRect_set_velocity_m2731 (ScrollRect_t618 * __this, Vector2_t184  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::Rebuild(UnityEngine.UI.CanvasUpdate)
 void ScrollRect_Rebuild_m2732 (ScrollRect_t618 * __this, int32_t ___executing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnEnable()
 void ScrollRect_OnEnable_m2733 (ScrollRect_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnDisable()
 void ScrollRect_OnDisable_m2734 (ScrollRect_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::IsActive()
 bool ScrollRect_IsActive_m2735 (ScrollRect_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::EnsureLayoutHasRebuilt()
 void ScrollRect_EnsureLayoutHasRebuilt_m2736 (ScrollRect_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::StopMovement()
 void ScrollRect_StopMovement_m2737 (ScrollRect_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnScroll(UnityEngine.EventSystems.PointerEventData)
 void ScrollRect_OnScroll_m2738 (ScrollRect_t618 * __this, PointerEventData_t461 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
 void ScrollRect_OnInitializePotentialDrag_m2739 (ScrollRect_t618 * __this, PointerEventData_t461 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
 void ScrollRect_OnBeginDrag_m2740 (ScrollRect_t618 * __this, PointerEventData_t461 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
 void ScrollRect_OnEndDrag_m2741 (ScrollRect_t618 * __this, PointerEventData_t461 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnDrag(UnityEngine.EventSystems.PointerEventData)
 void ScrollRect_OnDrag_m2742 (ScrollRect_t618 * __this, PointerEventData_t461 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetContentAnchoredPosition(UnityEngine.Vector2)
 void ScrollRect_SetContentAnchoredPosition_m2743 (ScrollRect_t618 * __this, Vector2_t184  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::LateUpdate()
 void ScrollRect_LateUpdate_m2744 (ScrollRect_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdatePrevData()
 void ScrollRect_UpdatePrevData_m2745 (ScrollRect_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateScrollbars(UnityEngine.Vector2)
 void ScrollRect_UpdateScrollbars_m2746 (ScrollRect_t618 * __this, Vector2_t184  ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::get_normalizedPosition()
 Vector2_t184  ScrollRect_get_normalizedPosition_m2747 (ScrollRect_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_normalizedPosition(UnityEngine.Vector2)
 void ScrollRect_set_normalizedPosition_m2748 (ScrollRect_t618 * __this, Vector2_t184  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_horizontalNormalizedPosition()
 float ScrollRect_get_horizontalNormalizedPosition_m2749 (ScrollRect_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontalNormalizedPosition(System.Single)
 void ScrollRect_set_horizontalNormalizedPosition_m2750 (ScrollRect_t618 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_verticalNormalizedPosition()
 float ScrollRect_get_verticalNormalizedPosition_m2751 (ScrollRect_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_verticalNormalizedPosition(System.Single)
 void ScrollRect_set_verticalNormalizedPosition_m2752 (ScrollRect_t618 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetHorizontalNormalizedPosition(System.Single)
 void ScrollRect_SetHorizontalNormalizedPosition_m2753 (ScrollRect_t618 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetVerticalNormalizedPosition(System.Single)
 void ScrollRect_SetVerticalNormalizedPosition_m2754 (ScrollRect_t618 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetNormalizedPosition(System.Single,System.Int32)
 void ScrollRect_SetNormalizedPosition_m2755 (ScrollRect_t618 * __this, float ___value, int32_t ___axis, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::RubberDelta(System.Single,System.Single)
 float ScrollRect_RubberDelta_m2756 (Object_t * __this/* static, unused */, float ___overStretching, float ___viewSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateBounds()
 void ScrollRect_UpdateBounds_m2757 (ScrollRect_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.UI.ScrollRect::GetBounds()
 Bounds_t155  ScrollRect_GetBounds_m2758 (ScrollRect_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::CalculateOffset(UnityEngine.Vector2)
 Vector2_t184  ScrollRect_CalculateOffset_m2759 (ScrollRect_t618 * __this, Vector2_t184  ___delta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::UnityEngine.UI.ICanvasElement.IsDestroyed()
 bool ScrollRect_UnityEngine_UI_ICanvasElement_IsDestroyed_m2760 (ScrollRect_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.ScrollRect::UnityEngine.UI.ICanvasElement.get_transform()
 Transform_t179 * ScrollRect_UnityEngine_UI_ICanvasElement_get_transform_m2761 (ScrollRect_t618 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
