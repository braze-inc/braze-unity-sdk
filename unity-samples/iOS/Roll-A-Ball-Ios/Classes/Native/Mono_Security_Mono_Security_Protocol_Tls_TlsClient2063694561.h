#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2200082950;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3432067208;
// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t639738773;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.TlsClientSettings
struct  TlsClientSettings_t2063694561  : public Il2CppObject
{
public:
	// System.String Mono.Security.Protocol.Tls.TlsClientSettings::targetHost
	String_t* ___targetHost_0;
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection Mono.Security.Protocol.Tls.TlsClientSettings::certificates
	X509CertificateCollection_t2200082950 * ___certificates_1;
	// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.TlsClientSettings::clientCertificate
	X509Certificate_t3432067208 * ___clientCertificate_2;
	// Mono.Security.Cryptography.RSAManaged Mono.Security.Protocol.Tls.TlsClientSettings::certificateRSA
	RSAManaged_t639738773 * ___certificateRSA_3;

public:
	inline static int32_t get_offset_of_targetHost_0() { return static_cast<int32_t>(offsetof(TlsClientSettings_t2063694561, ___targetHost_0)); }
	inline String_t* get_targetHost_0() const { return ___targetHost_0; }
	inline String_t** get_address_of_targetHost_0() { return &___targetHost_0; }
	inline void set_targetHost_0(String_t* value)
	{
		___targetHost_0 = value;
		Il2CppCodeGenWriteBarrier(&___targetHost_0, value);
	}

	inline static int32_t get_offset_of_certificates_1() { return static_cast<int32_t>(offsetof(TlsClientSettings_t2063694561, ___certificates_1)); }
	inline X509CertificateCollection_t2200082950 * get_certificates_1() const { return ___certificates_1; }
	inline X509CertificateCollection_t2200082950 ** get_address_of_certificates_1() { return &___certificates_1; }
	inline void set_certificates_1(X509CertificateCollection_t2200082950 * value)
	{
		___certificates_1 = value;
		Il2CppCodeGenWriteBarrier(&___certificates_1, value);
	}

	inline static int32_t get_offset_of_clientCertificate_2() { return static_cast<int32_t>(offsetof(TlsClientSettings_t2063694561, ___clientCertificate_2)); }
	inline X509Certificate_t3432067208 * get_clientCertificate_2() const { return ___clientCertificate_2; }
	inline X509Certificate_t3432067208 ** get_address_of_clientCertificate_2() { return &___clientCertificate_2; }
	inline void set_clientCertificate_2(X509Certificate_t3432067208 * value)
	{
		___clientCertificate_2 = value;
		Il2CppCodeGenWriteBarrier(&___clientCertificate_2, value);
	}

	inline static int32_t get_offset_of_certificateRSA_3() { return static_cast<int32_t>(offsetof(TlsClientSettings_t2063694561, ___certificateRSA_3)); }
	inline RSAManaged_t639738773 * get_certificateRSA_3() const { return ___certificateRSA_3; }
	inline RSAManaged_t639738773 ** get_address_of_certificateRSA_3() { return &___certificateRSA_3; }
	inline void set_certificateRSA_3(RSAManaged_t639738773 * value)
	{
		___certificateRSA_3 = value;
		Il2CppCodeGenWriteBarrier(&___certificateRSA_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
