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

// Mono.Security.Protocol.Tls.CertificateSelectionCallback
struct CertificateSelectionCallback_t3257378130;
// System.Object
struct Il2CppObject;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3432067208;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2200082950;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "System_System_Security_Cryptography_X509Certificat2200082950.h"
#include "mscorlib_System_Security_Cryptography_X509Certific3432067208.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Mono.Security.Protocol.Tls.CertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void CertificateSelectionCallback__ctor_m2794002132 (CertificateSelectionCallback_t3257378130 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C"  X509Certificate_t3432067208 * CertificateSelectionCallback_Invoke_m1413516687 (CertificateSelectionCallback_t3257378130 * __this, X509CertificateCollection_t2200082950 * ___clientCertificates, X509Certificate_t3432067208 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t2200082950 * ___serverRequestedCertificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" X509Certificate_t3432067208 * pinvoke_delegate_wrapper_CertificateSelectionCallback_t3257378130(Il2CppObject* delegate, X509CertificateCollection_t2200082950 * ___clientCertificates, X509Certificate_t3432067208 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t2200082950 * ___serverRequestedCertificates);
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateSelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CertificateSelectionCallback_BeginInvoke_m1304521025 (CertificateSelectionCallback_t3257378130 * __this, X509CertificateCollection_t2200082950 * ___clientCertificates, X509Certificate_t3432067208 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t2200082950 * ___serverRequestedCertificates, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::EndInvoke(System.IAsyncResult)
extern "C"  X509Certificate_t3432067208 * CertificateSelectionCallback_EndInvoke_m3027480361 (CertificateSelectionCallback_t3257378130 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
