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

// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t3291243611;
// Mono.Security.ASN1
struct ASN1_t1254135647;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t3528692651;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_ASN11254135646.h"
#include "mscorlib_System_DateTime339033936.h"

// System.Void Mono.Security.X509.X509Crl/X509CrlEntry::.ctor(Mono.Security.ASN1)
extern "C"  void X509CrlEntry__ctor_m2720899934 (X509CrlEntry_t3291243611 * __this, ASN1_t1254135647 * ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::get_SerialNumber()
extern "C"  ByteU5BU5D_t58506160* X509CrlEntry_get_SerialNumber_m2092313770 (X509CrlEntry_t3291243611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl/X509CrlEntry::get_RevocationDate()
extern "C"  DateTime_t339033936  X509CrlEntry_get_RevocationDate_m1346115726 (X509CrlEntry_t3291243611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl/X509CrlEntry::get_Extensions()
extern "C"  X509ExtensionCollection_t3528692651 * X509CrlEntry_get_Extensions_m3036329986 (X509CrlEntry_t3291243611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
