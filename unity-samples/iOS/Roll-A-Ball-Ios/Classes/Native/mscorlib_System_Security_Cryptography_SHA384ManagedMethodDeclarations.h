#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.SHA384Managed
struct SHA384Managed_t2176;
// System.Byte[]
struct ByteU5BU5D_t112;

// System.Void System.Security.Cryptography.SHA384Managed::.ctor()
 void SHA384Managed__ctor_m10915 (SHA384Managed_t2176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::Initialize(System.Boolean)
 void SHA384Managed_Initialize_m10916 (SHA384Managed_t2176 * __this, bool ___reuse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::Initialize()
 void SHA384Managed_Initialize_m10917 (SHA384Managed_t2176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::HashCore(System.Byte[],System.Int32,System.Int32)
 void SHA384Managed_HashCore_m10918 (SHA384Managed_t2176 * __this, ByteU5BU5D_t112* ___rgb, int32_t ___ibStart, int32_t ___cbSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.SHA384Managed::HashFinal()
 ByteU5BU5D_t112* SHA384Managed_HashFinal_m10919 (SHA384Managed_t2176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::update(System.Byte)
 void SHA384Managed_update_m10920 (SHA384Managed_t2176 * __this, uint8_t ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::processWord(System.Byte[],System.Int32)
 void SHA384Managed_processWord_m10921 (SHA384Managed_t2176 * __this, ByteU5BU5D_t112* ___input, int32_t ___inOff, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::unpackWord(System.UInt64,System.Byte[],System.Int32)
 void SHA384Managed_unpackWord_m10922 (SHA384Managed_t2176 * __this, uint64_t ___word, ByteU5BU5D_t112* ___output, int32_t ___outOff, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::adjustByteCounts()
 void SHA384Managed_adjustByteCounts_m10923 (SHA384Managed_t2176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::processLength(System.UInt64,System.UInt64)
 void SHA384Managed_processLength_m10924 (SHA384Managed_t2176 * __this, uint64_t ___lowW, uint64_t ___hiW, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.SHA384Managed::processBlock()
 void SHA384Managed_processBlock_m10925 (SHA384Managed_t2176 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
