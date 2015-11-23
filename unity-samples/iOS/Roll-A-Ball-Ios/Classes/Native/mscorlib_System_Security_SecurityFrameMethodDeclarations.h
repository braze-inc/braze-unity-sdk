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

// System.Security.RuntimeSecurityFrame
struct RuntimeSecurityFrame_t1913;
// System.Array
struct Array_t;
// System.Reflection.Assembly
struct Assembly_t215;
// System.AppDomain
struct AppDomain_t293;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t1029;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_SecurityFrame.h"

// System.Void System.Security.SecurityFrame::.ctor(System.Security.RuntimeSecurityFrame)
extern "C" void SecurityFrame__ctor_m11199 (SecurityFrame_t1914 * __this, RuntimeSecurityFrame_t1913 * ___frame, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Security.SecurityFrame::_GetSecurityStack(System.Int32)
extern "C" Array_t * SecurityFrame__GetSecurityStack_m11200 (Object_t * __this /* static, unused */, int32_t ___skip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityFrame::InitFromRuntimeFrame(System.Security.RuntimeSecurityFrame)
extern "C" void SecurityFrame_InitFromRuntimeFrame_m11201 (SecurityFrame_t1914 * __this, RuntimeSecurityFrame_t1913 * ___frame, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Security.SecurityFrame::get_Assembly()
extern "C" Assembly_t215 * SecurityFrame_get_Assembly_m11202 (SecurityFrame_t1914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.Security.SecurityFrame::get_Domain()
extern "C" AppDomain_t293 * SecurityFrame_get_Domain_m11203 (SecurityFrame_t1914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityFrame::ToString()
extern "C" String_t* SecurityFrame_ToString_m11204 (SecurityFrame_t1914 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.SecurityFrame::GetStack(System.Int32)
extern "C" ArrayList_t1029 * SecurityFrame_GetStack_m11205 (Object_t * __this /* static, unused */, int32_t ___skipFrames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
