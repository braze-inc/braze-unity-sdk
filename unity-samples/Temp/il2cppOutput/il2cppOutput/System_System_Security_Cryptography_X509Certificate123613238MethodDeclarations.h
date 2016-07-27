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

// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t123613238;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t2583282360;
// System.Object
struct Il2CppObject;
// System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator
struct X509Certificate2Enumerator_t944265564;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_X509Certificate123613238.h"
#include "System_System_Security_Cryptography_X509Certificat2583282360.h"
#include "System_System_Security_Cryptography_X509Certificates68982992.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::.ctor()
extern "C"  void X509Certificate2Collection__ctor_m769271012 (X509Certificate2Collection_t123613238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate2Collection)
extern "C"  void X509Certificate2Collection__ctor_m576565548 (X509Certificate2Collection_t123613238 * __this, X509Certificate2Collection_t123613238 * ___certificates0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509Certificate2Collection::get_Item(System.Int32)
extern "C"  X509Certificate2_t2583282360 * X509Certificate2Collection_get_Item_m1131271090 (X509Certificate2Collection_t123613238 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Add(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  int32_t X509Certificate2Collection_Add_m1268164793 (X509Certificate2Collection_t123613238 * __this, X509Certificate2_t2583282360 * ___certificate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2Collection::AddRange(System.Security.Cryptography.X509Certificates.X509Certificate2Collection)
extern "C"  void X509Certificate2Collection_AddRange_m1617477316 (X509Certificate2Collection_t123613238 * __this, X509Certificate2Collection_t123613238 * ___certificates0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Contains(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  bool X509Certificate2Collection_Contains_m1344146715 (X509Certificate2Collection_t123613238 * __this, X509Certificate2_t2583282360 * ___certificate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Certificate2Collection::Find(System.Security.Cryptography.X509Certificates.X509FindType,System.Object,System.Boolean)
extern "C"  X509Certificate2Collection_t123613238 * X509Certificate2Collection_Find_m162772545 (X509Certificate2Collection_t123613238 * __this, int32_t ___findType0, Il2CppObject * ___findValue1, bool ___validOnly2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Enumerator System.Security.Cryptography.X509Certificates.X509Certificate2Collection::GetEnumerator()
extern "C"  X509Certificate2Enumerator_t944265564 * X509Certificate2Collection_GetEnumerator_m4202348315 (X509Certificate2Collection_t123613238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
