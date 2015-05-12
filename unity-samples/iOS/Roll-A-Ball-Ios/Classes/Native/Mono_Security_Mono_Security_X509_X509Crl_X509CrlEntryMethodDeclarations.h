#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t1423;
// System.Byte[]
struct ByteU5BU5D_t112;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t1416;
// Mono.Security.ASN1
struct ASN1_t1384;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl/X509CrlEntry::.ctor(Mono.Security.ASN1)
 void X509CrlEntry__ctor_m5890 (X509CrlEntry_t1423 * __this, ASN1_t1384 * ___entry, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::get_SerialNumber()
 ByteU5BU5D_t112* X509CrlEntry_get_SerialNumber_m5891 (X509CrlEntry_t1423 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl/X509CrlEntry::get_RevocationDate()
 DateTime_t850  X509CrlEntry_get_RevocationDate_m5892 (X509CrlEntry_t1423 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl/X509CrlEntry::get_Extensions()
 X509ExtensionCollection_t1416 * X509CrlEntry_get_Extensions_m5893 (X509CrlEntry_t1423 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
