#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator
struct X509ExtensionEnumerator_t1623;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Extension
struct X509Extension_t1608;
// System.Collections.ArrayList
struct ArrayList_t1372;

// System.Void System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::.ctor(System.Collections.ArrayList)
 void X509ExtensionEnumerator__ctor_m7009 (X509ExtensionEnumerator_t1623 * __this, ArrayList_t1372 * ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::System.Collections.IEnumerator.get_Current()
 Object_t * X509ExtensionEnumerator_System_Collections_IEnumerator_get_Current_m7010 (X509ExtensionEnumerator_t1623 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Extension System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::get_Current()
 X509Extension_t1608 * X509ExtensionEnumerator_get_Current_m7011 (X509ExtensionEnumerator_t1623 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509ExtensionEnumerator::MoveNext()
 bool X509ExtensionEnumerator_MoveNext_m7012 (X509ExtensionEnumerator_t1623 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
