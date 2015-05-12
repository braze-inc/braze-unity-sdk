#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.ClientRecordProtocol
struct ClientRecordProtocol_t1443;
// System.IO.Stream
struct Stream_t27;
// Mono.Security.Protocol.Tls.ClientContext
struct ClientContext_t1441;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t1445;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t1446;
// System.Byte[]
struct ByteU5BU5D_t97;
// Mono.Security.Protocol.Tls.Handshake.HandshakeType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"

// System.Void Mono.Security.Protocol.Tls.ClientRecordProtocol::.ctor(System.IO.Stream,Mono.Security.Protocol.Tls.ClientContext)
 void ClientRecordProtocol__ctor_m5964 (ClientRecordProtocol_t1443 * __this, Stream_t27 * ___innerStream, ClientContext_t1441 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::GetMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
 HandshakeMessage_t1445 * ClientRecordProtocol_GetMessage_m5965 (ClientRecordProtocol_t1443 * __this, uint8_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientRecordProtocol::ProcessHandshakeMessage(Mono.Security.Protocol.Tls.TlsStream)
 void ClientRecordProtocol_ProcessHandshakeMessage_m5966 (ClientRecordProtocol_t1443 * __this, TlsStream_t1446 * ___handMsg, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::createClientHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
 HandshakeMessage_t1445 * ClientRecordProtocol_createClientHandshakeMessage_m5967 (ClientRecordProtocol_t1443 * __this, uint8_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::createServerHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.Byte[])
 HandshakeMessage_t1445 * ClientRecordProtocol_createServerHandshakeMessage_m5968 (ClientRecordProtocol_t1443 * __this, uint8_t ___type, ByteU5BU5D_t97* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
