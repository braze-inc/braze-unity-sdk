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

// Mono.Security.Protocol.Tls.CertificateValidationCallback
struct CertificateValidationCallback_t3726148045;
// System.Object
struct Il2CppObject;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3432067208;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Security_Cryptography_X509Certific3432067208.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Int322847414787.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void CertificateValidationCallback__ctor_m2692809593 (CertificateValidationCallback_t3726148045 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::Invoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C"  bool CertificateValidationCallback_Invoke_m481730652 (CertificateValidationCallback_t3726148045 * __this, X509Certificate_t3432067208 * ___certificate, Int32U5BU5D_t1809983122* ___certificateErrors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_CertificateValidationCallback_t3726148045(Il2CppObject* delegate, X509Certificate_t3432067208 * ___certificate, Int32U5BU5D_t1809983122* ___certificateErrors);
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[],System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CertificateValidationCallback_BeginInvoke_m1580004723 (CertificateValidationCallback_t3726148045 * __this, X509Certificate_t3432067208 * ___certificate, Int32U5BU5D_t1809983122* ___certificateErrors, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::EndInvoke(System.IAsyncResult)
extern "C"  bool CertificateValidationCallback_EndInvoke_m2267930199 (CertificateValidationCallback_t3726148045 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
