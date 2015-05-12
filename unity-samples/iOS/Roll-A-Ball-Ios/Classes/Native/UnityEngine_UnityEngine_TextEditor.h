#pragma once
#include <stdint.h>
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t611;
// UnityEngine.GUIContent
struct GUIContent_t757;
// UnityEngine.GUIStyle
struct GUIStyle_t263;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t978;
// System.Object
#include "mscorlib_System_Object.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TextEditor/DblClickSnapping
#include "UnityEngine_UnityEngine_TextEditor_DblClickSnapping.h"
// UnityEngine.TextEditor
struct TextEditor_t756  : public Object_t
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.TextEditor::keyboardOnScreen
	TouchScreenKeyboard_t611 * ___keyboardOnScreen_0;
	// System.Int32 UnityEngine.TextEditor::pos
	int32_t ___pos_1;
	// System.Int32 UnityEngine.TextEditor::selectPos
	int32_t ___selectPos_2;
	// System.Int32 UnityEngine.TextEditor::controlID
	int32_t ___controlID_3;
	// UnityEngine.GUIContent UnityEngine.TextEditor::content
	GUIContent_t757 * ___content_4;
	// UnityEngine.GUIStyle UnityEngine.TextEditor::style
	GUIStyle_t263 * ___style_5;
	// UnityEngine.Rect UnityEngine.TextEditor::position
	Rect_t442  ___position_6;
	// System.Boolean UnityEngine.TextEditor::multiline
	bool ___multiline_7;
	// System.Boolean UnityEngine.TextEditor::hasHorizontalCursorPos
	bool ___hasHorizontalCursorPos_8;
	// System.Boolean UnityEngine.TextEditor::isPasswordField
	bool ___isPasswordField_9;
	// System.Boolean UnityEngine.TextEditor::m_HasFocus
	bool ___m_HasFocus_10;
	// UnityEngine.Vector2 UnityEngine.TextEditor::scrollOffset
	Vector2_t198  ___scrollOffset_11;
	// System.Boolean UnityEngine.TextEditor::m_TextHeightPotentiallyChanged
	bool ___m_TextHeightPotentiallyChanged_12;
	// UnityEngine.Vector2 UnityEngine.TextEditor::graphicalCursorPos
	Vector2_t198  ___graphicalCursorPos_13;
	// UnityEngine.Vector2 UnityEngine.TextEditor::graphicalSelectCursorPos
	Vector2_t198  ___graphicalSelectCursorPos_14;
	// System.Boolean UnityEngine.TextEditor::m_MouseDragSelectsWholeWords
	bool ___m_MouseDragSelectsWholeWords_15;
	// System.Int32 UnityEngine.TextEditor::m_DblClickInitPos
	int32_t ___m_DblClickInitPos_16;
	// UnityEngine.TextEditor/DblClickSnapping UnityEngine.TextEditor::m_DblClickSnap
	uint8_t ___m_DblClickSnap_17;
	// System.Boolean UnityEngine.TextEditor::m_bJustSelected
	bool ___m_bJustSelected_18;
	// System.Int32 UnityEngine.TextEditor::m_iAltCursorPos
	int32_t ___m_iAltCursorPos_19;
	// System.String UnityEngine.TextEditor::oldText
	String_t* ___oldText_20;
	// System.Int32 UnityEngine.TextEditor::oldPos
	int32_t ___oldPos_21;
	// System.Int32 UnityEngine.TextEditor::oldSelectPos
	int32_t ___oldSelectPos_22;
};
struct TextEditor_t756_StaticFields{
	// System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp> UnityEngine.TextEditor::s_Keyactions
	Dictionary_2_t978 * ___s_Keyactions_23;
};
