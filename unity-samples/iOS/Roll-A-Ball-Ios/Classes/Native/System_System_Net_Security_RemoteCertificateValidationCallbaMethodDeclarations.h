#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t1540;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1460;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t1539;
// System.IAsyncResult
struct IAsyncResult_t472;
// System.AsyncCallback
struct AsyncCallback_t473;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Net.Security.SslPolicyErrors
#include "System_System_Net_Security_SslPolicyErrors.h"

// System.Void System.Net.Security.RemoteCertificateValidationCallback::.ctor(System.Object,System.IntPtr)
 void RemoteCertificateValidationCallback__ctor_m7498 (RemoteCertificateValidationCallback_t1540 * __this, Object_t * ___object, IntPtr_t107 ___method, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.RemoteCertificateValidationCallback::Invoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
 bool RemoteCertificateValidationCallback_Invoke_m6586 (RemoteCertificateValidationCallback_t1540 * __this, Object_t * ___sender, X509Certificate_t1460 * ___certificate, X509Chain_t1539 * ___chain, int32_t ___sslPolicyErrors, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.RemoteCertificateValidationCallback::BeginInvoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors,System.AsyncCallback,System.Object)
 Object_t * RemoteCertificateValidationCallback_BeginInvoke_m7499 (RemoteCertificateValidationCallback_t1540 * __this, Object_t * ___sender, X509Certificate_t1460 * ___certificate, X509Chain_t1539 * ___chain, int32_t ___sslPolicyErrors, AsyncCallback_t473 * ___callback, Object_t * ___object, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.RemoteCertificateValidationCallback::EndInvoke(System.IAsyncResult)
 bool RemoteCertificateValidationCallback_EndInvoke_m7500 (RemoteCertificateValidationCallback_t1540 * __this, Object_t * ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
