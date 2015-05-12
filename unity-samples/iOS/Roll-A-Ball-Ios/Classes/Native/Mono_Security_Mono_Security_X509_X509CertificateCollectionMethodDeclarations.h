#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1402;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1406;
// System.Collections.IEnumerator
struct IEnumerator_t21;
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t1408;
// System.Byte[]
struct ByteU5BU5D_t97;

// System.Void Mono.Security.X509.X509CertificateCollection::.ctor()
 void X509CertificateCollection__ctor_m5774 (X509CertificateCollection_t1402 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509CertificateCollection::.ctor(Mono.Security.X509.X509CertificateCollection)
 void X509CertificateCollection__ctor_m5775 (X509CertificateCollection_t1402 * __this, X509CertificateCollection_t1402 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Mono.Security.X509.X509CertificateCollection::System.Collections.IEnumerable.GetEnumerator()
 Object_t * X509CertificateCollection_System_Collections_IEnumerable_GetEnumerator_m5776 (X509CertificateCollection_t1402 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509CertificateCollection::get_Item(System.Int32)
 X509Certificate_t1406 * X509CertificateCollection_get_Item_m5777 (X509CertificateCollection_t1402 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509CertificateCollection::Add(Mono.Security.X509.X509Certificate)
 int32_t X509CertificateCollection_Add_m5778 (X509CertificateCollection_t1402 * __this, X509Certificate_t1406 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509CertificateCollection::AddRange(Mono.Security.X509.X509CertificateCollection)
 void X509CertificateCollection_AddRange_m5779 (X509CertificateCollection_t1402 * __this, X509CertificateCollection_t1402 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509CertificateCollection::Contains(Mono.Security.X509.X509Certificate)
 bool X509CertificateCollection_Contains_m5780 (X509CertificateCollection_t1402 * __this, X509Certificate_t1406 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator Mono.Security.X509.X509CertificateCollection::GetEnumerator()
 X509CertificateEnumerator_t1408 * X509CertificateCollection_GetEnumerator_m5781 (X509CertificateCollection_t1402 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509CertificateCollection::GetHashCode()
 int32_t X509CertificateCollection_GetHashCode_m5782 (X509CertificateCollection_t1402 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509CertificateCollection::IndexOf(Mono.Security.X509.X509Certificate)
 int32_t X509CertificateCollection_IndexOf_m5783 (X509CertificateCollection_t1402 * __this, X509Certificate_t1406 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509CertificateCollection::Remove(Mono.Security.X509.X509Certificate)
 void X509CertificateCollection_Remove_m5784 (X509CertificateCollection_t1402 * __this, X509Certificate_t1406 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509CertificateCollection::Compare(System.Byte[],System.Byte[])
 bool X509CertificateCollection_Compare_m5785 (X509CertificateCollection_t1402 * __this, ByteU5BU5D_t97* ___array1, ByteU5BU5D_t97* ___array2, MethodInfo* method) IL2CPP_METHOD_ATTR;
