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

// Mono.Security.Protocol.Tls.SecurityParameters
struct SecurityParameters_t202779010;
// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t995991461;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuit995991461.h"

// System.Void Mono.Security.Protocol.Tls.SecurityParameters::.ctor()
extern "C"  void SecurityParameters__ctor_m711073950 (SecurityParameters_t202779010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.SecurityParameters::get_Cipher()
extern "C"  CipherSuite_t995991461 * SecurityParameters_get_Cipher_m2063042602 (SecurityParameters_t202779010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::set_Cipher(Mono.Security.Protocol.Tls.CipherSuite)
extern "C"  void SecurityParameters_set_Cipher_m1888356967 (SecurityParameters_t202779010 * __this, CipherSuite_t995991461 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SecurityParameters::get_ClientWriteMAC()
extern "C"  ByteU5BU5D_t58506160* SecurityParameters_get_ClientWriteMAC_m509205152 (SecurityParameters_t202779010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::set_ClientWriteMAC(System.Byte[])
extern "C"  void SecurityParameters_set_ClientWriteMAC_m2390402827 (SecurityParameters_t202779010 * __this, ByteU5BU5D_t58506160* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SecurityParameters::get_ServerWriteMAC()
extern "C"  ByteU5BU5D_t58506160* SecurityParameters_get_ServerWriteMAC_m451878936 (SecurityParameters_t202779010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::set_ServerWriteMAC(System.Byte[])
extern "C"  void SecurityParameters_set_ServerWriteMAC_m324273299 (SecurityParameters_t202779010 * __this, ByteU5BU5D_t58506160* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::Clear()
extern "C"  void SecurityParameters_Clear_m2412174537 (SecurityParameters_t202779010 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
