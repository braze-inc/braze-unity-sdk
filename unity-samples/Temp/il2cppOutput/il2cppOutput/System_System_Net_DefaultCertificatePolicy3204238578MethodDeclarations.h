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

// System.Net.DefaultCertificatePolicy
struct DefaultCertificatePolicy_t3204238578;
// System.Net.ServicePoint
struct ServicePoint_t28240741;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3432067208;
// System.Net.WebRequest
struct WebRequest_t3488810021;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_ServicePoint28240741.h"
#include "mscorlib_System_Security_Cryptography_X509Certific3432067208.h"
#include "System_System_Net_WebRequest3488810021.h"

// System.Void System.Net.DefaultCertificatePolicy::.ctor()
extern "C"  void DefaultCertificatePolicy__ctor_m4248919730 (DefaultCertificatePolicy_t3204238578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.DefaultCertificatePolicy::CheckValidationResult(System.Net.ServicePoint,System.Security.Cryptography.X509Certificates.X509Certificate,System.Net.WebRequest,System.Int32)
extern "C"  bool DefaultCertificatePolicy_CheckValidationResult_m4124026463 (DefaultCertificatePolicy_t3204238578 * __this, ServicePoint_t28240741 * ___point0, X509Certificate_t3432067208 * ___certificate1, WebRequest_t3488810021 * ___request2, int32_t ___certificateProblem3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
