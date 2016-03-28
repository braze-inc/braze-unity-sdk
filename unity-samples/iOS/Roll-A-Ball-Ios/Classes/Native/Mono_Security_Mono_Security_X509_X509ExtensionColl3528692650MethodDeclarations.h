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

// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t3528692651;
// Mono.Security.ASN1
struct ASN1_t1254135647;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.String
struct String_t;
// Mono.Security.X509.X509Extension
struct X509Extension_t1510964269;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_ASN11254135646.h"
#include "mscorlib_System_String968488902.h"

// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor()
extern "C"  void X509ExtensionCollection__ctor_m3777468326 (X509ExtensionCollection_t3528692651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor(Mono.Security.ASN1)
extern "C"  void X509ExtensionCollection__ctor_m2115523054 (X509ExtensionCollection_t3528692651 * __this, ASN1_t1254135647 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Mono.Security.X509.X509ExtensionCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * X509ExtensionCollection_System_Collections_IEnumerable_GetEnumerator_m2588592549 (X509ExtensionCollection_t3528692651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509ExtensionCollection::IndexOf(System.String)
extern "C"  int32_t X509ExtensionCollection_IndexOf_m1626273533 (X509ExtensionCollection_t3528692651 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Extension Mono.Security.X509.X509ExtensionCollection::get_Item(System.String)
extern "C"  X509Extension_t1510964269 * X509ExtensionCollection_get_Item_m2008681985 (X509ExtensionCollection_t3528692651 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
