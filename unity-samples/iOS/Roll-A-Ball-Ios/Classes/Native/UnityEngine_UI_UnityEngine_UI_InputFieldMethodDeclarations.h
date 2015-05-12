#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.InputField
struct InputField_t134;
// UnityEngine.TextGenerator
struct TextGenerator_t613;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t141;
// UnityEngine.UI.Graphic
struct Graphic_t579;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t603;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t605;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t607;
// System.Collections.IEnumerator
struct IEnumerator_t19;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t475;
// UnityEngine.Event
struct Event_t615;
struct Event_t615_marshaled;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t471;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t580;
// UnityEngine.UI.InputField/ContentType[]
struct ContentTypeU5BU5D_t616;
// UnityEngine.Transform
struct Transform_t193;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.UI.InputField/ContentType
#include "UnityEngine_UI_UnityEngine_UI_InputField_ContentType.h"
// UnityEngine.UI.InputField/LineType
#include "UnityEngine_UI_UnityEngine_UI_InputField_LineType.h"
// UnityEngine.UI.InputField/InputType
#include "UnityEngine_UI_UnityEngine_UI_InputField_InputType.h"
// UnityEngine.TouchScreenKeyboardType
#include "UnityEngine_UnityEngine_TouchScreenKeyboardType.h"
// UnityEngine.UI.InputField/CharacterValidation
#include "UnityEngine_UI_UnityEngine_UI_InputField_CharacterValidation.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.UI.InputField/EditState
#include "UnityEngine_UI_UnityEngine_UI_InputField_EditState.h"
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"
// UnityEngine.UI.Selectable/SelectionState
#include "UnityEngine_UI_UnityEngine_UI_Selectable_SelectionState.h"

