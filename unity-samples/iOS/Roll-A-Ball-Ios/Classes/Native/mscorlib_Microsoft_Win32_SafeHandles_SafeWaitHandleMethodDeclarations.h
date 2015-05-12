#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t1775;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Microsoft.Win32.SafeHandles.SafeWaitHandle::.ctor(System.IntPtr,System.Boolean)
 void SafeWaitHandle__ctor_m8486 (SafeWaitHandle_t1775 * __this, IntPtr_t107 ___existingHandle, bool ___ownsHandle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Win32.SafeHandles.SafeWaitHandle::ReleaseHandle()
 bool SafeWaitHandle_ReleaseHandle_m8487 (SafeWaitHandle_t1775 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
