#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.TripleDESTransform
struct TripleDESTransform_t2173;
// System.Security.Cryptography.TripleDES
struct TripleDES_t1530;
// System.Byte[]
struct ByteU5BU5D_t97;

// System.Void System.Security.Cryptography.TripleDESTransform::.ctor(System.Security.Cryptography.TripleDES,System.Boolean,System.Byte[],System.Byte[])
 void TripleDESTransform__ctor_m10879 (TripleDESTransform_t2173 * __this, TripleDES_t1530 * ___algo, bool ___encryption, ByteU5BU5D_t97* ___key, ByteU5BU5D_t97* ___iv, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESTransform::ECB(System.Byte[],System.Byte[])
 void TripleDESTransform_ECB_m10880 (TripleDESTransform_t2173 * __this, ByteU5BU5D_t97* ___input, ByteU5BU5D_t97* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.TripleDESTransform::GetStrongKey()
 ByteU5BU5D_t97* TripleDESTransform_GetStrongKey_m10881 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
