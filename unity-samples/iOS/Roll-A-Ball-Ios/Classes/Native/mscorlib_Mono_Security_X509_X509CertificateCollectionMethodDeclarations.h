#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1824;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1829;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t1830;

// System.Void Mono.Security.X509.X509CertificateCollection::.ctor()
 void X509CertificateCollection__ctor_m8869 (X509CertificateCollection_t1824 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Mono.Security.X509.X509CertificateCollection::System.Collections.IEnumerable.GetEnumerator()
 Object_t * X509CertificateCollection_System_Collections_IEnumerable_GetEnumerator_m8870 (X509CertificateCollection_t1824 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509CertificateCollection::get_Item(System.Int32)
 X509Certificate_t1829 * X509CertificateCollection_get_Item_m8871 (X509CertificateCollection_t1824 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509CertificateCollection::Add(Mono.Security.X509.X509Certificate)
 int32_t X509CertificateCollection_Add_m8872 (X509CertificateCollection_t1824 * __this, X509Certificate_t1829 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator Mono.Security.X509.X509CertificateCollection::GetEnumerator()
 X509CertificateEnumerator_t1830 * X509CertificateCollection_GetEnumerator_m8873 (X509CertificateCollection_t1824 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509CertificateCollection::GetHashCode()
 int32_t X509CertificateCollection_GetHashCode_m8874 (X509CertificateCollection_t1824 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
