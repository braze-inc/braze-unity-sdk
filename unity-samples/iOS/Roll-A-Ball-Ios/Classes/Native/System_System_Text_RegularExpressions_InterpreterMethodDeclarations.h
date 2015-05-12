#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Interpreter
struct Interpreter_t1666;
// System.UInt16[]
struct UInt16U5BU5D_t1589;
// System.Text.RegularExpressions.Match
struct Match_t1548;
// System.Text.RegularExpressions.Regex
struct Regex_t309;
// System.String
struct String_t;
// System.Text.RegularExpressions.Group
struct Group_t1550;
// System.Text.RegularExpressions.Interpreter/Mode
#include "System_System_Text_RegularExpressions_Interpreter_Mode.h"
// System.Text.RegularExpressions.Position
#include "System_System_Text_RegularExpressions_Position.h"

// System.Void System.Text.RegularExpressions.Interpreter::.ctor(System.UInt16[])
 void Interpreter__ctor_m7235 (Interpreter_t1666 * __this, UInt16U5BU5D_t1589* ___program, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter::ReadProgramCount(System.Int32)
 int32_t Interpreter_ReadProgramCount_m7236 (Interpreter_t1666 * __this, int32_t ___ptr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Interpreter::Scan(System.Text.RegularExpressions.Regex,System.String,System.Int32,System.Int32)
 Match_t1548 * Interpreter_Scan_m7237 (Interpreter_t1666 * __this, Regex_t309 * ___regex, String_t* ___text, int32_t ___start, int32_t ___end, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter::Reset()
 void Interpreter_Reset_m7238 (Interpreter_t1666 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter::Eval(System.Text.RegularExpressions.Interpreter/Mode,System.Int32&,System.Int32)
 bool Interpreter_Eval_m7239 (Interpreter_t1666 * __this, int32_t ___mode, int32_t* ___ref_ptr, int32_t ___pc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter::EvalChar(System.Text.RegularExpressions.Interpreter/Mode,System.Int32&,System.Int32&,System.Boolean)
 bool Interpreter_EvalChar_m7240 (Interpreter_t1666 * __this, int32_t ___mode, int32_t* ___ptr, int32_t* ___pc, bool ___multi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter::TryMatch(System.Int32&,System.Int32)
 bool Interpreter_TryMatch_m7241 (Interpreter_t1666 * __this, int32_t* ___ref_ptr, int32_t ___pc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter::IsPosition(System.Text.RegularExpressions.Position,System.Int32)
 bool Interpreter_IsPosition_m7242 (Interpreter_t1666 * __this, uint16_t ___pos, int32_t ___ptr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter::IsWordChar(System.Char)
 bool Interpreter_IsWordChar_m7243 (Interpreter_t1666 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Interpreter::GetString(System.Int32)
 String_t* Interpreter_GetString_m7244 (Interpreter_t1666 * __this, int32_t ___pc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter::Open(System.Int32,System.Int32)
 void Interpreter_Open_m7245 (Interpreter_t1666 * __this, int32_t ___gid, int32_t ___ptr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter::Close(System.Int32,System.Int32)
 void Interpreter_Close_m7246 (Interpreter_t1666 * __this, int32_t ___gid, int32_t ___ptr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter::Balance(System.Int32,System.Int32,System.Boolean,System.Int32)
 bool Interpreter_Balance_m7247 (Interpreter_t1666 * __this, int32_t ___gid, int32_t ___balance_gid, bool ___capture, int32_t ___ptr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter::Checkpoint()
 int32_t Interpreter_Checkpoint_m7248 (Interpreter_t1666 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter::Backtrack(System.Int32)
 void Interpreter_Backtrack_m7249 (Interpreter_t1666 * __this, int32_t ___cp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter::ResetGroups()
 void Interpreter_ResetGroups_m7250 (Interpreter_t1666 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter::GetLastDefined(System.Int32)
 int32_t Interpreter_GetLastDefined_m7251 (Interpreter_t1666 * __this, int32_t ___gid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter::CreateMark(System.Int32)
 int32_t Interpreter_CreateMark_m7252 (Interpreter_t1666 * __this, int32_t ___previous, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter::GetGroupInfo(System.Int32,System.Int32&,System.Int32&)
 void Interpreter_GetGroupInfo_m7253 (Interpreter_t1666 * __this, int32_t ___gid, int32_t* ___first_mark_index, int32_t* ___n_caps, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter::PopulateGroup(System.Text.RegularExpressions.Group,System.Int32,System.Int32)
 void Interpreter_PopulateGroup_m7254 (Interpreter_t1666 * __this, Group_t1550 * ___g, int32_t ___first_mark_index, int32_t ___n_caps, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Interpreter::GenerateMatch(System.Text.RegularExpressions.Regex)
 Match_t1548 * Interpreter_GenerateMatch_m7255 (Interpreter_t1666 * __this, Regex_t309 * ___regex, MethodInfo* method) IL2CPP_METHOD_ATTR;
