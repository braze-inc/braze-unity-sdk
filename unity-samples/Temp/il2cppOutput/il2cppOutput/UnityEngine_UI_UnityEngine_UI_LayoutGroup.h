#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectOffset
struct RectOffset_t622;
// UnityEngine.RectTransform
struct RectTransform_t504;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t623;

#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"
#include "UnityEngine_UnityEngine_TextAnchor.h"
#include "UnityEngine_UnityEngine_DrivenRectTransformTracker.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// UnityEngine.UI.LayoutGroup
struct  LayoutGroup_t618  : public UIBehaviour_t425
{
	// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::m_Padding
	RectOffset_t622 * ___m_Padding_2;
	// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::m_ChildAlignment
	int32_t ___m_ChildAlignment_3;
	// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::m_Rect
	RectTransform_t504 * ___m_Rect_4;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.LayoutGroup::m_Tracker
	DrivenRectTransformTracker_t578  ___m_Tracker_5;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalMinSize
	Vector2_t231  ___m_TotalMinSize_6;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalPreferredSize
	Vector2_t231  ___m_TotalPreferredSize_7;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalFlexibleSize
	Vector2_t231  ___m_TotalFlexibleSize_8;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::m_RectChildren
	List_1_t623 * ___m_RectChildren_9;
};
