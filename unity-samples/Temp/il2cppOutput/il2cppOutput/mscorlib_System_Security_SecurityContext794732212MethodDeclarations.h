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

// System.Security.SecurityContext
struct SecurityContext_t794732212;
// System.Threading.CompressedStack
struct CompressedStack_t2946347082;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_SecurityContext794732212.h"

// System.Void System.Security.SecurityContext::.ctor()
extern "C"  void SecurityContext__ctor_m2890261396 (SecurityContext_t794732212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityContext::.ctor(System.Security.SecurityContext)
extern "C"  void SecurityContext__ctor_m1345715454 (SecurityContext_t794732212 * __this, SecurityContext_t794732212 * ___sc0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityContext System.Security.SecurityContext::Capture()
extern "C"  SecurityContext_t794732212 * SecurityContext_Capture_m3640798635 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityContext::get_FlowSuppressed()
extern "C"  bool SecurityContext_get_FlowSuppressed_m2046518873 (SecurityContext_t794732212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Security.SecurityContext::get_CompressedStack()
extern "C"  CompressedStack_t2946347082 * SecurityContext_get_CompressedStack_m649521097 (SecurityContext_t794732212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
