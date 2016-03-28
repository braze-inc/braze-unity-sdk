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
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Security.Cryptography.RandomNumberGenerator::.ctor()
extern "C"  void RandomNumberGenerator__ctor_m2911340286 (RandomNumberGenerator_t2174318432 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RandomNumberGenerator::Create()
extern "C"  RandomNumberGenerator_t2174318432 * RandomNumberGenerator_Create_m2029084057 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RandomNumberGenerator::Create(System.String)
extern "C"  RandomNumberGenerator_t2174318432 * RandomNumberGenerator_Create_m3168592393 (Il2CppObject * __this /* static, unused */, String_t* ___rngName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
