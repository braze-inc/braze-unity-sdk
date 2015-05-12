#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SliderHandler
struct SliderHandler_t968;
// UnityEngine.GUIStyle
struct GUIStyle_t263;
// UnityEngine.Event
struct Event_t615;
struct Event_t615_marshaled;
// UnityEngine.SliderState
struct SliderState_t967;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventType.h"

// System.Void UnityEngine.SliderHandler::.ctor(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean,System.Int32)
 void SliderHandler__ctor_m4942 (SliderHandler_t968 * __this, Rect_t442  ___position, float ___currentValue, float ___size, float ___start, float ___end, GUIStyle_t263 * ___slider, GUIStyle_t263 * ___thumb, bool ___horiz, int32_t ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::Handle()
 float SliderHandler_Handle_m4943 (SliderHandler_t968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::OnMouseDown()
 float SliderHandler_OnMouseDown_m4944 (SliderHandler_t968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::OnMouseDrag()
 float SliderHandler_OnMouseDrag_m4945 (SliderHandler_t968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::OnMouseUp()
 float SliderHandler_OnMouseUp_m4946 (SliderHandler_t968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::OnRepaint()
 float SliderHandler_OnRepaint_m4947 (SliderHandler_t968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.SliderHandler::CurrentEventType()
 int32_t SliderHandler_CurrentEventType_m4948 (SliderHandler_t968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.SliderHandler::CurrentScrollTroughSide()
 int32_t SliderHandler_CurrentScrollTroughSide_m4949 (SliderHandler_t968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SliderHandler::IsEmptySlider()
 bool SliderHandler_IsEmptySlider_m4950 (SliderHandler_t968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SliderHandler::SupportsPageMovements()
 bool SliderHandler_SupportsPageMovements_m4951 (SliderHandler_t968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::PageMovementValue()
 float SliderHandler_PageMovementValue_m4952 (SliderHandler_t968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::PageUpMovementBound()
 float SliderHandler_PageUpMovementBound_m4953 (SliderHandler_t968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Event UnityEngine.SliderHandler::CurrentEvent()
 Event_t615 * SliderHandler_CurrentEvent_m4954 (SliderHandler_t968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::ValueForCurrentMousePosition()
 float SliderHandler_ValueForCurrentMousePosition_m4955 (SliderHandler_t968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::Clamp(System.Single)
 float SliderHandler_Clamp_m4956 (SliderHandler_t968 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.SliderHandler::ThumbSelectionRect()
 Rect_t442  SliderHandler_ThumbSelectionRect_m4957 (SliderHandler_t968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SliderHandler::StartDraggingWithValue(System.Single)
 void SliderHandler_StartDraggingWithValue_m4958 (SliderHandler_t968 * __this, float ___dragStartValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SliderState UnityEngine.SliderHandler::SliderState()
 SliderState_t967 * SliderHandler_SliderState_m4959 (SliderHandler_t968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.SliderHandler::ThumbRect()
 Rect_t442  SliderHandler_ThumbRect_m4960 (SliderHandler_t968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.SliderHandler::VerticalThumbRect()
 Rect_t442  SliderHandler_VerticalThumbRect_m4961 (SliderHandler_t968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.SliderHandler::HorizontalThumbRect()
 Rect_t442  SliderHandler_HorizontalThumbRect_m4962 (SliderHandler_t968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::ClampedCurrentValue()
 float SliderHandler_ClampedCurrentValue_m4963 (SliderHandler_t968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::MousePosition()
 float SliderHandler_MousePosition_m4964 (SliderHandler_t968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::ValuesPerPixel()
 float SliderHandler_ValuesPerPixel_m4965 (SliderHandler_t968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::ThumbSize()
 float SliderHandler_ThumbSize_m4966 (SliderHandler_t968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::MaxValue()
 float SliderHandler_MaxValue_m4967 (SliderHandler_t968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::MinValue()
 float SliderHandler_MinValue_m4968 (SliderHandler_t968 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
