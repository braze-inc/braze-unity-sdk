#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest
struct TlsServerCertificateRequest_t1488;
// Mono.Security.Protocol.Tls.Context
struct Context_t1434;
// System.Byte[]
struct ByteU5BU5D_t97;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
 void TlsServerCertificateRequest__ctor_m6341 (TlsServerCertificateRequest_t1488 * __this, Context_t1434 * ___context, ByteU5BU5D_t97* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::Update()
 void TlsServerCertificateRequest_Update_m6342 (TlsServerCertificateRequest_t1488 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::ProcessAsSsl3()
 void TlsServerCertificateRequest_ProcessAsSsl3_m6343 (TlsServerCertificateRequest_t1488 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::ProcessAsTls1()
 void TlsServerCertificateRequest_ProcessAsTls1_m6344 (TlsServerCertificateRequest_t1488 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
