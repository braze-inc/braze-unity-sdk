#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t504;
// UnityEngine.UI.Scrollbar/ScrollEvent
struct ScrollEvent_t574;
// UnityEngine.Coroutine
struct Coroutine_t558;
struct Coroutine_t558_marshaled;

#include "UnityEngine_UI_UnityEngine_UI_Selectable.h"
#include "UnityEngine_UI_UnityEngine_UI_Scrollbar_Direction.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_DrivenRectTransformTracker.h"

// UnityEngine.UI.Scrollbar
struct  Scrollbar_t577  : public Selectable_t493
{
	// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::m_HandleRect
	RectTransform_t504 * ___m_HandleRect_16;
	// UnityEngine.UI.Scrollbar/Direction UnityEngine.UI.Scrollbar::m_Direction
	int32_t ___m_Direction_17;
	// System.Single UnityEngine.UI.Scrollbar::m_Value
	float ___m_Value_18;
	// System.Single UnityEngine.UI.Scrollbar::m_Size
	float ___m_Size_19;
	// System.Int32 UnityEngine.UI.Scrollbar::m_NumberOfSteps
	int32_t ___m_NumberOfSteps_20;
	// UnityEngine.UI.Scrollbar/ScrollEvent UnityEngine.UI.Scrollbar::m_OnValueChanged
	ScrollEvent_t574 * ___m_OnValueChanged_21;
	// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::m_ContainerRect
	RectTransform_t504 * ___m_ContainerRect_22;
	// UnityEngine.Vector2 UnityEngine.UI.Scrollbar::m_Offset
	Vector2_t231  ___m_Offset_23;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Scrollbar::m_Tracker
	DrivenRectTransformTracker_t578  ___m_Tracker_24;
	// UnityEngine.Coroutine UnityEngine.UI.Scrollbar::m_PointerDownRepeat
	Coroutine_t558 * ___m_PointerDownRepeat_25;
	// System.Boolean UnityEngine.UI.Scrollbar::isPointerDownAndNotDragging
	bool ___isPointerDownAndNotDragging_26;
};
