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

// System.Security.Cryptography.RC2Transform
struct RC2Transform_t941602180;
// System.Security.Cryptography.RC2
struct RC2_t1557564762;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_RC21557564762.h"

// System.Void System.Security.Cryptography.RC2Transform::.ctor(System.Security.Cryptography.RC2,System.Boolean,System.Byte[],System.Byte[])
extern "C"  void RC2Transform__ctor_m3390235803 (RC2Transform_t941602180 * __this, RC2_t1557564762 * ___rc2Algo, bool ___encryption, ByteU5BU5D_t58506160* ___key, ByteU5BU5D_t58506160* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RC2Transform::.cctor()
extern "C"  void RC2Transform__cctor_m754720983 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RC2Transform::ECB(System.Byte[],System.Byte[])
extern "C"  void RC2Transform_ECB_m224687124 (RC2Transform_t941602180 * __this, ByteU5BU5D_t58506160* ___input, ByteU5BU5D_t58506160* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
