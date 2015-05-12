#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Diagnostics.StackTrace
struct StackTrace_t959;
// System.Exception
struct Exception_t71;
// System.Diagnostics.StackFrame[]
struct StackFrameU5BU5D_t1895;
// System.Diagnostics.StackFrame
struct StackFrame_t1066;
// System.String
struct String_t;

// System.Void System.Diagnostics.StackTrace::.ctor()
 void StackTrace__ctor_m9186 (StackTrace_t959 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Boolean)
 void StackTrace__ctor_m9187 (StackTrace_t959 * __this, bool ___fNeedFileInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Int32,System.Boolean)
 void StackTrace__ctor_m5079 (StackTrace_t959 * __this, int32_t ___skipFrames, bool ___fNeedFileInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Boolean)
 void StackTrace__ctor_m9188 (StackTrace_t959 * __this, Exception_t71 * ___e, bool ___fNeedFileInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Int32,System.Boolean)
 void StackTrace__ctor_m9189 (StackTrace_t959 * __this, Exception_t71 * ___e, int32_t ___skipFrames, bool ___fNeedFileInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Int32,System.Boolean,System.Boolean)
 void StackTrace__ctor_m9190 (StackTrace_t959 * __this, Exception_t71 * ___e, int32_t ___skipFrames, bool ___fNeedFileInfo, bool ___returnNativeFrames, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::init_frames(System.Int32,System.Boolean)
 void StackTrace_init_frames_m9191 (StackTrace_t959 * __this, int32_t ___skipFrames, bool ___fNeedFileInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.StackFrame[] System.Diagnostics.StackTrace::get_trace(System.Exception,System.Int32,System.Boolean)
 StackFrameU5BU5D_t1895* StackTrace_get_trace_m9192 (Object_t * __this/* static, unused */, Exception_t71 * ___e, int32_t ___skipFrames, bool ___fNeedFileInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.StackTrace::get_FrameCount()
 int32_t StackTrace_get_FrameCount_m5092 (StackTrace_t959 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.StackFrame System.Diagnostics.StackTrace::GetFrame(System.Int32)
 StackFrame_t1066 * StackTrace_GetFrame_m5084 (StackTrace_t959 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackTrace::ToString()
 String_t* StackTrace_ToString_m9193 (StackTrace_t959 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
