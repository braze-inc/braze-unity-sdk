#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t1408;
// System.Object
struct Object_t;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1406;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1402;

// System.Void Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::.ctor(Mono.Security.X509.X509CertificateCollection)
 void X509CertificateEnumerator__ctor_m5769 (X509CertificateEnumerator_t1408 * __this, X509CertificateCollection_t1402 * ___mappings, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.get_Current()
 Object_t * X509CertificateEnumerator_System_Collections_IEnumerator_get_Current_m5770 (X509CertificateEnumerator_t1408 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.MoveNext()
 bool X509CertificateEnumerator_System_Collections_IEnumerator_MoveNext_m5771 (X509CertificateEnumerator_t1408 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::get_Current()
 X509Certificate_t1406 * X509CertificateEnumerator_get_Current_m5772 (X509CertificateEnumerator_t1408 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::MoveNext()
 bool X509CertificateEnumerator_MoveNext_m5773 (X509CertificateEnumerator_t1408 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
