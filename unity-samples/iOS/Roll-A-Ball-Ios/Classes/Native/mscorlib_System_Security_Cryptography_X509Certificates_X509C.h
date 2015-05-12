#pragma once
#include <stdint.h>
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1829;
// System.Byte[]
struct ByteU5BU5D_t97;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1460  : public Object_t
{
	// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate::x509
	X509Certificate_t1829 * ___x509_0;
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::hideDates
	bool ___hideDates_1;
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::cachedCertificateHash
	ByteU5BU5D_t97* ___cachedCertificateHash_2;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::issuer_name
	String_t* ___issuer_name_3;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::subject_name
	String_t* ___subject_name_4;
};
