#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.SslStreamBase
struct SslStreamBase_t1475;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1460;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1402;
// System.IO.Stream
struct Stream_t27;
// System.IAsyncResult
struct IAsyncResult_t472;
// System.AsyncCallback
struct AsyncCallback_t473;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1442;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t1185;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t1472;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1407;
// Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult
struct InternalAsyncResult_t1477;
// System.Byte[]
struct ByteU5BU5D_t97;
// Mono.Security.Protocol.Tls.CipherAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherAlgorithmType.h"
// Mono.Security.Protocol.Tls.HashAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_HashAlgorithmType.h"
// Mono.Security.Protocol.Tls.ExchangeAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_ExchangeAlgorithmTy.h"
// Mono.Security.Protocol.Tls.SecurityProtocolType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void Mono.Security.Protocol.Tls.SslStreamBase::.ctor(System.IO.Stream,System.Boolean)
 void SslStreamBase__ctor_m6187 (SslStreamBase_t1475 * __this, Stream_t27 * ___stream, bool ___ownsStream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::.cctor()
 void SslStreamBase__cctor_m6188 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::AsyncHandshakeCallback(System.IAsyncResult)
 void SslStreamBase_AsyncHandshakeCallback_m6189 (SslStreamBase_t1475 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_MightNeedHandshake()
 bool SslStreamBase_get_MightNeedHandshake_m6190 (SslStreamBase_t1475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::NegotiateHandshake()
 void SslStreamBase_NegotiateHandshake_m6191 (SslStreamBase_t1475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.SslStreamBase::OnBeginNegotiateHandshake(System.AsyncCallback,System.Object)
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::OnNegotiateHandshakeCallback(System.IAsyncResult)
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslStreamBase::OnLocalCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::OnRemoteCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslStreamBase::OnRemoteCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_HaveRemoteValidation2Callback()
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslStreamBase::OnLocalPrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslStreamBase::RaiseLocalCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
 X509Certificate_t1460 * SslStreamBase_RaiseLocalCertificateSelection_m6192 (SslStreamBase_t1475 * __this, X509CertificateCollection_t1442 * ___certificates, X509Certificate_t1460 * ___remoteCertificate, String_t* ___targetHost, X509CertificateCollection_t1442 * ___requestedCertificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::RaiseRemoteCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
 bool SslStreamBase_RaiseRemoteCertificateValidation_m6193 (SslStreamBase_t1475 * __this, X509Certificate_t1460 * ___certificate, Int32U5BU5D_t1185* ___errors, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslStreamBase::RaiseRemoteCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
 ValidationResult_t1472 * SslStreamBase_RaiseRemoteCertificateValidation2_m6194 (SslStreamBase_t1475 * __this, X509CertificateCollection_t1402 * ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslStreamBase::RaiseLocalPrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
 AsymmetricAlgorithm_t1407 * SslStreamBase_RaiseLocalPrivateKeySelection_m6195 (SslStreamBase_t1475 * __this, X509Certificate_t1460 * ___certificate, String_t* ___targetHost, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_CheckCertRevocationStatus()
 bool SslStreamBase_get_CheckCertRevocationStatus_m6196 (SslStreamBase_t1475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::set_CheckCertRevocationStatus(System.Boolean)
 void SslStreamBase_set_CheckCertRevocationStatus_m6197 (SslStreamBase_t1475 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherAlgorithmType Mono.Security.Protocol.Tls.SslStreamBase::get_CipherAlgorithm()
 int32_t SslStreamBase_get_CipherAlgorithm_m6198 (SslStreamBase_t1475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::get_CipherStrength()
 int32_t SslStreamBase_get_CipherStrength_m6199 (SslStreamBase_t1475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.HashAlgorithmType Mono.Security.Protocol.Tls.SslStreamBase::get_HashAlgorithm()
 int32_t SslStreamBase_get_HashAlgorithm_m6200 (SslStreamBase_t1475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::get_HashStrength()
 int32_t SslStreamBase_get_HashStrength_m6201 (SslStreamBase_t1475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::get_KeyExchangeStrength()
 int32_t SslStreamBase_get_KeyExchangeStrength_m6202 (SslStreamBase_t1475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ExchangeAlgorithmType Mono.Security.Protocol.Tls.SslStreamBase::get_KeyExchangeAlgorithm()
 int32_t SslStreamBase_get_KeyExchangeAlgorithm_m6203 (SslStreamBase_t1475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.SslStreamBase::get_SecurityProtocol()
 int32_t SslStreamBase_get_SecurityProtocol_m6204 (SslStreamBase_t1475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslStreamBase::get_ServerCertificate()
 X509Certificate_t1460 * SslStreamBase_get_ServerCertificate_m6205 (SslStreamBase_t1475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.Protocol.Tls.SslStreamBase::get_ServerCertificates()
 X509CertificateCollection_t1402 * SslStreamBase_get_ServerCertificates_m6206 (SslStreamBase_t1475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::BeginNegotiateHandshake(Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult)
 bool SslStreamBase_BeginNegotiateHandshake_m6207 (SslStreamBase_t1475 * __this, InternalAsyncResult_t1477 * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::EndNegotiateHandshake(Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult)
 void SslStreamBase_EndNegotiateHandshake_m6208 (SslStreamBase_t1475 * __this, InternalAsyncResult_t1477 * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.SslStreamBase::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * SslStreamBase_BeginRead_m6209 (SslStreamBase_t1475 * __this, ByteU5BU5D_t97* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t473 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::InternalBeginRead(Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult)
 void SslStreamBase_InternalBeginRead_m6210 (SslStreamBase_t1475 * __this, InternalAsyncResult_t1477 * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::InternalReadCallback(System.IAsyncResult)
 void SslStreamBase_InternalReadCallback_m6211 (SslStreamBase_t1475 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::InternalBeginWrite(Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult)
 void SslStreamBase_InternalBeginWrite_m6212 (SslStreamBase_t1475 * __this, InternalAsyncResult_t1477 * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::InternalWriteCallback(System.IAsyncResult)
 void SslStreamBase_InternalWriteCallback_m6213 (SslStreamBase_t1475 * __this, Object_t * ___ar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.SslStreamBase::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
 Object_t * SslStreamBase_BeginWrite_m6214 (SslStreamBase_t1475 * __this, ByteU5BU5D_t97* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t473 * ___callback, Object_t * ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::EndRead(System.IAsyncResult)
 int32_t SslStreamBase_EndRead_m6215 (SslStreamBase_t1475 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::EndWrite(System.IAsyncResult)
 void SslStreamBase_EndWrite_m6216 (SslStreamBase_t1475 * __this, Object_t * ___asyncResult, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Close()
 void SslStreamBase_Close_m6217 (SslStreamBase_t1475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Flush()
 void SslStreamBase_Flush_m6218 (SslStreamBase_t1475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::Read(System.Byte[])
 int32_t SslStreamBase_Read_m6219 (SslStreamBase_t1475 * __this, ByteU5BU5D_t97* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::Read(System.Byte[],System.Int32,System.Int32)
 int32_t SslStreamBase_Read_m6220 (SslStreamBase_t1475 * __this, ByteU5BU5D_t97* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.SslStreamBase::Seek(System.Int64,System.IO.SeekOrigin)
 int64_t SslStreamBase_Seek_m6221 (SslStreamBase_t1475 * __this, int64_t ___offset, int32_t ___origin, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::SetLength(System.Int64)
 void SslStreamBase_SetLength_m6222 (SslStreamBase_t1475 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Write(System.Byte[])
 void SslStreamBase_Write_m6223 (SslStreamBase_t1475 * __this, ByteU5BU5D_t97* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Write(System.Byte[],System.Int32,System.Int32)
 void SslStreamBase_Write_m6224 (SslStreamBase_t1475 * __this, ByteU5BU5D_t97* ___buffer, int32_t ___offset, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_CanRead()
 bool SslStreamBase_get_CanRead_m6225 (SslStreamBase_t1475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_CanSeek()
 bool SslStreamBase_get_CanSeek_m6226 (SslStreamBase_t1475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_CanWrite()
 bool SslStreamBase_get_CanWrite_m6227 (SslStreamBase_t1475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.SslStreamBase::get_Length()
 int64_t SslStreamBase_get_Length_m6228 (SslStreamBase_t1475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.SslStreamBase::get_Position()
 int64_t SslStreamBase_get_Position_m6229 (SslStreamBase_t1475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::set_Position(System.Int64)
 void SslStreamBase_set_Position_m6230 (SslStreamBase_t1475 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Finalize()
 void SslStreamBase_Finalize_m6231 (SslStreamBase_t1475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Dispose(System.Boolean)
 void SslStreamBase_Dispose_m6232 (SslStreamBase_t1475 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::resetBuffer()
 void SslStreamBase_resetBuffer_m6233 (SslStreamBase_t1475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::checkDisposed()
 void SslStreamBase_checkDisposed_m6234 (SslStreamBase_t1475 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
