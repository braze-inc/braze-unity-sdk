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

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientHello
struct TlsClientHello_t1844074116;
// Mono.Security.Protocol.Tls.Context
struct Context_t4123145639;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context4123145639.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientHello::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C"  void TlsClientHello__ctor_m2164384861 (TlsClientHello_t1844074116 * __this, Context_t4123145639 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientHello::Update()
extern "C"  void TlsClientHello_Update_m22199271 (TlsClientHello_t1844074116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientHello::ProcessAsSsl3()
extern "C"  void TlsClientHello_ProcessAsSsl3_m4013369932 (TlsClientHello_t1844074116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientHello::ProcessAsTls1()
extern "C"  void TlsClientHello_ProcessAsTls1_m4035741051 (TlsClientHello_t1844074116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
