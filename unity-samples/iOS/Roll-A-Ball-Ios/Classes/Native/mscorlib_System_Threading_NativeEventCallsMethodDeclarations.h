#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.NativeEventCalls
struct NativeEventCalls_t2228;
// System.String
struct String_t;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.IntPtr System.Threading.NativeEventCalls::CreateEvent_internal(System.Boolean,System.Boolean,System.String,System.Boolean&)
 IntPtr_t120 NativeEventCalls_CreateEvent_internal_m11290 (Object_t * __this/* static, unused */, bool ___manual, bool ___initial, String_t* ___name, bool* ___created, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.NativeEventCalls::SetEvent_internal(System.IntPtr)
 bool NativeEventCalls_SetEvent_internal_m11291 (Object_t * __this/* static, unused */, IntPtr_t120 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.NativeEventCalls::ResetEvent_internal(System.IntPtr)
 bool NativeEventCalls_ResetEvent_internal_m11292 (Object_t * __this/* static, unused */, IntPtr_t120 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.NativeEventCalls::CloseEvent_internal(System.IntPtr)
 void NativeEventCalls_CloseEvent_internal_m11293 (Object_t * __this/* static, unused */, IntPtr_t120 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
