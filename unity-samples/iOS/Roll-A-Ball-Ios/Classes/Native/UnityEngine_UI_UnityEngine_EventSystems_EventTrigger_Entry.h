#pragma once
#include <stdint.h>
// UnityEngine.EventSystems.EventTrigger/TriggerEvent
struct TriggerEvent_t478;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.EventSystems.EventTriggerType
#include "UnityEngine_UI_UnityEngine_EventSystems_EventTriggerType.h"
// UnityEngine.EventSystems.EventTrigger/Entry
struct Entry_t480  : public Object_t
{
	// UnityEngine.EventSystems.EventTriggerType UnityEngine.EventSystems.EventTrigger/Entry::eventID
	int32_t ___eventID_0;
	// UnityEngine.EventSystems.EventTrigger/TriggerEvent UnityEngine.EventSystems.EventTrigger/Entry::callback
	TriggerEvent_t478 * ___callback_1;
};
