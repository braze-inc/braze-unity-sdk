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

// Mono.Security.Protocol.Tls.ClientRecordProtocol
struct ClientRecordProtocol_t1274010348;
// System.IO.Stream
struct Stream_t219029575;
// Mono.Security.Protocol.Tls.ClientContext
struct ClientContext_t3677726556;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t276412187;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t720149587;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientCon3677726556.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake1150764700.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsStream720149587.h"

// System.Void Mono.Security.Protocol.Tls.ClientRecordProtocol::.ctor(System.IO.Stream,Mono.Security.Protocol.Tls.ClientContext)
extern "C"  void ClientRecordProtocol__ctor_m3035494461 (ClientRecordProtocol_t1274010348 * __this, Stream_t219029575 * ___innerStream, ClientContext_t3677726556 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::GetMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C"  HandshakeMessage_t276412187 * ClientRecordProtocol_GetMessage_m2518248327 (ClientRecordProtocol_t1274010348 * __this, uint8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientRecordProtocol::ProcessHandshakeMessage(Mono.Security.Protocol.Tls.TlsStream)
extern "C"  void ClientRecordProtocol_ProcessHandshakeMessage_m3106137596 (ClientRecordProtocol_t1274010348 * __this, TlsStream_t720149587 * ___handMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::createClientHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C"  HandshakeMessage_t276412187 * ClientRecordProtocol_createClientHandshakeMessage_m3433791085 (ClientRecordProtocol_t1274010348 * __this, uint8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::createServerHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.Byte[])
extern "C"  HandshakeMessage_t276412187 * ClientRecordProtocol_createServerHandshakeMessage_m2388742696 (ClientRecordProtocol_t1274010348 * __this, uint8_t ___type, ByteU5BU5D_t58506160* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
