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

// System.Security.Cryptography.TripleDESTransform
struct TripleDESTransform_t390189137;
// System.Security.Cryptography.TripleDES
struct TripleDES_t3174934509;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_TripleDES3174934509.h"

// System.Void System.Security.Cryptography.TripleDESTransform::.ctor(System.Security.Cryptography.TripleDES,System.Boolean,System.Byte[],System.Byte[])
extern "C"  void TripleDESTransform__ctor_m3679252923 (TripleDESTransform_t390189137 * __this, TripleDES_t3174934509 * ___algo, bool ___encryption, ByteU5BU5D_t58506160* ___key, ByteU5BU5D_t58506160* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESTransform::ECB(System.Byte[],System.Byte[])
extern "C"  void TripleDESTransform_ECB_m1823441441 (TripleDESTransform_t390189137 * __this, ByteU5BU5D_t58506160* ___input, ByteU5BU5D_t58506160* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.TripleDESTransform::GetStrongKey()
extern "C"  ByteU5BU5D_t58506160* TripleDESTransform_GetStrongKey_m101650019 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
