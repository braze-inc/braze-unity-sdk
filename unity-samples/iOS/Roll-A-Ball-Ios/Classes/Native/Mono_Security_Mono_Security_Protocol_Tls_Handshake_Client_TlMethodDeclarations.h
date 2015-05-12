#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate
struct TlsClientCertificate_t1482;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1460;
// Mono.Security.Protocol.Tls.Context
struct Context_t1434;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::.ctor(Mono.Security.Protocol.Tls.Context)
 void TlsClientCertificate__ctor_m6305 (TlsClientCertificate_t1482 * __this, Context_t1434 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::get_ClientCertificate()
 X509Certificate_t1460 * TlsClientCertificate_get_ClientCertificate_m6306 (TlsClientCertificate_t1482 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::Update()
 void TlsClientCertificate_Update_m6307 (TlsClientCertificate_t1482 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::GetClientCertificate()
 void TlsClientCertificate_GetClientCertificate_m6308 (TlsClientCertificate_t1482 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::SendCertificates()
 void TlsClientCertificate_SendCertificates_m6309 (TlsClientCertificate_t1482 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::ProcessAsSsl3()
 void TlsClientCertificate_ProcessAsSsl3_m6310 (TlsClientCertificate_t1482 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::ProcessAsTls1()
 void TlsClientCertificate_ProcessAsTls1_m6311 (TlsClientCertificate_t1482 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::FindParentCertificate(System.Security.Cryptography.X509Certificates.X509Certificate)
 X509Certificate_t1460 * TlsClientCertificate_FindParentCertificate_m6312 (TlsClientCertificate_t1482 * __this, X509Certificate_t1460 * ___cert, MethodInfo* method) IL2CPP_METHOD_ATTR;
