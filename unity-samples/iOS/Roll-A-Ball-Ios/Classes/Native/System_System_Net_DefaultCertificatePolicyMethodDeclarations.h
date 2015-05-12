#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.DefaultCertificatePolicy
struct DefaultCertificatePolicy_t1578;
// System.Net.ServicePoint
struct ServicePoint_t1536;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1460;
// System.Net.WebRequest
struct WebRequest_t1537;

// System.Void System.Net.DefaultCertificatePolicy::.ctor()
 void DefaultCertificatePolicy__ctor_m6747 (DefaultCertificatePolicy_t1578 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.DefaultCertificatePolicy::CheckValidationResult(System.Net.ServicePoint,System.Security.Cryptography.X509Certificates.X509Certificate,System.Net.WebRequest,System.Int32)
 bool DefaultCertificatePolicy_CheckValidationResult_m6748 (DefaultCertificatePolicy_t1578 * __this, ServicePoint_t1536 * ___point, X509Certificate_t1460 * ___certificate, WebRequest_t1537 * ___request, int32_t ___certificateProblem, MethodInfo* method) IL2CPP_METHOD_ATTR;
