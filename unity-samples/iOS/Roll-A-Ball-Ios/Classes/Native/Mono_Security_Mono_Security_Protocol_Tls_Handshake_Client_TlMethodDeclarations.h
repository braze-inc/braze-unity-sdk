#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate
struct TlsClientCertificate_t1493;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1471;
// Mono.Security.Protocol.Tls.Context
struct Context_t1445;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::.ctor(Mono.Security.Protocol.Tls.Context)
 void TlsClientCertificate__ctor_m6399 (TlsClientCertificate_t1493 * __this, Context_t1445 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::get_ClientCertificate()
 X509Certificate_t1471 * TlsClientCertificate_get_ClientCertificate_m6400 (TlsClientCertificate_t1493 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::Update()
 void TlsClientCertificate_Update_m6401 (TlsClientCertificate_t1493 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::GetClientCertificate()
 void TlsClientCertificate_GetClientCertificate_m6402 (TlsClientCertificate_t1493 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::SendCertificates()
 void TlsClientCertificate_SendCertificates_m6403 (TlsClientCertificate_t1493 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::ProcessAsSsl3()
 void TlsClientCertificate_ProcessAsSsl3_m6404 (TlsClientCertificate_t1493 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::ProcessAsTls1()
 void TlsClientCertificate_ProcessAsTls1_m6405 (TlsClientCertificate_t1493 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::FindParentCertificate(System.Security.Cryptography.X509Certificates.X509Certificate)
 X509Certificate_t1471 * TlsClientCertificate_FindParentCertificate_m6406 (TlsClientCertificate_t1493 * __this, X509Certificate_t1471 * ___cert, MethodInfo* method) IL2CPP_METHOD_ATTR;
