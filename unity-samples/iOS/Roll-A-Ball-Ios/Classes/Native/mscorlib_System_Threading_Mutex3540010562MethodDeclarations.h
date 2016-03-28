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

// System.Threading.Mutex
struct Mutex_t3540010562;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Threading.Mutex::.ctor(System.Boolean)
extern "C"  void Mutex__ctor_m2061869791 (Mutex_t3540010562 * __this, bool ___initiallyOwned, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Threading.Mutex::CreateMutex_internal(System.Boolean,System.String,System.Boolean&)
extern "C"  IntPtr_t Mutex_CreateMutex_internal_m62389004 (Il2CppObject * __this /* static, unused */, bool ___initiallyOwned, String_t* ___name, bool* ___created, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Mutex::ReleaseMutex_internal(System.IntPtr)
extern "C"  bool Mutex_ReleaseMutex_internal_m3646831020 (Il2CppObject * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Mutex::ReleaseMutex()
extern "C"  void Mutex_ReleaseMutex_m564775316 (Mutex_t3540010562 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
