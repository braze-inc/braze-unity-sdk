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

// System.Array
struct Il2CppArray;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"

// System.Int32 System.Buffer::ByteLength(System.Array)
extern "C"  int32_t Buffer_ByteLength_m3699202119 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C"  void Buffer_BlockCopy_m1580643184 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___src0, int32_t ___srcOffset1, Il2CppArray * ___dst2, int32_t ___dstOffset3, int32_t ___count4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Buffer::ByteLengthInternal(System.Array)
extern "C"  int32_t Buffer_ByteLengthInternal_m22076516 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___array0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Buffer::BlockCopyInternal(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C"  bool Buffer_BlockCopyInternal_m1988595087 (Il2CppObject * __this /* static, unused */, Il2CppArray * ___src0, int32_t ___src_offset1, Il2CppArray * ___dest2, int32_t ___dest_offset3, int32_t ___count4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
