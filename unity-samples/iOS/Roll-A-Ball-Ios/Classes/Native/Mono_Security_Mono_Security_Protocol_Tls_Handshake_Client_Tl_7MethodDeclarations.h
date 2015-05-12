#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello
struct TlsServerHello_t1490;
// Mono.Security.Protocol.Tls.Context
struct Context_t1434;
// System.Byte[]
struct ByteU5BU5D_t97;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
 void TlsServerHello__ctor_m6350 (TlsServerHello_t1490 * __this, Context_t1434 * ___context, ByteU5BU5D_t97* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::Update()
 void TlsServerHello_Update_m6351 (TlsServerHello_t1490 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::ProcessAsSsl3()
 void TlsServerHello_ProcessAsSsl3_m6352 (TlsServerHello_t1490 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::ProcessAsTls1()
 void TlsServerHello_ProcessAsTls1_m6353 (TlsServerHello_t1490 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::processProtocol(System.Int16)
 void TlsServerHello_processProtocol_m6354 (TlsServerHello_t1490 * __this, int16_t ___protocol, MethodInfo* method) IL2CPP_METHOD_ATTR;
