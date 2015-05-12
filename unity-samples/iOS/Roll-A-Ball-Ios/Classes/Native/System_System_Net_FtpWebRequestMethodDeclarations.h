#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FtpWebRequest
struct FtpWebRequest_t1584;
// System.Uri
struct Uri_t61;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1460;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t1539;
// System.Net.Security.SslPolicyErrors
#include "System_System_Net_Security_SslPolicyErrors.h"

// System.Void System.Net.FtpWebRequest::.ctor(System.Uri)
 void FtpWebRequest__ctor_m6757 (FtpWebRequest_t1584 * __this, Uri_t61 * ___uri, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::.cctor()
 void FtpWebRequest__cctor_m6758 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::<callback>m__B(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
 bool FtpWebRequest_U3CcallbackU3Em__B_m6759 (Object_t * __this/* static, unused */, Object_t * ___sender, X509Certificate_t1460 * ___certificate, X509Chain_t1539 * ___chain, int32_t ___sslPolicyErrors, MethodInfo* method) IL2CPP_METHOD_ATTR;
