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

// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t4087051103;
// System.Object
struct Il2CppObject;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3432067208;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t2831591730;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Security_Cryptography_X509Certific3432067208.h"
#include "System_System_Security_Cryptography_X509Certificat2831591730.h"
#include "System_System_Net_Security_SslPolicyErrors3085256601.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Net.Security.RemoteCertificateValidationCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void RemoteCertificateValidationCallback__ctor_m1684204841 (RemoteCertificateValidationCallback_t4087051103 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.RemoteCertificateValidationCallback::Invoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern "C"  bool RemoteCertificateValidationCallback_Invoke_m2321994438 (RemoteCertificateValidationCallback_t4087051103 * __this, Il2CppObject * ___sender, X509Certificate_t3432067208 * ___certificate, X509Chain_t2831591730 * ___chain, int32_t ___sslPolicyErrors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_RemoteCertificateValidationCallback_t4087051103(Il2CppObject* delegate, Il2CppObject * ___sender, X509Certificate_t3432067208 * ___certificate, X509Chain_t2831591730 * ___chain, int32_t ___sslPolicyErrors);
// System.IAsyncResult System.Net.Security.RemoteCertificateValidationCallback::BeginInvoke(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * RemoteCertificateValidationCallback_BeginInvoke_m3899812411 (RemoteCertificateValidationCallback_t4087051103 * __this, Il2CppObject * ___sender, X509Certificate_t3432067208 * ___certificate, X509Chain_t2831591730 * ___chain, int32_t ___sslPolicyErrors, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.RemoteCertificateValidationCallback::EndInvoke(System.IAsyncResult)
extern "C"  bool RemoteCertificateValidationCallback_EndInvoke_m3362576995 (RemoteCertificateValidationCallback_t4087051103 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
