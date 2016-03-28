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

// Mono.Security.Protocol.Tls.TlsException
struct TlsException_t1029166540;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// Mono.Security.Protocol.Tls.Alert
struct Alert_t1570308436;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertLeve1107615680.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertDesc1415847224.h"

// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(System.String)
extern "C"  void TlsException__ctor_m1800218670 (TlsException_t1029166540 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void TlsException__ctor_m3172375189 (TlsException_t1029166540 * __this, SerializationInfo_t2995724695 * ___info, StreamingContext_t986364934  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription)
extern "C"  void TlsException__ctor_m1532839414 (TlsException_t1029166540 * __this, uint8_t ___level, uint8_t ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription,System.String)
extern "C"  void TlsException__ctor_m1100072882 (TlsException_t1029166540 * __this, uint8_t ___level, uint8_t ___description, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(Mono.Security.Protocol.Tls.AlertDescription)
extern "C"  void TlsException__ctor_m314055256 (TlsException_t1029166540 * __this, uint8_t ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(Mono.Security.Protocol.Tls.AlertDescription,System.String)
extern "C"  void TlsException__ctor_m761809044 (TlsException_t1029166540 * __this, uint8_t ___description, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Alert Mono.Security.Protocol.Tls.TlsException::get_Alert()
extern "C"  Alert_t1570308436 * TlsException_get_Alert_m2233021222 (TlsException_t1029166540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
