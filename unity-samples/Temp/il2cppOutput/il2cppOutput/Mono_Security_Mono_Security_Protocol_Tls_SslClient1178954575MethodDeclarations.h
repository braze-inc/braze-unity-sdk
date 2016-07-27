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

// Mono.Security.Protocol.Tls.SslClientStream
struct SslClientStream_t1178954575;
// System.IO.Stream
struct Stream_t219029575;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3432067208;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2200082950;
// Mono.Security.Protocol.Tls.CertificateValidationCallback
struct CertificateValidationCallback_t3726148045;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback
struct CertificateSelectionCallback_t3257378130;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
struct PrivateKeySelectionCallback_t4199006061;
// Mono.Security.Protocol.Tls.CertificateValidationCallback2
struct CertificateValidationCallback2_t1582269749;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;
// System.Object
struct Il2CppObject;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t2397874734;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3336811651;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t4236534322;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Security_Cryptography_X509Certific3432067208.h"
#include "System_System_Security_Cryptography_X509Certificat2200082950.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityP4015394186.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Certifica3726148045.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Certifica3257378130.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_PrivateKe4199006061.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Certifica1582269749.h"
#include "mscorlib_System_AsyncCallback1363551830.h"
#include "mscorlib_System_Object837106420.h"
#include "Mono_Security_Mono_Security_X509_X509CertificateCo3336811650.h"

// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Boolean)
extern "C"  void SslClientStream__ctor_m99328227 (SslClientStream_t1178954575 * __this, Stream_t219029575 * ___stream0, String_t* ___targetHost1, bool ___ownsStream2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C"  void SslClientStream__ctor_m3830369294 (SslClientStream_t1178954575 * __this, Stream_t219029575 * ___stream0, String_t* ___targetHost1, X509Certificate_t3432067208 * ___clientCertificate2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C"  void SslClientStream__ctor_m3070934736 (SslClientStream_t1178954575 * __this, Stream_t219029575 * ___stream0, String_t* ___targetHost1, X509CertificateCollection_t2200082950 * ___clientCertificates2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Boolean,Mono.Security.Protocol.Tls.SecurityProtocolType)
extern "C"  void SslClientStream__ctor_m1812308023 (SslClientStream_t1178954575 * __this, Stream_t219029575 * ___stream0, String_t* ___targetHost1, bool ___ownsStream2, int32_t ___securityProtocolType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Boolean,Mono.Security.Protocol.Tls.SecurityProtocolType,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C"  void SslClientStream__ctor_m2883483309 (SslClientStream_t1178954575 * __this, Stream_t219029575 * ___stream0, String_t* ___targetHost1, bool ___ownsStream2, int32_t ___securityProtocolType3, X509CertificateCollection_t2200082950 * ___clientCertificates4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_ServerCertValidation(Mono.Security.Protocol.Tls.CertificateValidationCallback)
extern "C"  void SslClientStream_add_ServerCertValidation_m4096862828 (SslClientStream_t1178954575 * __this, CertificateValidationCallback_t3726148045 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_ServerCertValidation(Mono.Security.Protocol.Tls.CertificateValidationCallback)
extern "C"  void SslClientStream_remove_ServerCertValidation_m2271337009 (SslClientStream_t1178954575 * __this, CertificateValidationCallback_t3726148045 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_ClientCertSelection(Mono.Security.Protocol.Tls.CertificateSelectionCallback)
extern "C"  void SslClientStream_add_ClientCertSelection_m3598639054 (SslClientStream_t1178954575 * __this, CertificateSelectionCallback_t3257378130 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_ClientCertSelection(Mono.Security.Protocol.Tls.CertificateSelectionCallback)
extern "C"  void SslClientStream_remove_ClientCertSelection_m3341991123 (SslClientStream_t1178954575 * __this, CertificateSelectionCallback_t3257378130 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_PrivateKeySelection(Mono.Security.Protocol.Tls.PrivateKeySelectionCallback)
extern "C"  void SslClientStream_add_PrivateKeySelection_m3756271176 (SslClientStream_t1178954575 * __this, PrivateKeySelectionCallback_t4199006061 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_PrivateKeySelection(Mono.Security.Protocol.Tls.PrivateKeySelectionCallback)
extern "C"  void SslClientStream_remove_PrivateKeySelection_m7214243 (SslClientStream_t1178954575 * __this, PrivateKeySelectionCallback_t4199006061 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_ServerCertValidation2(Mono.Security.Protocol.Tls.CertificateValidationCallback2)
extern "C"  void SslClientStream_add_ServerCertValidation2_m2720675414 (SslClientStream_t1178954575 * __this, CertificateValidationCallback2_t1582269749 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_ServerCertValidation2(Mono.Security.Protocol.Tls.CertificateValidationCallback2)
extern "C"  void SslClientStream_remove_ServerCertValidation2_m737020123 (SslClientStream_t1178954575 * __this, CertificateValidationCallback2_t1582269749 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.SslClientStream::get_InputBuffer()
extern "C"  Stream_t219029575 * SslClientStream_get_InputBuffer_m4205110840 (SslClientStream_t1178954575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Mono.Security.Protocol.Tls.SslClientStream::get_ClientCertificates()
extern "C"  X509CertificateCollection_t2200082950 * SslClientStream_get_ClientCertificates_m4081278826 (SslClientStream_t1178954575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslClientStream::get_SelectedClientCertificate()
extern "C"  X509Certificate_t3432067208 * SslClientStream_get_SelectedClientCertificate_m4252887474 (SslClientStream_t1178954575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CertificateValidationCallback Mono.Security.Protocol.Tls.SslClientStream::get_ServerCertValidationDelegate()
extern "C"  CertificateValidationCallback_t3726148045 * SslClientStream_get_ServerCertValidationDelegate_m459420051 (SslClientStream_t1178954575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::set_ServerCertValidationDelegate(Mono.Security.Protocol.Tls.CertificateValidationCallback)
extern "C"  void SslClientStream_set_ServerCertValidationDelegate_m772375792 (SslClientStream_t1178954575 * __this, CertificateValidationCallback_t3726148045 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback Mono.Security.Protocol.Tls.SslClientStream::get_ClientCertSelectionDelegate()
extern "C"  CertificateSelectionCallback_t3257378130 * SslClientStream_get_ClientCertSelectionDelegate_m3262721995 (SslClientStream_t1178954575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::set_ClientCertSelectionDelegate(Mono.Security.Protocol.Tls.CertificateSelectionCallback)
extern "C"  void SslClientStream_set_ClientCertSelectionDelegate_m1954811816 (SslClientStream_t1178954575 * __this, CertificateSelectionCallback_t3257378130 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback Mono.Security.Protocol.Tls.SslClientStream::get_PrivateKeyCertSelectionDelegate()
extern "C"  PrivateKeySelectionCallback_t4199006061 * SslClientStream_get_PrivateKeyCertSelectionDelegate_m3305681381 (SslClientStream_t1178954575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::set_PrivateKeyCertSelectionDelegate(Mono.Security.Protocol.Tls.PrivateKeySelectionCallback)
extern "C"  void SslClientStream_set_PrivateKeyCertSelectionDelegate_m3816935658 (SslClientStream_t1178954575 * __this, PrivateKeySelectionCallback_t4199006061 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::Finalize()
extern "C"  void SslClientStream_Finalize_m1289121787 (SslClientStream_t1178954575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::Dispose(System.Boolean)
extern "C"  void SslClientStream_Dispose_m2208138235 (SslClientStream_t1178954575 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.SslClientStream::OnBeginNegotiateHandshake(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SslClientStream_OnBeginNegotiateHandshake_m3558591952 (SslClientStream_t1178954575 * __this, AsyncCallback_t1363551830 * ___callback0, Il2CppObject * ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::SafeReceiveRecord(System.IO.Stream)
extern "C"  void SslClientStream_SafeReceiveRecord_m4180109699 (SslClientStream_t1178954575 * __this, Stream_t219029575 * ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslClientStream::OnNegotiateHandshakeCallback(System.IAsyncResult)
extern "C"  void SslClientStream_OnNegotiateHandshakeCallback_m2911909321 (SslClientStream_t1178954575 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslClientStream::OnLocalCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C"  X509Certificate_t3432067208 * SslClientStream_OnLocalCertificateSelection_m3738340919 (SslClientStream_t1178954575 * __this, X509CertificateCollection_t2200082950 * ___clientCertificates0, X509Certificate_t3432067208 * ___serverCertificate1, String_t* ___targetHost2, X509CertificateCollection_t2200082950 * ___serverRequestedCertificates3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslClientStream::get_HaveRemoteValidation2Callback()
extern "C"  bool SslClientStream_get_HaveRemoteValidation2Callback_m712645822 (SslClientStream_t1178954575 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslClientStream::OnRemoteCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
extern "C"  ValidationResult_t2397874734 * SslClientStream_OnRemoteCertificateValidation2_m549297777 (SslClientStream_t1178954575 * __this, X509CertificateCollection_t3336811651 * ___collection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslClientStream::OnRemoteCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C"  bool SslClientStream_OnRemoteCertificateValidation_m2995372221 (SslClientStream_t1178954575 * __this, X509Certificate_t3432067208 * ___certificate0, Int32U5BU5D_t1809983122* ___errors1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C"  bool SslClientStream_RaiseServerCertificateValidation_m738622279 (SslClientStream_t1178954575 * __this, X509Certificate_t3432067208 * ___certificate0, Int32U5BU5D_t1809983122* ___certificateErrors1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslClientStream::RaiseServerCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
extern "C"  ValidationResult_t2397874734 * SslClientStream_RaiseServerCertificateValidation2_m1222389749 (SslClientStream_t1178954575 * __this, X509CertificateCollection_t3336811651 * ___collection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslClientStream::RaiseClientCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C"  X509Certificate_t3432067208 * SslClientStream_RaiseClientCertificateSelection_m4278211596 (SslClientStream_t1178954575 * __this, X509CertificateCollection_t2200082950 * ___clientCertificates0, X509Certificate_t3432067208 * ___serverCertificate1, String_t* ___targetHost2, X509CertificateCollection_t2200082950 * ___serverRequestedCertificates3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslClientStream::OnLocalPrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C"  AsymmetricAlgorithm_t4236534322 * SslClientStream_OnLocalPrivateKeySelection_m3261566884 (SslClientStream_t1178954575 * __this, X509Certificate_t3432067208 * ___certificate0, String_t* ___targetHost1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslClientStream::RaisePrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C"  AsymmetricAlgorithm_t4236534322 * SslClientStream_RaisePrivateKeySelection_m3264140164 (SslClientStream_t1178954575 * __this, X509Certificate_t3432067208 * ___certificate0, String_t* ___targetHost1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
