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

// System.Text.RegularExpressions.PatternCompiler/PatternLinkStack
struct PatternLinkStack_t1510705438;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::.ctor()
extern "C"  void PatternLinkStack__ctor_m451109823 (PatternLinkStack_t1510705438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::set_BaseAddress(System.Int32)
extern "C"  void PatternLinkStack_set_BaseAddress_m1841392820 (PatternLinkStack_t1510705438 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::get_OffsetAddress()
extern "C"  int32_t PatternLinkStack_get_OffsetAddress_m3032139717 (PatternLinkStack_t1510705438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::set_OffsetAddress(System.Int32)
extern "C"  void PatternLinkStack_set_OffsetAddress_m2022131826 (PatternLinkStack_t1510705438 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::GetOffset(System.Int32)
extern "C"  int32_t PatternLinkStack_GetOffset_m222181543 (PatternLinkStack_t1510705438 * __this, int32_t ___target_addr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::GetCurrent()
extern "C"  Il2CppObject * PatternLinkStack_GetCurrent_m3766647891 (PatternLinkStack_t1510705438 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::SetCurrent(System.Object)
extern "C"  void PatternLinkStack_SetCurrent_m3645587320 (PatternLinkStack_t1510705438 * __this, Il2CppObject * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
