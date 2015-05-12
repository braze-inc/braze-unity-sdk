#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate
struct TlsServerCertificate_t1487;
// Mono.Security.Protocol.Tls.Context
struct Context_t1434;
// System.Byte[]
struct ByteU5BU5D_t97;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1406;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1402;
// System.String
struct String_t;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
 void TlsServerCertificate__ctor_m6332 (TlsServerCertificate_t1487 * __this, Context_t1434 * ___context, ByteU5BU5D_t97* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::Update()
 void TlsServerCertificate_Update_m6333 (TlsServerCertificate_t1487 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsSsl3()
 void TlsServerCertificate_ProcessAsSsl3_m6334 (TlsServerCertificate_t1487 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsTls1()
 void TlsServerCertificate_ProcessAsTls1_m6335 (TlsServerCertificate_t1487 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkCertificateUsage(Mono.Security.X509.X509Certificate)
 bool TlsServerCertificate_checkCertificateUsage_m6336 (TlsServerCertificate_t1487 * __this, X509Certificate_t1406 * ___cert, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::validateCertificates(Mono.Security.X509.X509CertificateCollection)
 void TlsServerCertificate_validateCertificates_m6337 (TlsServerCertificate_t1487 * __this, X509CertificateCollection_t1402 * ___certificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkServerIdentity(Mono.Security.X509.X509Certificate)
 bool TlsServerCertificate_checkServerIdentity_m6338 (TlsServerCertificate_t1487 * __this, X509Certificate_t1406 * ___cert, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkDomainName(System.String)
 bool TlsServerCertificate_checkDomainName_m6339 (TlsServerCertificate_t1487 * __this, String_t* ___subjectName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::Match(System.String,System.String)
 bool TlsServerCertificate_Match_m6340 (Object_t * __this/* static, unused */, String_t* ___hostname, String_t* ___pattern, MethodInfo* method) IL2CPP_METHOD_ATTR;
