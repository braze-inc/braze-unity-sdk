#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished
struct TlsServerFinished_t1500;
// Mono.Security.Protocol.Tls.Context
struct Context_t1445;
// System.Byte[]
struct ByteU5BU5D_t112;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
 void TlsServerFinished__ctor_m6439 (TlsServerFinished_t1500 * __this, Context_t1445 * ___context, ByteU5BU5D_t112* ___buffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::.cctor()
 void TlsServerFinished__cctor_m6440 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::Update()
 void TlsServerFinished_Update_m6441 (TlsServerFinished_t1500 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::ProcessAsSsl3()
 void TlsServerFinished_ProcessAsSsl3_m6442 (TlsServerFinished_t1500 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::ProcessAsTls1()
 void TlsServerFinished_ProcessAsTls1_m6443 (TlsServerFinished_t1500 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
