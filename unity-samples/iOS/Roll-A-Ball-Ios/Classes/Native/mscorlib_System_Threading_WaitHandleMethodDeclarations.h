#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.WaitHandle
struct WaitHandle_t1474;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Threading.WaitHandle::.ctor()
 void WaitHandle__ctor_m11321 (WaitHandle_t1474 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::.cctor()
 void WaitHandle__cctor_m11322 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::System.IDisposable.Dispose()
 void WaitHandle_System_IDisposable_Dispose_m11323 (WaitHandle_t1474 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Threading.WaitHandle::get_Handle()
 IntPtr_t120 WaitHandle_get_Handle_m11324 (WaitHandle_t1474 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::set_Handle(System.IntPtr)
 void WaitHandle_set_Handle_m11325 (WaitHandle_t1474 * __this, IntPtr_t120 ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitOne_internal(System.IntPtr,System.Int32,System.Boolean)
 bool WaitHandle_WaitOne_internal_m11326 (WaitHandle_t1474 * __this, IntPtr_t120 ___handle, int32_t ___ms, bool ___exitContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::Dispose(System.Boolean)
 void WaitHandle_Dispose_m11327 (WaitHandle_t1474 * __this, bool ___explicitDisposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitOne()
 bool WaitHandle_WaitOne_m6695 (WaitHandle_t1474 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32,System.Boolean)
 bool WaitHandle_WaitOne_m6723 (WaitHandle_t1474 * __this, int32_t ___millisecondsTimeout, bool ___exitContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::CheckDisposed()
 void WaitHandle_CheckDisposed_m11328 (WaitHandle_t1474 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.WaitHandle::Finalize()
 void WaitHandle_Finalize_m11329 (WaitHandle_t1474 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
