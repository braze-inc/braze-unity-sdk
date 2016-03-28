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

// System.Security.Cryptography.OidEnumerator
struct OidEnumerator_t2288561735;
// System.Security.Cryptography.OidCollection
struct OidCollection_t1467909409;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_OidCollection1467909409.h"

// System.Void System.Security.Cryptography.OidEnumerator::.ctor(System.Security.Cryptography.OidCollection)
extern "C"  void OidEnumerator__ctor_m1686464972 (OidEnumerator_t2288561735 * __this, OidCollection_t1467909409 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.OidEnumerator::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * OidEnumerator_System_Collections_IEnumerator_get_Current_m530360623 (OidEnumerator_t2288561735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.OidEnumerator::MoveNext()
extern "C"  bool OidEnumerator_MoveNext_m3766070973 (OidEnumerator_t2288561735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.OidEnumerator::Reset()
extern "C"  void OidEnumerator_Reset_m2251511182 (OidEnumerator_t2288561735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
