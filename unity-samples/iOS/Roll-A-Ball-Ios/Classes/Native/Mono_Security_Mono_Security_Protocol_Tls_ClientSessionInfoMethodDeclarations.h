#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.ClientSessionInfo
struct ClientSessionInfo_t1447;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t97;
// Mono.Security.Protocol.Tls.Context
struct Context_t1434;

// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::.ctor(System.String,System.Byte[])
 void ClientSessionInfo__ctor_m5969 (ClientSessionInfo_t1447 * __this, String_t* ___hostname, ByteU5BU5D_t97* ___id, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::.cctor()
 void ClientSessionInfo__cctor_m5970 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::Finalize()
 void ClientSessionInfo_Finalize_m5971 (ClientSessionInfo_t1447 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.ClientSessionInfo::get_HostName()
 String_t* ClientSessionInfo_get_HostName_m5972 (ClientSessionInfo_t1447 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.ClientSessionInfo::get_Id()
 ByteU5BU5D_t97* ClientSessionInfo_get_Id_m5973 (ClientSessionInfo_t1447 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.ClientSessionInfo::get_Valid()
 bool ClientSessionInfo_get_Valid_m5974 (ClientSessionInfo_t1447 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::GetContext(Mono.Security.Protocol.Tls.Context)
 void ClientSessionInfo_GetContext_m5975 (ClientSessionInfo_t1447 * __this, Context_t1434 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::SetContext(Mono.Security.Protocol.Tls.Context)
 void ClientSessionInfo_SetContext_m5976 (ClientSessionInfo_t1447 * __this, Context_t1434 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::KeepAlive()
 void ClientSessionInfo_KeepAlive_m5977 (ClientSessionInfo_t1447 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::Dispose()
 void ClientSessionInfo_Dispose_m5978 (ClientSessionInfo_t1447 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::Dispose(System.Boolean)
 void ClientSessionInfo_Dispose_m5979 (ClientSessionInfo_t1447 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::CheckDisposed()
 void ClientSessionInfo_CheckDisposed_m5980 (ClientSessionInfo_t1447 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
