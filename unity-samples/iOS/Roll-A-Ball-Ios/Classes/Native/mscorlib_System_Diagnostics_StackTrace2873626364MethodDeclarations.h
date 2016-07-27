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

// System.Diagnostics.StackTrace
struct StackTrace_t2873626364;
// System.Exception
struct Exception_t1967233988;
// System.Diagnostics.StackFrame[]
struct StackFrameU5BU5D_t151856077;
// System.Diagnostics.StackFrame
struct StackFrame_t2860697380;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Exception1967233988.h"

// System.Void System.Diagnostics.StackTrace::.ctor()
extern "C"  void StackTrace__ctor_m1636562966 (StackTrace_t2873626364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Int32,System.Boolean)
extern "C"  void StackTrace__ctor_m449371190 (StackTrace_t2873626364 * __this, int32_t ___skipFrames0, bool ___fNeedFileInfo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Boolean)
extern "C"  void StackTrace__ctor_m109564407 (StackTrace_t2873626364 * __this, Exception_t1967233988 * ___e0, bool ___fNeedFileInfo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Int32,System.Boolean)
extern "C"  void StackTrace__ctor_m2492097932 (StackTrace_t2873626364 * __this, Exception_t1967233988 * ___e0, int32_t ___skipFrames1, bool ___fNeedFileInfo2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::.ctor(System.Exception,System.Int32,System.Boolean,System.Boolean)
extern "C"  void StackTrace__ctor_m2042930289 (StackTrace_t2873626364 * __this, Exception_t1967233988 * ___e0, int32_t ___skipFrames1, bool ___fNeedFileInfo2, bool ___returnNativeFrames3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.StackTrace::init_frames(System.Int32,System.Boolean)
extern "C"  void StackTrace_init_frames_m198588387 (StackTrace_t2873626364 * __this, int32_t ___skipFrames0, bool ___fNeedFileInfo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.StackFrame[] System.Diagnostics.StackTrace::get_trace(System.Exception,System.Int32,System.Boolean)
extern "C"  StackFrameU5BU5D_t151856077* StackTrace_get_trace_m483954897 (Il2CppObject * __this /* static, unused */, Exception_t1967233988 * ___e0, int32_t ___skipFrames1, bool ___fNeedFileInfo2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.StackTrace::get_FrameCount()
extern "C"  int32_t StackTrace_get_FrameCount_m2721777661 (StackTrace_t2873626364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.StackFrame System.Diagnostics.StackTrace::GetFrame(System.Int32)
extern "C"  StackFrame_t2860697380 * StackTrace_GetFrame_m2975179401 (StackTrace_t2873626364 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.StackTrace::ToString()
extern "C"  String_t* StackTrace_ToString_m317965015 (StackTrace_t2873626364 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
