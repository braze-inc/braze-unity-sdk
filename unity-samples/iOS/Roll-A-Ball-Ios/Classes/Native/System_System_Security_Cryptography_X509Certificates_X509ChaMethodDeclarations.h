#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t1539;
// System.Security.Cryptography.X509Certificates.X509ChainPolicy
struct X509ChainPolicy_t1613;
// System.Security.Cryptography.X509Certificates.X509Store
struct X509Store_t1617;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t1610;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t1538;
// System.Security.Cryptography.X509Certificates.X509ChainElement
struct X509ChainElement_t1616;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1407;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl
struct X509Crl_t1413;
// Mono.Security.X509.X509Extension
struct X509Extension_t1414;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t1412;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags
#include "System_System_Security_Cryptography_X509Certificates_X509Cha_0.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor()
 void X509Chain__ctor_m6584 (X509Chain_t1539 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.ctor(System.Boolean)
 void X509Chain__ctor_m6928 (X509Chain_t1539 * __this, bool ___useMachineContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::.cctor()
 void X509Chain__cctor_m6929 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainPolicy System.Security.Cryptography.X509Certificates.X509Chain::get_ChainPolicy()
 X509ChainPolicy_t1613 * X509Chain_get_ChainPolicy_m6930 (X509Chain_t1539 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::Build(System.Security.Cryptography.X509Certificates.X509Certificate2)
 bool X509Chain_Build_m6585 (X509Chain_t1539 * __this, X509Certificate2_t1538 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::Reset()
 void X509Chain_Reset_m6931 (X509Chain_t1539 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509Chain::get_Roots()
 X509Store_t1617 * X509Chain_get_Roots_m6932 (X509Chain_t1539 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509Chain::get_CertificateAuthorities()
 X509Store_t1617 * X509Chain_get_CertificateAuthorities_m6933 (X509Chain_t1539 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Chain::get_CertificateCollection()
 X509Certificate2Collection_t1610 * X509Chain_get_CertificateCollection_m6934 (X509Chain_t1539 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509Chain::BuildChainFrom(System.Security.Cryptography.X509Certificates.X509Certificate2)
 int32_t X509Chain_BuildChainFrom_m6935 (X509Chain_t1539 * __this, X509Certificate2_t1538 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509Chain::SelectBestFromCollection(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Security.Cryptography.X509Certificates.X509Certificate2Collection)
 X509Certificate2_t1538 * X509Chain_SelectBestFromCollection_m6936 (X509Chain_t1539 * __this, X509Certificate2_t1538 * ___child, X509Certificate2Collection_t1610 * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509Chain::FindParent(System.Security.Cryptography.X509Certificates.X509Certificate2)
 X509Certificate2_t1538 * X509Chain_FindParent_m6937 (X509Chain_t1539 * __this, X509Certificate2_t1538 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::IsChainComplete(System.Security.Cryptography.X509Certificates.X509Certificate2)
 bool X509Chain_IsChainComplete_m6938 (X509Chain_t1539 * __this, X509Certificate2_t1538 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::IsSelfIssued(System.Security.Cryptography.X509Certificates.X509Certificate2)
 bool X509Chain_IsSelfIssued_m6939 (X509Chain_t1539 * __this, X509Certificate2_t1538 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::ValidateChain(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
 void X509Chain_ValidateChain_m6940 (X509Chain_t1539 * __this, int32_t ___flag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::Process(System.Int32)
 void X509Chain_Process_m6941 (X509Chain_t1539 * __this, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::PrepareForNextCertificate(System.Int32)
 void X509Chain_PrepareForNextCertificate_m6942 (X509Chain_t1539 * __this, int32_t ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::WrapUp()
 void X509Chain_WrapUp_m6943 (X509Chain_t1539 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::ProcessCertificateExtensions(System.Security.Cryptography.X509Certificates.X509ChainElement)
 void X509Chain_ProcessCertificateExtensions_m6944 (X509Chain_t1539 * __this, X509ChainElement_t1616 * ___element, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::IsSignedWith(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Security.Cryptography.AsymmetricAlgorithm)
 bool X509Chain_IsSignedWith_m6945 (X509Chain_t1539 * __this, X509Certificate2_t1538 * ___signed, AsymmetricAlgorithm_t1407 * ___pubkey, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetSubjectKeyIdentifier(System.Security.Cryptography.X509Certificates.X509Certificate2)
 String_t* X509Chain_GetSubjectKeyIdentifier_m6946 (X509Chain_t1539 * __this, X509Certificate2_t1538 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetAuthorityKeyIdentifier(System.Security.Cryptography.X509Certificates.X509Certificate2)
 String_t* X509Chain_GetAuthorityKeyIdentifier_m6947 (X509Chain_t1539 * __this, X509Certificate2_t1538 * ___certificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetAuthorityKeyIdentifier(Mono.Security.X509.X509Crl)
 String_t* X509Chain_GetAuthorityKeyIdentifier_m6948 (X509Chain_t1539 * __this, X509Crl_t1413 * ___crl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Chain::GetAuthorityKeyIdentifier(Mono.Security.X509.X509Extension)
 String_t* X509Chain_GetAuthorityKeyIdentifier_m6949 (X509Chain_t1539 * __this, X509Extension_t1414 * ___ext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Chain::CheckRevocationOnChain(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
 void X509Chain_CheckRevocationOnChain_m6950 (X509Chain_t1539 * __this, int32_t ___flag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509Chain::CheckRevocation(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Int32,System.Boolean)
 int32_t X509Chain_CheckRevocation_m6951 (X509Chain_t1539 * __this, X509Certificate2_t1538 * ___certificate, int32_t ___ca, bool ___online, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509Chain::CheckRevocation(System.Security.Cryptography.X509Certificates.X509Certificate2,System.Security.Cryptography.X509Certificates.X509Certificate2,System.Boolean)
 int32_t X509Chain_CheckRevocation_m6952 (X509Chain_t1539 * __this, X509Certificate2_t1538 * ___certificate, X509Certificate2_t1538 * ___ca_cert, bool ___online, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl System.Security.Cryptography.X509Certificates.X509Chain::FindCrl(System.Security.Cryptography.X509Certificates.X509Certificate2)
 X509Crl_t1413 * X509Chain_FindCrl_m6953 (X509Chain_t1539 * __this, X509Certificate2_t1538 * ___caCertificate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::ProcessCrlExtensions(Mono.Security.X509.X509Crl)
 bool X509Chain_ProcessCrlExtensions_m6954 (X509Chain_t1539 * __this, X509Crl_t1413 * ___crl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::ProcessCrlEntryExtensions(Mono.Security.X509.X509Crl/X509CrlEntry)
 bool X509Chain_ProcessCrlEntryExtensions_m6955 (X509Chain_t1539 * __this, X509CrlEntry_t1412 * ___entry, MethodInfo* method) IL2CPP_METHOD_ATTR;
