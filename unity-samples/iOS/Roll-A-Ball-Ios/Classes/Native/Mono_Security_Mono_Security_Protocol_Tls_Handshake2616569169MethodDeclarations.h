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

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate
struct TlsServerCertificate_t2616569169;
// Mono.Security.Protocol.Tls.Context
struct Context_t4123145639;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t273828613;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3336811651;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context4123145639.h"
#include "Mono_Security_Mono_Security_X509_X509Certificate273828612.h"
#include "Mono_Security_Mono_Security_X509_X509CertificateCo3336811650.h"
#include "mscorlib_System_String968488902.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C"  void TlsServerCertificate__ctor_m1168678195 (TlsServerCertificate_t2616569169 * __this, Context_t4123145639 * ___context, ByteU5BU5D_t58506160* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::Update()
extern "C"  void TlsServerCertificate_Update_m193766836 (TlsServerCertificate_t2616569169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsSsl3()
extern "C"  void TlsServerCertificate_ProcessAsSsl3_m3288731615 (TlsServerCertificate_t2616569169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsTls1()
extern "C"  void TlsServerCertificate_ProcessAsTls1_m3311102734 (TlsServerCertificate_t2616569169 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkCertificateUsage(Mono.Security.X509.X509Certificate)
extern "C"  bool TlsServerCertificate_checkCertificateUsage_m810534703 (TlsServerCertificate_t2616569169 * __this, X509Certificate_t273828613 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::validateCertificates(Mono.Security.X509.X509CertificateCollection)
extern "C"  void TlsServerCertificate_validateCertificates_m3450033811 (TlsServerCertificate_t2616569169 * __this, X509CertificateCollection_t3336811651 * ___certificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkServerIdentity(Mono.Security.X509.X509Certificate)
extern "C"  bool TlsServerCertificate_checkServerIdentity_m2567428742 (TlsServerCertificate_t2616569169 * __this, X509Certificate_t273828613 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkDomainName(System.String)
extern "C"  bool TlsServerCertificate_checkDomainName_m205565698 (TlsServerCertificate_t2616569169 * __this, String_t* ___subjectName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::Match(System.String,System.String)
extern "C"  bool TlsServerCertificate_Match_m265784176 (Il2CppObject * __this /* static, unused */, String_t* ___hostname, String_t* ___pattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
