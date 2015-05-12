#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.TlsServerSettings
struct TlsServerSettings_t1461;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1413;
// System.Security.Cryptography.RSA
struct RSA_t1399;
// System.Byte[]
struct ByteU5BU5D_t112;
// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[]
struct ClientCertificateTypeU5BU5D_t1490;
// System.String[]
struct StringU5BU5D_t3;
// System.Security.Cryptography.RSAParameters
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"

// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::.ctor()
 void TlsServerSettings__ctor_m6349 (TlsServerSettings_t1461 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsServerSettings::get_ServerKeyExchange()
 bool TlsServerSettings_get_ServerKeyExchange_m6350 (TlsServerSettings_t1461 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_ServerKeyExchange(System.Boolean)
 void TlsServerSettings_set_ServerKeyExchange_m6351 (TlsServerSettings_t1461 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.Protocol.Tls.TlsServerSettings::get_Certificates()
 X509CertificateCollection_t1413 * TlsServerSettings_get_Certificates_m6352 (TlsServerSettings_t1461 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_Certificates(Mono.Security.X509.X509CertificateCollection)
 void TlsServerSettings_set_Certificates_m6353 (TlsServerSettings_t1461 * __this, X509CertificateCollection_t1413 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.TlsServerSettings::get_CertificateRSA()
 RSA_t1399 * TlsServerSettings_get_CertificateRSA_m6354 (TlsServerSettings_t1461 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSAParameters Mono.Security.Protocol.Tls.TlsServerSettings::get_RsaParameters()
 RSAParameters_t1410  TlsServerSettings_get_RsaParameters_m6355 (TlsServerSettings_t1461 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_RsaParameters(System.Security.Cryptography.RSAParameters)
 void TlsServerSettings_set_RsaParameters_m6356 (TlsServerSettings_t1461 * __this, RSAParameters_t1410  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_SignedParams(System.Byte[])
 void TlsServerSettings_set_SignedParams_m6357 (TlsServerSettings_t1461 * __this, ByteU5BU5D_t112* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsServerSettings::get_CertificateRequest()
 bool TlsServerSettings_get_CertificateRequest_m6358 (TlsServerSettings_t1461 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_CertificateRequest(System.Boolean)
 void TlsServerSettings_set_CertificateRequest_m6359 (TlsServerSettings_t1461 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_CertificateTypes(Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[])
 void TlsServerSettings_set_CertificateTypes_m6360 (TlsServerSettings_t1461 * __this, ClientCertificateTypeU5BU5D_t1490* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_DistinguisedNames(System.String[])
 void TlsServerSettings_set_DistinguisedNames_m6361 (TlsServerSettings_t1461 * __this, StringU5BU5D_t3* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::UpdateCertificateRSA()
 void TlsServerSettings_UpdateCertificateRSA_m6362 (TlsServerSettings_t1461 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
