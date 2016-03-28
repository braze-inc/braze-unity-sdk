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

// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2174318432;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.KeyBuilder::get_Rng()
extern "C"  RandomNumberGenerator_t2174318432 * KeyBuilder_get_Rng_m4045185360 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.KeyBuilder::Key(System.Int32)
extern "C"  ByteU5BU5D_t58506160* KeyBuilder_Key_m180785233 (Il2CppObject * __this /* static, unused */, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.KeyBuilder::IV(System.Int32)
extern "C"  ByteU5BU5D_t58506160* KeyBuilder_IV_m3476112319 (Il2CppObject * __this /* static, unused */, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
