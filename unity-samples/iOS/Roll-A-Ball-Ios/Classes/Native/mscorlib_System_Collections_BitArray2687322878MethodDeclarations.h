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

// System.Collections.BitArray
struct BitArray_t2687322878;
// System.Object
struct Il2CppObject;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_BitArray2687322878.h"
#include "mscorlib_System_Array2840145358.h"

// System.Void System.Collections.BitArray::.ctor(System.Collections.BitArray)
extern "C"  void BitArray__ctor_m3201524094 (BitArray_t2687322878 * __this, BitArray_t2687322878 * ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.BitArray::.ctor(System.Int32)
extern "C"  void BitArray__ctor_m4198813761 (BitArray_t2687322878 * __this, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Collections.BitArray::getByte(System.Int32)
extern "C"  uint8_t BitArray_getByte_m3145028169 (BitArray_t2687322878 * __this, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.BitArray::get_Count()
extern "C"  int32_t BitArray_get_Count_m3361743632 (BitArray_t2687322878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.BitArray::get_IsSynchronized()
extern "C"  bool BitArray_get_IsSynchronized_m1429626361 (BitArray_t2687322878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.BitArray::get_Item(System.Int32)
extern "C"  bool BitArray_get_Item_m2410594623 (BitArray_t2687322878 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.BitArray::set_Item(System.Int32,System.Boolean)
extern "C"  void BitArray_set_Item_m3947323368 (BitArray_t2687322878 * __this, int32_t ___index, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.BitArray::get_Length()
extern "C"  int32_t BitArray_get_Length_m3443319207 (BitArray_t2687322878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.BitArray::get_SyncRoot()
extern "C"  Il2CppObject * BitArray_get_SyncRoot_m2715422501 (BitArray_t2687322878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.BitArray::Clone()
extern "C"  Il2CppObject * BitArray_Clone_m2861181472 (BitArray_t2687322878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.BitArray::CopyTo(System.Array,System.Int32)
extern "C"  void BitArray_CopyTo_m4014022605 (BitArray_t2687322878 * __this, Il2CppArray * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.BitArray::Get(System.Int32)
extern "C"  bool BitArray_Get_m3891356663 (BitArray_t2687322878 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.BitArray::Set(System.Int32,System.Boolean)
extern "C"  void BitArray_Set_m3317154012 (BitArray_t2687322878 * __this, int32_t ___index, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.BitArray::GetEnumerator()
extern "C"  Il2CppObject * BitArray_GetEnumerator_m3978161118 (BitArray_t2687322878 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
