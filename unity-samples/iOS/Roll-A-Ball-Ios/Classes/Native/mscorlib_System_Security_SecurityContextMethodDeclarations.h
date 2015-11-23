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
struct SecurityContext_t1907;
// System.Threading.CompressedStack
struct CompressedStack_t1908;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.SecurityContext::.ctor()
extern "C" void SecurityContext__ctor_m11162 (SecurityContext_t1907 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityContext::.ctor(System.Security.SecurityContext)
extern "C" void SecurityContext__ctor_m11163 (SecurityContext_t1907 * __this, SecurityContext_t1907 * ___sc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityContext System.Security.SecurityContext::Capture()
extern "C" SecurityContext_t1907 * SecurityContext_Capture_m11164 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityContext::get_FlowSuppressed()
extern "C" bool SecurityContext_get_FlowSuppressed_m11165 (SecurityContext_t1907 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Security.SecurityContext::get_CompressedStack()
extern "C" CompressedStack_t1908 * SecurityContext_get_CompressedStack_m11166 (SecurityContext_t1907 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
