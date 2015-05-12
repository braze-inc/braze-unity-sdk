#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t1462;
// System.IO.Stream
struct Stream_t27;
// System.Byte[]
struct ByteU5BU5D_t97;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t71;
// System.Threading.WaitHandle
struct WaitHandle_t1463;
// System.AsyncCallback
struct AsyncCallback_t473;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
 void ReceiveRecordAsyncResult__ctor_m6054 (ReceiveRecordAsyncResult_t1462 * __this, AsyncCallback_t473 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t97* ___initialBuffer, Stream_t27 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
 Stream_t27 * ReceiveRecordAsyncResult_get_Record_m6055 (ReceiveRecordAsyncResult_t1462 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
 ByteU5BU5D_t97* ReceiveRecordAsyncResult_get_ResultingBuffer_m6056 (ReceiveRecordAsyncResult_t1462 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
 ByteU5BU5D_t97* ReceiveRecordAsyncResult_get_InitialBuffer_m6057 (ReceiveRecordAsyncResult_t1462 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
 Object_t * ReceiveRecordAsyncResult_get_AsyncState_m6058 (ReceiveRecordAsyncResult_t1462 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
 Exception_t71 * ReceiveRecordAsyncResult_get_AsyncException_m6059 (ReceiveRecordAsyncResult_t1462 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
 bool ReceiveRecordAsyncResult_get_CompletedWithError_m6060 (ReceiveRecordAsyncResult_t1462 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
 WaitHandle_t1463 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m6061 (ReceiveRecordAsyncResult_t1462 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
 bool ReceiveRecordAsyncResult_get_IsCompleted_m6062 (ReceiveRecordAsyncResult_t1462 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
 void ReceiveRecordAsyncResult_SetComplete_m6063 (ReceiveRecordAsyncResult_t1462 * __this, Exception_t71 * ___ex, ByteU5BU5D_t97* ___resultingBuffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
 void ReceiveRecordAsyncResult_SetComplete_m6064 (ReceiveRecordAsyncResult_t1462 * __this, Exception_t71 * ___ex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
 void ReceiveRecordAsyncResult_SetComplete_m6065 (ReceiveRecordAsyncResult_t1462 * __this, ByteU5BU5D_t97* ___resultingBuffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
