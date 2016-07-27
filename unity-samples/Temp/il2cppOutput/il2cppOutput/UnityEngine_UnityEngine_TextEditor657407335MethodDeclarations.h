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

// UnityEngine.TextEditor
struct TextEditor_t657407335;
// System.String
struct String_t;
// UnityEngine.Event
struct Event_t1590224583;
struct Event_t1590224583_marshaled_pinvoke;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "UnityEngine_UnityEngine_Event1590224583.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_TextEditor_DblClickSnappin3710744822.h"
#include "UnityEngine_UnityEngine_TextEditor_CharacterType3304010211.h"
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp3429487928.h"

// System.Void UnityEngine.TextEditor::.ctor()
extern "C"  void TextEditor__ctor_m1029296947 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.TextEditor::get_text()
extern "C"  String_t* TextEditor_get_text_m2661970474 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::set_text(System.String)
extern "C"  void TextEditor_set_text_m2873269991 (TextEditor_t657407335 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.TextEditor::get_position()
extern "C"  Rect_t1525428817  TextEditor_get_position_m2783529335 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::set_position(UnityEngine.Rect)
extern "C"  void TextEditor_set_position_m1757326908 (TextEditor_t657407335 * __this, Rect_t1525428817  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::get_cursorIndex()
extern "C"  int32_t TextEditor_get_cursorIndex_m3258858212 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::set_cursorIndex(System.Int32)
extern "C"  void TextEditor_set_cursorIndex_m3839283393 (TextEditor_t657407335 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::get_selectIndex()
extern "C"  int32_t TextEditor_get_selectIndex_m847319678 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::set_selectIndex(System.Int32)
extern "C"  void TextEditor_set_selectIndex_m2271285595 (TextEditor_t657407335 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::ClearCursorPos()
extern "C"  void TextEditor_ClearCursorPos_m3987638978 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::OnFocus()
extern "C"  void TextEditor_OnFocus_m1604527178 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::OnLostFocus()
extern "C"  void TextEditor_OnLostFocus_m1599980550 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::GrabGraphicalCursorPos()
extern "C"  void TextEditor_GrabGraphicalCursorPos_m192984232 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::HandleKeyEvent(UnityEngine.Event)
extern "C"  bool TextEditor_HandleKeyEvent_m1630561141 (TextEditor_t657407335 * __this, Event_t1590224583 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::DeleteLineBack()
extern "C"  bool TextEditor_DeleteLineBack_m4050675933 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::DeleteWordBack()
extern "C"  bool TextEditor_DeleteWordBack_m1423005555 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::DeleteWordForward()
extern "C"  bool TextEditor_DeleteWordForward_m2247051099 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::Delete()
extern "C"  bool TextEditor_Delete_m2591383938 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::Backspace()
extern "C"  bool TextEditor_Backspace_m2697740394 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectAll()
extern "C"  void TextEditor_SelectAll_m2943368726 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectNone()
extern "C"  void TextEditor_SelectNone_m1425185029 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::get_hasSelection()
extern "C"  bool TextEditor_get_hasSelection_m1781822098 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::DeleteSelection()
extern "C"  bool TextEditor_DeleteSelection_m1201672204 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::ReplaceSelection(System.String)
extern "C"  void TextEditor_ReplaceSelection_m1188267705 (TextEditor_t657407335 * __this, String_t* ___replace0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::Insert(System.Char)
extern "C"  void TextEditor_Insert_m1131670643 (TextEditor_t657407335 * __this, uint16_t ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveRight()
extern "C"  void TextEditor_MoveRight_m4087700060 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveLeft()
extern "C"  void TextEditor_MoveLeft_m2173129001 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveUp()
extern "C"  void TextEditor_MoveUp_m2143317757 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveDown()
extern "C"  void TextEditor_MoveDown_m1953831684 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveLineStart()
extern "C"  void TextEditor_MoveLineStart_m2661644558 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveLineEnd()
extern "C"  void TextEditor_MoveLineEnd_m2429882887 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveGraphicalLineStart()
extern "C"  void TextEditor_MoveGraphicalLineStart_m1209754461 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveGraphicalLineEnd()
extern "C"  void TextEditor_MoveGraphicalLineEnd_m537871382 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveTextStart()
extern "C"  void TextEditor_MoveTextStart_m1434665397 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveTextEnd()
extern "C"  void TextEditor_MoveTextEnd_m3188381806 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::IndexOfEndOfLine(System.Int32)
extern "C"  int32_t TextEditor_IndexOfEndOfLine_m1755139103 (TextEditor_t657407335 * __this, int32_t ___startIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveParagraphForward()
extern "C"  void TextEditor_MoveParagraphForward_m2816529689 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveParagraphBackward()
extern "C"  void TextEditor_MoveParagraphBackward_m4210809841 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveCursorToPosition(UnityEngine.Vector2)
extern "C"  void TextEditor_MoveCursorToPosition_m541380254 (TextEditor_t657407335 * __this, Vector2_t3525329788  ___cursorPosition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectToPosition(UnityEngine.Vector2)
extern "C"  void TextEditor_SelectToPosition_m406326665 (TextEditor_t657407335 * __this, Vector2_t3525329788  ___cursorPosition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectLeft()
extern "C"  void TextEditor_SelectLeft_m1358467604 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectRight()
extern "C"  void TextEditor_SelectRight_m308033233 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectUp()
extern "C"  void TextEditor_SelectUp_m2312302248 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectDown()
extern "C"  void TextEditor_SelectDown_m1139170287 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectTextEnd()
extern "C"  void TextEditor_SelectTextEnd_m175926179 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectTextStart()
extern "C"  void TextEditor_SelectTextStart_m1272765354 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MouseDragSelectsWholeWords(System.Boolean)
extern "C"  void TextEditor_MouseDragSelectsWholeWords_m3387444856 (TextEditor_t657407335 * __this, bool ___on0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::DblClickSnap(UnityEngine.TextEditor/DblClickSnapping)
extern "C"  void TextEditor_DblClickSnap_m1086666601 (TextEditor_t657407335 * __this, uint8_t ___snapping0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::GetGraphicalLineStart(System.Int32)
extern "C"  int32_t TextEditor_GetGraphicalLineStart_m2255929555 (TextEditor_t657407335 * __this, int32_t ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::GetGraphicalLineEnd(System.Int32)
extern "C"  int32_t TextEditor_GetGraphicalLineEnd_m3638753612 (TextEditor_t657407335 * __this, int32_t ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::FindNextSeperator(System.Int32)
extern "C"  int32_t TextEditor_FindNextSeperator_m2382945623 (TextEditor_t657407335 * __this, int32_t ___startPos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::isLetterLikeChar(System.Char)
extern "C"  bool TextEditor_isLetterLikeChar_m985832713 (Il2CppObject * __this /* static, unused */, uint16_t ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::FindPrevSeperator(System.Int32)
extern "C"  int32_t TextEditor_FindPrevSeperator_m1092722199 (TextEditor_t657407335 * __this, int32_t ___startPos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveWordRight()
extern "C"  void TextEditor_MoveWordRight_m1611060338 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveToStartOfNextWord()
extern "C"  void TextEditor_MoveToStartOfNextWord_m1275371419 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveToEndOfPreviousWord()
extern "C"  void TextEditor_MoveToEndOfPreviousWord_m4107655576 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectToStartOfNextWord()
extern "C"  void TextEditor_SelectToStartOfNextWord_m2771612816 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectToEndOfPreviousWord()
extern "C"  void TextEditor_SelectToEndOfPreviousWord_m3181593933 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextEditor/CharacterType UnityEngine.TextEditor::ClassifyChar(System.Char)
extern "C"  int32_t TextEditor_ClassifyChar_m3839786120 (TextEditor_t657407335 * __this, uint16_t ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::FindStartOfNextWord(System.Int32)
extern "C"  int32_t TextEditor_FindStartOfNextWord_m4132487039 (TextEditor_t657407335 * __this, int32_t ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::FindEndOfPreviousWord(System.Int32)
extern "C"  int32_t TextEditor_FindEndOfPreviousWord_m2038394172 (TextEditor_t657407335 * __this, int32_t ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MoveWordLeft()
extern "C"  void TextEditor_MoveWordLeft_m4171447379 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectWordRight()
extern "C"  void TextEditor_SelectWordRight_m1449160295 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectWordLeft()
extern "C"  void TextEditor_SelectWordLeft_m979636158 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::ExpandSelectGraphicalLineStart()
extern "C"  void TextEditor_ExpandSelectGraphicalLineStart_m4278286146 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::ExpandSelectGraphicalLineEnd()
extern "C"  void TextEditor_ExpandSelectGraphicalLineEnd_m885198139 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectGraphicalLineStart()
extern "C"  void TextEditor_SelectGraphicalLineStart_m348597512 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectGraphicalLineEnd()
extern "C"  void TextEditor_SelectGraphicalLineEnd_m31947905 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectParagraphForward()
extern "C"  void TextEditor_SelectParagraphForward_m2310606212 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectParagraphBackward()
extern "C"  void TextEditor_SelectParagraphBackward_m1412083942 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectCurrentWord()
extern "C"  void TextEditor_SelectCurrentWord_m3270822936 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextEditor::FindEndOfClassification(System.Int32,System.Int32)
extern "C"  int32_t TextEditor_FindEndOfClassification_m3906171638 (TextEditor_t657407335 * __this, int32_t ___p0, int32_t ___dir1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SelectCurrentParagraph()
extern "C"  void TextEditor_SelectCurrentParagraph_m469508226 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::UpdateScrollOffsetIfNeeded()
extern "C"  void TextEditor_UpdateScrollOffsetIfNeeded_m3936207980 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::UpdateScrollOffset()
extern "C"  void TextEditor_UpdateScrollOffset_m3069173402 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::DrawCursor(System.String)
extern "C"  void TextEditor_DrawCursor_m4225527287 (TextEditor_t657407335 * __this, String_t* ___newText0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::PerformOperation(UnityEngine.TextEditor/TextEditOp)
extern "C"  bool TextEditor_PerformOperation_m1276141663 (TextEditor_t657407335 * __this, int32_t ___operation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::SaveBackup()
extern "C"  void TextEditor_SaveBackup_m1589758352 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::Cut()
extern "C"  bool TextEditor_Cut_m3622060269 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::Copy()
extern "C"  void TextEditor_Copy_m645385702 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.TextEditor::ReplaceNewlinesWithSpaces(System.String)
extern "C"  String_t* TextEditor_ReplaceNewlinesWithSpaces_m4176827598 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextEditor::Paste()
extern "C"  bool TextEditor_Paste_m4252838526 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::MapKey(System.String,UnityEngine.TextEditor/TextEditOp)
extern "C"  void TextEditor_MapKey_m368710468 (Il2CppObject * __this /* static, unused */, String_t* ___key0, int32_t ___action1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::InitKeyActions()
extern "C"  void TextEditor_InitKeyActions_m2904712959 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::DetectFocusChange()
extern "C"  void TextEditor_DetectFocusChange_m993735446 (TextEditor_t657407335 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextEditor::ClampTextIndex(System.Int32&)
extern "C"  void TextEditor_ClampTextIndex_m707900960 (TextEditor_t657407335 * __this, int32_t* ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