// System.Void UnityEngine.UI.InputField::.ctor()
 void InputField__ctor_m2612 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::.cctor()
 void InputField__cctor_m2613 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextGenerator UnityEngine.UI.InputField::get_cachedInputTextGenerator()
 TextGenerator_t613 * InputField_get_cachedInputTextGenerator_m2614 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_shouldHideMobileInput(System.Boolean)
 void InputField_set_shouldHideMobileInput_m2615 (InputField_t134 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_shouldHideMobileInput()
 bool InputField_get_shouldHideMobileInput_m2616 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.InputField::get_text()
 String_t* InputField_get_text_m1173 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_text(System.String)
 void InputField_set_text_m2617 (InputField_t134 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_isFocused()
 bool InputField_get_isFocused_m2618 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.InputField::get_caretBlinkRate()
 float InputField_get_caretBlinkRate_m2619 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_caretBlinkRate(System.Single)
 void InputField_set_caretBlinkRate_m2620 (InputField_t134 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Text UnityEngine.UI.InputField::get_textComponent()
 Text_t141 * InputField_get_textComponent_m2621 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_textComponent(UnityEngine.UI.Text)
 void InputField_set_textComponent_m2622 (InputField_t134 * __this, Text_t141 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Graphic UnityEngine.UI.InputField::get_placeholder()
 Graphic_t579 * InputField_get_placeholder_m2623 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_placeholder(UnityEngine.UI.Graphic)
 void InputField_set_placeholder_m2624 (InputField_t134 * __this, Graphic_t579 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.InputField::get_selectionColor()
 Color_t12  InputField_get_selectionColor_m2625 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_selectionColor(UnityEngine.Color)
 void InputField_set_selectionColor_m2626 (InputField_t134 * __this, Color_t12  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::get_onEndEdit()
 SubmitEvent_t603 * InputField_get_onEndEdit_m2627 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_onEndEdit(UnityEngine.UI.InputField/SubmitEvent)
 void InputField_set_onEndEdit_m2628 (InputField_t134 * __this, SubmitEvent_t603 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::get_onValueChange()
 OnChangeEvent_t605 * InputField_get_onValueChange_m2629 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_onValueChange(UnityEngine.UI.InputField/OnChangeEvent)
 void InputField_set_onValueChange_m2630 (InputField_t134 * __this, OnChangeEvent_t605 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::get_onValidateInput()
 OnValidateInput_t607 * InputField_get_onValidateInput_m2631 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_onValidateInput(UnityEngine.UI.InputField/OnValidateInput)
 void InputField_set_onValidateInput_m2632 (InputField_t134 * __this, OnValidateInput_t607 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::get_characterLimit()
 int32_t InputField_get_characterLimit_m2633 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_characterLimit(System.Int32)
 void InputField_set_characterLimit_m2634 (InputField_t134 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::get_contentType()
 int32_t InputField_get_contentType_m2635 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_contentType(UnityEngine.UI.InputField/ContentType)
 void InputField_set_contentType_m2636 (InputField_t134 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::get_lineType()
 int32_t InputField_get_lineType_m2637 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_lineType(UnityEngine.UI.InputField/LineType)
 void InputField_set_lineType_m2638 (InputField_t134 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::get_inputType()
 int32_t InputField_get_inputType_m2639 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_inputType(UnityEngine.UI.InputField/InputType)
 void InputField_set_inputType_m2640 (InputField_t134 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::get_keyboardType()
 int32_t InputField_get_keyboardType_m2641 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_keyboardType(UnityEngine.TouchScreenKeyboardType)
 void InputField_set_keyboardType_m2642 (InputField_t134 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::get_characterValidation()
 int32_t InputField_get_characterValidation_m2643 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_characterValidation(UnityEngine.UI.InputField/CharacterValidation)
 void InputField_set_characterValidation_m2644 (InputField_t134 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_multiLine()
 bool InputField_get_multiLine_m2645 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.UI.InputField::get_asteriskChar()
 uint16_t InputField_get_asteriskChar_m2646 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_asteriskChar(System.Char)
 void InputField_set_asteriskChar_m2647 (InputField_t134 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_wasCanceled()
 bool InputField_get_wasCanceled_m2648 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ClampPos(System.Int32&)
 void InputField_ClampPos_m2649 (InputField_t134 * __this, int32_t* ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::get_caretPosition()
 int32_t InputField_get_caretPosition_m2650 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_caretPosition(System.Int32)
 void InputField_set_caretPosition_m2651 (InputField_t134 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::get_caretSelectPos()
 int32_t InputField_get_caretSelectPos_m2652 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_caretSelectPos(System.Int32)
 void InputField_set_caretSelectPos_m2653 (InputField_t134 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_hasSelection()
 bool InputField_get_hasSelection_m2654 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnEnable()
 void InputField_OnEnable_m2655 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnDisable()
 void InputField_OnDisable_m2656 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.InputField::CaretBlink()
 Object_t * InputField_CaretBlink_m2657 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetCaretVisible()
 void InputField_SetCaretVisible_m2658 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetCaretActive()
 void InputField_SetCaretActive_m2659 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnFocus()
 void InputField_OnFocus_m2660 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SelectAll()
 void InputField_SelectAll_m2661 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveTextEnd(System.Boolean)
 void InputField_MoveTextEnd_m2662 (InputField_t134 * __this, bool ___shift, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveTextStart(System.Boolean)
 void InputField_MoveTextStart_m2663 (InputField_t134 * __this, bool ___shift, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.InputField::get_clipboard()
 String_t* InputField_get_clipboard_m2664 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_clipboard(System.String)
 void InputField_set_clipboard_m2665 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::InPlaceEditing()
 bool InputField_InPlaceEditing_m2666 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::LateUpdate()
 void InputField_LateUpdate_m2667 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.InputField::ScreenToLocal(UnityEngine.Vector2)
 Vector2_t198  InputField_ScreenToLocal_m2668 (InputField_t134 * __this, Vector2_t198  ___screen, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::GetUnclampedCharacterLineFromPosition(UnityEngine.Vector2,UnityEngine.TextGenerator)
 int32_t InputField_GetUnclampedCharacterLineFromPosition_m2669 (InputField_t134 * __this, Vector2_t198  ___pos, TextGenerator_t613 * ___generator, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::GetCharacterIndexFromPosition(UnityEngine.Vector2)
 int32_t InputField_GetCharacterIndexFromPosition_m2670 (InputField_t134 * __this, Vector2_t198  ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::MayDrag(UnityEngine.EventSystems.PointerEventData)
 bool InputField_MayDrag_m2671 (InputField_t134 * __this, PointerEventData_t475 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
 void InputField_OnBeginDrag_m2672 (InputField_t134 * __this, PointerEventData_t475 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnDrag(UnityEngine.EventSystems.PointerEventData)
 void InputField_OnDrag_m2673 (InputField_t134 * __this, PointerEventData_t475 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.InputField::MouseDragOutsideRect(UnityEngine.EventSystems.PointerEventData)
 Object_t * InputField_MouseDragOutsideRect_m2674 (InputField_t134 * __this, PointerEventData_t475 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
 void InputField_OnEndDrag_m2675 (InputField_t134 * __this, PointerEventData_t475 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
 void InputField_OnPointerDown_m2676 (InputField_t134 * __this, PointerEventData_t475 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/EditState UnityEngine.UI.InputField::KeyPressed(UnityEngine.Event)
 int32_t InputField_KeyPressed_m2677 (InputField_t134 * __this, Event_t615 * ___evt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::IsValidChar(System.Char)
 bool InputField_IsValidChar_m2678 (InputField_t134 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ProcessEvent(UnityEngine.Event)
 void InputField_ProcessEvent_m2679 (InputField_t134 * __this, Event_t615 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnUpdateSelected(UnityEngine.EventSystems.BaseEventData)
 void InputField_OnUpdateSelected_m2680 (InputField_t134 * __this, BaseEventData_t471 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.InputField::GetSelectedString()
 String_t* InputField_GetSelectedString_m2681 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::FindtNextWordBegin()
 int32_t InputField_FindtNextWordBegin_m2682 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveRight(System.Boolean,System.Boolean)
 void InputField_MoveRight_m2683 (InputField_t134 * __this, bool ___shift, bool ___ctrl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::FindtPrevWordBegin()
 int32_t InputField_FindtPrevWordBegin_m2684 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveLeft(System.Boolean,System.Boolean)
 void InputField_MoveLeft_m2685 (InputField_t134 * __this, bool ___shift, bool ___ctrl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::DetermineCharacterLine(System.Int32,UnityEngine.TextGenerator)
 int32_t InputField_DetermineCharacterLine_m2686 (InputField_t134 * __this, int32_t ___charPos, TextGenerator_t613 * ___generator, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::LineUpCharacterPosition(System.Int32,System.Boolean)
 int32_t InputField_LineUpCharacterPosition_m2687 (InputField_t134 * __this, int32_t ___originalPos, bool ___goToFirstChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::LineDownCharacterPosition(System.Int32,System.Boolean)
 int32_t InputField_LineDownCharacterPosition_m2688 (InputField_t134 * __this, int32_t ___originalPos, bool ___goToLastChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveDown(System.Boolean)
 void InputField_MoveDown_m2689 (InputField_t134 * __this, bool ___shift, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveDown(System.Boolean,System.Boolean)
 void InputField_MoveDown_m2690 (InputField_t134 * __this, bool ___shift, bool ___goToLastChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveUp(System.Boolean)
 void InputField_MoveUp_m2691 (InputField_t134 * __this, bool ___shift, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveUp(System.Boolean,System.Boolean)
 void InputField_MoveUp_m2692 (InputField_t134 * __this, bool ___shift, bool ___goToFirstChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Delete()
 void InputField_Delete_m2693 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ForwardSpace()
 void InputField_ForwardSpace_m2694 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Backspace()
 void InputField_Backspace_m2695 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Insert(System.Char)
 void InputField_Insert_m2696 (InputField_t134 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SendOnValueChangedAndUpdateLabel()
 void InputField_SendOnValueChangedAndUpdateLabel_m2697 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SendOnValueChanged()
 void InputField_SendOnValueChanged_m2698 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SendOnSubmit()
 void InputField_SendOnSubmit_m2699 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Append(System.String)
 void InputField_Append_m2700 (InputField_t134 * __this, String_t* ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Append(System.Char)
 void InputField_Append_m2701 (InputField_t134 * __this, uint16_t ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::UpdateLabel()
 void InputField_UpdateLabel_m2702 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::IsSelectionVisible()
 bool InputField_IsSelectionVisible_m2703 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::GetLineStartPosition(UnityEngine.TextGenerator,System.Int32)
 int32_t InputField_GetLineStartPosition_m2704 (Object_t * __this/* static, unused */, TextGenerator_t613 * ___gen, int32_t ___line, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::GetLineEndPosition(UnityEngine.TextGenerator,System.Int32)
 int32_t InputField_GetLineEndPosition_m2705 (Object_t * __this/* static, unused */, TextGenerator_t613 * ___gen, int32_t ___line, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetDrawRangeToContainCaretPosition(UnityEngine.TextGenerator,System.Int32,System.Int32&,System.Int32&)
 void InputField_SetDrawRangeToContainCaretPosition_m2706 (InputField_t134 * __this, TextGenerator_t613 * ___gen, int32_t ___caretPos, int32_t* ___drawStart, int32_t* ___drawEnd, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MarkGeometryAsDirty()
 void InputField_MarkGeometryAsDirty_m2707 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Rebuild(UnityEngine.UI.CanvasUpdate)
 void InputField_Rebuild_m2708 (InputField_t134 * __this, int32_t ___update, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::UpdateGeometry()
 void InputField_UpdateGeometry_m2709 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::AssignPositioningIfNeeded()
 void InputField_AssignPositioningIfNeeded_m2710 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnFillVBO(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
 void InputField_OnFillVBO_m2711 (InputField_t134 * __this, List_1_t580 * ___vbo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::GenerateCursor(System.Collections.Generic.List`1<UnityEngine.UIVertex>,UnityEngine.Vector2)
 void InputField_GenerateCursor_m2712 (InputField_t134 * __this, List_1_t580 * ___vbo, Vector2_t198  ___roundingOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::CreateCursorVerts()
 void InputField_CreateCursorVerts_m2713 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.InputField::SumLineHeights(System.Int32,UnityEngine.TextGenerator)
 float InputField_SumLineHeights_m2714 (InputField_t134 * __this, int32_t ___endLine, TextGenerator_t613 * ___generator, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::GenerateHightlight(System.Collections.Generic.List`1<UnityEngine.UIVertex>,UnityEngine.Vector2)
 void InputField_GenerateHightlight_m2715 (InputField_t134 * __this, List_1_t580 * ___vbo, Vector2_t198  ___roundingOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.UI.InputField::Validate(System.String,System.Int32,System.Char)
 uint16_t InputField_Validate_m2716 (InputField_t134 * __this, String_t* ___text, int32_t ___pos, uint16_t ___ch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ActivateInputField()
 void InputField_ActivateInputField_m2717 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ActivateInputFieldInternal()
 void InputField_ActivateInputFieldInternal_m2718 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnSelect(UnityEngine.EventSystems.BaseEventData)
 void InputField_OnSelect_m2719 (InputField_t134 * __this, BaseEventData_t471 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
 void InputField_OnPointerClick_m2720 (InputField_t134 * __this, PointerEventData_t475 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::DeactivateInputField()
 void InputField_DeactivateInputField_m2721 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnDeselect(UnityEngine.EventSystems.BaseEventData)
 void InputField_OnDeselect_m2722 (InputField_t134 * __this, BaseEventData_t471 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnSubmit(UnityEngine.EventSystems.BaseEventData)
 void InputField_OnSubmit_m2723 (InputField_t134 * __this, BaseEventData_t471 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::EnforceContentType()
 void InputField_EnforceContentType_m2724 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetToCustomIfContentTypeIsNot(UnityEngine.UI.InputField/ContentType[])
 void InputField_SetToCustomIfContentTypeIsNot_m2725 (InputField_t134 * __this, ContentTypeU5BU5D_t616* ___allowedContentTypes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetToCustom()
 void InputField_SetToCustom_m2726 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::DoStateTransition(UnityEngine.UI.Selectable/SelectionState,System.Boolean)
 void InputField_DoStateTransition_m2727 (InputField_t134 * __this, int32_t ___state, bool ___instant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::UnityEngine.UI.ICanvasElement.IsDestroyed()
 bool InputField_UnityEngine_UI_ICanvasElement_IsDestroyed_m2728 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.InputField::UnityEngine.UI.ICanvasElement.get_transform()
 Transform_t193 * InputField_UnityEngine_UI_ICanvasElement_get_transform_m2729 (InputField_t134 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
