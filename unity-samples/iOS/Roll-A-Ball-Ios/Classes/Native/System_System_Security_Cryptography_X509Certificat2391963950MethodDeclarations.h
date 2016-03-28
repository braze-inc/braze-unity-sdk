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

// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct X509ExtensionCollection_t2391963950;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t273828613;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Object
struct Il2CppObject;
// System.Security.Cryptography.X509Certificates.X509Extension
struct X509Extension_t374235568;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator
struct X509ExtensionEnumerator_t3212616276;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_X509_X509Certificate273828612.h"
#include "mscorlib_System_Array2840145358.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Security.Cryptography.X509Certificates.X509ExtensionCollection::.ctor(Mono.Security.X509.X509Certificate)
extern "C"  void X509ExtensionCollection__ctor_m3888740672 (X509ExtensionCollection_t2391963950 * __this, X509Certificate_t273828613 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ExtensionCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void X509ExtensionCollection_System_Collections_ICollection_CopyTo_m2862251608 (X509ExtensionCollection_t2391963950 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509ExtensionCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * X509ExtensionCollection_System_Collections_IEnumerable_GetEnumerator_m1951031507 (X509ExtensionCollection_t2391963950 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509ExtensionCollection::get_Count()
extern "C"  int32_t X509ExtensionCollection_get_Count_m2621259424 (X509ExtensionCollection_t2391963950 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509ExtensionCollection::get_IsSynchronized()
extern "C"  bool X509ExtensionCollection_get_IsSynchronized_m3201439337 (X509ExtensionCollection_t2391963950 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.X509Certificates.X509ExtensionCollection::get_SyncRoot()
extern "C"  Il2CppObject * X509ExtensionCollection_get_SyncRoot_m736404969 (X509ExtensionCollection_t2391963950 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Extension System.Security.Cryptography.X509Certificates.X509ExtensionCollection::get_Item(System.String)
extern "C"  X509Extension_t374235568 * X509ExtensionCollection_get_Item_m2341415937 (X509ExtensionCollection_t2391963950 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator System.Security.Cryptography.X509Certificates.X509ExtensionCollection::GetEnumerator()
extern "C"  X509ExtensionEnumerator_t3212616276 * X509ExtensionCollection_GetEnumerator_m4079469459 (X509ExtensionCollection_t2391963950 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
