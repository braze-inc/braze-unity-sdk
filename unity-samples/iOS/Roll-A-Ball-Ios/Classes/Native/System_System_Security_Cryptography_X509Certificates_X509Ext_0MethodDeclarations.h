#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct X509ExtensionCollection_t1621;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Extension
struct X509Extension_t1620;
// System.String
struct String_t;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1417;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t19;
// System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator
struct X509ExtensionEnumerator_t1635;

// System.Void System.Security.Cryptography.X509Certificates.X509ExtensionCollection::.ctor(Mono.Security.X509.X509Certificate)
 void X509ExtensionCollection__ctor_m7095 (X509ExtensionCollection_t1621 * __this, X509Certificate_t1417 * ___cert, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ExtensionCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void X509ExtensionCollection_System_Collections_ICollection_CopyTo_m7096 (X509ExtensionCollection_t1621 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509ExtensionCollection::System.Collections.IEnumerable.GetEnumerator()
 Object_t * X509ExtensionCollection_System_Collections_IEnumerable_GetEnumerator_m7097 (X509ExtensionCollection_t1621 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509ExtensionCollection::get_Count()
 int32_t X509ExtensionCollection_get_Count_m7098 (X509ExtensionCollection_t1621 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509ExtensionCollection::get_IsSynchronized()
 bool X509ExtensionCollection_get_IsSynchronized_m7099 (X509ExtensionCollection_t1621 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.X509Certificates.X509ExtensionCollection::get_SyncRoot()
 Object_t * X509ExtensionCollection_get_SyncRoot_m7100 (X509ExtensionCollection_t1621 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Extension System.Security.Cryptography.X509Certificates.X509ExtensionCollection::get_Item(System.String)
 X509Extension_t1620 * X509ExtensionCollection_get_Item_m7101 (X509ExtensionCollection_t1621 * __this, String_t* ___oid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator System.Security.Cryptography.X509Certificates.X509ExtensionCollection::GetEnumerator()
 X509ExtensionEnumerator_t1635 * X509ExtensionCollection_GetEnumerator_m7102 (X509ExtensionCollection_t1621 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
