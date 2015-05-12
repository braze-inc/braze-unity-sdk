#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t1550;
// System.Security.Cryptography.X509Certificates.X509ChainPolicy
struct X509ChainPolicy_t1625;
// System.Security.Cryptography.X509Certificates.X509Store
struct X509Store_t1629;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t1622;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t1549;
// System.Security.Cryptography.X509Certificates.X509ChainElement
struct X509ChainElement_t1628;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1418;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl
struct X509Crl_t1424;
// Mono.Security.X509.X509Extension
struct X509Extension_t1425;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t1423;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags
#include "System_System_Security_Cryptography_X509Certificates_X509Cha_0.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor()
 void X509Chain__ctor_m6678 (X509Chain_t1550 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor(System.Boolean)
 void X509Chain__ctor_m7022 (X509Chain_t1550 * __this, bool ___useMachineContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.cctor()
 void X509Chain__cctor_m7023 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainPolicy System.Security.Cryptography.X509Certificates.X509Chain::get_ChainPolicy()
 X509ChainPolicy_t1625 * X509Chain_get_ChainPolicy_m7024 (X509Chain_t1550 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::Build(System.Security.Cryptography.X509Certificates.X509Certificate2)
 bool X509Chain_Build_m6679 (X509Chain_t1550 * __this, X509Certificate2_t1549 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::Reset()
 void X509Chain_Reset_m7025 (X509Chain_t1550 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509Chain::get_Roots()
 X509Store_t1629 * X509Chain_get_Roots_m7026 (X509Chain_t1550 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509Chain::get_CertificateAuthorities()
 X509Store_t1629 * X509Chain_get_CertificateAuthorities_m7027 (X509Chain_t1550 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Chain::get_CertificateCollection()
 X509Certificate2Collection_t1622 * X509Chain_get_CertificateCollection_m7028 (X509Chain_t1550 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509Chain::BuildChainFrom(System.Security.Cryptography.X509Certificates.X509Certificate2)
 int32_t X509Chain_BuildChainFrom_m7029 (X509Chain_t1550 * __this, X509Certificate2_t1549 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509Chain::SelectBestFromCollection(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Security.Cryptography.X509Certificates.X509Certificate2Collection)
 X509Certificate2_t1549 * X509Chain_SelectBestFromCollection_m7030 (X509Chain_t1550 * __this, X509Certificate2_t1549 * ___child, X509Certificate2Collection_t1622 * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509Chain::FindParent(System.Security.Cryptography.X509Certificates.X509Certificate2)
 X509Certificate2_t1549 * X509Chain_FindParent_m7031 (X509Chain_t1550 * __this, X509Certificate2_t1549 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::IsChainComplete(System.Security.Cryptography.X509Certificates.X509Certificate2)
 bool X509Chain_IsChainComplete_m7032 (X509Chain_t1550 * __this, X509Certificate2_t1549 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::IsSelfIssued(System.Security.Cryptography.X509Certificates.X509Certificate2)
 bool X509Chain_IsSelfIssued_m7033 (X509Chain_t1550 * __this, X509Certificate2_t1549 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::ValidateChain(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
 void X509Chain_ValidateChain_m7034 (X509Chain_t1550 * __this, int32_t ___flag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::Process(System.Int32)
 void X509Chain_Process_m7035 (X509Chain_t1550 * __this, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::PrepareForNextCertificate(System.Int32)
 void X509Chain_PrepareForNextCertificate_m7036 (X509Chain_t1550 * __this, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::WrapUp()
 void X509Chain_WrapUp_m7037 (X509Chain_t1550 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::ProcessCertificateExtensions(System.Security.Cryptography.X509Certificates.X509ChainElement)
 void X509Chain_ProcessCertificateExtensions_m7038 (X509Chain_t1550 * __this, X509ChainElement_t1628 * ___element, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::IsSignedWith(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Security.Cryptography.AsymmetricAlgorithm)
 bool X509Chain_IsSignedWith_m7039 (X509Chain_t1550 * __this, X509Certificate2_t1549 * ___signed, AsymmetricAlgorithm_t1418 * ___pubkey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetSubjectKeyIdentifier(System.Security.Cryptography.X509Certificates.X509Certificate2)
 String_t* X509Chain_GetSubjectKeyIdentifier_m7040 (X509Chain_t1550 * __this, X509Certificate2_t1549 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetAuthorityKeyIdentifier(System.Security.Cryptography.X509Certificates.X509Certificate2)
 String_t* X509Chain_GetAuthorityKeyIdentifier_m7041 (X509Chain_t1550 * __this, X509Certificate2_t1549 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetAuthorityKeyIdentifier(Mono.Security.X509.X509Crl)
 String_t* X509Chain_GetAuthorityKeyIdentifier_m7042 (X509Chain_t1550 * __this, X509Crl_t1424 * ___crl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetAuthorityKeyIdentifier(Mono.Security.X509.X509Extension)
 String_t* X509Chain_GetAuthorityKeyIdentifier_m7043 (X509Chain_t1550 * __this, X509Extension_t1425 * ___ext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::CheckRevocationOnChain(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
 void X509Chain_CheckRevocationOnChain_m7044 (X509Chain_t1550 * __this, int32_t ___flag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509Chain::CheckRevocation(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Int32,System.Boolean)
 int32_t X509Chain_CheckRevocation_m7045 (X509Chain_t1550 * __this, X509Certificate2_t1549 * ___certificate, int32_t ___ca, bool ___online, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509Chain::CheckRevocation(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Security.Cryptography.X509Certificates.X509Certificate2,System.Boolean)
 int32_t X509Chain_CheckRevocation_m7046 (X509Chain_t1550 * __this, X509Certificate2_t1549 * ___certificate, X509Certificate2_t1549 * ___ca_cert, bool ___online, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl System.Security.Cryptography.X509Certificates.X509Chain::FindCrl(System.Security.Cryptography.X509Certificates.X509Certificate2)
 X509Crl_t1424 * X509Chain_FindCrl_m7047 (X509Chain_t1550 * __this, X509Certificate2_t1549 * ___caCertificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::ProcessCrlExtensions(Mono.Security.X509.X509Crl)
 bool X509Chain_ProcessCrlExtensions_m7048 (X509Chain_t1550 * __this, X509Crl_t1424 * ___crl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::ProcessCrlEntryExtensions(Mono.Security.X509.X509Crl/X509CrlEntry)
 bool X509Chain_ProcessCrlEntryExtensions_m7049 (X509Chain_t1550 * __this, X509CrlEntry_t1423 * ___entry, MethodInfo* method) IL2CPP_METHOD_ATTR;
