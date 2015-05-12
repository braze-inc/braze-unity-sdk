#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.MACTripleDES
struct MACTripleDES_t2159;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t112;

// System.Void System.Security.Cryptography.MACTripleDES::.ctor()
 void MACTripleDES__ctor_m10770 (MACTripleDES_t2159 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MACTripleDES::Setup(System.String,System.Byte[])
 void MACTripleDES_Setup_m10771 (MACTripleDES_t2159 * __this, String_t* ___strTripleDES, ByteU5BU5D_t112* ___rgbKey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MACTripleDES::Finalize()
 void MACTripleDES_Finalize_m10772 (MACTripleDES_t2159 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MACTripleDES::Dispose(System.Boolean)
 void MACTripleDES_Dispose_m10773 (MACTripleDES_t2159 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MACTripleDES::Initialize()
 void MACTripleDES_Initialize_m10774 (MACTripleDES_t2159 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.MACTripleDES::HashCore(System.Byte[],System.Int32,System.Int32)
 void MACTripleDES_HashCore_m10775 (MACTripleDES_t2159 * __this, ByteU5BU5D_t112* ___rgbData, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.MACTripleDES::HashFinal()
 ByteU5BU5D_t112* MACTripleDES_HashFinal_m10776 (MACTripleDES_t2159 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
