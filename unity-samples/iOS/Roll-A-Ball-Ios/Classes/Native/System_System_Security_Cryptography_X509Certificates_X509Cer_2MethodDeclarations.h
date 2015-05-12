#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t1622;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t1549;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator
struct X509Certificate2Enumerator_t1623;
// System.Security.Cryptography.X509Certificates.X509FindType
#include "System_System_Security_Cryptography_X509Certificates_X509Fin.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::.ctor()
 void X509Certificate2Collection__ctor_m7004 (X509Certificate2Collection_t1622 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate2Collection)
 void X509Certificate2Collection__ctor_m7005 (X509Certificate2Collection_t1622 * __this, X509Certificate2Collection_t1622 * ___certificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509Certificate2Collection::get_Item(System.Int32)
 X509Certificate2_t1549 * X509Certificate2Collection_get_Item_m7006 (X509Certificate2Collection_t1622 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Add(System.Security.Cryptography.X509Certificates.X509Certificate2)
 int32_t X509Certificate2Collection_Add_m7007 (X509Certificate2Collection_t1622 * __this, X509Certificate2_t1549 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::AddRange(System.Security.Cryptography.X509Certificates.X509Certificate2Collection)
 void X509Certificate2Collection_AddRange_m7008 (X509Certificate2Collection_t1622 * __this, X509Certificate2Collection_t1622 * ___certificates, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Contains(System.Security.Cryptography.X509Certificates.X509Certificate2)
 bool X509Certificate2Collection_Contains_m7009 (X509Certificate2Collection_t1622 * __this, X509Certificate2_t1549 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Find(System.Security.Cryptography.X509Certificates.X509FindType,System.Object,System.Boolean)
 X509Certificate2Collection_t1622 * X509Certificate2Collection_Find_m7010 (X509Certificate2Collection_t1622 * __this, int32_t ___findType, Object_t * ___findValue, bool ___validOnly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator System.Security.Cryptography.X509Certificates.X509Certificate2Collection::GetEnumerator()
 X509Certificate2Enumerator_t1623 * X509Certificate2Collection_GetEnumerator_m7011 (X509Certificate2Collection_t1622 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
