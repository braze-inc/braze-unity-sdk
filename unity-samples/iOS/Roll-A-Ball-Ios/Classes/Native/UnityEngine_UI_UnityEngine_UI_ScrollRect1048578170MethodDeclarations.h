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

// UnityEngine.UI.ScrollRect
struct ScrollRect_t1048578170;
// UnityEngine.RectTransform
struct RectTransform_t3317474837;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t1410649103;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_t2675965609;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t3205101634;
// UnityEngine.Transform
struct Transform_t284553113;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RectTransform3317474837.h"
#include "UnityEngine_UI_UnityEngine_UI_ScrollRect_MovementT3563546793.h"
#include "UnityEngine_UI_UnityEngine_UI_Scrollbar1410649103.h"
#include "UnityEngine_UI_UnityEngine_UI_ScrollRect_ScrollbarV260445624.h"
#include "UnityEngine_UI_UnityEngine_UI_ScrollRect_ScrollRec2675965609.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate941568618.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve3205101634.h"
#include "UnityEngine_UnityEngine_Bounds3518514978.h"

// System.Void UnityEngine.UI.ScrollRect::.ctor()
extern "C"  void ScrollRect__ctor_m3113131930 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_content()
extern "C"  RectTransform_t3317474837 * ScrollRect_get_content_m3701632330 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_content(UnityEngine.RectTransform)
extern "C"  void ScrollRect_set_content_m234982541 (ScrollRect_t1048578170 * __this, RectTransform_t3317474837 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_horizontal()
extern "C"  bool ScrollRect_get_horizontal_m3680042345 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontal(System.Boolean)
extern "C"  void ScrollRect_set_horizontal_m943369506 (ScrollRect_t1048578170 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_vertical()
extern "C"  bool ScrollRect_get_vertical_m135712059 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_vertical(System.Boolean)
extern "C"  void ScrollRect_set_vertical_m3763666420 (ScrollRect_t1048578170 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ScrollRect/MovementType UnityEngine.UI.ScrollRect::get_movementType()
extern "C"  int32_t ScrollRect_get_movementType_m4014199657 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_movementType(UnityEngine.UI.ScrollRect/MovementType)
extern "C"  void ScrollRect_set_movementType_m4233390924 (ScrollRect_t1048578170 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_elasticity()
extern "C"  float ScrollRect_get_elasticity_m1540742464 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_elasticity(System.Single)
extern "C"  void ScrollRect_set_elasticity_m957382251 (ScrollRect_t1048578170 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_inertia()
extern "C"  bool ScrollRect_get_inertia_m723925623 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_inertia(System.Boolean)
extern "C"  void ScrollRect_set_inertia_m4277812460 (ScrollRect_t1048578170 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_decelerationRate()
extern "C"  float ScrollRect_get_decelerationRate_m2763364646 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_decelerationRate(System.Single)
extern "C"  void ScrollRect_set_decelerationRate_m1911965765 (ScrollRect_t1048578170 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_scrollSensitivity()
extern "C"  float ScrollRect_get_scrollSensitivity_m1352024717 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_scrollSensitivity(System.Single)
extern "C"  void ScrollRect_set_scrollSensitivity_m310245950 (ScrollRect_t1048578170 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_viewport()
extern "C"  RectTransform_t3317474837 * ScrollRect_get_viewport_m1780465687 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_viewport(UnityEngine.RectTransform)
extern "C"  void ScrollRect_set_viewport_m1031184500 (ScrollRect_t1048578170 * __this, RectTransform_t3317474837 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::get_horizontalScrollbar()
extern "C"  Scrollbar_t1410649103 * ScrollRect_get_horizontalScrollbar_m2383265157 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontalScrollbar(UnityEngine.UI.Scrollbar)
extern "C"  void ScrollRect_set_horizontalScrollbar_m2130920826 (ScrollRect_t1048578170 * __this, Scrollbar_t1410649103 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::get_verticalScrollbar()
extern "C"  Scrollbar_t1410649103 * ScrollRect_get_verticalScrollbar_m801913715 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_verticalScrollbar(UnityEngine.UI.Scrollbar)
extern "C"  void ScrollRect_set_verticalScrollbar_m845729640 (ScrollRect_t1048578170 * __this, Scrollbar_t1410649103 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::get_horizontalScrollbarVisibility()
extern "C"  int32_t ScrollRect_get_horizontalScrollbarVisibility_m2805283129 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontalScrollbarVisibility(UnityEngine.UI.ScrollRect/ScrollbarVisibility)
extern "C"  void ScrollRect_set_horizontalScrollbarVisibility_m1831067046 (ScrollRect_t1048578170 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::get_verticalScrollbarVisibility()
extern "C"  int32_t ScrollRect_get_verticalScrollbarVisibility_m1678458407 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_verticalScrollbarVisibility(UnityEngine.UI.ScrollRect/ScrollbarVisibility)
extern "C"  void ScrollRect_set_verticalScrollbarVisibility_m4230518264 (ScrollRect_t1048578170 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_horizontalScrollbarSpacing()
extern "C"  float ScrollRect_get_horizontalScrollbarSpacing_m2867145992 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontalScrollbarSpacing(System.Single)
extern "C"  void ScrollRect_set_horizontalScrollbarSpacing_m1996166051 (ScrollRect_t1048578170 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_verticalScrollbarSpacing()
extern "C"  float ScrollRect_get_verticalScrollbarSpacing_m1095438682 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_verticalScrollbarSpacing(System.Single)
extern "C"  void ScrollRect_set_verticalScrollbarSpacing_m4137600145 (ScrollRect_t1048578170 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::get_onValueChanged()
extern "C"  ScrollRectEvent_t2675965609 * ScrollRect_get_onValueChanged_m4119396560 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_onValueChanged(UnityEngine.UI.ScrollRect/ScrollRectEvent)
extern "C"  void ScrollRect_set_onValueChanged_m499269979 (ScrollRect_t1048578170 * __this, ScrollRectEvent_t2675965609 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_viewRect()
extern "C"  RectTransform_t3317474837 * ScrollRect_get_viewRect_m911909082 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::get_velocity()
extern "C"  Vector2_t3525329788  ScrollRect_get_velocity_m4218059637 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_velocity(UnityEngine.Vector2)
extern "C"  void ScrollRect_set_velocity_m4003401302 (ScrollRect_t1048578170 * __this, Vector2_t3525329788  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_rectTransform()
extern "C"  RectTransform_t3317474837 * ScrollRect_get_rectTransform_m836427513 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C"  void ScrollRect_Rebuild_m3329025723 (ScrollRect_t1048578170 * __this, int32_t ___executing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::LayoutComplete()
extern "C"  void ScrollRect_LayoutComplete_m1579087085 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::GraphicUpdateComplete()
extern "C"  void ScrollRect_GraphicUpdateComplete_m2238911074 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateCachedData()
extern "C"  void ScrollRect_UpdateCachedData_m4281892159 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnEnable()
extern "C"  void ScrollRect_OnEnable_m4156082604 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnDisable()
extern "C"  void ScrollRect_OnDisable_m430479105 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::IsActive()
extern "C"  bool ScrollRect_IsActive_m1128064300 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::EnsureLayoutHasRebuilt()
extern "C"  void ScrollRect_EnsureLayoutHasRebuilt_m1972800323 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::StopMovement()
extern "C"  void ScrollRect_StopMovement_m4209251323 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnScroll(UnityEngine.EventSystems.PointerEventData)
extern "C"  void ScrollRect_OnScroll_m2633232840 (ScrollRect_t1048578170 * __this, PointerEventData_t3205101634 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void ScrollRect_OnInitializePotentialDrag_m2313515395 (ScrollRect_t1048578170 * __this, PointerEventData_t3205101634 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void ScrollRect_OnBeginDrag_m1465783272 (ScrollRect_t1048578170 * __this, PointerEventData_t3205101634 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void ScrollRect_OnEndDrag_m1604287350 (ScrollRect_t1048578170 * __this, PointerEventData_t3205101634 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void ScrollRect_OnDrag_m286963457 (ScrollRect_t1048578170 * __this, PointerEventData_t3205101634 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetContentAnchoredPosition(UnityEngine.Vector2)
extern "C"  void ScrollRect_SetContentAnchoredPosition_m716182300 (ScrollRect_t1048578170 * __this, Vector2_t3525329788  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::LateUpdate()
extern "C"  void ScrollRect_LateUpdate_m3780926201 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdatePrevData()
extern "C"  void ScrollRect_UpdatePrevData_m454081040 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateScrollbars(UnityEngine.Vector2)
extern "C"  void ScrollRect_UpdateScrollbars_m2912536474 (ScrollRect_t1048578170 * __this, Vector2_t3525329788  ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::get_normalizedPosition()
extern "C"  Vector2_t3525329788  ScrollRect_get_normalizedPosition_m1721330264 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_normalizedPosition(UnityEngine.Vector2)
extern "C"  void ScrollRect_set_normalizedPosition_m2973019475 (ScrollRect_t1048578170 * __this, Vector2_t3525329788  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_horizontalNormalizedPosition()
extern "C"  float ScrollRect_get_horizontalNormalizedPosition_m1672288203 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontalNormalizedPosition(System.Single)
extern "C"  void ScrollRect_set_horizontalNormalizedPosition_m2007203264 (ScrollRect_t1048578170 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_verticalNormalizedPosition()
extern "C"  float ScrollRect_get_verticalNormalizedPosition_m4163579805 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_verticalNormalizedPosition(System.Single)
extern "C"  void ScrollRect_set_verticalNormalizedPosition_m2636032814 (ScrollRect_t1048578170 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetHorizontalNormalizedPosition(System.Single)
extern "C"  void ScrollRect_SetHorizontalNormalizedPosition_m653475821 (ScrollRect_t1048578170 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetVerticalNormalizedPosition(System.Single)
extern "C"  void ScrollRect_SetVerticalNormalizedPosition_m3957527707 (ScrollRect_t1048578170 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetNormalizedPosition(System.Single,System.Int32)
extern "C"  void ScrollRect_SetNormalizedPosition_m4196700166 (ScrollRect_t1048578170 * __this, float ___value, int32_t ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::RubberDelta(System.Single,System.Single)
extern "C"  float ScrollRect_RubberDelta_m403235940 (Il2CppObject * __this /* static, unused */, float ___overStretching, float ___viewSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnRectTransformDimensionsChange()
extern "C"  void ScrollRect_OnRectTransformDimensionsChange_m2105458366 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_hScrollingNeeded()
extern "C"  bool ScrollRect_get_hScrollingNeeded_m1668641607 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_vScrollingNeeded()
extern "C"  bool ScrollRect_get_vScrollingNeeded_m594530553 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::CalculateLayoutInputHorizontal()
extern "C"  void ScrollRect_CalculateLayoutInputHorizontal_m4036022504 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::CalculateLayoutInputVertical()
extern "C"  void ScrollRect_CalculateLayoutInputVertical_m4225463418 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_minWidth()
extern "C"  float ScrollRect_get_minWidth_m525847771 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_preferredWidth()
extern "C"  float ScrollRect_get_preferredWidth_m2213910348 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_flexibleWidth()
extern "C"  float ScrollRect_get_flexibleWidth_m2753178742 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_minHeight()
extern "C"  float ScrollRect_get_minHeight_m3920193364 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_preferredHeight()
extern "C"  float ScrollRect_get_preferredHeight_m415558403 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_flexibleHeight()
extern "C"  float ScrollRect_get_flexibleHeight_m4247976729 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.ScrollRect::get_layoutPriority()
extern "C"  int32_t ScrollRect_get_layoutPriority_m3681037785 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetLayoutHorizontal()
extern "C"  void ScrollRect_SetLayoutHorizontal_m1751158760 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetLayoutVertical()
extern "C"  void ScrollRect_SetLayoutVertical_m1385100154 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateScrollbarVisibility()
extern "C"  void ScrollRect_UpdateScrollbarVisibility_m2808994247 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateScrollbarLayout()
extern "C"  void ScrollRect_UpdateScrollbarLayout_m2579760607 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateBounds()
extern "C"  void ScrollRect_UpdateBounds_m1752242888 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.UI.ScrollRect::GetBounds()
extern "C"  Bounds_t3518514978  ScrollRect_GetBounds_m1535126094 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::CalculateOffset(UnityEngine.Vector2)
extern "C"  Vector2_t3525329788  ScrollRect_CalculateOffset_m224839950 (ScrollRect_t1048578170 * __this, Vector2_t3525329788  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetDirty()
extern "C"  void ScrollRect_SetDirty_m93607546 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetDirtyCaching()
extern "C"  void ScrollRect_SetDirtyCaching_m4215531847 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::UnityEngine.UI.ICanvasElement.IsDestroyed()
extern "C"  bool ScrollRect_UnityEngine_UI_ICanvasElement_IsDestroyed_m1861319301 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.ScrollRect::UnityEngine.UI.ICanvasElement.get_transform()
extern "C"  Transform_t284553113 * ScrollRect_UnityEngine_UI_ICanvasElement_get_transform_m3316531305 (ScrollRect_t1048578170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
