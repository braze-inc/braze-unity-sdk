#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1366;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t97;

// System.Void System.Security.Cryptography.RandomNumberGenerator::.ctor()
 void RandomNumberGenerator__ctor_m10764 (RandomNumberGenerator_t1366 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RandomNumberGenerator::Create()
 RandomNumberGenerator_t1366 * RandomNumberGenerator_Create_m6384 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RandomNumberGenerator::Create(System.String)
 RandomNumberGenerator_t1366 * RandomNumberGenerator_Create_m10765 (Object_t * __this/* static, unused */, String_t* ___rngName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RandomNumberGenerator::GetBytes(System.Byte[])
// System.Void System.Security.Cryptography.RandomNumberGenerator::GetNonZeroBytes(System.Byte[])
