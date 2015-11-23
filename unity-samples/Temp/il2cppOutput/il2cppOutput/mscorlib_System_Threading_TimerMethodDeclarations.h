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

// System.Threading.Timer
struct Timer_t1744;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Threading.Timer::.cctor()
extern "C" void Timer__cctor_m11540 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Timer::Change(System.TimeSpan,System.TimeSpan)
extern "C" bool Timer_Change_m11541 (Timer_t1744 * __this, TimeSpan_t1097  ___dueTime, TimeSpan_t1097  ___period, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer::Dispose()
extern "C" void Timer_Dispose_m11542 (Timer_t1744 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Timer::Change(System.Int64,System.Int64,System.Boolean)
extern "C" bool Timer_Change_m11543 (Timer_t1744 * __this, int64_t ___dueTime, int64_t ___period, bool ___first, const MethodInfo* method) IL2CPP_METHOD_ATTR;
