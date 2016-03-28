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

// System.Type
struct Type_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryCommon::.cctor()
extern "C"  void BinaryCommon__cctor_m1035902784 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.Formatters.Binary.BinaryCommon::IsPrimitive(System.Type)
extern "C"  bool BinaryCommon_IsPrimitive_m1612386671 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Serialization.Formatters.Binary.BinaryCommon::GetTypeFromCode(System.Int32)
extern "C"  Type_t * BinaryCommon_GetTypeFromCode_m4044019293 (Il2CppObject * __this /* static, unused */, int32_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryCommon::SwapBytes(System.Byte[],System.Int32,System.Int32)
extern "C"  void BinaryCommon_SwapBytes_m2472266694 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___byteArray, int32_t ___size, int32_t ___dataSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
