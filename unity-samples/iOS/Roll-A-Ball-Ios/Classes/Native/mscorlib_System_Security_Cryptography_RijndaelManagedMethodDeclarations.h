#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RijndaelManaged
struct RijndaelManaged_t2155;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t1381;
// System.Byte[]
struct ByteU5BU5D_t97;

// System.Void System.Security.Cryptography.RijndaelManaged::.ctor()
 void RijndaelManaged__ctor_m10768 (RijndaelManaged_t2155 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManaged::GenerateIV()
 void RijndaelManaged_GenerateIV_m10769 (RijndaelManaged_t2155 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RijndaelManaged::GenerateKey()
 void RijndaelManaged_GenerateKey_m10770 (RijndaelManaged_t2155 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RijndaelManaged::CreateDecryptor(System.Byte[],System.Byte[])
 Object_t * RijndaelManaged_CreateDecryptor_m10771 (RijndaelManaged_t2155 * __this, ByteU5BU5D_t97* ___rgbKey, ByteU5BU5D_t97* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.RijndaelManaged::CreateEncryptor(System.Byte[],System.Byte[])
 Object_t * RijndaelManaged_CreateEncryptor_m10772 (RijndaelManaged_t2155 * __this, ByteU5BU5D_t97* ___rgbKey, ByteU5BU5D_t97* ___rgbIV, MethodInfo* method) IL2CPP_METHOD_ATTR;
