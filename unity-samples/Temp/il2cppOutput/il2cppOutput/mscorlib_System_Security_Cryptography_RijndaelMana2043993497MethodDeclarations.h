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

// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_t2043993497;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t4226691419;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.RijndaelManaged::.ctor()
extern "C"  void RijndaelManaged__ctor_m504318565 (RijndaelManaged_t2043993497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManaged::GenerateIV()
extern "C"  void RijndaelManaged_GenerateIV_m4176896161 (RijndaelManaged_t2043993497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManaged::GenerateKey()
extern "C"  void RijndaelManaged_GenerateKey_m637133869 (RijndaelManaged_t2043993497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RijndaelManaged::CreateDecryptor(System.Byte[],System.Byte[])
extern "C"  Il2CppObject * RijndaelManaged_CreateDecryptor_m382017683 (RijndaelManaged_t2043993497 * __this, ByteU5BU5D_t58506160* ___rgbKey0, ByteU5BU5D_t58506160* ___rgbIV1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RijndaelManaged::CreateEncryptor(System.Byte[],System.Byte[])
extern "C"  Il2CppObject * RijndaelManaged_CreateEncryptor_m687746235 (RijndaelManaged_t2043993497 * __this, ByteU5BU5D_t58506160* ___rgbKey0, ByteU5BU5D_t58506160* ___rgbIV1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
