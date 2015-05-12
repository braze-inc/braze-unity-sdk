#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSA
struct DSA_t1390;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t97;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void System.Security.Cryptography.DSA::.ctor()
 void DSA__ctor_m10617 (DSA_t1390 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.DSA::Create()
 DSA_t1390 * DSA_Create_m6447 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.DSA::Create(System.String)
 DSA_t1390 * DSA_Create_m10618 (Object_t * __this/* static, unused */, String_t* ___algName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DSA::CreateSignature(System.Byte[])
// System.Security.Cryptography.DSAParameters System.Security.Cryptography.DSA::ExportParameters(System.Boolean)
// System.Void System.Security.Cryptography.DSA::ZeroizePrivateKey(System.Security.Cryptography.DSAParameters)
 void DSA_ZeroizePrivateKey_m10619 (DSA_t1390 * __this, DSAParameters_t1391  ___parameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSA::FromXmlString(System.String)
 void DSA_FromXmlString_m10620 (DSA_t1390 * __this, String_t* ___xmlString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSA::ImportParameters(System.Security.Cryptography.DSAParameters)
// System.String System.Security.Cryptography.DSA::ToXmlString(System.Boolean)
 String_t* DSA_ToXmlString_m10621 (DSA_t1390 * __this, bool ___includePrivateParameters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSA::VerifySignature(System.Byte[],System.Byte[])
