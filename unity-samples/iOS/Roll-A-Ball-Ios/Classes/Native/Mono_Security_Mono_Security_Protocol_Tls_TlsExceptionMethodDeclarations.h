#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.TlsException
struct TlsException_t1478;
// Mono.Security.Protocol.Tls.Alert
struct Alert_t1432;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t960;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// Mono.Security.Protocol.Tls.AlertLevel
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertLevel.h"
// Mono.Security.Protocol.Tls.AlertDescription
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertDescription.h"

// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(System.String)
 void TlsException__ctor_m6248 (TlsException_t1478 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void TlsException__ctor_m6249 (TlsException_t1478 * __this, SerializationInfo_t960 * ___info, StreamingContext_t961  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription)
 void TlsException__ctor_m6250 (TlsException_t1478 * __this, uint8_t ___level, uint8_t ___description, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription,System.String)
 void TlsException__ctor_m6251 (TlsException_t1478 * __this, uint8_t ___level, uint8_t ___description, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(Mono.Security.Protocol.Tls.AlertDescription)
 void TlsException__ctor_m6252 (TlsException_t1478 * __this, uint8_t ___description, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(Mono.Security.Protocol.Tls.AlertDescription,System.String)
 void TlsException__ctor_m6253 (TlsException_t1478 * __this, uint8_t ___description, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Alert Mono.Security.Protocol.Tls.TlsException::get_Alert()
 Alert_t1432 * TlsException_get_Alert_m6254 (TlsException_t1478 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
