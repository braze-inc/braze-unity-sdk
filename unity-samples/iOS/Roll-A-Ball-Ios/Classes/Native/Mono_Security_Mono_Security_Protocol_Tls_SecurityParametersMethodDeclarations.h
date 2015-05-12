#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.SecurityParameters
struct SecurityParameters_t1463;
// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t1446;
// System.Byte[]
struct ByteU5BU5D_t112;

// System.Void Mono.Security.Protocol.Tls.SecurityParameters::.ctor()
 void SecurityParameters__ctor_m6207 (SecurityParameters_t1463 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.SecurityParameters::get_Cipher()
 CipherSuite_t1446 * SecurityParameters_get_Cipher_m6208 (SecurityParameters_t1463 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::set_Cipher(Mono.Security.Protocol.Tls.CipherSuite)
 void SecurityParameters_set_Cipher_m6209 (SecurityParameters_t1463 * __this, CipherSuite_t1446 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SecurityParameters::get_ClientWriteMAC()
 ByteU5BU5D_t112* SecurityParameters_get_ClientWriteMAC_m6210 (SecurityParameters_t1463 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::set_ClientWriteMAC(System.Byte[])
 void SecurityParameters_set_ClientWriteMAC_m6211 (SecurityParameters_t1463 * __this, ByteU5BU5D_t112* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SecurityParameters::get_ServerWriteMAC()
 ByteU5BU5D_t112* SecurityParameters_get_ServerWriteMAC_m6212 (SecurityParameters_t1463 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::set_ServerWriteMAC(System.Byte[])
 void SecurityParameters_set_ServerWriteMAC_m6213 (SecurityParameters_t1463 * __this, ByteU5BU5D_t112* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SecurityParameters::Clear()
 void SecurityParameters_Clear_m6214 (SecurityParameters_t1463 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
