#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify
struct TlsClientCertificateVerify_t1483;
// Mono.Security.Protocol.Tls.Context
struct Context_t1434;
// System.Security.Cryptography.RSA
struct RSA_t1388;
// System.Byte[]
struct ByteU5BU5D_t97;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::.ctor(Mono.Security.Protocol.Tls.Context)
 void TlsClientCertificateVerify__ctor_m6313 (TlsClientCertificateVerify_t1483 * __this, Context_t1434 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::Update()
 void TlsClientCertificateVerify_Update_m6314 (TlsClientCertificateVerify_t1483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsSsl3()
 void TlsClientCertificateVerify_ProcessAsSsl3_m6315 (TlsClientCertificateVerify_t1483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsTls1()
 void TlsClientCertificateVerify_ProcessAsTls1_m6316 (TlsClientCertificateVerify_t1483 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getClientCertRSA(System.Security.Cryptography.RSA)
 RSA_t1388 * TlsClientCertificateVerify_getClientCertRSA_m6317 (TlsClientCertificateVerify_t1483 * __this, RSA_t1388 * ___privKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getUnsignedBigInteger(System.Byte[])
 ByteU5BU5D_t97* TlsClientCertificateVerify_getUnsignedBigInteger_m6318 (TlsClientCertificateVerify_t1483 * __this, ByteU5BU5D_t97* ___integer, MethodInfo* method) IL2CPP_METHOD_ATTR;
