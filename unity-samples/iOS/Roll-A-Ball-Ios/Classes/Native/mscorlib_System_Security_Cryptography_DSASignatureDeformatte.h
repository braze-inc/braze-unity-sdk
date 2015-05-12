#pragma once
#include <stdint.h>
// System.Security.Cryptography.DSA
struct DSA_t1401;
// System.Security.Cryptography.AsymmetricSignatureDeformatter
#include "mscorlib_System_Security_Cryptography_AsymmetricSignatureDef.h"
// System.Security.Cryptography.DSASignatureDeformatter
struct DSASignatureDeformatter_t1529  : public AsymmetricSignatureDeformatter_t1477
{
	// System.Security.Cryptography.DSA System.Security.Cryptography.DSASignatureDeformatter::dsa
	DSA_t1401 * ___dsa_0;
};
