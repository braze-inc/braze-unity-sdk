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

// UnityEngine.GUIStyle
struct GUIStyle_t1006925219;
// UnityEngine.Event
struct Event_t1590224583;
struct Event_t1590224583_marshaled_pinvoke;
// UnityEngine.SliderState
struct SliderState_t3121859677;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_SliderHandler3128523606.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "UnityEngine_UnityEngine_GUIStyle1006925219.h"
#include "UnityEngine_UnityEngine_EventType3558284577.h"

// System.Void UnityEngine.SliderHandler::.ctor(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean,System.Int32)
extern "C"  void SliderHandler__ctor_m4217573891 (SliderHandler_t3128523606 * __this, Rect_t1525428817  ___position0, float ___currentValue1, float ___size2, float ___start3, float ___end4, GUIStyle_t1006925219 * ___slider5, GUIStyle_t1006925219 * ___thumb6, bool ___horiz7, int32_t ___id8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::Handle()
extern "C"  float SliderHandler_Handle_m2409586512 (SliderHandler_t3128523606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::OnMouseDown()
extern "C"  float SliderHandler_OnMouseDown_m3958002946 (SliderHandler_t3128523606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::OnMouseDrag()
extern "C"  float SliderHandler_OnMouseDrag_m3960111380 (SliderHandler_t3128523606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::OnMouseUp()
extern "C"  float SliderHandler_OnMouseUp_m1318588539 (SliderHandler_t3128523606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::OnRepaint()
extern "C"  float SliderHandler_OnRepaint_m4264550822 (SliderHandler_t3128523606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.SliderHandler::CurrentEventType()
extern "C"  int32_t SliderHandler_CurrentEventType_m3978233689 (SliderHandler_t3128523606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.SliderHandler::CurrentScrollTroughSide()
extern "C"  int32_t SliderHandler_CurrentScrollTroughSide_m1606169264 (SliderHandler_t3128523606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SliderHandler::IsEmptySlider()
extern "C"  bool SliderHandler_IsEmptySlider_m2523580504 (SliderHandler_t3128523606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SliderHandler::SupportsPageMovements()
extern "C"  bool SliderHandler_SupportsPageMovements_m4216612037 (SliderHandler_t3128523606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::PageMovementValue()
extern "C"  float SliderHandler_PageMovementValue_m2660885357 (SliderHandler_t3128523606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::PageUpMovementBound()
extern "C"  float SliderHandler_PageUpMovementBound_m2543741343 (SliderHandler_t3128523606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Event UnityEngine.SliderHandler::CurrentEvent()
extern "C"  Event_t1590224583 * SliderHandler_CurrentEvent_m721596197 (SliderHandler_t3128523606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::ValueForCurrentMousePosition()
extern "C"  float SliderHandler_ValueForCurrentMousePosition_m493574741 (SliderHandler_t3128523606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::Clamp(System.Single)
extern "C"  float SliderHandler_Clamp_m4218954710 (SliderHandler_t3128523606 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.SliderHandler::ThumbSelectionRect()
extern "C"  Rect_t1525428817  SliderHandler_ThumbSelectionRect_m3697323546 (SliderHandler_t3128523606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SliderHandler::StartDraggingWithValue(System.Single)
extern "C"  void SliderHandler_StartDraggingWithValue_m3874943933 (SliderHandler_t3128523606 * __this, float ___dragStartValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SliderState UnityEngine.SliderHandler::SliderState()
extern "C"  SliderState_t3121859677 * SliderHandler_SliderState_m1456191352 (SliderHandler_t3128523606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.SliderHandler::ThumbRect()
extern "C"  Rect_t1525428817  SliderHandler_ThumbRect_m1881961532 (SliderHandler_t3128523606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.SliderHandler::VerticalThumbRect()
extern "C"  Rect_t1525428817  SliderHandler_VerticalThumbRect_m1406344678 (SliderHandler_t3128523606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.SliderHandler::HorizontalThumbRect()
extern "C"  Rect_t1525428817  SliderHandler_HorizontalThumbRect_m2689559608 (SliderHandler_t3128523606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::ClampedCurrentValue()
extern "C"  float SliderHandler_ClampedCurrentValue_m3006511340 (SliderHandler_t3128523606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::MousePosition()
extern "C"  float SliderHandler_MousePosition_m303335016 (SliderHandler_t3128523606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::ValuesPerPixel()
extern "C"  float SliderHandler_ValuesPerPixel_m41869331 (SliderHandler_t3128523606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::ThumbSize()
extern "C"  float SliderHandler_ThumbSize_m3034411697 (SliderHandler_t3128523606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::MaxValue()
extern "C"  float SliderHandler_MaxValue_m44679317 (SliderHandler_t3128523606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::MinValue()
extern "C"  float SliderHandler_MinValue_m2516678631 (SliderHandler_t3128523606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
