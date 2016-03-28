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

// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t2796503648;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.UnhandledExceptionEventArgs::.ctor(System.Object,System.Boolean)
extern "C"  void UnhandledExceptionEventArgs__ctor_m764060079 (UnhandledExceptionEventArgs_t2796503648 * __this, Il2CppObject * ___exception, bool ___isTerminating, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UnhandledExceptionEventArgs::get_ExceptionObject()
extern "C"  Il2CppObject * UnhandledExceptionEventArgs_get_ExceptionObject_m3487900308 (UnhandledExceptionEventArgs_t2796503648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UnhandledExceptionEventArgs::get_IsTerminating()
extern "C"  bool UnhandledExceptionEventArgs_get_IsTerminating_m2437875213 (UnhandledExceptionEventArgs_t2796503648 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
