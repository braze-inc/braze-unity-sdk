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

// Mono.Security.Protocol.Tls.CertificateValidationCallback2
struct CertificateValidationCallback2_t1582269749;
// System.Object
struct Il2CppObject;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t2397874734;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3336811651;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "Mono_Security_Mono_Security_X509_X509CertificateCo3336811650.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback2::.ctor(System.Object,System.IntPtr)
extern "C"  void CertificateValidationCallback2__ctor_m1854682743 (CertificateValidationCallback2_t1582269749 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::Invoke(Mono.Security.X509.X509CertificateCollection)
extern "C"  ValidationResult_t2397874734 * CertificateValidationCallback2_Invoke_m4228010672 (CertificateValidationCallback2_t1582269749 * __this, X509CertificateCollection_t3336811651 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" ValidationResult_t2397874734 * pinvoke_delegate_wrapper_CertificateValidationCallback2_t1582269749(Il2CppObject* delegate, X509CertificateCollection_t3336811651 * ___collection);
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::BeginInvoke(Mono.Security.X509.X509CertificateCollection,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CertificateValidationCallback2_BeginInvoke_m1231864174 (CertificateValidationCallback2_t1582269749 * __this, X509CertificateCollection_t3336811651 * ___collection, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::EndInvoke(System.IAsyncResult)
extern "C"  ValidationResult_t2397874734 * CertificateValidationCallback2_EndInvoke_m2684174416 (CertificateValidationCallback2_t1582269749 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
