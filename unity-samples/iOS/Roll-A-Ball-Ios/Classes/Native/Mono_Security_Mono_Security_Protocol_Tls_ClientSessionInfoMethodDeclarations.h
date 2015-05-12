#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.ClientSessionInfo
struct ClientSessionInfo_t1458;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t112;
// Mono.Security.Protocol.Tls.Context
struct Context_t1445;

// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::.ctor(System.String,System.Byte[])
 void ClientSessionInfo__ctor_m6063 (ClientSessionInfo_t1458 * __this, String_t* ___hostname, ByteU5BU5D_t112* ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::.cctor()
 void ClientSessionInfo__cctor_m6064 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::Finalize()
 void ClientSessionInfo_Finalize_m6065 (ClientSessionInfo_t1458 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.ClientSessionInfo::get_HostName()
 String_t* ClientSessionInfo_get_HostName_m6066 (ClientSessionInfo_t1458 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.ClientSessionInfo::get_Id()
 ByteU5BU5D_t112* ClientSessionInfo_get_Id_m6067 (ClientSessionInfo_t1458 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.ClientSessionInfo::get_Valid()
 bool ClientSessionInfo_get_Valid_m6068 (ClientSessionInfo_t1458 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::GetContext(Mono.Security.Protocol.Tls.Context)
 void ClientSessionInfo_GetContext_m6069 (ClientSessionInfo_t1458 * __this, Context_t1445 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::SetContext(Mono.Security.Protocol.Tls.Context)
 void ClientSessionInfo_SetContext_m6070 (ClientSessionInfo_t1458 * __this, Context_t1445 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::KeepAlive()
 void ClientSessionInfo_KeepAlive_m6071 (ClientSessionInfo_t1458 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::Dispose()
 void ClientSessionInfo_Dispose_m6072 (ClientSessionInfo_t1458 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::Dispose(System.Boolean)
 void ClientSessionInfo_Dispose_m6073 (ClientSessionInfo_t1458 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::CheckDisposed()
 void ClientSessionInfo_CheckDisposed_m6074 (ClientSessionInfo_t1458 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
