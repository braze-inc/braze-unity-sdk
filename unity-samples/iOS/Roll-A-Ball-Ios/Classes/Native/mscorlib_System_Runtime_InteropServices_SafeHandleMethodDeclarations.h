#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_t1774;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Runtime.InteropServices.SafeHandle::.ctor(System.IntPtr,System.Boolean)
 void SafeHandle__ctor_m10168 (SafeHandle_t1774 * __this, IntPtr_t107 ___invalidHandleValue, bool ___ownsHandle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::Close()
 void SafeHandle_Close_m10169 (SafeHandle_t1774 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousAddRef(System.Boolean&)
 void SafeHandle_DangerousAddRef_m10170 (SafeHandle_t1774 * __this, bool* ___success, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.SafeHandle::DangerousGetHandle()
 IntPtr_t107 SafeHandle_DangerousGetHandle_m10171 (SafeHandle_t1774 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::DangerousRelease()
 void SafeHandle_DangerousRelease_m10172 (SafeHandle_t1774 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose()
 void SafeHandle_Dispose_m10173 (SafeHandle_t1774 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.SafeHandle::Dispose(System.Boolean)
 void SafeHandle_Dispose_m10174 (SafeHandle_t1774 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.InteropServices.SafeHandle::ReleaseHandle()
// System.Void System.Runtime.InteropServices.SafeHandle::SetHandle(System.IntPtr)
 void SafeHandle_SetHandle_m10175 (SafeHandle_t1774 * __this, IntPtr_t107 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.InteropServices.SafeHandle::get_IsInvalid()
// System.Void System.Runtime.InteropServices.SafeHandle::Finalize()
 void SafeHandle_Finalize_m10176 (SafeHandle_t1774 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
