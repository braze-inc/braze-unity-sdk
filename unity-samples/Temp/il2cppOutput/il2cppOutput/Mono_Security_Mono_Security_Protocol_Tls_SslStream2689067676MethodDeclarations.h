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

// Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult
struct InternalAsyncResult_t2689067676;
// System.AsyncCallback
struct AsyncCallback_t1363551830;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Exception
struct Exception_t1967233988;
// System.Threading.WaitHandle
struct WaitHandle_t361062656;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_AsyncCallback1363551830.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Exception1967233988.h"

// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.Int32,System.Int32,System.Boolean,System.Boolean)
extern "C"  void InternalAsyncResult__ctor_m358982211 (InternalAsyncResult_t2689067676 * __this, AsyncCallback_t1363551830 * ___userCallback0, Il2CppObject * ___userState1, ByteU5BU5D_t58506160* ___buffer2, int32_t ___offset3, int32_t ___count4, bool ___fromWrite5, bool ___proceedAfterHandshake6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_ProceedAfterHandshake()
extern "C"  bool InternalAsyncResult_get_ProceedAfterHandshake_m2894433668 (InternalAsyncResult_t2689067676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_FromWrite()
extern "C"  bool InternalAsyncResult_get_FromWrite_m619101712 (InternalAsyncResult_t2689067676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_Buffer()
extern "C"  ByteU5BU5D_t58506160* InternalAsyncResult_get_Buffer_m2758631523 (InternalAsyncResult_t2689067676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_Offset()
extern "C"  int32_t InternalAsyncResult_get_Offset_m3785298228 (InternalAsyncResult_t2689067676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_Count()
extern "C"  int32_t InternalAsyncResult_get_Count_m2489795056 (InternalAsyncResult_t2689067676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_BytesRead()
extern "C"  int32_t InternalAsyncResult_get_BytesRead_m2065687810 (InternalAsyncResult_t2689067676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncState()
extern "C"  Il2CppObject * InternalAsyncResult_get_AsyncState_m478600163 (InternalAsyncResult_t2689067676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncException()
extern "C"  Exception_t1967233988 * InternalAsyncResult_get_AsyncException_m789203443 (InternalAsyncResult_t2689067676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_CompletedWithError()
extern "C"  bool InternalAsyncResult_get_CompletedWithError_m2268946270 (InternalAsyncResult_t2689067676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncWaitHandle()
extern "C"  WaitHandle_t361062656 * InternalAsyncResult_get_AsyncWaitHandle_m2858026241 (InternalAsyncResult_t2689067676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_IsCompleted()
extern "C"  bool InternalAsyncResult_get_IsCompleted_m517442172 (InternalAsyncResult_t2689067676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete(System.Exception,System.Int32)
extern "C"  void InternalAsyncResult_SetComplete_m849188890 (InternalAsyncResult_t2689067676 * __this, Exception_t1967233988 * ___ex0, int32_t ___bytesRead1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete(System.Exception)
extern "C"  void InternalAsyncResult_SetComplete_m1458533341 (InternalAsyncResult_t2689067676 * __this, Exception_t1967233988 * ___ex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete(System.Int32)
extern "C"  void InternalAsyncResult_SetComplete_m2488678142 (InternalAsyncResult_t2689067676 * __this, int32_t ___bytesRead0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete()
extern "C"  void InternalAsyncResult_SetComplete_m1352916269 (InternalAsyncResult_t2689067676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
