#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags
#include "System_System_Security_Cryptography_X509Certificates_X509Cha_0.h"
// System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_t1615 
{
	// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509ChainStatus::status
	int32_t ___status_0;
	// System.String System.Security.Cryptography.X509Certificates.X509ChainStatus::info
	String_t* ___info_1;
};
// Native definition for marshalling of: System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_t1615_marshaled
{
	int32_t ___status_0;
	char* ___info_1;
};
