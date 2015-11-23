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

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t1328;
// System.AsyncCallback
struct AsyncCallback_t552;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t98;
// System.IO.Stream
struct Stream_t68;
// System.Exception
struct Exception_t74;
// System.Threading.WaitHandle
struct WaitHandle_t1374;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m6864 (ReceiveRecordAsyncResult_t1328 * __this, AsyncCallback_t552 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t98* ___initialBuffer, Stream_t68 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t68 * ReceiveRecordAsyncResult_get_Record_m6865 (ReceiveRecordAsyncResult_t1328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t98* ReceiveRecordAsyncResult_get_ResultingBuffer_m6866 (ReceiveRecordAsyncResult_t1328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t98* ReceiveRecordAsyncResult_get_InitialBuffer_m6867 (ReceiveRecordAsyncResult_t1328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m6868 (ReceiveRecordAsyncResult_t1328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t74 * ReceiveRecordAsyncResult_get_AsyncException_m6869 (ReceiveRecordAsyncResult_t1328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m6870 (ReceiveRecordAsyncResult_t1328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1374 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m6871 (ReceiveRecordAsyncResult_t1328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m6872 (ReceiveRecordAsyncResult_t1328 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m6873 (ReceiveRecordAsyncResult_t1328 * __this, Exception_t74 * ___ex, ByteU5BU5D_t98* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m6874 (ReceiveRecordAsyncResult_t1328 * __this, Exception_t74 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m6875 (ReceiveRecordAsyncResult_t1328 * __this, ByteU5BU5D_t98* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
