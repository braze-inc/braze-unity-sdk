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

// Mono.Security.Protocol.Tls.HttpsClientStream
struct HttpsClientStream_t2708006830;
// System.IO.Stream
struct Stream_t219029575;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2200082950;
// System.Net.HttpWebRequest
struct HttpWebRequest_t171953869;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3432067208;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t4236534322;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "System_System_Security_Cryptography_X509Certificat2200082950.h"
#include "System_System_Net_HttpWebRequest171953869.h"
#include "mscorlib_System_Security_Cryptography_X509Certific3432067208.h"
#include "mscorlib_System_String968488902.h"

// System.Void Mono.Security.Protocol.Tls.HttpsClientStream::.ctor(System.IO.Stream,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Net.HttpWebRequest,System.Byte[])
extern "C"  void HttpsClientStream__ctor_m1831138033 (HttpsClientStream_t2708006830 * __this, Stream_t219029575 * ___stream0, X509CertificateCollection_t2200082950 * ___clientCertificates1, HttpWebRequest_t171953869 * ___request2, ByteU5BU5D_t58506160* ___buffer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::get_TrustFailure()
extern "C"  bool HttpsClientStream_get_TrustFailure_m1743569637 (HttpsClientStream_t2708006830 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C"  bool HttpsClientStream_RaiseServerCertificateValidation_m1414843622 (HttpsClientStream_t2708006830 * __this, X509Certificate_t3432067208 * ___certificate0, Int32U5BU5D_t1809983122* ___certificateErrors1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__0(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C"  X509Certificate_t3432067208 * HttpsClientStream_U3CHttpsClientStreamU3Em__0_m3456026544 (Il2CppObject * __this /* static, unused */, X509CertificateCollection_t2200082950 * ___clientCerts0, X509Certificate_t3432067208 * ___serverCertificate1, String_t* ___targetHost2, X509CertificateCollection_t2200082950 * ___serverRequestedCertificates3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__1(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C"  AsymmetricAlgorithm_t4236534322 * HttpsClientStream_U3CHttpsClientStreamU3Em__1_m3849503321 (Il2CppObject * __this /* static, unused */, X509Certificate_t3432067208 * ___certificate0, String_t* ___targetHost1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
