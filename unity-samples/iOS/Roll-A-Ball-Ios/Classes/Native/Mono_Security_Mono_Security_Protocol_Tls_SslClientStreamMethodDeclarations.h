#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.SslClientStream
struct SslClientStream_t1440;
// System.IO.Stream
struct Stream_t27;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1442;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1460;
// Mono.Security.Protocol.Tls.CertificateValidationCallback
struct CertificateValidationCallback_t1473;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback
struct CertificateSelectionCallback_t1457;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
struct PrivateKeySelectionCallback_t1458;
// System.String
struct String_t;
// Mono.Security.Protocol.Tls.CertificateValidationCallback2
struct CertificateValidationCallback2_t1474;
// System.IAsyncResult
struct IAsyncResult_t472;
// System.AsyncCallback
struct AsyncCallback_t473;
// System.Object
struct Object_t;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t1472;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1402;
// System.Int32[]
struct Int32U5BU5D_t1185;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1407;
// Mono.Security.Protocol.Tls.SecurityProtocolType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"

// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Boolean)
 void SslClientStream__ctor_m6123 (SslClientStream_t1440 * __this, Stream_t27 * ___stream, String_t* ___targetHost, bool ___ownsStream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Security.Cryptography.X509Certificates.X509Certificate)
 void SslClientStream__ctor_m6124 (SslClientStream_t1440 * __this, Stream_t27 * ___stream, String_t* ___targetHost, X509Certificate_t1460 * ___clientCertificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
 void SslClientStream__ctor_m6125 (SslClientStream_t1440 * __this, Stream_t27 * ___stream, String_t* ___targetHost, X509CertificateCollection_t1442 * ___clientCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Boolean,Mono.Security.Protocol.Tls.SecurityProtocolType)
 void SslClientStream__ctor_m6126 (SslClientStream_t1440 * __this, Stream_t27 * ___stream, String_t* ___targetHost, bool ___ownsStream, int32_t ___securityProtocolType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Boolean,Mono.Security.Protocol.Tls.SecurityProtocolType,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
 void SslClientStream__ctor_m6127 (SslClientStream_t1440 * __this, Stream_t27 * ___stream, String_t* ___targetHost, bool ___ownsStream, int32_t ___securityProtocolType, X509CertificateCollection_t1442 * ___clientCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_ServerCertValidation(Mono.Security.Protocol.Tls.CertificateValidationCallback)
 void SslClientStream_add_ServerCertValidation_m6128 (SslClientStream_t1440 * __this, CertificateValidationCallback_t1473 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_ServerCertValidation(Mono.Security.Protocol.Tls.CertificateValidationCallback)
 void SslClientStream_remove_ServerCertValidation_m6129 (SslClientStream_t1440 * __this, CertificateValidationCallback_t1473 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_ClientCertSelection(Mono.Security.Protocol.Tls.CertificateSelectionCallback)
 void SslClientStream_add_ClientCertSelection_m6130 (SslClientStream_t1440 * __this, CertificateSelectionCallback_t1457 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_ClientCertSelection(Mono.Security.Protocol.Tls.CertificateSelectionCallback)
 void SslClientStream_remove_ClientCertSelection_m6131 (SslClientStream_t1440 * __this, CertificateSelectionCallback_t1457 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_PrivateKeySelection(Mono.Security.Protocol.Tls.PrivateKeySelectionCallback)
 void SslClientStream_add_PrivateKeySelection_m6132 (SslClientStream_t1440 * __this, PrivateKeySelectionCallback_t1458 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_PrivateKeySelection(Mono.Security.Protocol.Tls.PrivateKeySelectionCallback)
 void SslClientStream_remove_PrivateKeySelection_m6133 (SslClientStream_t1440 * __this, PrivateKeySelectionCallback_t1458 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_ServerCertValidation2(Mono.Security.Protocol.Tls.CertificateValidationCallback2)
 void SslClientStream_add_ServerCertValidation2_m6134 (SslClientStream_t1440 * __this, CertificateValidationCallback2_t1474 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_ServerCertValidation2(Mono.Security.Protocol.Tls.CertificateValidationCallback2)
 void SslClientStream_remove_ServerCertValidation2_m6135 (SslClientStream_t1440 * __this, CertificateValidationCallback2_t1474 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.SslClientStream::get_InputBuffer()
 Stream_t27 * SslClientStream_get_InputBuffer_m6136 (SslClientStream_t1440 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Mono.Security.Protocol.Tls.SslClientStream::get_ClientCertificates()
 X509CertificateCollection_t1442 * SslClientStream_get_ClientCertificates_m6137 (SslClientStream_t1440 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslClientStream::get_SelectedClientCertificate()
 X509Certificate_t1460 * SslClientStream_get_SelectedClientCertificate_m6138 (SslClientStream_t1440 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CertificateValidationCallback Mono.Security.Protocol.Tls.SslClientStream::get_ServerCertValidationDelegate()
 CertificateValidationCallback_t1473 * SslClientStream_get_ServerCertValidationDelegate_m6139 (SslClientStream_t1440 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::set_ServerCertValidationDelegate(Mono.Security.Protocol.Tls.CertificateValidationCallback)
 void SslClientStream_set_ServerCertValidationDelegate_m6140 (SslClientStream_t1440 * __this, CertificateValidationCallback_t1473 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback Mono.Security.Protocol.Tls.SslClientStream::get_ClientCertSelectionDelegate()
 CertificateSelectionCallback_t1457 * SslClientStream_get_ClientCertSelectionDelegate_m6141 (SslClientStream_t1440 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::set_ClientCertSelectionDelegate(Mono.Security.Protocol.Tls.CertificateSelectionCallback)
 void SslClientStream_set_ClientCertSelectionDelegate_m6142 (SslClientStream_t1440 * __this, CertificateSelectionCallback_t1457 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback Mono.Security.Protocol.Tls.SslClientStream::get_PrivateKeyCertSelectionDelegate()
 PrivateKeySelectionCallback_t1458 * SslClientStream_get_PrivateKeyCertSelectionDelegate_m6143 (SslClientStream_t1440 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::set_PrivateKeyCertSelectionDelegate(Mono.Security.Protocol.Tls.PrivateKeySelectionCallback)
 void SslClientStream_set_PrivateKeyCertSelectionDelegate_m6144 (SslClientStream_t1440 * __this, PrivateKeySelectionCallback_t1458 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::Finalize()
 void SslClientStream_Finalize_m6145 (SslClientStream_t1440 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::Dispose(System.Boolean)
 void SslClientStream_Dispose_m6146 (SslClientStream_t1440 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.SslClientStream::OnBeginNegotiateHandshake(System.AsyncCallback,System.Object)
 Object_t * SslClientStream_OnBeginNegotiateHandshake_m6147 (SslClientStream_t1440 * __this, AsyncCallback_t473 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::SafeReceiveRecord(System.IO.Stream)
 void SslClientStream_SafeReceiveRecord_m6148 (SslClientStream_t1440 * __this, Stream_t27 * ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::OnNegotiateHandshakeCallback(System.IAsyncResult)
 void SslClientStream_OnNegotiateHandshakeCallback_m6149 (SslClientStream_t1440 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslClientStream::OnLocalCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
 X509Certificate_t1460 * SslClientStream_OnLocalCertificateSelection_m6150 (SslClientStream_t1440 * __this, X509CertificateCollection_t1442 * ___clientCertificates, X509Certificate_t1460 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1442 * ___serverRequestedCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslClientStream::get_HaveRemoteValidation2Callback()
 bool SslClientStream_get_HaveRemoteValidation2Callback_m6151 (SslClientStream_t1440 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslClientStream::OnRemoteCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
 ValidationResult_t1472 * SslClientStream_OnRemoteCertificateValidation2_m6152 (SslClientStream_t1440 * __this, X509CertificateCollection_t1402 * ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslClientStream::OnRemoteCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
 bool SslClientStream_OnRemoteCertificateValidation_m6153 (SslClientStream_t1440 * __this, X509Certificate_t1460 * ___certificate, Int32U5BU5D_t1185* ___errors, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
 bool SslClientStream_RaiseServerCertificateValidation_m6154 (SslClientStream_t1440 * __this, X509Certificate_t1460 * ___certificate, Int32U5BU5D_t1185* ___certificateErrors, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslClientStream::RaiseServerCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
 ValidationResult_t1472 * SslClientStream_RaiseServerCertificateValidation2_m6155 (SslClientStream_t1440 * __this, X509CertificateCollection_t1402 * ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslClientStream::RaiseClientCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
 X509Certificate_t1460 * SslClientStream_RaiseClientCertificateSelection_m6156 (SslClientStream_t1440 * __this, X509CertificateCollection_t1442 * ___clientCertificates, X509Certificate_t1460 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1442 * ___serverRequestedCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslClientStream::OnLocalPrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
 AsymmetricAlgorithm_t1407 * SslClientStream_OnLocalPrivateKeySelection_m6157 (SslClientStream_t1440 * __this, X509Certificate_t1460 * ___certificate, String_t* ___targetHost, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslClientStream::RaisePrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
 AsymmetricAlgorithm_t1407 * SslClientStream_RaisePrivateKeySelection_m6158 (SslClientStream_t1440 * __this, X509Certificate_t1460 * ___certificate, String_t* ___targetHost, MethodInfo* method) IL2CPP_METHOD_ATTR;
