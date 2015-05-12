#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone
struct TlsServerHelloDone_t1491;
// Mono.Security.Protocol.Tls.Context
struct Context_t1434;
// System.Byte[]
struct ByteU5BU5D_t97;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
 void TlsServerHelloDone__ctor_m6355 (TlsServerHelloDone_t1491 * __this, Context_t1434 * ___context, ByteU5BU5D_t97* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::ProcessAsSsl3()
 void TlsServerHelloDone_ProcessAsSsl3_m6356 (TlsServerHelloDone_t1491 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::ProcessAsTls1()
 void TlsServerHelloDone_ProcessAsTls1_m6357 (TlsServerHelloDone_t1491 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
