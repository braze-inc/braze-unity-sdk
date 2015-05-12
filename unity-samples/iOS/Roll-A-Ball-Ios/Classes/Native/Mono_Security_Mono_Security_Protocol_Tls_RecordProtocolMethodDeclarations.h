#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol
struct RecordProtocol_t1444;
// Mono.Security.Protocol.Tls.Context
struct Context_t1434;
// System.IO.Stream
struct Stream_t27;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t1446;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t1445;
// System.IAsyncResult
struct IAsyncResult_t472;
// System.AsyncCallback
struct AsyncCallback_t473;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t97;
// Mono.Security.Protocol.Tls.Alert
struct Alert_t1432;
// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t1435;
// System.String
struct String_t;
// Mono.Security.Protocol.Tls.Handshake.HandshakeType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"
// Mono.Security.Protocol.Tls.AlertLevel
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertLevel.h"
// Mono.Security.Protocol.Tls.AlertDescription
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertDescription.h"
// Mono.Security.Protocol.Tls.ContentType
#include "Mono_Security_Mono_Security_Protocol_Tls_ContentType.h"
// Mono.Security.Protocol.Tls.SecurityProtocolType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"

// System.Void Mono.Security.Protocol.Tls.RecordProtocol::.ctor(System.IO.Stream,Mono.Security.Protocol.Tls.Context)
 void RecordProtocol__ctor_m6075 (RecordProtocol_t1444 * __this, Stream_t27 * ___innerStream, Context_t1434 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::.cctor()
 void RecordProtocol__cctor_m6076 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.RecordProtocol::get_Context()
 Context_t1434 * RecordProtocol_get_Context_m6077 (RecordProtocol_t1444 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendRecord(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
 void RecordProtocol_SendRecord_m6078 (RecordProtocol_t1444 * __this, uint8_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::ProcessHandshakeMessage(Mono.Security.Protocol.Tls.TlsStream)
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::ProcessChangeCipherSpec()
 void RecordProtocol_ProcessChangeCipherSpec_m6079 (RecordProtocol_t1444 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.RecordProtocol::GetMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
 HandshakeMessage_t1445 * RecordProtocol_GetMessage_m6080 (RecordProtocol_t1444 * __this, uint8_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.RecordProtocol::BeginReceiveRecord(System.IO.Stream,System.AsyncCallback,System.Object)
 Object_t * RecordProtocol_BeginReceiveRecord_m6081 (RecordProtocol_t1444 * __this, Stream_t27 * ___record, AsyncCallback_t473 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::InternalReceiveRecordCallback(System.IAsyncResult)
 void RecordProtocol_InternalReceiveRecordCallback_m6082 (RecordProtocol_t1444 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::EndReceiveRecord(System.IAsyncResult)
 ByteU5BU5D_t97* RecordProtocol_EndReceiveRecord_m6083 (RecordProtocol_t1444 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReceiveRecord(System.IO.Stream)
 ByteU5BU5D_t97* RecordProtocol_ReceiveRecord_m6084 (RecordProtocol_t1444 * __this, Stream_t27 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReadRecordBuffer(System.Int32,System.IO.Stream)
 ByteU5BU5D_t97* RecordProtocol_ReadRecordBuffer_m6085 (RecordProtocol_t1444 * __this, int32_t ___contentType, Stream_t27 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReadClientHelloV2(System.IO.Stream)
 ByteU5BU5D_t97* RecordProtocol_ReadClientHelloV2_m6086 (RecordProtocol_t1444 * __this, Stream_t27 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReadStandardRecordBuffer(System.IO.Stream)
 ByteU5BU5D_t97* RecordProtocol_ReadStandardRecordBuffer_m6087 (RecordProtocol_t1444 * __this, Stream_t27 * ___record, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::ProcessAlert(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription)
 void RecordProtocol_ProcessAlert_m6088 (RecordProtocol_t1444 * __this, uint8_t ___alertLevel, uint8_t ___alertDesc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendAlert(Mono.Security.Protocol.Tls.AlertDescription)
 void RecordProtocol_SendAlert_m6089 (RecordProtocol_t1444 * __this, uint8_t ___description, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendAlert(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription)
 void RecordProtocol_SendAlert_m6090 (RecordProtocol_t1444 * __this, uint8_t ___level, uint8_t ___description, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendAlert(Mono.Security.Protocol.Tls.Alert)
 void RecordProtocol_SendAlert_m6091 (RecordProtocol_t1444 * __this, Alert_t1432 * ___alert, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendChangeCipherSpec()
 void RecordProtocol_SendChangeCipherSpec_m6092 (RecordProtocol_t1444 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.RecordProtocol::BeginSendRecord(Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.AsyncCallback,System.Object)
 Object_t * RecordProtocol_BeginSendRecord_m6093 (RecordProtocol_t1444 * __this, uint8_t ___handshakeType, AsyncCallback_t473 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::InternalSendRecordCallback(System.IAsyncResult)
 void RecordProtocol_InternalSendRecordCallback_m6094 (RecordProtocol_t1444 * __this, Object_t * ___ar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.RecordProtocol::BeginSendRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[],System.AsyncCallback,System.Object)
 Object_t * RecordProtocol_BeginSendRecord_m6095 (RecordProtocol_t1444 * __this, uint8_t ___contentType, ByteU5BU5D_t97* ___recordData, AsyncCallback_t473 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::EndSendRecord(System.IAsyncResult)
 void RecordProtocol_EndSendRecord_m6096 (RecordProtocol_t1444 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
 void RecordProtocol_SendRecord_m6097 (RecordProtocol_t1444 * __this, uint8_t ___contentType, ByteU5BU5D_t97* ___recordData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::EncodeRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
 ByteU5BU5D_t97* RecordProtocol_EncodeRecord_m6098 (RecordProtocol_t1444 * __this, uint8_t ___contentType, ByteU5BU5D_t97* ___recordData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::EncodeRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[],System.Int32,System.Int32)
 ByteU5BU5D_t97* RecordProtocol_EncodeRecord_m6099 (RecordProtocol_t1444 * __this, uint8_t ___contentType, ByteU5BU5D_t97* ___recordData, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::encryptRecordFragment(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
 ByteU5BU5D_t97* RecordProtocol_encryptRecordFragment_m6100 (RecordProtocol_t1444 * __this, uint8_t ___contentType, ByteU5BU5D_t97* ___fragment, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::decryptRecordFragment(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
 ByteU5BU5D_t97* RecordProtocol_decryptRecordFragment_m6101 (RecordProtocol_t1444 * __this, uint8_t ___contentType, ByteU5BU5D_t97* ___fragment, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol::Compare(System.Byte[],System.Byte[])
 bool RecordProtocol_Compare_m6102 (RecordProtocol_t1444 * __this, ByteU5BU5D_t97* ___array1, ByteU5BU5D_t97* ___array2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::ProcessCipherSpecV2Buffer(Mono.Security.Protocol.Tls.SecurityProtocolType,System.Byte[])
 void RecordProtocol_ProcessCipherSpecV2Buffer_m6103 (RecordProtocol_t1444 * __this, int32_t ___protocol, ByteU5BU5D_t97* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.RecordProtocol::MapV2CipherCode(System.String,System.Int32)
 CipherSuite_t1435 * RecordProtocol_MapV2CipherCode_m6104 (RecordProtocol_t1444 * __this, String_t* ___prefix, int32_t ___code, MethodInfo* method) IL2CPP_METHOD_ATTR;
