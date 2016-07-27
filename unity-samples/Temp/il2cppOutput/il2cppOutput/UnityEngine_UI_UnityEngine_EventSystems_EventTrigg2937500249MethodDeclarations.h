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

// UnityEngine.EventSystems.EventTrigger
struct EventTrigger_t2937500249;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct List_1_t864074059;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t3547103726;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t3205101634;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t552897310;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_EventTrigge904435379.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_BaseEventD3547103726.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve3205101634.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_AxisEventDa552897310.h"

// System.Void UnityEngine.EventSystems.EventTrigger::.ctor()
extern "C"  void EventTrigger__ctor_m3410186115 (EventTrigger_t2937500249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry> UnityEngine.EventSystems.EventTrigger::get_triggers()
extern "C"  List_1_t864074059 * EventTrigger_get_triggers_m900961340 (EventTrigger_t2937500249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::set_triggers(System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>)
extern "C"  void EventTrigger_set_triggers_m2956640203 (EventTrigger_t2937500249 * __this, List_1_t864074059 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::Execute(UnityEngine.EventSystems.EventTriggerType,UnityEngine.EventSystems.BaseEventData)
extern "C"  void EventTrigger_Execute_m1768335209 (EventTrigger_t2937500249 * __this, int32_t ___id0, BaseEventData_t3547103726 * ___eventData1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
extern "C"  void EventTrigger_OnPointerEnter_m3698974435 (EventTrigger_t2937500249 * __this, PointerEventData_t3205101634 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
extern "C"  void EventTrigger_OnPointerExit_m4069405409 (EventTrigger_t2937500249 * __this, PointerEventData_t3205101634 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void EventTrigger_OnDrag_m621966250 (EventTrigger_t2937500249 * __this, PointerEventData_t3205101634 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnDrop(UnityEngine.EventSystems.PointerEventData)
extern "C"  void EventTrigger_OnDrop_m1949092623 (EventTrigger_t2937500249 * __this, PointerEventData_t3205101634 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C"  void EventTrigger_OnPointerDown_m3676323037 (EventTrigger_t2937500249 * __this, PointerEventData_t3205101634 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C"  void EventTrigger_OnPointerUp_m902762948 (EventTrigger_t2937500249 * __this, PointerEventData_t3205101634 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C"  void EventTrigger_OnPointerClick_m4229222963 (EventTrigger_t2937500249 * __this, PointerEventData_t3205101634 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnSelect(UnityEngine.EventSystems.BaseEventData)
extern "C"  void EventTrigger_OnSelect_m3604185014 (EventTrigger_t2937500249 * __this, BaseEventData_t3547103726 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnDeselect(UnityEngine.EventSystems.BaseEventData)
extern "C"  void EventTrigger_OnDeselect_m1138247351 (EventTrigger_t2937500249 * __this, BaseEventData_t3547103726 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnScroll(UnityEngine.EventSystems.PointerEventData)
extern "C"  void EventTrigger_OnScroll_m2448369713 (EventTrigger_t2937500249 * __this, PointerEventData_t3205101634 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnMove(UnityEngine.EventSystems.AxisEventData)
extern "C"  void EventTrigger_OnMove_m4043957787 (EventTrigger_t2937500249 * __this, AxisEventData_t552897310 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnUpdateSelected(UnityEngine.EventSystems.BaseEventData)
extern "C"  void EventTrigger_OnUpdateSelected_m1400064574 (EventTrigger_t2937500249 * __this, BaseEventData_t3547103726 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void EventTrigger_OnInitializePotentialDrag_m802339386 (EventTrigger_t2937500249 * __this, PointerEventData_t3205101634 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void EventTrigger_OnBeginDrag_m356440287 (EventTrigger_t2937500249 * __this, PointerEventData_t3205101634 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
extern "C"  void EventTrigger_OnEndDrag_m168497709 (EventTrigger_t2937500249 * __this, PointerEventData_t3205101634 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C"  void EventTrigger_OnSubmit_m974012114 (EventTrigger_t2937500249 * __this, BaseEventData_t3547103726 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.EventTrigger::OnCancel(UnityEngine.EventSystems.BaseEventData)
extern "C"  void EventTrigger_OnCancel_m972464948 (EventTrigger_t2937500249 * __this, BaseEventData_t3547103726 * ___eventData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
