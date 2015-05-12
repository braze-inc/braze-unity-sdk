#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.CertificateValidationCallback2
struct CertificateValidationCallback2_t1474;
// System.Object
struct Object_t;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t1472;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1402;
// System.IAsyncResult
struct IAsyncResult_t472;
// System.AsyncCallback
struct AsyncCallback_t473;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback2::.ctor(System.Object,System.IntPtr)
 void CertificateValidationCallback2__ctor_m6371 (CertificateValidationCallback2_t1474 * __this, Object_t * ___object, IntPtr_t107 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::Invoke(Mono.Security.X509.X509CertificateCollection)
 ValidationResult_t1472 * CertificateValidationCallback2_Invoke_m6372 (CertificateValidationCallback2_t1474 * __this, X509CertificateCollection_t1402 * ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::BeginInvoke(Mono.Security.X509.X509CertificateCollection,System.AsyncCallback,System.Object)
 Object_t * CertificateValidationCallback2_BeginInvoke_m6373 (CertificateValidationCallback2_t1474 * __this, X509CertificateCollection_t1402 * ___collection, AsyncCallback_t473 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::EndInvoke(System.IAsyncResult)
 ValidationResult_t1472 * CertificateValidationCallback2_EndInvoke_m6374 (CertificateValidationCallback2_t1474 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
