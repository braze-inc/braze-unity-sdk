#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t597;
// System.Char[]
struct CharU5BU5D_t276;
// UnityEngine.UI.Text
struct Text_t128;
// UnityEngine.UI.Graphic
struct Graphic_t565;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t589;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t591;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t593;
// UnityEngine.RectTransform
struct RectTransform_t559;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t598;
// UnityEngine.TextGenerator
struct TextGenerator_t599;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t560;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t566;
// UnityEngine.Coroutine
struct Coroutine_t600;
struct Coroutine_t600_marshaled;
// UnityEngine.Event
struct Event_t601;
struct Event_t601_marshaled;
// UnityEngine.UI.Selectable
#include "UnityEngine_UI_UnityEngine_UI_Selectable.h"
// UnityEngine.UI.InputField/ContentType
#include "UnityEngine_UI_UnityEngine_UI_InputField_ContentType.h"
// UnityEngine.UI.InputField/InputType
#include "UnityEngine_UI_UnityEngine_UI_InputField_InputType.h"
// UnityEngine.TouchScreenKeyboardType
#include "UnityEngine_UnityEngine_TouchScreenKeyboardType.h"
// UnityEngine.UI.InputField/LineType
#include "UnityEngine_UI_UnityEngine_UI_InputField_LineType.h"
// UnityEngine.UI.InputField/CharacterValidation
#include "UnityEngine_UI_UnityEngine_UI_InputField_CharacterValidation.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.UI.InputField
struct InputField_t121  : public Selectable_t545
{
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_t128 * ___m_TextComponent_21;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_t565 * ___m_Placeholder_22;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_23;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_24;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	uint16_t ___m_AsteriskChar_25;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_26;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_27;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_28;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_29;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_30;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_EndEdit
	SubmitEvent_t589 * ___m_EndEdit_31;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChange
	OnChangeEvent_t591 * ___m_OnValueChange_32;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t593 * ___m_OnValidateInput_33;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_t341  ___m_SelectionColor_34;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_35;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_36;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_37;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_38;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t559 * ___caretRectTrans_39;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_t598* ___m_CursorVerts_40;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t599 * ___m_InputTextCache_41;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_t560 * ___m_CachedInputRenderer_42;
	// System.Collections.Generic.List`1<UnityEngine.UIVertex> UnityEngine.UI.InputField::m_Vbo
	List_1_t566 * ___m_Vbo_43;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_44;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_45;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_46;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_47;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_48;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlickCoroutine
	Coroutine_t600 * ___m_BlickCoroutine_49;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_50;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_51;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_52;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t600 * ___m_DragCoroutine_53;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_54;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_55;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_56;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_t601 * ___m_ProcessingEvent_57;
};
struct InputField_t121_StaticFields{
	// System.Single UnityEngine.UI.InputField::kHScrollSpeed
	float ___kHScrollSpeed_16;
	// System.Single UnityEngine.UI.InputField::kVScrollSpeed
	float ___kVScrollSpeed_17;
	// System.String UnityEngine.UI.InputField::kEmailSpecialCharacters
	String_t* ___kEmailSpecialCharacters_18;
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_t597 * ___m_Keyboard_19;
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t276* ___kSeparators_20;
};
