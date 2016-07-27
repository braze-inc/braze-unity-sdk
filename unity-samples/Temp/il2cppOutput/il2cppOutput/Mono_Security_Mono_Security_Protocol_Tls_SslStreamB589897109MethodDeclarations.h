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

// Mono.Security.Protocol.Tls.SslStreamBase
struct SslStreamBase_t589897109;
// System.IO.Stream
struct Stream_t219029575;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3432067208;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2200082950;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t2397874734;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3336811651;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t4236534322;
// Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult
struct InternalAsyncResult_t2689067676;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.AsyncCallback
struct AsyncCallback_t1363551830;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "System_System_Security_Cryptography_X509Certificat2200082950.h"
#include "mscorlib_System_Security_Cryptography_X509Certific3432067208.h"
#include "mscorlib_System_String968488902.h"
#include "Mono_Security_Mono_Security_X509_X509CertificateCo3336811650.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherAlg3070348278.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_HashAlgor2506270163.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ExchangeA1807586014.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityP4015394186.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SslStream2689067676.h"
#include "mscorlib_System_AsyncCallback1363551830.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IO_SeekOrigin3506139269.h"

// System.Void Mono.Security.Protocol.Tls.SslStreamBase::.ctor(System.IO.Stream,System.Boolean)
extern "C"  void SslStreamBase__ctor_m1932094885 (SslStreamBase_t589897109 * __this, Stream_t219029575 * ___stream0, bool ___ownsStream1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::.cctor()
extern "C"  void SslStreamBase__cctor_m4024786316 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::AsyncHandshakeCallback(System.IAsyncResult)
extern "C"  void SslStreamBase_AsyncHandshakeCallback_m2999600224 (SslStreamBase_t589897109 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_MightNeedHandshake()
extern "C"  bool SslStreamBase_get_MightNeedHandshake_m3486515364 (SslStreamBase_t589897109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::NegotiateHandshake()
extern "C"  void SslStreamBase_NegotiateHandshake_m4275951676 (SslStreamBase_t589897109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslStreamBase::RaiseLocalCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C"  X509Certificate_t3432067208 * SslStreamBase_RaiseLocalCertificateSelection_m3048410672 (SslStreamBase_t589897109 * __this, X509CertificateCollection_t2200082950 * ___certificates0, X509Certificate_t3432067208 * ___remoteCertificate1, String_t* ___targetHost2, X509CertificateCollection_t2200082950 * ___requestedCertificates3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::RaiseRemoteCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C"  bool SslStreamBase_RaiseRemoteCertificateValidation_m1070332522 (SslStreamBase_t589897109 * __this, X509Certificate_t3432067208 * ___certificate0, Int32U5BU5D_t1809983122* ___errors1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslStreamBase::RaiseRemoteCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
extern "C"  ValidationResult_t2397874734 * SslStreamBase_RaiseRemoteCertificateValidation2_m2704286450 (SslStreamBase_t589897109 * __this, X509CertificateCollection_t3336811651 * ___collection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslStreamBase::RaiseLocalPrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C"  AsymmetricAlgorithm_t4236534322 * SslStreamBase_RaiseLocalPrivateKeySelection_m2365509687 (SslStreamBase_t589897109 * __this, X509Certificate_t3432067208 * ___certificate0, String_t* ___targetHost1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_CheckCertRevocationStatus()
extern "C"  bool SslStreamBase_get_CheckCertRevocationStatus_m3165157124 (SslStreamBase_t589897109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::set_CheckCertRevocationStatus(System.Boolean)
extern "C"  void SslStreamBase_set_CheckCertRevocationStatus_m2461874581 (SslStreamBase_t589897109 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherAlgorithmType Mono.Security.Protocol.Tls.SslStreamBase::get_CipherAlgorithm()
extern "C"  int32_t SslStreamBase_get_CipherAlgorithm_m4086753563 (SslStreamBase_t589897109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::get_CipherStrength()
extern "C"  int32_t SslStreamBase_get_CipherStrength_m2205541504 (SslStreamBase_t589897109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.HashAlgorithmType Mono.Security.Protocol.Tls.SslStreamBase::get_HashAlgorithm()
extern "C"  int32_t SslStreamBase_get_HashAlgorithm_m3705882325 (SslStreamBase_t589897109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::get_HashStrength()
extern "C"  int32_t SslStreamBase_get_HashStrength_m769179779 (SslStreamBase_t589897109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::get_KeyExchangeStrength()
extern "C"  int32_t SslStreamBase_get_KeyExchangeStrength_m4089580817 (SslStreamBase_t589897109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ExchangeAlgorithmType Mono.Security.Protocol.Tls.SslStreamBase::get_KeyExchangeAlgorithm()
extern "C"  int32_t SslStreamBase_get_KeyExchangeAlgorithm_m3009312272 (SslStreamBase_t589897109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.SslStreamBase::get_SecurityProtocol()
extern "C"  int32_t SslStreamBase_get_SecurityProtocol_m2787356191 (SslStreamBase_t589897109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslStreamBase::get_ServerCertificate()
extern "C"  X509Certificate_t3432067208 * SslStreamBase_get_ServerCertificate_m2089787471 (SslStreamBase_t589897109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.Protocol.Tls.SslStreamBase::get_ServerCertificates()
extern "C"  X509CertificateCollection_t3336811651 * SslStreamBase_get_ServerCertificates_m925494264 (SslStreamBase_t589897109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::BeginNegotiateHandshake(Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult)
extern "C"  bool SslStreamBase_BeginNegotiateHandshake_m2998761743 (SslStreamBase_t589897109 * __this, InternalAsyncResult_t2689067676 * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::EndNegotiateHandshake(Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult)
extern "C"  void SslStreamBase_EndNegotiateHandshake_m2402424015 (SslStreamBase_t589897109 * __this, InternalAsyncResult_t2689067676 * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.SslStreamBase::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SslStreamBase_BeginRead_m1224799779 (SslStreamBase_t589897109 * __this, ByteU5BU5D_t58506160* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t1363551830 * ___callback3, Il2CppObject * ___state4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::InternalBeginRead(Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult)
extern "C"  void SslStreamBase_InternalBeginRead_m2665365405 (SslStreamBase_t589897109 * __this, InternalAsyncResult_t2689067676 * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::InternalReadCallback(System.IAsyncResult)
extern "C"  void SslStreamBase_InternalReadCallback_m4035244488 (SslStreamBase_t589897109 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::InternalBeginWrite(Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult)
extern "C"  void SslStreamBase_InternalBeginWrite_m3259256466 (SslStreamBase_t589897109 * __this, InternalAsyncResult_t2689067676 * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::InternalWriteCallback(System.IAsyncResult)
extern "C"  void SslStreamBase_InternalWriteCallback_m1764266237 (SslStreamBase_t589897109 * __this, Il2CppObject * ___ar0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.SslStreamBase::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SslStreamBase_BeginWrite_m1786584070 (SslStreamBase_t589897109 * __this, ByteU5BU5D_t58506160* ___buffer0, int32_t ___offset1, int32_t ___count2, AsyncCallback_t1363551830 * ___callback3, Il2CppObject * ___state4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::EndRead(System.IAsyncResult)
extern "C"  int32_t SslStreamBase_EndRead_m29185563 (SslStreamBase_t589897109 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::EndWrite(System.IAsyncResult)
extern "C"  void SslStreamBase_EndWrite_m2816354780 (SslStreamBase_t589897109 * __this, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Close()
extern "C"  void SslStreamBase_Close_m3657358167 (SslStreamBase_t589897109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Flush()
extern "C"  void SslStreamBase_Flush_m2030445923 (SslStreamBase_t589897109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::Read(System.Byte[])
extern "C"  int32_t SslStreamBase_Read_m558115208 (SslStreamBase_t589897109 * __this, ByteU5BU5D_t58506160* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t SslStreamBase_Read_m2805310696 (SslStreamBase_t589897109 * __this, ByteU5BU5D_t58506160* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.SslStreamBase::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t SslStreamBase_Seek_m3066335689 (SslStreamBase_t589897109 * __this, int64_t ___offset0, int32_t ___origin1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::SetLength(System.Int64)
extern "C"  void SslStreamBase_SetLength_m1474200217 (SslStreamBase_t589897109 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Write(System.Byte[])
extern "C"  void SslStreamBase_Write_m1278747915 (SslStreamBase_t589897109 * __this, ByteU5BU5D_t58506160* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void SslStreamBase_Write_m139555499 (SslStreamBase_t589897109 * __this, ByteU5BU5D_t58506160* ___buffer0, int32_t ___offset1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_CanRead()
extern "C"  bool SslStreamBase_get_CanRead_m780009774 (SslStreamBase_t589897109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_CanSeek()
extern "C"  bool SslStreamBase_get_CanSeek_m808764816 (SslStreamBase_t589897109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_CanWrite()
extern "C"  bool SslStreamBase_get_CanWrite_m3228120041 (SslStreamBase_t589897109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.SslStreamBase::get_Length()
extern "C"  int64_t SslStreamBase_get_Length_m3676785979 (SslStreamBase_t589897109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.SslStreamBase::get_Position()
extern "C"  int64_t SslStreamBase_get_Position_m3149709758 (SslStreamBase_t589897109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::set_Position(System.Int64)
extern "C"  void SslStreamBase_set_Position_m718728987 (SslStreamBase_t589897109 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Finalize()
extern "C"  void SslStreamBase_Finalize_m1889580673 (SslStreamBase_t589897109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Dispose(System.Boolean)
extern "C"  void SslStreamBase_Dispose_m927762229 (SslStreamBase_t589897109 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::resetBuffer()
extern "C"  void SslStreamBase_resetBuffer_m54784942 (SslStreamBase_t589897109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::checkDisposed()
extern "C"  void SslStreamBase_checkDisposed_m2873255308 (SslStreamBase_t589897109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
