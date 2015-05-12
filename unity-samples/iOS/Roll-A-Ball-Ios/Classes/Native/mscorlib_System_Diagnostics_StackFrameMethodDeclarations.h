#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Diagnostics.StackFrame
struct StackFrame_t1077;
// System.Reflection.MethodBase
struct MethodBase_t320;
// System.String
struct String_t;

// System.Void System.Diagnostics.StackFrame::.ctor()
 void StackFrame__ctor_m9273 (StackFrame_t1077 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackFrame::.ctor(System.Int32,System.Boolean)
 void StackFrame__ctor_m9274 (StackFrame_t1077 * __this, int32_t ___skipFrames, bool ___fNeedFileInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.StackFrame::get_frame_info(System.Int32,System.Boolean,System.Reflection.MethodBase&,System.Int32&,System.Int32&,System.String&,System.Int32&,System.Int32&)
 bool StackFrame_get_frame_info_m9275 (Object_t * __this/* static, unused */, int32_t ___skip, bool ___needFileInfo, MethodBase_t320 ** ___method, int32_t* ___iloffset, int32_t* ___native_offset, String_t** ___file, int32_t* ___line, int32_t* ___column, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.StackFrame::GetFileLineNumber()
 int32_t StackFrame_GetFileLineNumber_m5185 (StackFrame_t1077 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackFrame::GetFileName()
 String_t* StackFrame_GetFileName_m5184 (StackFrame_t1077 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackFrame::GetSecureFileName()
 String_t* StackFrame_GetSecureFileName_m9276 (StackFrame_t1077 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.StackFrame::GetILOffset()
 int32_t StackFrame_GetILOffset_m9277 (StackFrame_t1077 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Diagnostics.StackFrame::GetMethod()
 MethodBase_t320 * StackFrame_GetMethod_m5179 (StackFrame_t1077 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.StackFrame::GetNativeOffset()
 int32_t StackFrame_GetNativeOffset_m9278 (StackFrame_t1077 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackFrame::GetInternalMethodName()
 String_t* StackFrame_GetInternalMethodName_m9279 (StackFrame_t1077 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackFrame::ToString()
 String_t* StackFrame_ToString_m9280 (StackFrame_t1077 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
