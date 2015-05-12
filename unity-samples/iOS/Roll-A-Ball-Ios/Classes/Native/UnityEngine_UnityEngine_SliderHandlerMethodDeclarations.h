#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SliderHandler
struct SliderHandler_t957;
// UnityEngine.GUIStyle
struct GUIStyle_t250;
// UnityEngine.Event
struct Event_t601;
struct Event_t601_marshaled;
// UnityEngine.SliderState
struct SliderState_t956;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.EventType
#include "UnityEngine_UnityEngine_EventType.h"

// System.Void UnityEngine.SliderHandler::.ctor(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean,System.Int32)
 void SliderHandler__ctor_m4847 (SliderHandler_t957 * __this, Rect_t78  ___position, float ___currentValue, float ___size, float ___start, float ___end, GUIStyle_t250 * ___slider, GUIStyle_t250 * ___thumb, bool ___horiz, int32_t ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::Handle()
 float SliderHandler_Handle_m4848 (SliderHandler_t957 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::OnMouseDown()
 float SliderHandler_OnMouseDown_m4849 (SliderHandler_t957 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::OnMouseDrag()
 float SliderHandler_OnMouseDrag_m4850 (SliderHandler_t957 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::OnMouseUp()
 float SliderHandler_OnMouseUp_m4851 (SliderHandler_t957 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::OnRepaint()
 float SliderHandler_OnRepaint_m4852 (SliderHandler_t957 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.SliderHandler::CurrentEventType()
 int32_t SliderHandler_CurrentEventType_m4853 (SliderHandler_t957 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.SliderHandler::CurrentScrollTroughSide()
 int32_t SliderHandler_CurrentScrollTroughSide_m4854 (SliderHandler_t957 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SliderHandler::IsEmptySlider()
 bool SliderHandler_IsEmptySlider_m4855 (SliderHandler_t957 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SliderHandler::SupportsPageMovements()
 bool SliderHandler_SupportsPageMovements_m4856 (SliderHandler_t957 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::PageMovementValue()
 float SliderHandler_PageMovementValue_m4857 (SliderHandler_t957 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::PageUpMovementBound()
 float SliderHandler_PageUpMovementBound_m4858 (SliderHandler_t957 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Event UnityEngine.SliderHandler::CurrentEvent()
 Event_t601 * SliderHandler_CurrentEvent_m4859 (SliderHandler_t957 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::ValueForCurrentMousePosition()
 float SliderHandler_ValueForCurrentMousePosition_m4860 (SliderHandler_t957 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::Clamp(System.Single)
 float SliderHandler_Clamp_m4861 (SliderHandler_t957 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.SliderHandler::ThumbSelectionRect()
 Rect_t78  SliderHandler_ThumbSelectionRect_m4862 (SliderHandler_t957 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SliderHandler::StartDraggingWithValue(System.Single)
 void SliderHandler_StartDraggingWithValue_m4863 (SliderHandler_t957 * __this, float ___dragStartValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SliderState UnityEngine.SliderHandler::SliderState()
 SliderState_t956 * SliderHandler_SliderState_m4864 (SliderHandler_t957 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.SliderHandler::ThumbRect()
 Rect_t78  SliderHandler_ThumbRect_m4865 (SliderHandler_t957 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.SliderHandler::VerticalThumbRect()
 Rect_t78  SliderHandler_VerticalThumbRect_m4866 (SliderHandler_t957 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.SliderHandler::HorizontalThumbRect()
 Rect_t78  SliderHandler_HorizontalThumbRect_m4867 (SliderHandler_t957 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::ClampedCurrentValue()
 float SliderHandler_ClampedCurrentValue_m4868 (SliderHandler_t957 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::MousePosition()
 float SliderHandler_MousePosition_m4869 (SliderHandler_t957 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::ValuesPerPixel()
 float SliderHandler_ValuesPerPixel_m4870 (SliderHandler_t957 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::ThumbSize()
 float SliderHandler_ThumbSize_m4871 (SliderHandler_t957 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::MaxValue()
 float SliderHandler_MaxValue_m4872 (SliderHandler_t957 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::MinValue()
 float SliderHandler_MinValue_m4873 (SliderHandler_t957 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
