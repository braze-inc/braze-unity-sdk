#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RC2Transform
struct RC2Transform_t2150;
// System.Security.Cryptography.RC2
struct RC2_t1529;
// System.Byte[]
struct ByteU5BU5D_t97;

// System.Void System.Security.Cryptography.RC2Transform::.ctor(System.Security.Cryptography.RC2,System.Boolean,System.Byte[],System.Byte[])
 void RC2Transform__ctor_m10705 (RC2Transform_t2150 * __this, RC2_t1529 * ___rc2Algo, bool ___encryption, ByteU5BU5D_t97* ___key, ByteU5BU5D_t97* ___iv, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RC2Transform::.cctor()
 void RC2Transform__cctor_m10706 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RC2Transform::ECB(System.Byte[],System.Byte[])
 void RC2Transform_ECB_m10707 (RC2Transform_t2150 * __this, ByteU5BU5D_t97* ___input, ByteU5BU5D_t97* ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
