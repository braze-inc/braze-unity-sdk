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

// System.Security.Cryptography.DES
struct DES_t1557551403;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Security.Cryptography.DES::.ctor()
extern "C"  void DES__ctor_m55215635 (DES_t1557551403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DES::.cctor()
extern "C"  void DES__cctor_m1229588474 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DES System.Security.Cryptography.DES::Create()
extern "C"  DES_t1557551403 * DES_Create_m3635864569 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DES System.Security.Cryptography.DES::Create(System.String)
extern "C"  DES_t1557551403 * DES_Create_m2951526313 (Il2CppObject * __this /* static, unused */, String_t* ___algName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DES::IsWeakKey(System.Byte[])
extern "C"  bool DES_IsWeakKey_m395042781 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___rgbKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DES::IsSemiWeakKey(System.Byte[])
extern "C"  bool DES_IsSemiWeakKey_m2127857387 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t58506160* ___rgbKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DES::get_Key()
extern "C"  ByteU5BU5D_t58506160* DES_get_Key_m1355368637 (DES_t1557551403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DES::set_Key(System.Byte[])
extern "C"  void DES_set_Key_m2925591286 (DES_t1557551403 * __this, ByteU5BU5D_t58506160* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
