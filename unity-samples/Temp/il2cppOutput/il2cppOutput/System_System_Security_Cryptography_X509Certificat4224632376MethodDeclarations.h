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

// System.Security.Cryptography.X509Certificates.X509ChainElement
struct X509ChainElement_t4224632376;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t2583282360;
// System.Security.Cryptography.X509Certificates.X509ChainStatus[]
struct X509ChainStatusU5BU5D_t256805485;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_X509Certificat2583282360.h"
#include "System_System_Security_Cryptography_X509Certificat1387926129.h"

// System.Void System.Security.Cryptography.X509Certificates.X509ChainElement::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  void X509ChainElement__ctor_m1605854504 (X509ChainElement_t4224632376 * __this, X509Certificate2_t2583282360 * ___certificate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509ChainElement::get_Certificate()
extern "C"  X509Certificate2_t2583282360 * X509ChainElement_get_Certificate_m2984441897 (X509ChainElement_t4224632376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatus[] System.Security.Cryptography.X509Certificates.X509ChainElement::get_ChainElementStatus()
extern "C"  X509ChainStatusU5BU5D_t256805485* X509ChainElement_get_ChainElementStatus_m1337819701 (X509ChainElement_t4224632376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509ChainElement::get_StatusFlags()
extern "C"  int32_t X509ChainElement_get_StatusFlags_m2269812416 (X509ChainElement_t4224632376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElement::set_StatusFlags(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
extern "C"  void X509ChainElement_set_StatusFlags_m2679455941 (X509ChainElement_t4224632376 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509ChainElement::Count(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
extern "C"  int32_t X509ChainElement_Count_m466237836 (X509ChainElement_t4224632376 * __this, int32_t ___flags0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElement::Set(System.Security.Cryptography.X509Certificates.X509ChainStatus[],System.Int32&,System.Security.Cryptography.X509Certificates.X509ChainStatusFlags,System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
extern "C"  void X509ChainElement_Set_m2091040175 (X509ChainElement_t4224632376 * __this, X509ChainStatusU5BU5D_t256805485* ___status0, int32_t* ___position1, int32_t ___flags2, int32_t ___mask3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElement::UncompressFlags()
extern "C"  void X509ChainElement_UncompressFlags_m3125973708 (X509ChainElement_t4224632376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
