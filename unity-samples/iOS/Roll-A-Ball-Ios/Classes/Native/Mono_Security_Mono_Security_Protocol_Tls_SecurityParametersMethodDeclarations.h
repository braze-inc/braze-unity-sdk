#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.SecurityParameters
struct SecurityParameters_t1452;
// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t1435;
// System.Byte[]
struct ByteU5BU5D_t97;

// System.Void Mono.Security.Protocol.Tls.SecurityParameters::.ctor()
 void SecurityParameters__ctor_m6113 (SecurityParameters_t1452 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.SecurityParameters::get_Cipher()
 CipherSuite_t1435 * SecurityParameters_get_Cipher_m6114 (SecurityParameters_t1452 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::set_Cipher(Mono.Security.Protocol.Tls.CipherSuite)
 void SecurityParameters_set_Cipher_m6115 (SecurityParameters_t1452 * __this, CipherSuite_t1435 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SecurityParameters::get_ClientWriteMAC()
 ByteU5BU5D_t97* SecurityParameters_get_ClientWriteMAC_m6116 (SecurityParameters_t1452 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::set_ClientWriteMAC(System.Byte[])
 void SecurityParameters_set_ClientWriteMAC_m6117 (SecurityParameters_t1452 * __this, ByteU5BU5D_t97* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SecurityParameters::get_ServerWriteMAC()
 ByteU5BU5D_t97* SecurityParameters_get_ServerWriteMAC_m6118 (SecurityParameters_t1452 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::set_ServerWriteMAC(System.Byte[])
 void SecurityParameters_set_ServerWriteMAC_m6119 (SecurityParameters_t1452 * __this, ByteU5BU5D_t97* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::Clear()
 void SecurityParameters_Clear_m6120 (SecurityParameters_t1452 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
