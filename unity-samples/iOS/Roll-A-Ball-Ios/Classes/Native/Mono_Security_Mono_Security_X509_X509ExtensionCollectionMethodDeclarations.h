#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t1416;
// Mono.Security.X509.X509Extension
struct X509Extension_t1425;
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t1384;
// System.Collections.IEnumerator
struct IEnumerator_t19;

// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor()
 void X509ExtensionCollection__ctor_m5918 (X509ExtensionCollection_t1416 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor(Mono.Security.ASN1)
 void X509ExtensionCollection__ctor_m5919 (X509ExtensionCollection_t1416 * __this, ASN1_t1384 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Mono.Security.X509.X509ExtensionCollection::System.Collections.IEnumerable.GetEnumerator()
 Object_t * X509ExtensionCollection_System_Collections_IEnumerable_GetEnumerator_m5920 (X509ExtensionCollection_t1416 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509ExtensionCollection::IndexOf(System.String)
 int32_t X509ExtensionCollection_IndexOf_m5921 (X509ExtensionCollection_t1416 * __this, String_t* ___oid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Extension Mono.Security.X509.X509ExtensionCollection::get_Item(System.String)
 X509Extension_t1425 * X509ExtensionCollection_get_Item_m5922 (X509ExtensionCollection_t1416 * __this, String_t* ___oid, MethodInfo* method) IL2CPP_METHOD_ATTR;
