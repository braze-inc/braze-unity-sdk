#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Diagnostics.StackTrace
struct StackTrace_t970;
// System.Exception
struct Exception_t82;
// System.Diagnostics.StackFrame[]
struct StackFrameU5BU5D_t1907;
// System.Diagnostics.StackFrame
struct StackFrame_t1077;
// System.String
struct String_t;

// System.Void System.Diagnostics.StackTrace::.ctor()
 void StackTrace__ctor_m9281 (StackTrace_t970 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Boolean)
 void StackTrace__ctor_m9282 (StackTrace_t970 * __this, bool ___fNeedFileInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Int32,System.Boolean)
 void StackTrace__ctor_m5173 (StackTrace_t970 * __this, int32_t ___skipFrames, bool ___fNeedFileInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Boolean)
 void StackTrace__ctor_m9283 (StackTrace_t970 * __this, Exception_t82 * ___e, bool ___fNeedFileInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Int32,System.Boolean)
 void StackTrace__ctor_m9284 (StackTrace_t970 * __this, Exception_t82 * ___e, int32_t ___skipFrames, bool ___fNeedFileInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Int32,System.Boolean,System.Boolean)
 void StackTrace__ctor_m9285 (StackTrace_t970 * __this, Exception_t82 * ___e, int32_t ___skipFrames, bool ___fNeedFileInfo, bool ___returnNativeFrames, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::init_frames(System.Int32,System.Boolean)
 void StackTrace_init_frames_m9286 (StackTrace_t970 * __this, int32_t ___skipFrames, bool ___fNeedFileInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.StackFrame[] System.Diagnostics.StackTrace::get_trace(System.Exception,System.Int32,System.Boolean)
 StackFrameU5BU5D_t1907* StackTrace_get_trace_m9287 (Object_t * __this/* static, unused */, Exception_t82 * ___e, int32_t ___skipFrames, bool ___fNeedFileInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.StackTrace::get_FrameCount()
 int32_t StackTrace_get_FrameCount_m5186 (StackTrace_t970 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.StackFrame System.Diagnostics.StackTrace::GetFrame(System.Int32)
 StackFrame_t1077 * StackTrace_GetFrame_m5178 (StackTrace_t970 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackTrace::ToString()
 String_t* StackTrace_ToString_m9288 (StackTrace_t970 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
