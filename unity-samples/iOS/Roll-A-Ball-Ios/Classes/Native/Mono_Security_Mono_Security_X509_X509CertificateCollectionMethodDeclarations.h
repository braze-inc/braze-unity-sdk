#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1413;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1417;
// System.Collections.IEnumerator
struct IEnumerator_t19;
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t1419;
// System.Byte[]
struct ByteU5BU5D_t112;

// System.Void Mono.Security.X509.X509CertificateCollection::.ctor()
 void X509CertificateCollection__ctor_m5868 (X509CertificateCollection_t1413 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509CertificateCollection::.ctor(Mono.Security.X509.X509CertificateCollection)
 void X509CertificateCollection__ctor_m5869 (X509CertificateCollection_t1413 * __this, X509CertificateCollection_t1413 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Mono.Security.X509.X509CertificateCollection::System.Collections.IEnumerable.GetEnumerator()
 Object_t * X509CertificateCollection_System_Collections_IEnumerable_GetEnumerator_m5870 (X509CertificateCollection_t1413 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509CertificateCollection::get_Item(System.Int32)
 X509Certificate_t1417 * X509CertificateCollection_get_Item_m5871 (X509CertificateCollection_t1413 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509CertificateCollection::Add(Mono.Security.X509.X509Certificate)
 int32_t X509CertificateCollection_Add_m5872 (X509CertificateCollection_t1413 * __this, X509Certificate_t1417 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509CertificateCollection::AddRange(Mono.Security.X509.X509CertificateCollection)
 void X509CertificateCollection_AddRange_m5873 (X509CertificateCollection_t1413 * __this, X509CertificateCollection_t1413 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509CertificateCollection::Contains(Mono.Security.X509.X509Certificate)
 bool X509CertificateCollection_Contains_m5874 (X509CertificateCollection_t1413 * __this, X509Certificate_t1417 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator Mono.Security.X509.X509CertificateCollection::GetEnumerator()
 X509CertificateEnumerator_t1419 * X509CertificateCollection_GetEnumerator_m5875 (X509CertificateCollection_t1413 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509CertificateCollection::GetHashCode()
 int32_t X509CertificateCollection_GetHashCode_m5876 (X509CertificateCollection_t1413 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509CertificateCollection::IndexOf(Mono.Security.X509.X509Certificate)
 int32_t X509CertificateCollection_IndexOf_m5877 (X509CertificateCollection_t1413 * __this, X509Certificate_t1417 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509CertificateCollection::Remove(Mono.Security.X509.X509Certificate)
 void X509CertificateCollection_Remove_m5878 (X509CertificateCollection_t1413 * __this, X509Certificate_t1417 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509CertificateCollection::Compare(System.Byte[],System.Byte[])
 bool X509CertificateCollection_Compare_m5879 (X509CertificateCollection_t1413 * __this, ByteU5BU5D_t112* ___array1, ByteU5BU5D_t112* ___array2, MethodInfo* method) IL2CPP_METHOD_ATTR;
