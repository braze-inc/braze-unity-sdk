#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult
struct SendRecordAsyncResult_t1464;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t1445;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t71;
// System.Threading.WaitHandle
struct WaitHandle_t1463;
// System.AsyncCallback
struct AsyncCallback_t473;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,Mono.Security.Protocol.Tls.Handshake.HandshakeMessage)
 void SendRecordAsyncResult__ctor_m6066 (SendRecordAsyncResult_t1464 * __this, AsyncCallback_t473 * ___userCallback, Object_t * ___userState, HandshakeMessage_t1445 * ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_Message()
 HandshakeMessage_t1445 * SendRecordAsyncResult_get_Message_m6067 (SendRecordAsyncResult_t1464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_AsyncState()
 Object_t * SendRecordAsyncResult_get_AsyncState_m6068 (SendRecordAsyncResult_t1464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_AsyncException()
 Exception_t71 * SendRecordAsyncResult_get_AsyncException_m6069 (SendRecordAsyncResult_t1464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_CompletedWithError()
 bool SendRecordAsyncResult_get_CompletedWithError_m6070 (SendRecordAsyncResult_t1464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_AsyncWaitHandle()
 WaitHandle_t1463 * SendRecordAsyncResult_get_AsyncWaitHandle_m6071 (SendRecordAsyncResult_t1464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_IsCompleted()
 bool SendRecordAsyncResult_get_IsCompleted_m6072 (SendRecordAsyncResult_t1464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::SetComplete(System.Exception)
 void SendRecordAsyncResult_SetComplete_m6073 (SendRecordAsyncResult_t1464 * __this, Exception_t71 * ___ex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::SetComplete()
 void SendRecordAsyncResult_SetComplete_m6074 (SendRecordAsyncResult_t1464 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
