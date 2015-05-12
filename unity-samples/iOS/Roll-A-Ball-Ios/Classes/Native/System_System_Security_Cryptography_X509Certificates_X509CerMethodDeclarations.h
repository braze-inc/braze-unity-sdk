#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1453;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1471;
// System.Security.Cryptography.X509Certificates.X509Certificate[]
struct X509CertificateU5BU5D_t1554;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t1557;

// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::.ctor()
 void X509CertificateCollection__ctor_m6703 (X509CertificateCollection_t1453 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate[])
 void X509CertificateCollection__ctor_m6702 (X509CertificateCollection_t1453 * __this, X509CertificateU5BU5D_t1554* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Cryptography.X509Certificates.X509CertificateCollection::get_Item(System.Int32)
 X509Certificate_t1471 * X509CertificateCollection_get_Item_m6681 (X509CertificateCollection_t1453 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::AddRange(System.Security.Cryptography.X509Certificates.X509Certificate[])
 void X509CertificateCollection_AddRange_m7020 (X509CertificateCollection_t1453 * __this, X509CertificateU5BU5D_t1554* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator System.Security.Cryptography.X509Certificates.X509CertificateCollection::GetEnumerator()
 X509CertificateEnumerator_t1557 * X509CertificateCollection_GetEnumerator_m6735 (X509CertificateCollection_t1453 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509CertificateCollection::GetHashCode()
 int32_t X509CertificateCollection_GetHashCode_m7021 (X509CertificateCollection_t1453 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
