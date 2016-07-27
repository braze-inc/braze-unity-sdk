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

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_X509Certificat1122151684.h"
#include "System_System_Security_Cryptography_X509Certificat1387926129.h"
#include "mscorlib_System_String968488902.h"

// System.Void System.Security.Cryptography.X509Certificates.X509ChainStatus::.ctor(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
extern "C"  void X509ChainStatus__ctor_m452901827 (X509ChainStatus_t1122151684 * __this, int32_t ___flag0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509ChainStatus::get_Status()
extern "C"  int32_t X509ChainStatus_get_Status_m805216413 (X509ChainStatus_t1122151684 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainStatus::set_Status(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
extern "C"  void X509ChainStatus_set_Status_m2412197578 (X509ChainStatus_t1122151684 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainStatus::set_StatusInformation(System.String)
extern "C"  void X509ChainStatus_set_StatusInformation_m2801383985 (X509ChainStatus_t1122151684 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509ChainStatus::GetInformation(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
extern "C"  String_t* X509ChainStatus_GetInformation_m369546830 (Il2CppObject * __this /* static, unused */, int32_t ___flags0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct X509ChainStatus_t1122151684;
struct X509ChainStatus_t1122151684_marshaled_pinvoke;

extern "C" void X509ChainStatus_t1122151684_marshal_pinvoke(const X509ChainStatus_t1122151684& unmarshaled, X509ChainStatus_t1122151684_marshaled_pinvoke& marshaled);
extern "C" void X509ChainStatus_t1122151684_marshal_pinvoke_back(const X509ChainStatus_t1122151684_marshaled_pinvoke& marshaled, X509ChainStatus_t1122151684& unmarshaled);
extern "C" void X509ChainStatus_t1122151684_marshal_pinvoke_cleanup(X509ChainStatus_t1122151684_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct X509ChainStatus_t1122151684;
struct X509ChainStatus_t1122151684_marshaled_com;

extern "C" void X509ChainStatus_t1122151684_marshal_com(const X509ChainStatus_t1122151684& unmarshaled, X509ChainStatus_t1122151684_marshaled_com& marshaled);
extern "C" void X509ChainStatus_t1122151684_marshal_com_back(const X509ChainStatus_t1122151684_marshaled_com& marshaled, X509ChainStatus_t1122151684& unmarshaled);
extern "C" void X509ChainStatus_t1122151684_marshal_com_cleanup(X509ChainStatus_t1122151684_marshaled_com& marshaled);
