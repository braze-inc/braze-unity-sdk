#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t1473;
// System.IO.Stream
struct Stream_t25;
// System.Byte[]
struct ByteU5BU5D_t112;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t82;
// System.Threading.WaitHandle
struct WaitHandle_t1474;
// System.AsyncCallback
struct AsyncCallback_t487;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
 void ReceiveRecordAsyncResult__ctor_m6148 (ReceiveRecordAsyncResult_t1473 * __this, AsyncCallback_t487 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t112* ___initialBuffer, Stream_t25 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
 Stream_t25 * ReceiveRecordAsyncResult_get_Record_m6149 (ReceiveRecordAsyncResult_t1473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
 ByteU5BU5D_t112* ReceiveRecordAsyncResult_get_ResultingBuffer_m6150 (ReceiveRecordAsyncResult_t1473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
 ByteU5BU5D_t112* ReceiveRecordAsyncResult_get_InitialBuffer_m6151 (ReceiveRecordAsyncResult_t1473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
 Object_t * ReceiveRecordAsyncResult_get_AsyncState_m6152 (ReceiveRecordAsyncResult_t1473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
 Exception_t82 * ReceiveRecordAsyncResult_get_AsyncException_m6153 (ReceiveRecordAsyncResult_t1473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
 bool ReceiveRecordAsyncResult_get_CompletedWithError_m6154 (ReceiveRecordAsyncResult_t1473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
 WaitHandle_t1474 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m6155 (ReceiveRecordAsyncResult_t1473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
 bool ReceiveRecordAsyncResult_get_IsCompleted_m6156 (ReceiveRecordAsyncResult_t1473 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
 void ReceiveRecordAsyncResult_SetComplete_m6157 (ReceiveRecordAsyncResult_t1473 * __this, Exception_t82 * ___ex, ByteU5BU5D_t112* ___resultingBuffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
 void ReceiveRecordAsyncResult_SetComplete_m6158 (ReceiveRecordAsyncResult_t1473 * __this, Exception_t82 * ___ex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
 void ReceiveRecordAsyncResult_SetComplete_m6159 (ReceiveRecordAsyncResult_t1473 * __this, ByteU5BU5D_t112* ___resultingBuffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
