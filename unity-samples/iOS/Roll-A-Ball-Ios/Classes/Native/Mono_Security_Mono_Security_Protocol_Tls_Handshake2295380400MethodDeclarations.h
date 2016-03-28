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

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientFinished
struct TlsClientFinished_t2295380400;
// Mono.Security.Protocol.Tls.Context
struct Context_t4123145639;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context4123145639.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientFinished::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C"  void TlsClientFinished__ctor_m3204287283 (TlsClientFinished_t2295380400 * __this, Context_t4123145639 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientFinished::.cctor()
extern "C"  void TlsClientFinished__cctor_m3258319601 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientFinished::Update()
extern "C"  void TlsClientFinished_Update_m1172310609 (TlsClientFinished_t2295380400 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientFinished::ProcessAsSsl3()
extern "C"  void TlsClientFinished_ProcessAsSsl3_m2163388578 (TlsClientFinished_t2295380400 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientFinished::ProcessAsTls1()
extern "C"  void TlsClientFinished_ProcessAsTls1_m2185759697 (TlsClientFinished_t2295380400 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
