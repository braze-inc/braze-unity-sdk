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

// System.Net.FtpWebRequest
struct FtpWebRequest_t2824072935;
// System.Uri
struct Uri_t2776692961;
// System.Object
struct Il2CppObject;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3432067208;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t2831591730;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri2776692961.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Security_Cryptography_X509Certific3432067208.h"
#include "System_System_Security_Cryptography_X509Certificat2831591730.h"
#include "System_System_Net_Security_SslPolicyErrors3085256601.h"

// System.Void System.Net.FtpWebRequest::.ctor(System.Uri)
extern "C"  void FtpWebRequest__ctor_m3137933378 (FtpWebRequest_t2824072935 * __this, Uri_t2776692961 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::.cctor()
extern "C"  void FtpWebRequest__cctor_m2914795070 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::<callback>m__B(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern "C"  bool FtpWebRequest_U3CcallbackU3Em__B_m1388175350 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___sender, X509Certificate_t3432067208 * ___certificate, X509Chain_t2831591730 * ___chain, int32_t ___sslPolicyErrors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
