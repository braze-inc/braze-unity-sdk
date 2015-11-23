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

// Mono.Security.Protocol.Tls.RecordProtocol
struct RecordProtocol_t1314;
// System.IO.Stream
struct Stream_t68;
// Mono.Security.Protocol.Tls.Context
struct Context_t1308;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t1331;
// System.IAsyncResult
struct IAsyncResult_t551;
// System.AsyncCallback
struct AsyncCallback_t552;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t98;
// Mono.Security.Protocol.Tls.Alert
struct Alert_t1305;
// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t1307;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertLevel.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertDescription.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ContentType.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"

// System.Void Mono.Security.Protocol.Tls.RecordProtocol::.ctor(System.IO.Stream,Mono.Security.Protocol.Tls.Context)
extern "C" void RecordProtocol__ctor_m6885 (RecordProtocol_t1314 * __this, Stream_t68 * ___innerStream, Context_t1308 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::.cctor()
extern "C" void RecordProtocol__cctor_m6886 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.RecordProtocol::get_Context()
extern "C" Context_t1308 * RecordProtocol_get_Context_m6887 (RecordProtocol_t1314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendRecord(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C" void RecordProtocol_SendRecord_m6888 (RecordProtocol_t1314 * __this, uint8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::ProcessChangeCipherSpec()
extern "C" void RecordProtocol_ProcessChangeCipherSpec_m6889 (RecordProtocol_t1314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.RecordProtocol::GetMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C" HandshakeMessage_t1331 * RecordProtocol_GetMessage_m6890 (RecordProtocol_t1314 * __this, uint8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.RecordProtocol::BeginReceiveRecord(System.IO.Stream,System.AsyncCallback,System.Object)
extern "C" Object_t * RecordProtocol_BeginReceiveRecord_m6891 (RecordProtocol_t1314 * __this, Stream_t68 * ___record, AsyncCallback_t552 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::InternalReceiveRecordCallback(System.IAsyncResult)
extern "C" void RecordProtocol_InternalReceiveRecordCallback_m6892 (RecordProtocol_t1314 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::EndReceiveRecord(System.IAsyncResult)
extern "C" ByteU5BU5D_t98* RecordProtocol_EndReceiveRecord_m6893 (RecordProtocol_t1314 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReceiveRecord(System.IO.Stream)
extern "C" ByteU5BU5D_t98* RecordProtocol_ReceiveRecord_m6894 (RecordProtocol_t1314 * __this, Stream_t68 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReadRecordBuffer(System.Int32,System.IO.Stream)
extern "C" ByteU5BU5D_t98* RecordProtocol_ReadRecordBuffer_m6895 (RecordProtocol_t1314 * __this, int32_t ___contentType, Stream_t68 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReadClientHelloV2(System.IO.Stream)
extern "C" ByteU5BU5D_t98* RecordProtocol_ReadClientHelloV2_m6896 (RecordProtocol_t1314 * __this, Stream_t68 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReadStandardRecordBuffer(System.IO.Stream)
extern "C" ByteU5BU5D_t98* RecordProtocol_ReadStandardRecordBuffer_m6897 (RecordProtocol_t1314 * __this, Stream_t68 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::ProcessAlert(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription)
extern "C" void RecordProtocol_ProcessAlert_m6898 (RecordProtocol_t1314 * __this, uint8_t ___alertLevel, uint8_t ___alertDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendAlert(Mono.Security.Protocol.Tls.AlertDescription)
extern "C" void RecordProtocol_SendAlert_m6899 (RecordProtocol_t1314 * __this, uint8_t ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendAlert(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription)
extern "C" void RecordProtocol_SendAlert_m6900 (RecordProtocol_t1314 * __this, uint8_t ___level, uint8_t ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendAlert(Mono.Security.Protocol.Tls.Alert)
extern "C" void RecordProtocol_SendAlert_m6901 (RecordProtocol_t1314 * __this, Alert_t1305 * ___alert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendChangeCipherSpec()
extern "C" void RecordProtocol_SendChangeCipherSpec_m6902 (RecordProtocol_t1314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.RecordProtocol::BeginSendRecord(Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.AsyncCallback,System.Object)
extern "C" Object_t * RecordProtocol_BeginSendRecord_m6903 (RecordProtocol_t1314 * __this, uint8_t ___handshakeType, AsyncCallback_t552 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::InternalSendRecordCallback(System.IAsyncResult)
extern "C" void RecordProtocol_InternalSendRecordCallback_m6904 (RecordProtocol_t1314 * __this, Object_t * ___ar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.RecordProtocol::BeginSendRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[],System.AsyncCallback,System.Object)
extern "C" Object_t * RecordProtocol_BeginSendRecord_m6905 (RecordProtocol_t1314 * __this, uint8_t ___contentType, ByteU5BU5D_t98* ___recordData, AsyncCallback_t552 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::EndSendRecord(System.IAsyncResult)
extern "C" void RecordProtocol_EndSendRecord_m6906 (RecordProtocol_t1314 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
extern "C" void RecordProtocol_SendRecord_m6907 (RecordProtocol_t1314 * __this, uint8_t ___contentType, ByteU5BU5D_t98* ___recordData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::EncodeRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
extern "C" ByteU5BU5D_t98* RecordProtocol_EncodeRecord_m6908 (RecordProtocol_t1314 * __this, uint8_t ___contentType, ByteU5BU5D_t98* ___recordData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::EncodeRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t98* RecordProtocol_EncodeRecord_m6909 (RecordProtocol_t1314 * __this, uint8_t ___contentType, ByteU5BU5D_t98* ___recordData, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::encryptRecordFragment(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
extern "C" ByteU5BU5D_t98* RecordProtocol_encryptRecordFragment_m6910 (RecordProtocol_t1314 * __this, uint8_t ___contentType, ByteU5BU5D_t98* ___fragment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::decryptRecordFragment(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
extern "C" ByteU5BU5D_t98* RecordProtocol_decryptRecordFragment_m6911 (RecordProtocol_t1314 * __this, uint8_t ___contentType, ByteU5BU5D_t98* ___fragment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol::Compare(System.Byte[],System.Byte[])
extern "C" bool RecordProtocol_Compare_m6912 (RecordProtocol_t1314 * __this, ByteU5BU5D_t98* ___array1, ByteU5BU5D_t98* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::ProcessCipherSpecV2Buffer(Mono.Security.Protocol.Tls.SecurityProtocolType,System.Byte[])
extern "C" void RecordProtocol_ProcessCipherSpecV2Buffer_m6913 (RecordProtocol_t1314 * __this, int32_t ___protocol, ByteU5BU5D_t98* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.RecordProtocol::MapV2CipherCode(System.String,System.Int32)
extern "C" CipherSuite_t1307 * RecordProtocol_MapV2CipherCode_m6914 (RecordProtocol_t1314 * __this, String_t* ___prefix, int32_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
