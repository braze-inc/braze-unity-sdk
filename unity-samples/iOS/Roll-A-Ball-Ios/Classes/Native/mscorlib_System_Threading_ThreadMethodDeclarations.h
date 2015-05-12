#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Thread
struct Thread_t2047;
// System.Runtime.Remoting.Contexts.Context
struct Context_t2037;
// System.Globalization.CultureInfo
struct CultureInfo_t1065;
// System.Byte[]
struct ByteU5BU5D_t97;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Threading.Thread::.cctor()
 void Thread__cctor_m11201 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.Threading.Thread::get_CurrentContext()
 Context_t2037 * Thread_get_CurrentContext_m11202 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Thread System.Threading.Thread::CurrentThread_internal()
 Thread_t2047 * Thread_CurrentThread_internal_m11203 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
 Thread_t2047 * Thread_get_CurrentThread_m11204 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetDomainID()
 int32_t Thread_GetDomainID_m11205 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::GetCachedCurrentCulture()
 CultureInfo_t1065 * Thread_GetCachedCurrentCulture_m11206 (Thread_t2047 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Threading.Thread::GetSerializedCurrentCulture()
 ByteU5BU5D_t97* Thread_GetSerializedCurrentCulture_m11207 (Thread_t2047 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SetCachedCurrentCulture(System.Globalization.CultureInfo)
 void Thread_SetCachedCurrentCulture_m11208 (Thread_t2047 * __this, CultureInfo_t1065 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::GetCachedCurrentUICulture()
 CultureInfo_t1065 * Thread_GetCachedCurrentUICulture_m11209 (Thread_t2047 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Threading.Thread::GetSerializedCurrentUICulture()
 ByteU5BU5D_t97* Thread_GetSerializedCurrentUICulture_m11210 (Thread_t2047 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SetCachedCurrentUICulture(System.Globalization.CultureInfo)
 void Thread_SetCachedCurrentUICulture_m11211 (Thread_t2047 * __this, CultureInfo_t1065 * ___culture, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::get_CurrentCulture()
 CultureInfo_t1065 * Thread_get_CurrentCulture_m11212 (Thread_t2047 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::get_CurrentUICulture()
 CultureInfo_t1065 * Thread_get_CurrentUICulture_m11213 (Thread_t2047 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Thread_free_internal(System.IntPtr)
 void Thread_Thread_free_internal_m11214 (Thread_t2047 * __this, IntPtr_t107 ___handle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Finalize()
 void Thread_Finalize_m11215 (Thread_t2047 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetNewManagedId()
 int32_t Thread_GetNewManagedId_m11216 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetNewManagedId_internal()
 int32_t Thread_GetNewManagedId_internal_m11217 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
 int32_t Thread_get_ManagedThreadId_m11218 (Thread_t2047 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetHashCode()
 int32_t Thread_GetHashCode_m11219 (Thread_t2047 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
