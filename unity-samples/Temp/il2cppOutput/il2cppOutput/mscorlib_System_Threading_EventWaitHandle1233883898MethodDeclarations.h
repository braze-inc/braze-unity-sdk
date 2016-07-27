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

// System.Threading.EventWaitHandle
struct EventWaitHandle_t1233883898;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Threading_EventResetMode1147836187.h"

// System.Void System.Threading.EventWaitHandle::.ctor(System.Boolean,System.Threading.EventResetMode)
extern "C"  void EventWaitHandle__ctor_m1444479942 (EventWaitHandle_t1233883898 * __this, bool ___initialState0, int32_t ___mode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.EventWaitHandle::IsManualReset(System.Threading.EventResetMode)
extern "C"  bool EventWaitHandle_IsManualReset_m4097690010 (EventWaitHandle_t1233883898 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.EventWaitHandle::Reset()
extern "C"  bool EventWaitHandle_Reset_m330657435 (EventWaitHandle_t1233883898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.EventWaitHandle::Set()
extern "C"  bool EventWaitHandle_Set_m224730030 (EventWaitHandle_t1233883898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
