#pragma once
#include <stdint.h>
// UnityEngine.GUISkin
struct GUISkin_t848;
// UnityEngineInternal.GenericStack
struct GenericStack_t849;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// UnityEngine.GUI
struct GUI_t459  : public Object_t
{
};
struct GUI_t459_StaticFields{
	// System.Single UnityEngine.GUI::scrollStepSize
	float ___scrollStepSize_0;
	// System.Int32 UnityEngine.GUI::scrollControlID
	int32_t ___scrollControlID_1;
	// System.Int32 UnityEngine.GUI::hotTextField
	int32_t ___hotTextField_2;
	// UnityEngine.GUISkin UnityEngine.GUI::s_Skin
	GUISkin_t848 * ___s_Skin_3;
	// UnityEngine.Rect UnityEngine.GUI::s_ToolTipRect
	Rect_t442  ___s_ToolTipRect_4;
	// System.Int32 UnityEngine.GUI::boxHash
	int32_t ___boxHash_5;
	// System.Int32 UnityEngine.GUI::repeatButtonHash
	int32_t ___repeatButtonHash_6;
	// System.Int32 UnityEngine.GUI::toggleHash
	int32_t ___toggleHash_7;
	// System.Int32 UnityEngine.GUI::buttonGridHash
	int32_t ___buttonGridHash_8;
	// System.Int32 UnityEngine.GUI::sliderHash
	int32_t ___sliderHash_9;
	// System.Int32 UnityEngine.GUI::beginGroupHash
	int32_t ___beginGroupHash_10;
	// System.Int32 UnityEngine.GUI::scrollviewHash
	int32_t ___scrollviewHash_11;
	// UnityEngineInternal.GenericStack UnityEngine.GUI::s_ScrollViewStates
	GenericStack_t849 * ___s_ScrollViewStates_12;
	// System.DateTime UnityEngine.GUI::<nextScrollStepTime>k__BackingField
	DateTime_t850  ___U3CnextScrollStepTimeU3Ek__BackingField_13;
	// System.Int32 UnityEngine.GUI::<scrollTroughSide>k__BackingField
	int32_t ___U3CscrollTroughSideU3Ek__BackingField_14;
};
