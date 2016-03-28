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

// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t2831591730;
// System.Security.Cryptography.X509Certificates.X509ChainPolicy
struct X509ChainPolicy_t1031963204;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t2583282360;
// System.Security.Cryptography.X509Certificates.X509Store
struct X509Store_t2846739282;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t123613238;
// System.Security.Cryptography.X509Certificates.X509ChainElement
struct X509ChainElement_t4224632376;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t4236534322;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl
struct X509Crl_t2942805322;
// Mono.Security.X509.X509Extension
struct X509Extension_t1510964269;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t3291243611;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_X509Certificat2583282360.h"
#include "System_System_Security_Cryptography_X509Certificat1387926129.h"
#include "System_System_Security_Cryptography_X509Certificate123613238.h"
#include "System_System_Security_Cryptography_X509Certificat4224632376.h"
#include "mscorlib_System_Security_Cryptography_AsymmetricAl4236534322.h"
#include "Mono_Security_Mono_Security_X509_X509Crl2942805322.h"
#include "Mono_Security_Mono_Security_X509_X509Extension1510964268.h"
#include "Mono_Security_Mono_Security_X509_X509Crl_X509CrlEn3291243611.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor()
extern "C"  void X509Chain__ctor_m440780008 (X509Chain_t2831591730 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor(System.Boolean)
extern "C"  void X509Chain__ctor_m2887631967 (X509Chain_t2831591730 * __this, bool ___useMachineContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.cctor()
extern "C"  void X509Chain__cctor_m297182149 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainPolicy System.Security.Cryptography.X509Certificates.X509Chain::get_ChainPolicy()
extern "C"  X509ChainPolicy_t1031963204 * X509Chain_get_ChainPolicy_m3141824143 (X509Chain_t2831591730 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::Build(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  bool X509Chain_Build_m417178512 (X509Chain_t2831591730 * __this, X509Certificate2_t2583282360 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::Reset()
extern "C"  void X509Chain_Reset_m2382180245 (X509Chain_t2831591730 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509Chain::get_Roots()
extern "C"  X509Store_t2846739282 * X509Chain_get_Roots_m4101675455 (X509Chain_t2831591730 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509Chain::get_CertificateAuthorities()
extern "C"  X509Store_t2846739282 * X509Chain_get_CertificateAuthorities_m1238271486 (X509Chain_t2831591730 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Chain::get_CertificateCollection()
extern "C"  X509Certificate2Collection_t123613238 * X509Chain_get_CertificateCollection_m1393875737 (X509Chain_t2831591730 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509Chain::BuildChainFrom(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  int32_t X509Chain_BuildChainFrom_m2777021523 (X509Chain_t2831591730 * __this, X509Certificate2_t2583282360 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509Chain::SelectBestFromCollection(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Security.Cryptography.X509Certificates.X509Certificate2Collection)
extern "C"  X509Certificate2_t2583282360 * X509Chain_SelectBestFromCollection_m3232085257 (X509Chain_t2831591730 * __this, X509Certificate2_t2583282360 * ___child, X509Certificate2Collection_t123613238 * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509Chain::FindParent(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  X509Certificate2_t2583282360 * X509Chain_FindParent_m2812194464 (X509Chain_t2831591730 * __this, X509Certificate2_t2583282360 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::IsChainComplete(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  bool X509Chain_IsChainComplete_m3441936754 (X509Chain_t2831591730 * __this, X509Certificate2_t2583282360 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::IsSelfIssued(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  bool X509Chain_IsSelfIssued_m397924845 (X509Chain_t2831591730 * __this, X509Certificate2_t2583282360 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::ValidateChain(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
extern "C"  void X509Chain_ValidateChain_m976559422 (X509Chain_t2831591730 * __this, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::Process(System.Int32)
extern "C"  void X509Chain_Process_m940730694 (X509Chain_t2831591730 * __this, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::PrepareForNextCertificate(System.Int32)
extern "C"  void X509Chain_PrepareForNextCertificate_m2507052121 (X509Chain_t2831591730 * __this, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::WrapUp()
extern "C"  void X509Chain_WrapUp_m3398853601 (X509Chain_t2831591730 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::ProcessCertificateExtensions(System.Security.Cryptography.X509Certificates.X509ChainElement)
extern "C"  void X509Chain_ProcessCertificateExtensions_m1491797822 (X509Chain_t2831591730 * __this, X509ChainElement_t4224632376 * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::IsSignedWith(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  bool X509Chain_IsSignedWith_m1198520936 (X509Chain_t2831591730 * __this, X509Certificate2_t2583282360 * ___signed, AsymmetricAlgorithm_t4236534322 * ___pubkey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetSubjectKeyIdentifier(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  String_t* X509Chain_GetSubjectKeyIdentifier_m2141872961 (X509Chain_t2831591730 * __this, X509Certificate2_t2583282360 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetAuthorityKeyIdentifier(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  String_t* X509Chain_GetAuthorityKeyIdentifier_m3460155146 (X509Chain_t2831591730 * __this, X509Certificate2_t2583282360 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetAuthorityKeyIdentifier(Mono.Security.X509.X509Crl)
extern "C"  String_t* X509Chain_GetAuthorityKeyIdentifier_m3802915794 (X509Chain_t2831591730 * __this, X509Crl_t2942805322 * ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetAuthorityKeyIdentifier(Mono.Security.X509.X509Extension)
extern "C"  String_t* X509Chain_GetAuthorityKeyIdentifier_m1262096688 (X509Chain_t2831591730 * __this, X509Extension_t1510964269 * ___ext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::CheckRevocationOnChain(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
extern "C"  void X509Chain_CheckRevocationOnChain_m1059846149 (X509Chain_t2831591730 * __this, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509Chain::CheckRevocation(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Int32,System.Boolean)
extern "C"  int32_t X509Chain_CheckRevocation_m2952361444 (X509Chain_t2831591730 * __this, X509Certificate2_t2583282360 * ___certificate, int32_t ___ca, bool ___online, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509Chain::CheckRevocation(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Security.Cryptography.X509Certificates.X509Certificate2,System.Boolean)
extern "C"  int32_t X509Chain_CheckRevocation_m1219092751 (X509Chain_t2831591730 * __this, X509Certificate2_t2583282360 * ___certificate, X509Certificate2_t2583282360 * ___ca_cert, bool ___online, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl System.Security.Cryptography.X509Certificates.X509Chain::FindCrl(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C"  X509Crl_t2942805322 * X509Chain_FindCrl_m1761802781 (X509Chain_t2831591730 * __this, X509Certificate2_t2583282360 * ___caCertificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::ProcessCrlExtensions(Mono.Security.X509.X509Crl)
extern "C"  bool X509Chain_ProcessCrlExtensions_m3347968374 (X509Chain_t2831591730 * __this, X509Crl_t2942805322 * ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::ProcessCrlEntryExtensions(Mono.Security.X509.X509Crl/X509CrlEntry)
extern "C"  bool X509Chain_ProcessCrlEntryExtensions_m4212088422 (X509Chain_t2831591730 * __this, X509CrlEntry_t3291243611 * ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
