#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.HttpsClientStream
struct HttpsClientStream_t1459;
// System.IO.Stream
struct Stream_t27;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1442;
// System.Net.HttpWebRequest
struct HttpWebRequest_t1456;
// System.Byte[]
struct ByteU5BU5D_t97;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1460;
// System.Int32[]
struct Int32U5BU5D_t1185;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1407;

// System.Void Mono.Security.Protocol.Tls.HttpsClientStream::.ctor(System.IO.Stream,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Net.HttpWebRequest,System.Byte[])
 void HttpsClientStream__ctor_m6049 (HttpsClientStream_t1459 * __this, Stream_t27 * ___stream, X509CertificateCollection_t1442 * ___clientCertificates, HttpWebRequest_t1456 * ___request, ByteU5BU5D_t97* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::get_TrustFailure()
 bool HttpsClientStream_get_TrustFailure_m6050 (HttpsClientStream_t1459 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
 bool HttpsClientStream_RaiseServerCertificateValidation_m6051 (HttpsClientStream_t1459 * __this, X509Certificate_t1460 * ___certificate, Int32U5BU5D_t1185* ___certificateErrors, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__0(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
 X509Certificate_t1460 * HttpsClientStream_U3CHttpsClientStreamU3Em__0_m6052 (Object_t * __this/* static, unused */, X509CertificateCollection_t1442 * ___clientCerts, X509Certificate_t1460 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1442 * ___serverRequestedCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__1(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
 AsymmetricAlgorithm_t1407 * HttpsClientStream_U3CHttpsClientStreamU3Em__1_m6053 (Object_t * __this/* static, unused */, X509Certificate_t1460 * ___certificate, String_t* ___targetHost, MethodInfo* method) IL2CPP_METHOD_ATTR;
