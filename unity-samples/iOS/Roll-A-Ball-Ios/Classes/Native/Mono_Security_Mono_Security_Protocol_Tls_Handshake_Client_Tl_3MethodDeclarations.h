#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientKeyExchange
struct TlsClientKeyExchange_t1497;
// Mono.Security.Protocol.Tls.Context
struct Context_t1445;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientKeyExchange::.ctor(Mono.Security.Protocol.Tls.Context)
 void TlsClientKeyExchange__ctor_m6422 (TlsClientKeyExchange_t1497 * __this, Context_t1445 * ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientKeyExchange::ProcessAsSsl3()
 void TlsClientKeyExchange_ProcessAsSsl3_m6423 (TlsClientKeyExchange_t1497 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientKeyExchange::ProcessAsTls1()
 void TlsClientKeyExchange_ProcessAsTls1_m6424 (TlsClientKeyExchange_t1497 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientKeyExchange::ProcessCommon(System.Boolean)
 void TlsClientKeyExchange_ProcessCommon_m6425 (TlsClientKeyExchange_t1497 * __this, bool ___sendLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
