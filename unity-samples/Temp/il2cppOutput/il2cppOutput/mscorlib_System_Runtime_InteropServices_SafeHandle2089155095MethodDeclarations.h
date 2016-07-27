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

// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_t2089155095;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr676692020.h"

// System.Void System.Runtime.InteropServices.SafeHandle::.ctor(System.IntPtr,System.Boolean)
extern "C"  void SafeHandle__ctor_m1568307360 (SafeHandle_t2089155095 * __this, IntPtr_t ___invalidHandleValue0, bool ___ownsHandle1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::Close()
extern "C"  void SafeHandle_Close_m2695195021 (SafeHandle_t2089155095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousAddRef(System.Boolean&)
extern "C"  void SafeHandle_DangerousAddRef_m2051469412 (SafeHandle_t2089155095 * __this, bool* ___success0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.SafeHandle::DangerousGetHandle()
extern "C"  IntPtr_t SafeHandle_DangerousGetHandle_m4113584652 (SafeHandle_t2089155095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousRelease()
extern "C"  void SafeHandle_DangerousRelease_m2551287562 (SafeHandle_t2089155095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose()
extern "C"  void SafeHandle_Dispose_m951873268 (SafeHandle_t2089155095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose(System.Boolean)
extern "C"  void SafeHandle_Dispose_m787212651 (SafeHandle_t2089155095 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::SetHandle(System.IntPtr)
extern "C"  void SafeHandle_SetHandle_m1470505077 (SafeHandle_t2089155095 * __this, IntPtr_t ___handle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::Finalize()
extern "C"  void SafeHandle_Finalize_m2699031691 (SafeHandle_t2089155095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
