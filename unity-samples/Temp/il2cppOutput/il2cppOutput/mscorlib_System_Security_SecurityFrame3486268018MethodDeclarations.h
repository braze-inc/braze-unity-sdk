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
struct RuntimeSecurityFrame_t3890879930;
// System.Array
struct Il2CppArray;
// System.Reflection.Assembly
struct Assembly_t1882292308;
// System.AppDomain
struct AppDomain_t1551247802;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t2121638921;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_SecurityFrame3486268018.h"
#include "mscorlib_System_Security_RuntimeSecurityFrame3890879930.h"

// System.Void System.Security.SecurityFrame::.ctor(System.Security.RuntimeSecurityFrame)
extern "C"  void SecurityFrame__ctor_m1972945906 (SecurityFrame_t3486268018 * __this, RuntimeSecurityFrame_t3890879930 * ___frame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Security.SecurityFrame::_GetSecurityStack(System.Int32)
extern "C"  Il2CppArray * SecurityFrame__GetSecurityStack_m4181326791 (Il2CppObject * __this /* static, unused */, int32_t ___skip0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityFrame::InitFromRuntimeFrame(System.Security.RuntimeSecurityFrame)
extern "C"  void SecurityFrame_InitFromRuntimeFrame_m2623746169 (SecurityFrame_t3486268018 * __this, RuntimeSecurityFrame_t3890879930 * ___frame0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Security.SecurityFrame::get_Assembly()
extern "C"  Assembly_t1882292308 * SecurityFrame_get_Assembly_m2156341276 (SecurityFrame_t3486268018 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.Security.SecurityFrame::get_Domain()
extern "C"  AppDomain_t1551247802 * SecurityFrame_get_Domain_m2707144406 (SecurityFrame_t3486268018 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityFrame::ToString()
extern "C"  String_t* SecurityFrame_ToString_m3072626007 (SecurityFrame_t3486268018 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Security.SecurityFrame::GetStack(System.Int32)
extern "C"  ArrayList_t2121638921 * SecurityFrame_GetStack_m2712475205 (Il2CppObject * __this /* static, unused */, int32_t ___skipFrames0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
