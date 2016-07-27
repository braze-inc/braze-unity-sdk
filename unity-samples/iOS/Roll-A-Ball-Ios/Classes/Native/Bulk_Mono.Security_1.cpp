#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// Mono.Security.X509.Extensions.KeyUsageExtension
struct KeyUsageExtension_t4108765760;
// Mono.Security.X509.X509Extension
struct X509Extension_t1510964269;
// System.String
struct String_t;
// Mono.Security.X509.Extensions.NetscapeCertTypeExtension
struct NetscapeCertTypeExtension_t1387961723;
// Mono.Security.X509.Extensions.SubjectAltNameExtension
struct SubjectAltNameExtension_t1663182458;
// System.String[]
struct StringU5BU5D_t2956870243;
// Mono.Security.X509.PKCS12
struct PKCS12_t2950126080;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Collections.ArrayList
struct ArrayList_t2121638921;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3336811651;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2174318432;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t839208017;
// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t636832623;
// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t2184496331;
// Mono.Security.ASN1
struct ASN1_t1254135647;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t273828613;
// System.Collections.IDictionary
struct IDictionary_t1654916945;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t1278398632;
// System.Object
struct Il2CppObject;
// Mono.Security.X509.PKCS12/DeriveBytes
struct DeriveBytes_t2715912549;
// Mono.Security.X509.SafeBag
struct SafeBag_t4111116303;
// System.Text.StringBuilder
struct StringBuilder_t3822575854;
// System.Security.Cryptography.DSA
struct DSA_t1557551819;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t3528692651;
// System.Security.Cryptography.RSA
struct RSA_t1557565273;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t4236534322;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2995724695;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t3569011382;
// Mono.Security.X509.X509Chain
struct X509Chain_t3968320430;
// Mono.Security.X509.X509Crl
struct X509Crl_t2942805322;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t3291243611;
// Mono.Security.X509.X509Store
struct X509Store_t3983467982;
// Mono.Security.X509.X509Stores
struct X509Stores_t2754714603;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "Mono_Security_Mono_Security_X509_Extensions_KeyUsa4108765760.h"
#include "Mono_Security_Mono_Security_X509_Extensions_KeyUsa4108765760MethodDeclarations.h"
#include "Mono_Security_Mono_Security_X509_X509Extension1510964268.h"
#include "mscorlib_System_Void2779279689.h"
#include "Mono_Security_Mono_Security_X509_X509Extension1510964268MethodDeclarations.h"
#include "Mono_Security_Mono_Security_ASN11254135646MethodDeclarations.h"
#include "mscorlib_System_ArgumentException124305799MethodDeclarations.h"
#include "Mono_Security_Mono_Security_ASN11254135646.h"
#include "mscorlib_System_Int322847414787.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Byte2778693821.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_ArgumentException124305799.h"
#include "mscorlib_System_UInt16985925268.h"
#include "Mono_Security_Mono_Security_X509_Extensions_KeyUsag912788628.h"
#include "mscorlib_System_Boolean211005341.h"
#include "mscorlib_System_Globalization_CultureInfo3603717042MethodDeclarations.h"
#include "mscorlib_System_Convert1097883944MethodDeclarations.h"
#include "mscorlib_System_Globalization_CultureInfo3603717042.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Text_StringBuilder3822575854MethodDeclarations.h"
#include "mscorlib_System_Int322847414787MethodDeclarations.h"
#include "mscorlib_System_Environment63604104MethodDeclarations.h"
#include "mscorlib_System_Text_StringBuilder3822575854.h"
#include "Mono_Security_Mono_Security_X509_Extensions_KeyUsag912788628MethodDeclarations.h"
#include "Mono_Security_Mono_Security_X509_Extensions_Netsca1387961723.h"
#include "Mono_Security_Mono_Security_X509_Extensions_Netsca1387961723MethodDeclarations.h"
#include "Mono_Security_Mono_Security_X509_Extensions_Netscap588297365.h"
#include "Mono_Security_Mono_Security_X509_Extensions_Netscap588297365MethodDeclarations.h"
#include "Mono_Security_Mono_Security_X509_Extensions_Subjec1663182458.h"
#include "Mono_Security_Mono_Security_X509_Extensions_Subjec1663182458MethodDeclarations.h"
#include "Mono_Security_Mono_Security_X509_Extensions_Genera2474193379MethodDeclarations.h"
#include "Mono_Security_Mono_Security_X509_Extensions_Genera2474193379.h"
#include "Mono_Security_Mono_Security_X509_PKCS122950126079.h"
#include "Mono_Security_Mono_Security_X509_PKCS122950126079MethodDeclarations.h"
#include "mscorlib_System_Object837106420MethodDeclarations.h"
#include "mscorlib_System_Collections_ArrayList2121638921MethodDeclarations.h"
#include "Mono_Security_Mono_Security_X509_X509CertificateCo3336811650MethodDeclarations.h"
#include "mscorlib_System_Collections_ArrayList2121638921.h"
#include "Mono_Security_Mono_Security_X509_X509CertificateCo3336811650.h"
#include "Mono_Security_Mono_Security_PKCS7_ContentInfo1278398631MethodDeclarations.h"
#include "mscorlib_System_String968488902MethodDeclarations.h"
#include "Mono_Security_Mono_Security_ASN1Convert4150720679MethodDeclarations.h"
#include "mscorlib_System_Security_Cryptography_Cryptographi3718270561MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ge190145395MethodDeclarations.h"
#include "Mono_Security_Mono_Security_PKCS7_EncryptedData636832622MethodDeclarations.h"
#include "mscorlib_System_NotImplementedException1091014741MethodDeclarations.h"
#include "Mono_Security_Mono_Security_PKCS7_ContentInfo1278398631.h"
#include "Mono_Security_Mono_Security_PKCS7_EncryptedData636832622.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ge190145395.h"
#include "mscorlib_System_Security_Cryptography_Cryptographi3718270561.h"
#include "mscorlib_System_NotImplementedException1091014741.h"
#include "mscorlib_System_Array2840145358MethodDeclarations.h"
#include "mscorlib_System_Text_Encoding180559927MethodDeclarations.h"
#include "mscorlib_System_Char2778706699.h"
#include "mscorlib_System_Text_Encoding180559927.h"
#include "Mono_Security_Mono_Security_X509_SafeBag4111116302MethodDeclarations.h"
#include "Mono_Security_Mono_Security_Cryptography_PKCS8_Pri2184496330MethodDeclarations.h"
#include "Mono_Security_Mono_Security_Cryptography_PKCS8_Encr785870702MethodDeclarations.h"
#include "Mono_Security_Mono_Security_X509_SafeBag4111116302.h"
#include "Mono_Security_Mono_Security_Cryptography_PKCS8_Pri2184496330.h"
#include "mscorlib_System_Security_Cryptography_DSAParameter2524359253.h"
#include "Mono_Security_Mono_Security_Cryptography_PKCS8_Encr785870702.h"
#include "mscorlib_System_Security_Cryptography_DSA1557551819.h"
#include "mscorlib_System_Security_Cryptography_RSA1557565273.h"
#include "Mono_Security_Mono_Security_X509_X509Certificate273828612MethodDeclarations.h"
#include "mscorlib_System_Collections_CollectionBase851261505MethodDeclarations.h"
#include "mscorlib_System_Collections_CollectionBase851261505.h"
#include "Mono_Security_Mono_Security_X509_X509Certificate273828612.h"
#include "mscorlib_System_Security_Cryptography_RandomNumber2174318432.h"
#include "mscorlib_System_Security_Cryptography_RandomNumber2174318432MethodDeclarations.h"
#include "mscorlib_System_Security_Cryptography_SymmetricAlgo839208017.h"
#include "Mono_Security_Mono_Security_X509_PKCS12_DeriveByte2715912548MethodDeclarations.h"
#include "mscorlib_System_NotSupportedException1374155497MethodDeclarations.h"
#include "mscorlib_System_Security_Cryptography_SymmetricAlgo839208017MethodDeclarations.h"
#include "Mono_Security_Mono_Security_X509_PKCS12_DeriveByte2715912548.h"
#include "mscorlib_System_NotSupportedException1374155497.h"
#include "mscorlib_System_Security_Cryptography_CipherMode3203384231.h"
#include "Mono_Security_Mono_Security_X509_X509CertificateCo3569011381MethodDeclarations.h"
#include "Mono_Security_Mono_Security_X509_X509CertificateCo3569011381.h"
#include "mscorlib_System_Security_Cryptography_DSA1557551819MethodDeclarations.h"
#include "mscorlib_System_Security_Cryptography_HMAC1559704864MethodDeclarations.h"
#include "mscorlib_System_Security_Cryptography_HashAlgorithm24372250MethodDeclarations.h"
#include "mscorlib_System_Security_Cryptography_HMACSHA14029397701.h"
#include "mscorlib_System_Security_Cryptography_HMAC1559704864.h"
#include "mscorlib_System_Runtime_CompilerServices_RuntimeHe1695827251MethodDeclarations.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E3053238933.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E3053238933MethodDeclarations.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U2214874643.h"
#include "mscorlib_System_RuntimeFieldHandle3184214143.h"
#include "mscorlib_System_Buffer482356213MethodDeclarations.h"
#include "mscorlib_System_Security_Cryptography_HashAlgorithm24372250.h"
#include "Mono_Security_Mono_Security_X509_X501591126673.h"
#include "Mono_Security_Mono_Security_X509_X501591126673MethodDeclarations.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U2214874486.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U2214874490.h"
#include "mscorlib_System_Exception1967233988.h"
#include "Mono_Security_Locale2281372282MethodDeclarations.h"
#include "Mono_Security_Mono_Security_X509_X509ExtensionColl3528692650MethodDeclarations.h"
#include "mscorlib_System_DateTime339033936.h"
#include "Mono_Security_Mono_Security_X509_X509ExtensionColl3528692650.h"
#include "mscorlib_System_Security_Cryptography_DSACryptoSer1493589900MethodDeclarations.h"
#include "mscorlib_System_Security_Cryptography_DSACryptoSer1493589900.h"
#include "Mono_Security_Mono_Security_Cryptography_MD23745417136MethodDeclarations.h"
#include "mscorlib_System_Security_Cryptography_MD51557559991MethodDeclarations.h"
#include "mscorlib_System_Security_Cryptography_SHA11560027742MethodDeclarations.h"
#include "mscorlib_System_Security_Cryptography_SHA2564002183040MethodDeclarations.h"
#include "Mono_Security_Mono_Security_Cryptography_MD23745417136.h"
#include "mscorlib_System_Security_Cryptography_MD51557559991.h"
#include "mscorlib_System_Security_Cryptography_SHA11560027742.h"
#include "mscorlib_System_Security_Cryptography_SHA2564002183040.h"
#include "mscorlib_System_Security_Cryptography_RSACryptoServ555495358MethodDeclarations.h"
#include "mscorlib_System_Security_Cryptography_RSAParameter2711684451.h"
#include "mscorlib_System_Security_Cryptography_RSACryptoServ555495358.h"
#include "mscorlib_System_Security_Cryptography_RSA1557565273MethodDeclarations.h"
#include "mscorlib_System_Math2778998461MethodDeclarations.h"
#include "mscorlib_System_DateTime339033936MethodDeclarations.h"
#include "mscorlib_System_Security_Cryptography_DSASignatureD426713980MethodDeclarations.h"
#include "mscorlib_System_Security_Cryptography_DSASignatureD426713980.h"
#include "mscorlib_System_Security_Cryptography_AsymmetricAl4236534322.h"
#include "mscorlib_System_Security_Cryptography_RSAPKCS1Sign1504052144MethodDeclarations.h"
#include "mscorlib_System_Security_Cryptography_RSAPKCS1Sign1504052144.h"
#include "mscorlib_System_ArgumentNullException3214793280MethodDeclarations.h"
#include "mscorlib_System_ArgumentNullException3214793280.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio2995724695MethodDeclarations.h"
#include "Mono_Security_Mono_Security_X509_X509Chain3968320430.h"
#include "Mono_Security_Mono_Security_X509_X509Chain3968320430MethodDeclarations.h"
#include "Mono_Security_Mono_Security_X509_X509ChainStatusFl2524654829.h"
#include "Mono_Security_Mono_Security_X509_X509StoreManager902433605MethodDeclarations.h"
#include "System_System_Net_ServicePointManager3601037980MethodDeclarations.h"
#include "Mono_Security_Mono_Security_X509_Extensions_BasicCo455698010MethodDeclarations.h"
#include "Mono_Security_Mono_Security_X509_Extensions_BasicCo455698010.h"
#include "Mono_Security_Mono_Security_X509_X509ChainStatusFl2524654829MethodDeclarations.h"
#include "Mono_Security_Mono_Security_X509_X509Crl2942805322.h"
#include "Mono_Security_Mono_Security_X509_X509Crl2942805322MethodDeclarations.h"
#include "Mono_Security_Mono_Security_X509_X509Crl_X509CrlEn3291243611MethodDeclarations.h"
#include "Mono_Security_Mono_Security_X509_X509Crl_X509CrlEn3291243611.h"
#include "mscorlib_System_Byte2778693821MethodDeclarations.h"
#include "mscorlib_System_Exception1967233988MethodDeclarations.h"
#include "Mono_Security_Mono_Security_X509_X509Store3983467982.h"
#include "Mono_Security_Mono_Security_X509_X509Store3983467982MethodDeclarations.h"
#include "mscorlib_System_IO_File2029342275MethodDeclarations.h"
#include "mscorlib_System_IO_FileStream1527309539.h"
#include "mscorlib_System_IO_FileStream1527309539MethodDeclarations.h"
#include "mscorlib_System_Int642847414882.h"
#include "mscorlib_System_IO_Stream219029575MethodDeclarations.h"
#include "mscorlib_System_IO_Stream219029575.h"
#include "mscorlib_System_IO_Directory3068535540MethodDeclarations.h"
#include "mscorlib_System_IO_DirectoryInfo3421965634.h"
#include "mscorlib_System_IO_Path2029632748MethodDeclarations.h"
#include "Mono_Security_Mono_Security_X509_X509StoreManager902433605.h"
#include "Mono_Security_Mono_Security_X509_X509Stores2754714603.h"
#include "Mono_Security_Mono_Security_X509_X509Stores2754714603MethodDeclarations.h"
#include "mscorlib_System_Environment_SpecialFolder3826993767.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.Extensions.KeyUsageExtension::.ctor(Mono.Security.X509.X509Extension)
extern "C"  void KeyUsageExtension__ctor_m2614086738 (KeyUsageExtension_t4108765760 * __this, X509Extension_t1510964269 * ___extension0, const MethodInfo* method)
{
	{
		X509Extension_t1510964269 * L_0 = ___extension0;
		X509Extension__ctor_m3298017424(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.X509.Extensions.KeyUsageExtension::Decode()
extern Il2CppClass* ASN1_t1254135647_il2cpp_TypeInfo_var;
extern Il2CppClass* ArgumentException_t124305799_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2753326378;
extern const uint32_t KeyUsageExtension_Decode_m318383628_MetadataUsageId;
extern "C"  void KeyUsageExtension_Decode_m318383628 (KeyUsageExtension_t4108765760 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (KeyUsageExtension_Decode_m318383628_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ASN1_t1254135647 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		ASN1_t1254135647 * L_0 = ((X509Extension_t1510964269 *)__this)->get_extnValue_2();
		NullCheck(L_0);
		ByteU5BU5D_t58506160* L_1 = ASN1_get_Value_m4232529916(L_0, /*hidden argument*/NULL);
		ASN1_t1254135647 * L_2 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m2555733065(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ASN1_t1254135647 * L_3 = V_0;
		NullCheck(L_3);
		uint8_t L_4 = ASN1_get_Tag_m1269404867(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) == ((int32_t)3)))
		{
			goto IL_0028;
		}
	}
	{
		ArgumentException_t124305799 * L_5 = (ArgumentException_t124305799 *)il2cpp_codegen_object_new(ArgumentException_t124305799_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3544856547(L_5, _stringLiteral2753326378, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5);
	}

IL_0028:
	{
		V_1 = 1;
		goto IL_004a;
	}

IL_002f:
	{
		int32_t L_6 = __this->get_kubits_3();
		ASN1_t1254135647 * L_7 = V_0;
		NullCheck(L_7);
		ByteU5BU5D_t58506160* L_8 = ASN1_get_Value_m4232529916(L_7, /*hidden argument*/NULL);
		int32_t L_9 = V_1;
		int32_t L_10 = L_9;
		V_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_10);
		int32_t L_11 = L_10;
		__this->set_kubits_3(((int32_t)((int32_t)((int32_t)((int32_t)L_6<<(int32_t)8))+(int32_t)((L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_11))))));
	}

IL_004a:
	{
		int32_t L_12 = V_1;
		ASN1_t1254135647 * L_13 = V_0;
		NullCheck(L_13);
		ByteU5BU5D_t58506160* L_14 = ASN1_get_Value_m4232529916(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_14)->max_length)))))))
		{
			goto IL_002f;
		}
	}
	{
		return;
	}
}
// System.Void Mono.Security.X509.Extensions.KeyUsageExtension::Encode()
extern Il2CppClass* ASN1_t1254135647_il2cpp_TypeInfo_var;
extern Il2CppClass* ByteU5BU5D_t58506160_il2cpp_TypeInfo_var;
extern const uint32_t KeyUsageExtension_Encode_m1458792500_MetadataUsageId;
extern "C"  void KeyUsageExtension_Encode_m1458792500 (KeyUsageExtension_t4108765760 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (KeyUsageExtension_Encode_m1458792500_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	uint16_t V_0 = 0;
	uint8_t V_1 = 0x0;
	{
		ASN1_t1254135647 * L_0 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m1084222443(L_0, 4, /*hidden argument*/NULL);
		((X509Extension_t1510964269 *)__this)->set_extnValue_2(L_0);
		int32_t L_1 = __this->get_kubits_3();
		V_0 = (((int32_t)((uint16_t)L_1)));
		V_1 = ((int32_t)16);
		uint16_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_00c4;
		}
	}
	{
		V_1 = ((int32_t)15);
		goto IL_0046;
	}

IL_0026:
	{
		uint16_t L_3 = V_0;
		if ((!(((uint32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)32768)))) == ((uint32_t)((int32_t)32768)))))
		{
			goto IL_003c;
		}
	}
	{
		goto IL_004d;
	}

IL_003c:
	{
		uint16_t L_4 = V_0;
		V_0 = (((int32_t)((uint16_t)((int32_t)((int32_t)L_4<<(int32_t)1)))));
		uint8_t L_5 = V_1;
		V_1 = (((int32_t)((uint8_t)((int32_t)((int32_t)L_5-(int32_t)1)))));
	}

IL_0046:
	{
		uint8_t L_6 = V_1;
		if ((((int32_t)L_6) > ((int32_t)0)))
		{
			goto IL_0026;
		}
	}

IL_004d:
	{
		int32_t L_7 = __this->get_kubits_3();
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)255))))
		{
			goto IL_0099;
		}
	}
	{
		uint8_t L_8 = V_1;
		V_1 = (((int32_t)((uint8_t)((int32_t)((int32_t)L_8-(int32_t)8)))));
		ASN1_t1254135647 * L_9 = ((X509Extension_t1510964269 *)__this)->get_extnValue_2();
		ByteU5BU5D_t58506160* L_10 = ((ByteU5BU5D_t58506160*)SZArrayNew(ByteU5BU5D_t58506160_il2cpp_TypeInfo_var, (uint32_t)3));
		uint8_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 0);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_11);
		ByteU5BU5D_t58506160* L_12 = L_10;
		int32_t L_13 = __this->get_kubits_3();
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 1);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)(((int32_t)((uint8_t)L_13))));
		ByteU5BU5D_t58506160* L_14 = L_12;
		int32_t L_15 = __this->get_kubits_3();
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 2);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_15>>(int32_t)8))))));
		ASN1_t1254135647 * L_16 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m3139747246(L_16, 3, L_14, /*hidden argument*/NULL);
		NullCheck(L_9);
		ASN1_Add_m3856133576(L_9, L_16, /*hidden argument*/NULL);
		goto IL_00bf;
	}

IL_0099:
	{
		ASN1_t1254135647 * L_17 = ((X509Extension_t1510964269 *)__this)->get_extnValue_2();
		ByteU5BU5D_t58506160* L_18 = ((ByteU5BU5D_t58506160*)SZArrayNew(ByteU5BU5D_t58506160_il2cpp_TypeInfo_var, (uint32_t)2));
		uint8_t L_19 = V_1;
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 0);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_19);
		ByteU5BU5D_t58506160* L_20 = L_18;
		int32_t L_21 = __this->get_kubits_3();
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 1);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)(((int32_t)((uint8_t)L_21))));
		ASN1_t1254135647 * L_22 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m3139747246(L_22, 3, L_20, /*hidden argument*/NULL);
		NullCheck(L_17);
		ASN1_Add_m3856133576(L_17, L_22, /*hidden argument*/NULL);
	}

IL_00bf:
	{
		goto IL_00e0;
	}

IL_00c4:
	{
		ASN1_t1254135647 * L_23 = ((X509Extension_t1510964269 *)__this)->get_extnValue_2();
		ByteU5BU5D_t58506160* L_24 = ((ByteU5BU5D_t58506160*)SZArrayNew(ByteU5BU5D_t58506160_il2cpp_TypeInfo_var, (uint32_t)2));
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 0);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)7);
		ASN1_t1254135647 * L_25 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m3139747246(L_25, 3, L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		ASN1_Add_m3856133576(L_23, L_25, /*hidden argument*/NULL);
	}

IL_00e0:
	{
		return;
	}
}
// System.Boolean Mono.Security.X509.Extensions.KeyUsageExtension::Support(Mono.Security.X509.Extensions.KeyUsages)
extern Il2CppClass* KeyUsages_t912788628_il2cpp_TypeInfo_var;
extern Il2CppClass* CultureInfo_t3603717042_il2cpp_TypeInfo_var;
extern Il2CppClass* Convert_t1097883944_il2cpp_TypeInfo_var;
extern const uint32_t KeyUsageExtension_Support_m2695467029_MetadataUsageId;
extern "C"  bool KeyUsageExtension_Support_m2695467029 (KeyUsageExtension_t4108765760 * __this, int32_t ___usage0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (KeyUsageExtension_Support_m2695467029_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___usage0;
		int32_t L_1 = L_0;
		Il2CppObject * L_2 = Box(KeyUsages_t912788628_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t3603717042_il2cpp_TypeInfo_var);
		CultureInfo_t3603717042 * L_3 = CultureInfo_get_InvariantCulture_m764001524(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1097883944_il2cpp_TypeInfo_var);
		int32_t L_4 = Convert_ToInt32_m2328407475(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = __this->get_kubits_3();
		int32_t L_7 = V_0;
		return (bool)((((int32_t)((int32_t)((int32_t)L_5&(int32_t)L_6))) == ((int32_t)L_7))? 1 : 0);
	}
}
// System.String Mono.Security.X509.Extensions.KeyUsageExtension::ToString()
extern Il2CppClass* StringBuilder_t3822575854_il2cpp_TypeInfo_var;
extern Il2CppClass* CultureInfo_t3603717042_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3422178416;
extern Il2CppCodeGenString* _stringLiteral32148;
extern Il2CppCodeGenString* _stringLiteral4081702872;
extern Il2CppCodeGenString* _stringLiteral335505331;
extern Il2CppCodeGenString* _stringLiteral4206347272;
extern Il2CppCodeGenString* _stringLiteral2220570953;
extern Il2CppCodeGenString* _stringLiteral2692102972;
extern Il2CppCodeGenString* _stringLiteral394834306;
extern Il2CppCodeGenString* _stringLiteral1242042056;
extern Il2CppCodeGenString* _stringLiteral3743786368;
extern Il2CppCodeGenString* _stringLiteral40;
extern Il2CppCodeGenString* _stringLiteral2778;
extern Il2CppCodeGenString* _stringLiteral41;
extern const uint32_t KeyUsageExtension_ToString_m3863870599_MetadataUsageId;
extern "C"  String_t* KeyUsageExtension_ToString_m3863870599 (KeyUsageExtension_t4108765760 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (KeyUsageExtension_ToString_m3863870599_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = NULL;
	StringBuilder_t3822575854 * V_1 = NULL;
	{
		StringBuilder_t3822575854 * L_0 = (StringBuilder_t3822575854 *)il2cpp_codegen_object_new(StringBuilder_t3822575854_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m135953004(L_0, /*hidden argument*/NULL);
		V_1 = L_0;
		bool L_1 = KeyUsageExtension_Support_m2695467029(__this, ((int32_t)128), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		StringBuilder_t3822575854 * L_2 = V_1;
		NullCheck(L_2);
		StringBuilder_Append_m3898090075(L_2, _stringLiteral3422178416, /*hidden argument*/NULL);
	}

IL_0022:
	{
		bool L_3 = KeyUsageExtension_Support_m2695467029(__this, ((int32_t)64), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0053;
		}
	}
	{
		StringBuilder_t3822575854 * L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5 = StringBuilder_get_Length_m2443133099(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0047;
		}
	}
	{
		StringBuilder_t3822575854 * L_6 = V_1;
		NullCheck(L_6);
		StringBuilder_Append_m3898090075(L_6, _stringLiteral32148, /*hidden argument*/NULL);
	}

IL_0047:
	{
		StringBuilder_t3822575854 * L_7 = V_1;
		NullCheck(L_7);
		StringBuilder_Append_m3898090075(L_7, _stringLiteral4081702872, /*hidden argument*/NULL);
	}

IL_0053:
	{
		bool L_8 = KeyUsageExtension_Support_m2695467029(__this, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0084;
		}
	}
	{
		StringBuilder_t3822575854 * L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = StringBuilder_get_Length_m2443133099(L_9, /*hidden argument*/NULL);
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0078;
		}
	}
	{
		StringBuilder_t3822575854 * L_11 = V_1;
		NullCheck(L_11);
		StringBuilder_Append_m3898090075(L_11, _stringLiteral32148, /*hidden argument*/NULL);
	}

IL_0078:
	{
		StringBuilder_t3822575854 * L_12 = V_1;
		NullCheck(L_12);
		StringBuilder_Append_m3898090075(L_12, _stringLiteral335505331, /*hidden argument*/NULL);
	}

IL_0084:
	{
		bool L_13 = KeyUsageExtension_Support_m2695467029(__this, ((int32_t)16), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00b5;
		}
	}
	{
		StringBuilder_t3822575854 * L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15 = StringBuilder_get_Length_m2443133099(L_14, /*hidden argument*/NULL);
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_00a9;
		}
	}
	{
		StringBuilder_t3822575854 * L_16 = V_1;
		NullCheck(L_16);
		StringBuilder_Append_m3898090075(L_16, _stringLiteral32148, /*hidden argument*/NULL);
	}

IL_00a9:
	{
		StringBuilder_t3822575854 * L_17 = V_1;
		NullCheck(L_17);
		StringBuilder_Append_m3898090075(L_17, _stringLiteral4206347272, /*hidden argument*/NULL);
	}

IL_00b5:
	{
		bool L_18 = KeyUsageExtension_Support_m2695467029(__this, 8, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00e5;
		}
	}
	{
		StringBuilder_t3822575854 * L_19 = V_1;
		NullCheck(L_19);
		int32_t L_20 = StringBuilder_get_Length_m2443133099(L_19, /*hidden argument*/NULL);
		if ((((int32_t)L_20) <= ((int32_t)0)))
		{
			goto IL_00d9;
		}
	}
	{
		StringBuilder_t3822575854 * L_21 = V_1;
		NullCheck(L_21);
		StringBuilder_Append_m3898090075(L_21, _stringLiteral32148, /*hidden argument*/NULL);
	}

IL_00d9:
	{
		StringBuilder_t3822575854 * L_22 = V_1;
		NullCheck(L_22);
		StringBuilder_Append_m3898090075(L_22, _stringLiteral2220570953, /*hidden argument*/NULL);
	}

IL_00e5:
	{
		bool L_23 = KeyUsageExtension_Support_m2695467029(__this, 4, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0115;
		}
	}
	{
		StringBuilder_t3822575854 * L_24 = V_1;
		NullCheck(L_24);
		int32_t L_25 = StringBuilder_get_Length_m2443133099(L_24, /*hidden argument*/NULL);
		if ((((int32_t)L_25) <= ((int32_t)0)))
		{
			goto IL_0109;
		}
	}
	{
		StringBuilder_t3822575854 * L_26 = V_1;
		NullCheck(L_26);
		StringBuilder_Append_m3898090075(L_26, _stringLiteral32148, /*hidden argument*/NULL);
	}

IL_0109:
	{
		StringBuilder_t3822575854 * L_27 = V_1;
		NullCheck(L_27);
		StringBuilder_Append_m3898090075(L_27, _stringLiteral2692102972, /*hidden argument*/NULL);
	}

IL_0115:
	{
		bool L_28 = KeyUsageExtension_Support_m2695467029(__this, 2, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_0145;
		}
	}
	{
		StringBuilder_t3822575854 * L_29 = V_1;
		NullCheck(L_29);
		int32_t L_30 = StringBuilder_get_Length_m2443133099(L_29, /*hidden argument*/NULL);
		if ((((int32_t)L_30) <= ((int32_t)0)))
		{
			goto IL_0139;
		}
	}
	{
		StringBuilder_t3822575854 * L_31 = V_1;
		NullCheck(L_31);
		StringBuilder_Append_m3898090075(L_31, _stringLiteral32148, /*hidden argument*/NULL);
	}

IL_0139:
	{
		StringBuilder_t3822575854 * L_32 = V_1;
		NullCheck(L_32);
		StringBuilder_Append_m3898090075(L_32, _stringLiteral394834306, /*hidden argument*/NULL);
	}

IL_0145:
	{
		bool L_33 = KeyUsageExtension_Support_m2695467029(__this, 1, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_0175;
		}
	}
	{
		StringBuilder_t3822575854 * L_34 = V_1;
		NullCheck(L_34);
		int32_t L_35 = StringBuilder_get_Length_m2443133099(L_34, /*hidden argument*/NULL);
		if ((((int32_t)L_35) <= ((int32_t)0)))
		{
			goto IL_0169;
		}
	}
	{
		StringBuilder_t3822575854 * L_36 = V_1;
		NullCheck(L_36);
		StringBuilder_Append_m3898090075(L_36, _stringLiteral32148, /*hidden argument*/NULL);
	}

IL_0169:
	{
		StringBuilder_t3822575854 * L_37 = V_1;
		NullCheck(L_37);
		StringBuilder_Append_m3898090075(L_37, _stringLiteral1242042056, /*hidden argument*/NULL);
	}

IL_0175:
	{
		bool L_38 = KeyUsageExtension_Support_m2695467029(__this, ((int32_t)2048), /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_01a9;
		}
	}
	{
		StringBuilder_t3822575854 * L_39 = V_1;
		NullCheck(L_39);
		int32_t L_40 = StringBuilder_get_Length_m2443133099(L_39, /*hidden argument*/NULL);
		if ((((int32_t)L_40) <= ((int32_t)0)))
		{
			goto IL_019d;
		}
	}
	{
		StringBuilder_t3822575854 * L_41 = V_1;
		NullCheck(L_41);
		StringBuilder_Append_m3898090075(L_41, _stringLiteral32148, /*hidden argument*/NULL);
	}

IL_019d:
	{
		StringBuilder_t3822575854 * L_42 = V_1;
		NullCheck(L_42);
		StringBuilder_Append_m3898090075(L_42, _stringLiteral3743786368, /*hidden argument*/NULL);
	}

IL_01a9:
	{
		StringBuilder_t3822575854 * L_43 = V_1;
		NullCheck(L_43);
		StringBuilder_Append_m3898090075(L_43, _stringLiteral40, /*hidden argument*/NULL);
		StringBuilder_t3822575854 * L_44 = V_1;
		int32_t* L_45 = __this->get_address_of_kubits_3();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t3603717042_il2cpp_TypeInfo_var);
		CultureInfo_t3603717042 * L_46 = CultureInfo_get_InvariantCulture_m764001524(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_47 = Int32_ToString_m4261017954(L_45, _stringLiteral2778, L_46, /*hidden argument*/NULL);
		NullCheck(L_44);
		StringBuilder_Append_m3898090075(L_44, L_47, /*hidden argument*/NULL);
		StringBuilder_t3822575854 * L_48 = V_1;
		NullCheck(L_48);
		StringBuilder_Append_m3898090075(L_48, _stringLiteral41, /*hidden argument*/NULL);
		StringBuilder_t3822575854 * L_49 = V_1;
		String_t* L_50 = Environment_get_NewLine_m1034655108(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_49);
		StringBuilder_Append_m3898090075(L_49, L_50, /*hidden argument*/NULL);
		StringBuilder_t3822575854 * L_51 = V_1;
		NullCheck(L_51);
		String_t* L_52 = StringBuilder_ToString_m350379841(L_51, /*hidden argument*/NULL);
		return L_52;
	}
}
// System.Void Mono.Security.X509.Extensions.NetscapeCertTypeExtension::.ctor(Mono.Security.X509.X509Extension)
extern "C"  void NetscapeCertTypeExtension__ctor_m3785381751 (NetscapeCertTypeExtension_t1387961723 * __this, X509Extension_t1510964269 * ___extension0, const MethodInfo* method)
{
	{
		X509Extension_t1510964269 * L_0 = ___extension0;
		X509Extension__ctor_m3298017424(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.X509.Extensions.NetscapeCertTypeExtension::Decode()
extern Il2CppClass* ASN1_t1254135647_il2cpp_TypeInfo_var;
extern Il2CppClass* ArgumentException_t124305799_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4118022223;
extern const uint32_t NetscapeCertTypeExtension_Decode_m4024937351_MetadataUsageId;
extern "C"  void NetscapeCertTypeExtension_Decode_m4024937351 (NetscapeCertTypeExtension_t1387961723 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetscapeCertTypeExtension_Decode_m4024937351_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ASN1_t1254135647 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		ASN1_t1254135647 * L_0 = ((X509Extension_t1510964269 *)__this)->get_extnValue_2();
		NullCheck(L_0);
		ByteU5BU5D_t58506160* L_1 = ASN1_get_Value_m4232529916(L_0, /*hidden argument*/NULL);
		ASN1_t1254135647 * L_2 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m2555733065(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ASN1_t1254135647 * L_3 = V_0;
		NullCheck(L_3);
		uint8_t L_4 = ASN1_get_Tag_m1269404867(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) == ((int32_t)3)))
		{
			goto IL_0028;
		}
	}
	{
		ArgumentException_t124305799 * L_5 = (ArgumentException_t124305799 *)il2cpp_codegen_object_new(ArgumentException_t124305799_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3544856547(L_5, _stringLiteral4118022223, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5);
	}

IL_0028:
	{
		V_1 = 1;
		goto IL_004a;
	}

IL_002f:
	{
		int32_t L_6 = __this->get_ctbits_3();
		ASN1_t1254135647 * L_7 = V_0;
		NullCheck(L_7);
		ByteU5BU5D_t58506160* L_8 = ASN1_get_Value_m4232529916(L_7, /*hidden argument*/NULL);
		int32_t L_9 = V_1;
		int32_t L_10 = L_9;
		V_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_10);
		int32_t L_11 = L_10;
		__this->set_ctbits_3(((int32_t)((int32_t)((int32_t)((int32_t)L_6<<(int32_t)8))+(int32_t)((L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_11))))));
	}

IL_004a:
	{
		int32_t L_12 = V_1;
		ASN1_t1254135647 * L_13 = V_0;
		NullCheck(L_13);
		ByteU5BU5D_t58506160* L_14 = ASN1_get_Value_m4232529916(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_14)->max_length)))))))
		{
			goto IL_002f;
		}
	}
	{
		return;
	}
}
// System.Boolean Mono.Security.X509.Extensions.NetscapeCertTypeExtension::Support(Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes)
extern Il2CppClass* CertTypes_t588297365_il2cpp_TypeInfo_var;
extern Il2CppClass* CultureInfo_t3603717042_il2cpp_TypeInfo_var;
extern Il2CppClass* Convert_t1097883944_il2cpp_TypeInfo_var;
extern const uint32_t NetscapeCertTypeExtension_Support_m1416151043_MetadataUsageId;
extern "C"  bool NetscapeCertTypeExtension_Support_m1416151043 (NetscapeCertTypeExtension_t1387961723 * __this, int32_t ___usage0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetscapeCertTypeExtension_Support_m1416151043_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___usage0;
		int32_t L_1 = L_0;
		Il2CppObject * L_2 = Box(CertTypes_t588297365_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t3603717042_il2cpp_TypeInfo_var);
		CultureInfo_t3603717042 * L_3 = CultureInfo_get_InvariantCulture_m764001524(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1097883944_il2cpp_TypeInfo_var);
		int32_t L_4 = Convert_ToInt32_m2328407475(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = __this->get_ctbits_3();
		int32_t L_7 = V_0;
		return (bool)((((int32_t)((int32_t)((int32_t)L_5&(int32_t)L_6))) == ((int32_t)L_7))? 1 : 0);
	}
}
// System.String Mono.Security.X509.Extensions.NetscapeCertTypeExtension::ToString()
extern Il2CppClass* StringBuilder_t3822575854_il2cpp_TypeInfo_var;
extern Il2CppClass* CultureInfo_t3603717042_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1288437817;
extern Il2CppCodeGenString* _stringLiteral32148;
extern Il2CppCodeGenString* _stringLiteral1887397313;
extern Il2CppCodeGenString* _stringLiteral79018759;
extern Il2CppCodeGenString* _stringLiteral1923250468;
extern Il2CppCodeGenString* _stringLiteral2455168786;
extern Il2CppCodeGenString* _stringLiteral405804055;
extern Il2CppCodeGenString* _stringLiteral690996442;
extern Il2CppCodeGenString* _stringLiteral40;
extern Il2CppCodeGenString* _stringLiteral2778;
extern Il2CppCodeGenString* _stringLiteral41;
extern const uint32_t NetscapeCertTypeExtension_ToString_m3439723074_MetadataUsageId;
extern "C"  String_t* NetscapeCertTypeExtension_ToString_m3439723074 (NetscapeCertTypeExtension_t1387961723 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NetscapeCertTypeExtension_ToString_m3439723074_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = NULL;
	StringBuilder_t3822575854 * V_1 = NULL;
	{
		StringBuilder_t3822575854 * L_0 = (StringBuilder_t3822575854 *)il2cpp_codegen_object_new(StringBuilder_t3822575854_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m135953004(L_0, /*hidden argument*/NULL);
		V_1 = L_0;
		bool L_1 = NetscapeCertTypeExtension_Support_m1416151043(__this, ((int32_t)128), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		StringBuilder_t3822575854 * L_2 = V_1;
		NullCheck(L_2);
		StringBuilder_Append_m3898090075(L_2, _stringLiteral1288437817, /*hidden argument*/NULL);
	}

IL_0022:
	{
		bool L_3 = NetscapeCertTypeExtension_Support_m1416151043(__this, ((int32_t)64), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0053;
		}
	}
	{
		StringBuilder_t3822575854 * L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5 = StringBuilder_get_Length_m2443133099(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0047;
		}
	}
	{
		StringBuilder_t3822575854 * L_6 = V_1;
		NullCheck(L_6);
		StringBuilder_Append_m3898090075(L_6, _stringLiteral32148, /*hidden argument*/NULL);
	}

IL_0047:
	{
		StringBuilder_t3822575854 * L_7 = V_1;
		NullCheck(L_7);
		StringBuilder_Append_m3898090075(L_7, _stringLiteral1887397313, /*hidden argument*/NULL);
	}

IL_0053:
	{
		bool L_8 = NetscapeCertTypeExtension_Support_m1416151043(__this, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0084;
		}
	}
	{
		StringBuilder_t3822575854 * L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = StringBuilder_get_Length_m2443133099(L_9, /*hidden argument*/NULL);
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0078;
		}
	}
	{
		StringBuilder_t3822575854 * L_11 = V_1;
		NullCheck(L_11);
		StringBuilder_Append_m3898090075(L_11, _stringLiteral32148, /*hidden argument*/NULL);
	}

IL_0078:
	{
		StringBuilder_t3822575854 * L_12 = V_1;
		NullCheck(L_12);
		StringBuilder_Append_m3898090075(L_12, _stringLiteral79018759, /*hidden argument*/NULL);
	}

IL_0084:
	{
		bool L_13 = NetscapeCertTypeExtension_Support_m1416151043(__this, ((int32_t)16), /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00b5;
		}
	}
	{
		StringBuilder_t3822575854 * L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15 = StringBuilder_get_Length_m2443133099(L_14, /*hidden argument*/NULL);
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			goto IL_00a9;
		}
	}
	{
		StringBuilder_t3822575854 * L_16 = V_1;
		NullCheck(L_16);
		StringBuilder_Append_m3898090075(L_16, _stringLiteral32148, /*hidden argument*/NULL);
	}

IL_00a9:
	{
		StringBuilder_t3822575854 * L_17 = V_1;
		NullCheck(L_17);
		StringBuilder_Append_m3898090075(L_17, _stringLiteral1923250468, /*hidden argument*/NULL);
	}

IL_00b5:
	{
		bool L_18 = NetscapeCertTypeExtension_Support_m1416151043(__this, 4, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00e5;
		}
	}
	{
		StringBuilder_t3822575854 * L_19 = V_1;
		NullCheck(L_19);
		int32_t L_20 = StringBuilder_get_Length_m2443133099(L_19, /*hidden argument*/NULL);
		if ((((int32_t)L_20) <= ((int32_t)0)))
		{
			goto IL_00d9;
		}
	}
	{
		StringBuilder_t3822575854 * L_21 = V_1;
		NullCheck(L_21);
		StringBuilder_Append_m3898090075(L_21, _stringLiteral32148, /*hidden argument*/NULL);
	}

IL_00d9:
	{
		StringBuilder_t3822575854 * L_22 = V_1;
		NullCheck(L_22);
		StringBuilder_Append_m3898090075(L_22, _stringLiteral2455168786, /*hidden argument*/NULL);
	}

IL_00e5:
	{
		bool L_23 = NetscapeCertTypeExtension_Support_m1416151043(__this, 2, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0115;
		}
	}
	{
		StringBuilder_t3822575854 * L_24 = V_1;
		NullCheck(L_24);
		int32_t L_25 = StringBuilder_get_Length_m2443133099(L_24, /*hidden argument*/NULL);
		if ((((int32_t)L_25) <= ((int32_t)0)))
		{
			goto IL_0109;
		}
	}
	{
		StringBuilder_t3822575854 * L_26 = V_1;
		NullCheck(L_26);
		StringBuilder_Append_m3898090075(L_26, _stringLiteral32148, /*hidden argument*/NULL);
	}

IL_0109:
	{
		StringBuilder_t3822575854 * L_27 = V_1;
		NullCheck(L_27);
		StringBuilder_Append_m3898090075(L_27, _stringLiteral405804055, /*hidden argument*/NULL);
	}

IL_0115:
	{
		bool L_28 = NetscapeCertTypeExtension_Support_m1416151043(__this, 1, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_0145;
		}
	}
	{
		StringBuilder_t3822575854 * L_29 = V_1;
		NullCheck(L_29);
		int32_t L_30 = StringBuilder_get_Length_m2443133099(L_29, /*hidden argument*/NULL);
		if ((((int32_t)L_30) <= ((int32_t)0)))
		{
			goto IL_0139;
		}
	}
	{
		StringBuilder_t3822575854 * L_31 = V_1;
		NullCheck(L_31);
		StringBuilder_Append_m3898090075(L_31, _stringLiteral32148, /*hidden argument*/NULL);
	}

IL_0139:
	{
		StringBuilder_t3822575854 * L_32 = V_1;
		NullCheck(L_32);
		StringBuilder_Append_m3898090075(L_32, _stringLiteral690996442, /*hidden argument*/NULL);
	}

IL_0145:
	{
		StringBuilder_t3822575854 * L_33 = V_1;
		NullCheck(L_33);
		StringBuilder_Append_m3898090075(L_33, _stringLiteral40, /*hidden argument*/NULL);
		StringBuilder_t3822575854 * L_34 = V_1;
		int32_t* L_35 = __this->get_address_of_ctbits_3();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t3603717042_il2cpp_TypeInfo_var);
		CultureInfo_t3603717042 * L_36 = CultureInfo_get_InvariantCulture_m764001524(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_37 = Int32_ToString_m4261017954(L_35, _stringLiteral2778, L_36, /*hidden argument*/NULL);
		NullCheck(L_34);
		StringBuilder_Append_m3898090075(L_34, L_37, /*hidden argument*/NULL);
		StringBuilder_t3822575854 * L_38 = V_1;
		NullCheck(L_38);
		StringBuilder_Append_m3898090075(L_38, _stringLiteral41, /*hidden argument*/NULL);
		StringBuilder_t3822575854 * L_39 = V_1;
		String_t* L_40 = Environment_get_NewLine_m1034655108(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_39);
		StringBuilder_Append_m3898090075(L_39, L_40, /*hidden argument*/NULL);
		StringBuilder_t3822575854 * L_41 = V_1;
		NullCheck(L_41);
		String_t* L_42 = StringBuilder_ToString_m350379841(L_41, /*hidden argument*/NULL);
		return L_42;
	}
}
// System.Void Mono.Security.X509.Extensions.SubjectAltNameExtension::.ctor(Mono.Security.X509.X509Extension)
extern "C"  void SubjectAltNameExtension__ctor_m607242584 (SubjectAltNameExtension_t1663182458 * __this, X509Extension_t1510964269 * ___extension0, const MethodInfo* method)
{
	{
		X509Extension_t1510964269 * L_0 = ___extension0;
		X509Extension__ctor_m3298017424(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.X509.Extensions.SubjectAltNameExtension::Decode()
extern Il2CppClass* ASN1_t1254135647_il2cpp_TypeInfo_var;
extern Il2CppClass* ArgumentException_t124305799_il2cpp_TypeInfo_var;
extern Il2CppClass* GeneralNames_t2474193379_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1785103728;
extern const uint32_t SubjectAltNameExtension_Decode_m3473224134_MetadataUsageId;
extern "C"  void SubjectAltNameExtension_Decode_m3473224134 (SubjectAltNameExtension_t1663182458 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (SubjectAltNameExtension_Decode_m3473224134_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ASN1_t1254135647 * V_0 = NULL;
	{
		ASN1_t1254135647 * L_0 = ((X509Extension_t1510964269 *)__this)->get_extnValue_2();
		NullCheck(L_0);
		ByteU5BU5D_t58506160* L_1 = ASN1_get_Value_m4232529916(L_0, /*hidden argument*/NULL);
		ASN1_t1254135647 * L_2 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m2555733065(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ASN1_t1254135647 * L_3 = V_0;
		NullCheck(L_3);
		uint8_t L_4 = ASN1_get_Tag_m1269404867(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) == ((int32_t)((int32_t)48))))
		{
			goto IL_0029;
		}
	}
	{
		ArgumentException_t124305799 * L_5 = (ArgumentException_t124305799 *)il2cpp_codegen_object_new(ArgumentException_t124305799_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3544856547(L_5, _stringLiteral1785103728, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5);
	}

IL_0029:
	{
		ASN1_t1254135647 * L_6 = V_0;
		GeneralNames_t2474193379 * L_7 = (GeneralNames_t2474193379 *)il2cpp_codegen_object_new(GeneralNames_t2474193379_il2cpp_TypeInfo_var);
		GeneralNames__ctor_m2995468779(L_7, L_6, /*hidden argument*/NULL);
		__this->set__names_3(L_7);
		return;
	}
}
// System.String[] Mono.Security.X509.Extensions.SubjectAltNameExtension::get_DNSNames()
extern "C"  StringU5BU5D_t2956870243* SubjectAltNameExtension_get_DNSNames_m3652648031 (SubjectAltNameExtension_t1663182458 * __this, const MethodInfo* method)
{
	{
		GeneralNames_t2474193379 * L_0 = __this->get__names_3();
		NullCheck(L_0);
		StringU5BU5D_t2956870243* L_1 = GeneralNames_get_DNSNames_m2643734506(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String[] Mono.Security.X509.Extensions.SubjectAltNameExtension::get_IPAddresses()
extern "C"  StringU5BU5D_t2956870243* SubjectAltNameExtension_get_IPAddresses_m3152105661 (SubjectAltNameExtension_t1663182458 * __this, const MethodInfo* method)
{
	{
		GeneralNames_t2474193379 * L_0 = __this->get__names_3();
		NullCheck(L_0);
		StringU5BU5D_t2956870243* L_1 = GeneralNames_get_IPAddresses_m2790419794(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String Mono.Security.X509.Extensions.SubjectAltNameExtension::ToString()
extern "C"  String_t* SubjectAltNameExtension_ToString_m2980757505 (SubjectAltNameExtension_t1663182458 * __this, const MethodInfo* method)
{
	{
		GeneralNames_t2474193379 * L_0 = __this->get__names_3();
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String Mono.Security.X509.Extensions.GeneralNames::ToString() */, L_0);
		return L_1;
	}
}
// System.Void Mono.Security.X509.PKCS12::.ctor()
extern Il2CppClass* PKCS12_t2950126080_il2cpp_TypeInfo_var;
extern Il2CppClass* ArrayList_t2121638921_il2cpp_TypeInfo_var;
extern Il2CppClass* X509CertificateCollection_t3336811651_il2cpp_TypeInfo_var;
extern const uint32_t PKCS12__ctor_m2645615037_MetadataUsageId;
extern "C"  void PKCS12__ctor_m2645615037 (PKCS12_t2950126080 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PKCS12__ctor_m2645615037_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(PKCS12_t2950126080_il2cpp_TypeInfo_var);
		int32_t L_0 = ((PKCS12_t2950126080_StaticFields*)PKCS12_t2950126080_il2cpp_TypeInfo_var->static_fields)->get_recommendedIterationCount_0();
		__this->set__iterations_8(L_0);
		ArrayList_t2121638921 * L_1 = (ArrayList_t2121638921 *)il2cpp_codegen_object_new(ArrayList_t2121638921_il2cpp_TypeInfo_var);
		ArrayList__ctor_m1878432947(L_1, /*hidden argument*/NULL);
		__this->set__keyBags_2(L_1);
		ArrayList_t2121638921 * L_2 = (ArrayList_t2121638921 *)il2cpp_codegen_object_new(ArrayList_t2121638921_il2cpp_TypeInfo_var);
		ArrayList__ctor_m1878432947(L_2, /*hidden argument*/NULL);
		__this->set__secretBags_3(L_2);
		X509CertificateCollection_t3336811651 * L_3 = (X509CertificateCollection_t3336811651 *)il2cpp_codegen_object_new(X509CertificateCollection_t3336811651_il2cpp_TypeInfo_var);
		X509CertificateCollection__ctor_m2517521230(L_3, /*hidden argument*/NULL);
		__this->set__certs_4(L_3);
		__this->set__keyBagsChanged_5((bool)0);
		__this->set__secretBagsChanged_6((bool)0);
		__this->set__certsChanged_7((bool)0);
		ArrayList_t2121638921 * L_4 = (ArrayList_t2121638921 *)il2cpp_codegen_object_new(ArrayList_t2121638921_il2cpp_TypeInfo_var);
		ArrayList__ctor_m1878432947(L_4, /*hidden argument*/NULL);
		__this->set__safeBags_9(L_4);
		return;
	}
}
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[])
extern "C"  void PKCS12__ctor_m721197356 (PKCS12_t2950126080 * __this, ByteU5BU5D_t58506160* ___data0, const MethodInfo* method)
{
	{
		PKCS12__ctor_m2645615037(__this, /*hidden argument*/NULL);
		PKCS12_set_Password_m255122339(__this, (String_t*)NULL, /*hidden argument*/NULL);
		ByteU5BU5D_t58506160* L_0 = ___data0;
		PKCS12_Decode_m3657725204(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[],System.String)
extern "C"  void PKCS12__ctor_m3870049384 (PKCS12_t2950126080 * __this, ByteU5BU5D_t58506160* ___data0, String_t* ___password1, const MethodInfo* method)
{
	{
		PKCS12__ctor_m2645615037(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___password1;
		PKCS12_set_Password_m255122339(__this, L_0, /*hidden argument*/NULL);
		ByteU5BU5D_t58506160* L_1 = ___data0;
		PKCS12_Decode_m3657725204(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.X509.PKCS12::.cctor()
extern Il2CppClass* PKCS12_t2950126080_il2cpp_TypeInfo_var;
extern const uint32_t PKCS12__cctor_m4222558608_MetadataUsageId;
extern "C"  void PKCS12__cctor_m4222558608 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PKCS12__cctor_m4222558608_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		((PKCS12_t2950126080_StaticFields*)PKCS12_t2950126080_il2cpp_TypeInfo_var->static_fields)->set_recommendedIterationCount_0(((int32_t)2000));
		((PKCS12_t2950126080_StaticFields*)PKCS12_t2950126080_il2cpp_TypeInfo_var->static_fields)->set_password_max_length_11(((int32_t)2147483647LL));
		return;
	}
}
// System.Void Mono.Security.X509.PKCS12::Decode(System.Byte[])
extern Il2CppClass* ASN1_t1254135647_il2cpp_TypeInfo_var;
extern Il2CppClass* ArgumentException_t124305799_il2cpp_TypeInfo_var;
extern Il2CppClass* ContentInfo_t1278398632_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* CryptographicException_t3718270561_il2cpp_TypeInfo_var;
extern Il2CppClass* PKCS12_t2950126080_il2cpp_TypeInfo_var;
extern Il2CppClass* Dictionary_2_t190145395_il2cpp_TypeInfo_var;
extern Il2CppClass* EncryptedData_t636832623_il2cpp_TypeInfo_var;
extern Il2CppClass* NotImplementedException_t1091014741_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1958628151_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral468553779;
extern Il2CppCodeGenString* _stringLiteral2184974129;
extern Il2CppCodeGenString* _stringLiteral2198968553;
extern Il2CppCodeGenString* _stringLiteral1797307815;
extern Il2CppCodeGenString* _stringLiteral3340227462;
extern Il2CppCodeGenString* _stringLiteral3986536014;
extern Il2CppCodeGenString* _stringLiteral1039452914;
extern Il2CppCodeGenString* _stringLiteral2538634785;
extern Il2CppCodeGenString* _stringLiteral2543105731;
extern Il2CppCodeGenString* _stringLiteral3718687927;
extern Il2CppCodeGenString* _stringLiteral2198968558;
extern Il2CppCodeGenString* _stringLiteral2198968555;
extern Il2CppCodeGenString* _stringLiteral551996364;
extern Il2CppCodeGenString* _stringLiteral660695558;
extern const uint32_t PKCS12_Decode_m3657725204_MetadataUsageId;
extern "C"  void PKCS12_Decode_m3657725204 (PKCS12_t2950126080 * __this, ByteU5BU5D_t58506160* ___data0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PKCS12_Decode_m3657725204_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ASN1_t1254135647 * V_0 = NULL;
	ASN1_t1254135647 * V_1 = NULL;
	ContentInfo_t1278398632 * V_2 = NULL;
	ASN1_t1254135647 * V_3 = NULL;
	ASN1_t1254135647 * V_4 = NULL;
	ASN1_t1254135647 * V_5 = NULL;
	String_t* V_6 = NULL;
	ByteU5BU5D_t58506160* V_7 = NULL;
	ASN1_t1254135647 * V_8 = NULL;
	ASN1_t1254135647 * V_9 = NULL;
	ByteU5BU5D_t58506160* V_10 = NULL;
	ByteU5BU5D_t58506160* V_11 = NULL;
	ASN1_t1254135647 * V_12 = NULL;
	int32_t V_13 = 0;
	ContentInfo_t1278398632 * V_14 = NULL;
	ASN1_t1254135647 * V_15 = NULL;
	int32_t V_16 = 0;
	ASN1_t1254135647 * V_17 = NULL;
	EncryptedData_t636832623 * V_18 = NULL;
	ASN1_t1254135647 * V_19 = NULL;
	int32_t V_20 = 0;
	ASN1_t1254135647 * V_21 = NULL;
	String_t* V_22 = NULL;
	Dictionary_2_t190145395 * V_23 = NULL;
	int32_t V_24 = 0;
	{
		ByteU5BU5D_t58506160* L_0 = ___data0;
		ASN1_t1254135647 * L_1 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m2555733065(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ASN1_t1254135647 * L_2 = V_0;
		NullCheck(L_2);
		uint8_t L_3 = ASN1_get_Tag_m1269404867(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)((int32_t)48))))
		{
			goto IL_001f;
		}
	}
	{
		ArgumentException_t124305799 * L_4 = (ArgumentException_t124305799 *)il2cpp_codegen_object_new(ArgumentException_t124305799_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3544856547(L_4, _stringLiteral468553779, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4);
	}

IL_001f:
	{
		ASN1_t1254135647 * L_5 = V_0;
		NullCheck(L_5);
		ASN1_t1254135647 * L_6 = ASN1_get_Item_m3112983888(L_5, 0, /*hidden argument*/NULL);
		V_1 = L_6;
		ASN1_t1254135647 * L_7 = V_1;
		NullCheck(L_7);
		uint8_t L_8 = ASN1_get_Tag_m1269404867(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)2)))
		{
			goto IL_003e;
		}
	}
	{
		ArgumentException_t124305799 * L_9 = (ArgumentException_t124305799 *)il2cpp_codegen_object_new(ArgumentException_t124305799_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3544856547(L_9, _stringLiteral2184974129, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9);
	}

IL_003e:
	{
		ASN1_t1254135647 * L_10 = V_0;
		NullCheck(L_10);
		ASN1_t1254135647 * L_11 = ASN1_get_Item_m3112983888(L_10, 1, /*hidden argument*/NULL);
		ContentInfo_t1278398632 * L_12 = (ContentInfo_t1278398632 *)il2cpp_codegen_object_new(ContentInfo_t1278398632_il2cpp_TypeInfo_var);
		ContentInfo__ctor_m3021605653(L_12, L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		ContentInfo_t1278398632 * L_13 = V_2;
		NullCheck(L_13);
		String_t* L_14 = ContentInfo_get_ContentType_m3252099384(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_15 = String_op_Inequality_m2125462205(NULL /*static, unused*/, L_14, _stringLiteral2198968553, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_006b;
		}
	}
	{
		ArgumentException_t124305799 * L_16 = (ArgumentException_t124305799 *)il2cpp_codegen_object_new(ArgumentException_t124305799_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3544856547(L_16, _stringLiteral1797307815, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16);
	}

IL_006b:
	{
		ASN1_t1254135647 * L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = ASN1_get_Count_m3031159196(L_17, /*hidden argument*/NULL);
		if ((((int32_t)L_18) <= ((int32_t)2)))
		{
			goto IL_01a9;
		}
	}
	{
		ASN1_t1254135647 * L_19 = V_0;
		NullCheck(L_19);
		ASN1_t1254135647 * L_20 = ASN1_get_Item_m3112983888(L_19, 2, /*hidden argument*/NULL);
		V_3 = L_20;
		ASN1_t1254135647 * L_21 = V_3;
		NullCheck(L_21);
		uint8_t L_22 = ASN1_get_Tag_m1269404867(L_21, /*hidden argument*/NULL);
		if ((((int32_t)L_22) == ((int32_t)((int32_t)48))))
		{
			goto IL_0097;
		}
	}
	{
		ArgumentException_t124305799 * L_23 = (ArgumentException_t124305799 *)il2cpp_codegen_object_new(ArgumentException_t124305799_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3544856547(L_23, _stringLiteral3340227462, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23);
	}

IL_0097:
	{
		ASN1_t1254135647 * L_24 = V_3;
		NullCheck(L_24);
		ASN1_t1254135647 * L_25 = ASN1_get_Item_m3112983888(L_24, 0, /*hidden argument*/NULL);
		V_4 = L_25;
		ASN1_t1254135647 * L_26 = V_4;
		NullCheck(L_26);
		uint8_t L_27 = ASN1_get_Tag_m1269404867(L_26, /*hidden argument*/NULL);
		if ((((int32_t)L_27) == ((int32_t)((int32_t)48))))
		{
			goto IL_00b9;
		}
	}
	{
		ArgumentException_t124305799 * L_28 = (ArgumentException_t124305799 *)il2cpp_codegen_object_new(ArgumentException_t124305799_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3544856547(L_28, _stringLiteral3340227462, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28);
	}

IL_00b9:
	{
		ASN1_t1254135647 * L_29 = V_4;
		NullCheck(L_29);
		ASN1_t1254135647 * L_30 = ASN1_get_Item_m3112983888(L_29, 0, /*hidden argument*/NULL);
		V_5 = L_30;
		ASN1_t1254135647 * L_31 = V_5;
		NullCheck(L_31);
		ASN1_t1254135647 * L_32 = ASN1_get_Item_m3112983888(L_31, 0, /*hidden argument*/NULL);
		String_t* L_33 = ASN1Convert_ToOid_m1387992843(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		V_6 = L_33;
		String_t* L_34 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_35 = String_op_Inequality_m2125462205(NULL /*static, unused*/, L_34, _stringLiteral3986536014, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_00ee;
		}
	}
	{
		ArgumentException_t124305799 * L_36 = (ArgumentException_t124305799 *)il2cpp_codegen_object_new(ArgumentException_t124305799_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3544856547(L_36, _stringLiteral1039452914, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_36);
	}

IL_00ee:
	{
		ASN1_t1254135647 * L_37 = V_4;
		NullCheck(L_37);
		ASN1_t1254135647 * L_38 = ASN1_get_Item_m3112983888(L_37, 1, /*hidden argument*/NULL);
		NullCheck(L_38);
		ByteU5BU5D_t58506160* L_39 = ASN1_get_Value_m4232529916(L_38, /*hidden argument*/NULL);
		V_7 = L_39;
		ASN1_t1254135647 * L_40 = V_3;
		NullCheck(L_40);
		ASN1_t1254135647 * L_41 = ASN1_get_Item_m3112983888(L_40, 1, /*hidden argument*/NULL);
		V_8 = L_41;
		ASN1_t1254135647 * L_42 = V_8;
		NullCheck(L_42);
		uint8_t L_43 = ASN1_get_Tag_m1269404867(L_42, /*hidden argument*/NULL);
		if ((((int32_t)L_43) == ((int32_t)4)))
		{
			goto IL_011e;
		}
	}
	{
		ArgumentException_t124305799 * L_44 = (ArgumentException_t124305799 *)il2cpp_codegen_object_new(ArgumentException_t124305799_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3544856547(L_44, _stringLiteral2538634785, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44);
	}

IL_011e:
	{
		__this->set__iterations_8(1);
		ASN1_t1254135647 * L_45 = V_3;
		NullCheck(L_45);
		int32_t L_46 = ASN1_get_Count_m3031159196(L_45, /*hidden argument*/NULL);
		if ((((int32_t)L_46) <= ((int32_t)2)))
		{
			goto IL_015f;
		}
	}
	{
		ASN1_t1254135647 * L_47 = V_3;
		NullCheck(L_47);
		ASN1_t1254135647 * L_48 = ASN1_get_Item_m3112983888(L_47, 2, /*hidden argument*/NULL);
		V_9 = L_48;
		ASN1_t1254135647 * L_49 = V_9;
		NullCheck(L_49);
		uint8_t L_50 = ASN1_get_Tag_m1269404867(L_49, /*hidden argument*/NULL);
		if ((((int32_t)L_50) == ((int32_t)2)))
		{
			goto IL_0152;
		}
	}
	{
		ArgumentException_t124305799 * L_51 = (ArgumentException_t124305799 *)il2cpp_codegen_object_new(ArgumentException_t124305799_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3544856547(L_51, _stringLiteral2543105731, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_51);
	}

IL_0152:
	{
		ASN1_t1254135647 * L_52 = V_9;
		int32_t L_53 = ASN1Convert_ToInt32_m1508411796(NULL /*static, unused*/, L_52, /*hidden argument*/NULL);
		__this->set__iterations_8(L_53);
	}

IL_015f:
	{
		ContentInfo_t1278398632 * L_54 = V_2;
		NullCheck(L_54);
		ASN1_t1254135647 * L_55 = ContentInfo_get_Content_m2793987994(L_54, /*hidden argument*/NULL);
		NullCheck(L_55);
		ASN1_t1254135647 * L_56 = ASN1_get_Item_m3112983888(L_55, 0, /*hidden argument*/NULL);
		NullCheck(L_56);
		ByteU5BU5D_t58506160* L_57 = ASN1_get_Value_m4232529916(L_56, /*hidden argument*/NULL);
		V_10 = L_57;
		ByteU5BU5D_t58506160* L_58 = __this->get__password_1();
		ASN1_t1254135647 * L_59 = V_8;
		NullCheck(L_59);
		ByteU5BU5D_t58506160* L_60 = ASN1_get_Value_m4232529916(L_59, /*hidden argument*/NULL);
		int32_t L_61 = __this->get__iterations_8();
		ByteU5BU5D_t58506160* L_62 = V_10;
		ByteU5BU5D_t58506160* L_63 = PKCS12_MAC_m1203837730(__this, L_58, L_60, L_61, L_62, /*hidden argument*/NULL);
		V_11 = L_63;
		ByteU5BU5D_t58506160* L_64 = V_7;
		ByteU5BU5D_t58506160* L_65 = V_11;
		bool L_66 = PKCS12_Compare_m1707054334(__this, L_64, L_65, /*hidden argument*/NULL);
		if (L_66)
		{
			goto IL_01a9;
		}
	}
	{
		CryptographicException_t3718270561 * L_67 = (CryptographicException_t3718270561 *)il2cpp_codegen_object_new(CryptographicException_t3718270561_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m2400722889(L_67, _stringLiteral3718687927, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_67);
	}

IL_01a9:
	{
		ContentInfo_t1278398632 * L_68 = V_2;
		NullCheck(L_68);
		ASN1_t1254135647 * L_69 = ContentInfo_get_Content_m2793987994(L_68, /*hidden argument*/NULL);
		NullCheck(L_69);
		ASN1_t1254135647 * L_70 = ASN1_get_Item_m3112983888(L_69, 0, /*hidden argument*/NULL);
		NullCheck(L_70);
		ByteU5BU5D_t58506160* L_71 = ASN1_get_Value_m4232529916(L_70, /*hidden argument*/NULL);
		ASN1_t1254135647 * L_72 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m2555733065(L_72, L_71, /*hidden argument*/NULL);
		V_12 = L_72;
		V_13 = 0;
		goto IL_0314;
	}

IL_01c9:
	{
		ASN1_t1254135647 * L_73 = V_12;
		int32_t L_74 = V_13;
		NullCheck(L_73);
		ASN1_t1254135647 * L_75 = ASN1_get_Item_m3112983888(L_73, L_74, /*hidden argument*/NULL);
		ContentInfo_t1278398632 * L_76 = (ContentInfo_t1278398632 *)il2cpp_codegen_object_new(ContentInfo_t1278398632_il2cpp_TypeInfo_var);
		ContentInfo__ctor_m3021605653(L_76, L_75, /*hidden argument*/NULL);
		V_14 = L_76;
		ContentInfo_t1278398632 * L_77 = V_14;
		NullCheck(L_77);
		String_t* L_78 = ContentInfo_get_ContentType_m3252099384(L_77, /*hidden argument*/NULL);
		V_22 = L_78;
		String_t* L_79 = V_22;
		if (!L_79)
		{
			goto IL_0303;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PKCS12_t2950126080_il2cpp_TypeInfo_var);
		Dictionary_2_t190145395 * L_80 = ((PKCS12_t2950126080_StaticFields*)PKCS12_t2950126080_il2cpp_TypeInfo_var->static_fields)->get_U3CU3Ef__switchU24map5_12();
		if (L_80)
		{
			goto IL_0229;
		}
	}
	{
		Dictionary_2_t190145395 * L_81 = (Dictionary_2_t190145395 *)il2cpp_codegen_object_new(Dictionary_2_t190145395_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1958628151(L_81, 3, /*hidden argument*/Dictionary_2__ctor_m1958628151_MethodInfo_var);
		V_23 = L_81;
		Dictionary_2_t190145395 * L_82 = V_23;
		NullCheck(L_82);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_82, _stringLiteral2198968553, 0);
		Dictionary_2_t190145395 * L_83 = V_23;
		NullCheck(L_83);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_83, _stringLiteral2198968558, 1);
		Dictionary_2_t190145395 * L_84 = V_23;
		NullCheck(L_84);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_84, _stringLiteral2198968555, 2);
		Dictionary_2_t190145395 * L_85 = V_23;
		IL2CPP_RUNTIME_CLASS_INIT(PKCS12_t2950126080_il2cpp_TypeInfo_var);
		((PKCS12_t2950126080_StaticFields*)PKCS12_t2950126080_il2cpp_TypeInfo_var->static_fields)->set_U3CU3Ef__switchU24map5_12(L_85);
	}

IL_0229:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PKCS12_t2950126080_il2cpp_TypeInfo_var);
		Dictionary_2_t190145395 * L_86 = ((PKCS12_t2950126080_StaticFields*)PKCS12_t2950126080_il2cpp_TypeInfo_var->static_fields)->get_U3CU3Ef__switchU24map5_12();
		String_t* L_87 = V_22;
		NullCheck(L_86);
		bool L_88 = VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_86, L_87, (&V_24));
		if (!L_88)
		{
			goto IL_0303;
		}
	}
	{
		int32_t L_89 = V_24;
		if (L_89 == 0)
		{
			goto IL_0254;
		}
		if (L_89 == 1)
		{
			goto IL_02a1;
		}
		if (L_89 == 2)
		{
			goto IL_02f8;
		}
	}
	{
		goto IL_0303;
	}

IL_0254:
	{
		ContentInfo_t1278398632 * L_90 = V_14;
		NullCheck(L_90);
		ASN1_t1254135647 * L_91 = ContentInfo_get_Content_m2793987994(L_90, /*hidden argument*/NULL);
		NullCheck(L_91);
		ASN1_t1254135647 * L_92 = ASN1_get_Item_m3112983888(L_91, 0, /*hidden argument*/NULL);
		NullCheck(L_92);
		ByteU5BU5D_t58506160* L_93 = ASN1_get_Value_m4232529916(L_92, /*hidden argument*/NULL);
		ASN1_t1254135647 * L_94 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m2555733065(L_94, L_93, /*hidden argument*/NULL);
		V_15 = L_94;
		V_16 = 0;
		goto IL_028e;
	}

IL_0275:
	{
		ASN1_t1254135647 * L_95 = V_15;
		int32_t L_96 = V_16;
		NullCheck(L_95);
		ASN1_t1254135647 * L_97 = ASN1_get_Item_m3112983888(L_95, L_96, /*hidden argument*/NULL);
		V_17 = L_97;
		ASN1_t1254135647 * L_98 = V_17;
		PKCS12_ReadSafeBag_m4010108072(__this, L_98, /*hidden argument*/NULL);
		int32_t L_99 = V_16;
		V_16 = ((int32_t)((int32_t)L_99+(int32_t)1));
	}

IL_028e:
	{
		int32_t L_100 = V_16;
		ASN1_t1254135647 * L_101 = V_15;
		NullCheck(L_101);
		int32_t L_102 = ASN1_get_Count_m3031159196(L_101, /*hidden argument*/NULL);
		if ((((int32_t)L_100) < ((int32_t)L_102)))
		{
			goto IL_0275;
		}
	}
	{
		goto IL_030e;
	}

IL_02a1:
	{
		ContentInfo_t1278398632 * L_103 = V_14;
		NullCheck(L_103);
		ASN1_t1254135647 * L_104 = ContentInfo_get_Content_m2793987994(L_103, /*hidden argument*/NULL);
		NullCheck(L_104);
		ASN1_t1254135647 * L_105 = ASN1_get_Item_m3112983888(L_104, 0, /*hidden argument*/NULL);
		EncryptedData_t636832623 * L_106 = (EncryptedData_t636832623 *)il2cpp_codegen_object_new(EncryptedData_t636832623_il2cpp_TypeInfo_var);
		EncryptedData__ctor_m794340270(L_106, L_105, /*hidden argument*/NULL);
		V_18 = L_106;
		EncryptedData_t636832623 * L_107 = V_18;
		ByteU5BU5D_t58506160* L_108 = PKCS12_Decrypt_m1699029656(__this, L_107, /*hidden argument*/NULL);
		ASN1_t1254135647 * L_109 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m2555733065(L_109, L_108, /*hidden argument*/NULL);
		V_19 = L_109;
		V_20 = 0;
		goto IL_02e5;
	}

IL_02cc:
	{
		ASN1_t1254135647 * L_110 = V_19;
		int32_t L_111 = V_20;
		NullCheck(L_110);
		ASN1_t1254135647 * L_112 = ASN1_get_Item_m3112983888(L_110, L_111, /*hidden argument*/NULL);
		V_21 = L_112;
		ASN1_t1254135647 * L_113 = V_21;
		PKCS12_ReadSafeBag_m4010108072(__this, L_113, /*hidden argument*/NULL);
		int32_t L_114 = V_20;
		V_20 = ((int32_t)((int32_t)L_114+(int32_t)1));
	}

IL_02e5:
	{
		int32_t L_115 = V_20;
		ASN1_t1254135647 * L_116 = V_19;
		NullCheck(L_116);
		int32_t L_117 = ASN1_get_Count_m3031159196(L_116, /*hidden argument*/NULL);
		if ((((int32_t)L_115) < ((int32_t)L_117)))
		{
			goto IL_02cc;
		}
	}
	{
		goto IL_030e;
	}

IL_02f8:
	{
		NotImplementedException_t1091014741 * L_118 = (NotImplementedException_t1091014741 *)il2cpp_codegen_object_new(NotImplementedException_t1091014741_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m495190705(L_118, _stringLiteral551996364, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_118);
	}

IL_0303:
	{
		ArgumentException_t124305799 * L_119 = (ArgumentException_t124305799 *)il2cpp_codegen_object_new(ArgumentException_t124305799_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3544856547(L_119, _stringLiteral660695558, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_119);
	}

IL_030e:
	{
		int32_t L_120 = V_13;
		V_13 = ((int32_t)((int32_t)L_120+(int32_t)1));
	}

IL_0314:
	{
		int32_t L_121 = V_13;
		ASN1_t1254135647 * L_122 = V_12;
		NullCheck(L_122);
		int32_t L_123 = ASN1_get_Count_m3031159196(L_122, /*hidden argument*/NULL);
		if ((((int32_t)L_121) < ((int32_t)L_123)))
		{
			goto IL_01c9;
		}
	}
	{
		return;
	}
}
// System.Void Mono.Security.X509.PKCS12::Finalize()
extern "C"  void PKCS12_Finalize_m2970192261 (PKCS12_t2950126080 * __this, const MethodInfo* method)
{
	Exception_t1967233988 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1967233988 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			ByteU5BU5D_t58506160* L_0 = __this->get__password_1();
			if (!L_0)
			{
				goto IL_001f;
			}
		}

IL_000b:
		{
			ByteU5BU5D_t58506160* L_1 = __this->get__password_1();
			ByteU5BU5D_t58506160* L_2 = __this->get__password_1();
			NullCheck(L_2);
			Array_Clear_m2499577033(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_1, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_2)->max_length)))), /*hidden argument*/NULL);
		}

IL_001f:
		{
			__this->set__password_1((ByteU5BU5D_t58506160*)NULL);
			IL2CPP_LEAVE(0x32, FINALLY_002b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1967233988 *)e.ex;
		goto FINALLY_002b;
	}

FINALLY_002b:
	{ // begin finally (depth: 1)
		Object_Finalize_m3027285644(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(43)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(43)
	{
		IL2CPP_JUMP_TBL(0x32, IL_0032)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1967233988 *)
	}

IL_0032:
	{
		return;
	}
}
// System.Void Mono.Security.X509.PKCS12::set_Password(System.String)
extern Il2CppClass* PKCS12_t2950126080_il2cpp_TypeInfo_var;
extern Il2CppClass* ByteU5BU5D_t58506160_il2cpp_TypeInfo_var;
extern Il2CppClass* Encoding_t180559927_il2cpp_TypeInfo_var;
extern const uint32_t PKCS12_set_Password_m255122339_MetadataUsageId;
extern "C"  void PKCS12_set_Password_m255122339 (PKCS12_t2950126080 * __this, String_t* ___value0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PKCS12_set_Password_m255122339_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___value0;
		if (!L_0)
		{
			goto IL_007c;
		}
	}
	{
		String_t* L_1 = ___value0;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m2979997331(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_006b;
		}
	}
	{
		String_t* L_3 = ___value0;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m2979997331(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		V_1 = 0;
		int32_t L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(PKCS12_t2950126080_il2cpp_TypeInfo_var);
		int32_t L_6 = PKCS12_get_MaximumPasswordLength_m1083541051(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_003b;
		}
	}
	{
		String_t* L_7 = ___value0;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		uint16_t L_9 = String_get_Chars_m3015341861(L_7, ((int32_t)((int32_t)L_8-(int32_t)1)), /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0036;
		}
	}
	{
		V_1 = 1;
	}

IL_0036:
	{
		goto IL_0041;
	}

IL_003b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PKCS12_t2950126080_il2cpp_TypeInfo_var);
		int32_t L_10 = PKCS12_get_MaximumPasswordLength_m1083541051(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_10;
	}

IL_0041:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		__this->set__password_1(((ByteU5BU5D_t58506160*)SZArrayNew(ByteU5BU5D_t58506160_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_11+(int32_t)L_12))<<(int32_t)1)))));
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t180559927_il2cpp_TypeInfo_var);
		Encoding_t180559927 * L_13 = Encoding_get_BigEndianUnicode_m1578127592(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_14 = ___value0;
		int32_t L_15 = V_0;
		ByteU5BU5D_t58506160* L_16 = __this->get__password_1();
		NullCheck(L_13);
		VirtFuncInvoker5< int32_t, String_t*, int32_t, int32_t, ByteU5BU5D_t58506160*, int32_t >::Invoke(9 /* System.Int32 System.Text.Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32) */, L_13, L_14, 0, L_15, L_16, 0);
		goto IL_0077;
	}

IL_006b:
	{
		__this->set__password_1(((ByteU5BU5D_t58506160*)SZArrayNew(ByteU5BU5D_t58506160_il2cpp_TypeInfo_var, (uint32_t)2)));
	}

IL_0077:
	{
		goto IL_0083;
	}

IL_007c:
	{
		__this->set__password_1((ByteU5BU5D_t58506160*)NULL);
	}

IL_0083:
	{
		return;
	}
}
// System.Int32 Mono.Security.X509.PKCS12::get_IterationCount()
extern "C"  int32_t PKCS12_get_IterationCount_m1936461050 (PKCS12_t2950126080 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get__iterations_8();
		return L_0;
	}
}
// System.Void Mono.Security.X509.PKCS12::set_IterationCount(System.Int32)
extern "C"  void PKCS12_set_IterationCount_m4214894503 (PKCS12_t2950126080 * __this, int32_t ___value0, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set__iterations_8(L_0);
		return;
	}
}
// System.Collections.ArrayList Mono.Security.X509.PKCS12::get_Keys()
extern Il2CppClass* IEnumerator_t287207039_il2cpp_TypeInfo_var;
extern Il2CppClass* SafeBag_t4111116303_il2cpp_TypeInfo_var;
extern Il2CppClass* PrivateKeyInfo_t2184496331_il2cpp_TypeInfo_var;
extern Il2CppClass* DSAParameters_t2524359253_il2cpp_TypeInfo_var;
extern Il2CppClass* EncryptedPrivateKeyInfo_t785870703_il2cpp_TypeInfo_var;
extern Il2CppClass* IDisposable_t1628921374_il2cpp_TypeInfo_var;
extern Il2CppClass* ArrayList_t2121638921_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3902436161;
extern Il2CppCodeGenString* _stringLiteral3902436162;
extern const uint32_t PKCS12_get_Keys_m4003825612_MetadataUsageId;
extern "C"  ArrayList_t2121638921 * PKCS12_get_Keys_m4003825612 (PKCS12_t2950126080 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PKCS12_get_Keys_m4003825612_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	SafeBag_t4111116303 * V_0 = NULL;
	Il2CppObject * V_1 = NULL;
	ASN1_t1254135647 * V_2 = NULL;
	ASN1_t1254135647 * V_3 = NULL;
	PrivateKeyInfo_t2184496331 * V_4 = NULL;
	ByteU5BU5D_t58506160* V_5 = NULL;
	DSAParameters_t2524359253  V_6;
	memset(&V_6, 0, sizeof(V_6));
	ASN1_t1254135647 * V_7 = NULL;
	ASN1_t1254135647 * V_8 = NULL;
	EncryptedPrivateKeyInfo_t785870703 * V_9 = NULL;
	ByteU5BU5D_t58506160* V_10 = NULL;
	PrivateKeyInfo_t2184496331 * V_11 = NULL;
	ByteU5BU5D_t58506160* V_12 = NULL;
	DSAParameters_t2524359253  V_13;
	memset(&V_13, 0, sizeof(V_13));
	uint8_t V_14 = 0x0;
	Il2CppObject * V_15 = NULL;
	Exception_t1967233988 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1967233988 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = __this->get__keyBagsChanged_5();
		if (!L_0)
		{
			goto IL_01e3;
		}
	}
	{
		ArrayList_t2121638921 * L_1 = __this->get__keyBags_2();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(31 /* System.Void System.Collections.ArrayList::Clear() */, L_1);
		ArrayList_t2121638921 * L_2 = __this->get__safeBags_9();
		NullCheck(L_2);
		Il2CppObject * L_3 = VirtFuncInvoker0< Il2CppObject * >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_2);
		V_1 = L_3;
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01b7;
		}

IL_0027:
		{
			Il2CppObject * L_4 = V_1;
			NullCheck(L_4);
			Il2CppObject * L_5 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t287207039_il2cpp_TypeInfo_var, L_4);
			V_0 = ((SafeBag_t4111116303 *)CastclassClass(L_5, SafeBag_t4111116303_il2cpp_TypeInfo_var));
			SafeBag_t4111116303 * L_6 = V_0;
			NullCheck(L_6);
			String_t* L_7 = SafeBag_get_BagOID_m2256458192(L_6, /*hidden argument*/NULL);
			NullCheck(L_7);
			bool L_8 = String_Equals_m3541721061(L_7, _stringLiteral3902436161, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_00d9;
			}
		}

IL_0048:
		{
			SafeBag_t4111116303 * L_9 = V_0;
			NullCheck(L_9);
			ASN1_t1254135647 * L_10 = SafeBag_get_ASN1_m3365953951(L_9, /*hidden argument*/NULL);
			V_2 = L_10;
			ASN1_t1254135647 * L_11 = V_2;
			NullCheck(L_11);
			ASN1_t1254135647 * L_12 = ASN1_get_Item_m3112983888(L_11, 1, /*hidden argument*/NULL);
			V_3 = L_12;
			ASN1_t1254135647 * L_13 = V_3;
			NullCheck(L_13);
			ByteU5BU5D_t58506160* L_14 = ASN1_get_Value_m4232529916(L_13, /*hidden argument*/NULL);
			PrivateKeyInfo_t2184496331 * L_15 = (PrivateKeyInfo_t2184496331 *)il2cpp_codegen_object_new(PrivateKeyInfo_t2184496331_il2cpp_TypeInfo_var);
			PrivateKeyInfo__ctor_m3331527846(L_15, L_14, /*hidden argument*/NULL);
			V_4 = L_15;
			PrivateKeyInfo_t2184496331 * L_16 = V_4;
			NullCheck(L_16);
			ByteU5BU5D_t58506160* L_17 = PrivateKeyInfo_get_PrivateKey_m2153221404(L_16, /*hidden argument*/NULL);
			V_5 = L_17;
			ByteU5BU5D_t58506160* L_18 = V_5;
			NullCheck(L_18);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 0);
			int32_t L_19 = 0;
			V_14 = ((L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19)));
			uint8_t L_20 = V_14;
			if ((((int32_t)L_20) == ((int32_t)2)))
			{
				goto IL_0089;
			}
		}

IL_007b:
		{
			uint8_t L_21 = V_14;
			if ((((int32_t)L_21) == ((int32_t)((int32_t)48))))
			{
				goto IL_00ab;
			}
		}

IL_0084:
		{
			goto IL_00c3;
		}

IL_0089:
		{
			Initobj (DSAParameters_t2524359253_il2cpp_TypeInfo_var, (&V_6));
			ArrayList_t2121638921 * L_22 = __this->get__keyBags_2();
			ByteU5BU5D_t58506160* L_23 = V_5;
			DSAParameters_t2524359253  L_24 = V_6;
			DSA_t1557551819 * L_25 = PrivateKeyInfo_DecodeDSA_m1682427249(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/NULL);
			NullCheck(L_22);
			VirtFuncInvoker1< int32_t, Il2CppObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_22, L_25);
			goto IL_00c8;
		}

IL_00ab:
		{
			ArrayList_t2121638921 * L_26 = __this->get__keyBags_2();
			ByteU5BU5D_t58506160* L_27 = V_5;
			RSA_t1557565273 * L_28 = PrivateKeyInfo_DecodeRSA_m311172684(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
			NullCheck(L_26);
			VirtFuncInvoker1< int32_t, Il2CppObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_26, L_28);
			goto IL_00c8;
		}

IL_00c3:
		{
			goto IL_00c8;
		}

IL_00c8:
		{
			ByteU5BU5D_t58506160* L_29 = V_5;
			ByteU5BU5D_t58506160* L_30 = V_5;
			NullCheck(L_30);
			Array_Clear_m2499577033(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_29, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_30)->max_length)))), /*hidden argument*/NULL);
			goto IL_01b7;
		}

IL_00d9:
		{
			SafeBag_t4111116303 * L_31 = V_0;
			NullCheck(L_31);
			String_t* L_32 = SafeBag_get_BagOID_m2256458192(L_31, /*hidden argument*/NULL);
			NullCheck(L_32);
			bool L_33 = String_Equals_m3541721061(L_32, _stringLiteral3902436162, /*hidden argument*/NULL);
			if (!L_33)
			{
				goto IL_01b7;
			}
		}

IL_00ee:
		{
			SafeBag_t4111116303 * L_34 = V_0;
			NullCheck(L_34);
			ASN1_t1254135647 * L_35 = SafeBag_get_ASN1_m3365953951(L_34, /*hidden argument*/NULL);
			V_7 = L_35;
			ASN1_t1254135647 * L_36 = V_7;
			NullCheck(L_36);
			ASN1_t1254135647 * L_37 = ASN1_get_Item_m3112983888(L_36, 1, /*hidden argument*/NULL);
			V_8 = L_37;
			ASN1_t1254135647 * L_38 = V_8;
			NullCheck(L_38);
			ByteU5BU5D_t58506160* L_39 = ASN1_get_Value_m4232529916(L_38, /*hidden argument*/NULL);
			EncryptedPrivateKeyInfo_t785870703 * L_40 = (EncryptedPrivateKeyInfo_t785870703 *)il2cpp_codegen_object_new(EncryptedPrivateKeyInfo_t785870703_il2cpp_TypeInfo_var);
			EncryptedPrivateKeyInfo__ctor_m3104680606(L_40, L_39, /*hidden argument*/NULL);
			V_9 = L_40;
			EncryptedPrivateKeyInfo_t785870703 * L_41 = V_9;
			NullCheck(L_41);
			String_t* L_42 = EncryptedPrivateKeyInfo_get_Algorithm_m1903026028(L_41, /*hidden argument*/NULL);
			EncryptedPrivateKeyInfo_t785870703 * L_43 = V_9;
			NullCheck(L_43);
			ByteU5BU5D_t58506160* L_44 = EncryptedPrivateKeyInfo_get_Salt_m4034382306(L_43, /*hidden argument*/NULL);
			EncryptedPrivateKeyInfo_t785870703 * L_45 = V_9;
			NullCheck(L_45);
			int32_t L_46 = EncryptedPrivateKeyInfo_get_IterationCount_m1213644604(L_45, /*hidden argument*/NULL);
			EncryptedPrivateKeyInfo_t785870703 * L_47 = V_9;
			NullCheck(L_47);
			ByteU5BU5D_t58506160* L_48 = EncryptedPrivateKeyInfo_get_EncryptedData_m1064226660(L_47, /*hidden argument*/NULL);
			ByteU5BU5D_t58506160* L_49 = PKCS12_Decrypt_m2583016519(__this, L_42, L_44, L_46, L_48, /*hidden argument*/NULL);
			V_10 = L_49;
			ByteU5BU5D_t58506160* L_50 = V_10;
			PrivateKeyInfo_t2184496331 * L_51 = (PrivateKeyInfo_t2184496331 *)il2cpp_codegen_object_new(PrivateKeyInfo_t2184496331_il2cpp_TypeInfo_var);
			PrivateKeyInfo__ctor_m3331527846(L_51, L_50, /*hidden argument*/NULL);
			V_11 = L_51;
			PrivateKeyInfo_t2184496331 * L_52 = V_11;
			NullCheck(L_52);
			ByteU5BU5D_t58506160* L_53 = PrivateKeyInfo_get_PrivateKey_m2153221404(L_52, /*hidden argument*/NULL);
			V_12 = L_53;
			ByteU5BU5D_t58506160* L_54 = V_12;
			NullCheck(L_54);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_54, 0);
			int32_t L_55 = 0;
			V_14 = ((L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_55)));
			uint8_t L_56 = V_14;
			if ((((int32_t)L_56) == ((int32_t)2)))
			{
				goto IL_0160;
			}
		}

IL_0152:
		{
			uint8_t L_57 = V_14;
			if ((((int32_t)L_57) == ((int32_t)((int32_t)48))))
			{
				goto IL_0182;
			}
		}

IL_015b:
		{
			goto IL_019a;
		}

IL_0160:
		{
			Initobj (DSAParameters_t2524359253_il2cpp_TypeInfo_var, (&V_13));
			ArrayList_t2121638921 * L_58 = __this->get__keyBags_2();
			ByteU5BU5D_t58506160* L_59 = V_12;
			DSAParameters_t2524359253  L_60 = V_13;
			DSA_t1557551819 * L_61 = PrivateKeyInfo_DecodeDSA_m1682427249(NULL /*static, unused*/, L_59, L_60, /*hidden argument*/NULL);
			NullCheck(L_58);
			VirtFuncInvoker1< int32_t, Il2CppObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_58, L_61);
			goto IL_019f;
		}

IL_0182:
		{
			ArrayList_t2121638921 * L_62 = __this->get__keyBags_2();
			ByteU5BU5D_t58506160* L_63 = V_12;
			RSA_t1557565273 * L_64 = PrivateKeyInfo_DecodeRSA_m311172684(NULL /*static, unused*/, L_63, /*hidden argument*/NULL);
			NullCheck(L_62);
			VirtFuncInvoker1< int32_t, Il2CppObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_62, L_64);
			goto IL_019f;
		}

IL_019a:
		{
			goto IL_019f;
		}

IL_019f:
		{
			ByteU5BU5D_t58506160* L_65 = V_12;
			ByteU5BU5D_t58506160* L_66 = V_12;
			NullCheck(L_66);
			Array_Clear_m2499577033(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_65, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_66)->max_length)))), /*hidden argument*/NULL);
			ByteU5BU5D_t58506160* L_67 = V_10;
			ByteU5BU5D_t58506160* L_68 = V_10;
			NullCheck(L_68);
			Array_Clear_m2499577033(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_67, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_68)->max_length)))), /*hidden argument*/NULL);
		}

IL_01b7:
		{
			Il2CppObject * L_69 = V_1;
			NullCheck(L_69);
			bool L_70 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t287207039_il2cpp_TypeInfo_var, L_69);
			if (L_70)
			{
				goto IL_0027;
			}
		}

IL_01c2:
		{
			IL2CPP_LEAVE(0x1DC, FINALLY_01c7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1967233988 *)e.ex;
		goto FINALLY_01c7;
	}

FINALLY_01c7:
	{ // begin finally (depth: 1)
		{
			Il2CppObject * L_71 = V_1;
			V_15 = ((Il2CppObject *)IsInst(L_71, IDisposable_t1628921374_il2cpp_TypeInfo_var));
			Il2CppObject * L_72 = V_15;
			if (L_72)
			{
				goto IL_01d4;
			}
		}

IL_01d3:
		{
			IL2CPP_END_FINALLY(455)
		}

IL_01d4:
		{
			Il2CppObject * L_73 = V_15;
			NullCheck(L_73);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1628921374_il2cpp_TypeInfo_var, L_73);
			IL2CPP_END_FINALLY(455)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(455)
	{
		IL2CPP_JUMP_TBL(0x1DC, IL_01dc)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1967233988 *)
	}

IL_01dc:
	{
		__this->set__keyBagsChanged_5((bool)0);
	}

IL_01e3:
	{
		ArrayList_t2121638921 * L_74 = __this->get__keyBags_2();
		IL2CPP_RUNTIME_CLASS_INIT(ArrayList_t2121638921_il2cpp_TypeInfo_var);
		ArrayList_t2121638921 * L_75 = ArrayList_ReadOnly_m1881161056(NULL /*static, unused*/, L_74, /*hidden argument*/NULL);
		return L_75;
	}
}
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.PKCS12::get_Certificates()
extern Il2CppClass* IEnumerator_t287207039_il2cpp_TypeInfo_var;
extern Il2CppClass* SafeBag_t4111116303_il2cpp_TypeInfo_var;
extern Il2CppClass* ContentInfo_t1278398632_il2cpp_TypeInfo_var;
extern Il2CppClass* X509Certificate_t273828613_il2cpp_TypeInfo_var;
extern Il2CppClass* IDisposable_t1628921374_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3902436163;
extern const uint32_t PKCS12_get_Certificates_m1930169375_MetadataUsageId;
extern "C"  X509CertificateCollection_t3336811651 * PKCS12_get_Certificates_m1930169375 (PKCS12_t2950126080 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PKCS12_get_Certificates_m1930169375_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	SafeBag_t4111116303 * V_0 = NULL;
	Il2CppObject * V_1 = NULL;
	ASN1_t1254135647 * V_2 = NULL;
	ASN1_t1254135647 * V_3 = NULL;
	ContentInfo_t1278398632 * V_4 = NULL;
	Il2CppObject * V_5 = NULL;
	Exception_t1967233988 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1967233988 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = __this->get__certsChanged_7();
		if (!L_0)
		{
			goto IL_00b3;
		}
	}
	{
		X509CertificateCollection_t3336811651 * L_1 = __this->get__certs_4();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(14 /* System.Void System.Collections.CollectionBase::Clear() */, L_1);
		ArrayList_t2121638921 * L_2 = __this->get__safeBags_9();
		NullCheck(L_2);
		Il2CppObject * L_3 = VirtFuncInvoker0< Il2CppObject * >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_2);
		V_1 = L_3;
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0087;
		}

IL_0027:
		{
			Il2CppObject * L_4 = V_1;
			NullCheck(L_4);
			Il2CppObject * L_5 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t287207039_il2cpp_TypeInfo_var, L_4);
			V_0 = ((SafeBag_t4111116303 *)CastclassClass(L_5, SafeBag_t4111116303_il2cpp_TypeInfo_var));
			SafeBag_t4111116303 * L_6 = V_0;
			NullCheck(L_6);
			String_t* L_7 = SafeBag_get_BagOID_m2256458192(L_6, /*hidden argument*/NULL);
			NullCheck(L_7);
			bool L_8 = String_Equals_m3541721061(L_7, _stringLiteral3902436163, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_0087;
			}
		}

IL_0048:
		{
			SafeBag_t4111116303 * L_9 = V_0;
			NullCheck(L_9);
			ASN1_t1254135647 * L_10 = SafeBag_get_ASN1_m3365953951(L_9, /*hidden argument*/NULL);
			V_2 = L_10;
			ASN1_t1254135647 * L_11 = V_2;
			NullCheck(L_11);
			ASN1_t1254135647 * L_12 = ASN1_get_Item_m3112983888(L_11, 1, /*hidden argument*/NULL);
			V_3 = L_12;
			ASN1_t1254135647 * L_13 = V_3;
			NullCheck(L_13);
			ByteU5BU5D_t58506160* L_14 = ASN1_get_Value_m4232529916(L_13, /*hidden argument*/NULL);
			ContentInfo_t1278398632 * L_15 = (ContentInfo_t1278398632 *)il2cpp_codegen_object_new(ContentInfo_t1278398632_il2cpp_TypeInfo_var);
			ContentInfo__ctor_m2758504540(L_15, L_14, /*hidden argument*/NULL);
			V_4 = L_15;
			X509CertificateCollection_t3336811651 * L_16 = __this->get__certs_4();
			ContentInfo_t1278398632 * L_17 = V_4;
			NullCheck(L_17);
			ASN1_t1254135647 * L_18 = ContentInfo_get_Content_m2793987994(L_17, /*hidden argument*/NULL);
			NullCheck(L_18);
			ASN1_t1254135647 * L_19 = ASN1_get_Item_m3112983888(L_18, 0, /*hidden argument*/NULL);
			NullCheck(L_19);
			ByteU5BU5D_t58506160* L_20 = ASN1_get_Value_m4232529916(L_19, /*hidden argument*/NULL);
			X509Certificate_t273828613 * L_21 = (X509Certificate_t273828613 *)il2cpp_codegen_object_new(X509Certificate_t273828613_il2cpp_TypeInfo_var);
			X509Certificate__ctor_m3683615677(L_21, L_20, /*hidden argument*/NULL);
			NullCheck(L_16);
			X509CertificateCollection_Add_m1585739833(L_16, L_21, /*hidden argument*/NULL);
		}

IL_0087:
		{
			Il2CppObject * L_22 = V_1;
			NullCheck(L_22);
			bool L_23 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t287207039_il2cpp_TypeInfo_var, L_22);
			if (L_23)
			{
				goto IL_0027;
			}
		}

IL_0092:
		{
			IL2CPP_LEAVE(0xAC, FINALLY_0097);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1967233988 *)e.ex;
		goto FINALLY_0097;
	}

FINALLY_0097:
	{ // begin finally (depth: 1)
		{
			Il2CppObject * L_24 = V_1;
			V_5 = ((Il2CppObject *)IsInst(L_24, IDisposable_t1628921374_il2cpp_TypeInfo_var));
			Il2CppObject * L_25 = V_5;
			if (L_25)
			{
				goto IL_00a4;
			}
		}

IL_00a3:
		{
			IL2CPP_END_FINALLY(151)
		}

IL_00a4:
		{
			Il2CppObject * L_26 = V_5;
			NullCheck(L_26);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1628921374_il2cpp_TypeInfo_var, L_26);
			IL2CPP_END_FINALLY(151)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(151)
	{
		IL2CPP_JUMP_TBL(0xAC, IL_00ac)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1967233988 *)
	}

IL_00ac:
	{
		__this->set__certsChanged_7((bool)0);
	}

IL_00b3:
	{
		X509CertificateCollection_t3336811651 * L_27 = __this->get__certs_4();
		return L_27;
	}
}
// System.Security.Cryptography.RandomNumberGenerator Mono.Security.X509.PKCS12::get_RNG()
extern "C"  RandomNumberGenerator_t2174318432 * PKCS12_get_RNG_m944600768 (PKCS12_t2950126080 * __this, const MethodInfo* method)
{
	{
		RandomNumberGenerator_t2174318432 * L_0 = __this->get__rng_10();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		RandomNumberGenerator_t2174318432 * L_1 = RandomNumberGenerator_Create_m2029084057(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set__rng_10(L_1);
	}

IL_0016:
	{
		RandomNumberGenerator_t2174318432 * L_2 = __this->get__rng_10();
		return L_2;
	}
}
// System.Boolean Mono.Security.X509.PKCS12::Compare(System.Byte[],System.Byte[])
extern "C"  bool PKCS12_Compare_m1707054334 (PKCS12_t2950126080 * __this, ByteU5BU5D_t58506160* ___expected0, ByteU5BU5D_t58506160* ___actual1, const MethodInfo* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		V_0 = (bool)0;
		ByteU5BU5D_t58506160* L_0 = ___expected0;
		NullCheck(L_0);
		ByteU5BU5D_t58506160* L_1 = ___actual1;
		NullCheck(L_1);
		if ((!(((uint32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_0)->max_length))))) == ((uint32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_1)->max_length))))))))
		{
			goto IL_0030;
		}
	}
	{
		V_1 = 0;
		goto IL_0025;
	}

IL_0014:
	{
		ByteU5BU5D_t58506160* L_2 = ___expected0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		ByteU5BU5D_t58506160* L_5 = ___actual1;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		if ((((int32_t)((L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4)))) == ((int32_t)((L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7))))))
		{
			goto IL_0021;
		}
	}
	{
		return (bool)0;
	}

IL_0021:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0025:
	{
		int32_t L_9 = V_1;
		ByteU5BU5D_t58506160* L_10 = ___expected0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_10)->max_length)))))))
		{
			goto IL_0014;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_0030:
	{
		bool L_11 = V_0;
		return L_11;
	}
}
// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.X509.PKCS12::GetSymmetricAlgorithm(System.String,System.Byte[],System.Int32)
extern Il2CppClass* DeriveBytes_t2715912549_il2cpp_TypeInfo_var;
extern Il2CppClass* PKCS12_t2950126080_il2cpp_TypeInfo_var;
extern Il2CppClass* Dictionary_2_t190145395_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* NotSupportedException_t1374155497_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1958628151_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2198966631;
extern Il2CppCodeGenString* _stringLiteral2198966633;
extern Il2CppCodeGenString* _stringLiteral2198966634;
extern Il2CppCodeGenString* _stringLiteral2198966636;
extern Il2CppCodeGenString* _stringLiteral3743456169;
extern Il2CppCodeGenString* _stringLiteral3743456170;
extern Il2CppCodeGenString* _stringLiteral2462842200;
extern Il2CppCodeGenString* _stringLiteral2462842201;
extern Il2CppCodeGenString* _stringLiteral2462842202;
extern Il2CppCodeGenString* _stringLiteral2462842203;
extern Il2CppCodeGenString* _stringLiteral2462842204;
extern Il2CppCodeGenString* _stringLiteral2462842205;
extern Il2CppCodeGenString* _stringLiteral76155;
extern Il2CppCodeGenString* _stringLiteral67570;
extern Il2CppCodeGenString* _stringLiteral76158;
extern Il2CppCodeGenString* _stringLiteral80929;
extern Il2CppCodeGenString* _stringLiteral2543909;
extern Il2CppCodeGenString* _stringLiteral80931;
extern Il2CppCodeGenString* _stringLiteral1617450676;
extern Il2CppCodeGenString* _stringLiteral2917363116;
extern const uint32_t PKCS12_GetSymmetricAlgorithm_m2527458883_MetadataUsageId;
extern "C"  SymmetricAlgorithm_t839208017 * PKCS12_GetSymmetricAlgorithm_m2527458883 (PKCS12_t2950126080 * __this, String_t* ___algorithmOid0, ByteU5BU5D_t58506160* ___salt1, int32_t ___iterationCount2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PKCS12_GetSymmetricAlgorithm_m2527458883_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	DeriveBytes_t2715912549 * V_3 = NULL;
	SymmetricAlgorithm_t839208017 * V_4 = NULL;
	String_t* V_5 = NULL;
	Dictionary_2_t190145395 * V_6 = NULL;
	int32_t V_7 = 0;
	{
		V_0 = (String_t*)NULL;
		V_1 = 8;
		V_2 = 8;
		DeriveBytes_t2715912549 * L_0 = (DeriveBytes_t2715912549 *)il2cpp_codegen_object_new(DeriveBytes_t2715912549_il2cpp_TypeInfo_var);
		DeriveBytes__ctor_m4046501000(L_0, /*hidden argument*/NULL);
		V_3 = L_0;
		DeriveBytes_t2715912549 * L_1 = V_3;
		ByteU5BU5D_t58506160* L_2 = __this->get__password_1();
		NullCheck(L_1);
		DeriveBytes_set_Password_m2839198645(L_1, L_2, /*hidden argument*/NULL);
		DeriveBytes_t2715912549 * L_3 = V_3;
		ByteU5BU5D_t58506160* L_4 = ___salt1;
		NullCheck(L_3);
		DeriveBytes_set_Salt_m801246362(L_3, L_4, /*hidden argument*/NULL);
		DeriveBytes_t2715912549 * L_5 = V_3;
		int32_t L_6 = ___iterationCount2;
		NullCheck(L_5);
		DeriveBytes_set_IterationCount_m35620668(L_5, L_6, /*hidden argument*/NULL);
		String_t* L_7 = ___algorithmOid0;
		V_5 = L_7;
		String_t* L_8 = V_5;
		if (!L_8)
		{
			goto IL_025a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PKCS12_t2950126080_il2cpp_TypeInfo_var);
		Dictionary_2_t190145395 * L_9 = ((PKCS12_t2950126080_StaticFields*)PKCS12_t2950126080_il2cpp_TypeInfo_var->static_fields)->get_U3CU3Ef__switchU24map6_13();
		if (L_9)
		{
			goto IL_00e9;
		}
	}
	{
		Dictionary_2_t190145395 * L_10 = (Dictionary_2_t190145395 *)il2cpp_codegen_object_new(Dictionary_2_t190145395_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1958628151(L_10, ((int32_t)12), /*hidden argument*/Dictionary_2__ctor_m1958628151_MethodInfo_var);
		V_6 = L_10;
		Dictionary_2_t190145395 * L_11 = V_6;
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_11, _stringLiteral2198966631, 0);
		Dictionary_2_t190145395 * L_12 = V_6;
		NullCheck(L_12);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_12, _stringLiteral2198966633, 1);
		Dictionary_2_t190145395 * L_13 = V_6;
		NullCheck(L_13);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_13, _stringLiteral2198966634, 2);
		Dictionary_2_t190145395 * L_14 = V_6;
		NullCheck(L_14);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_14, _stringLiteral2198966636, 3);
		Dictionary_2_t190145395 * L_15 = V_6;
		NullCheck(L_15);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_15, _stringLiteral3743456169, 4);
		Dictionary_2_t190145395 * L_16 = V_6;
		NullCheck(L_16);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_16, _stringLiteral3743456170, 5);
		Dictionary_2_t190145395 * L_17 = V_6;
		NullCheck(L_17);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_17, _stringLiteral2462842200, 6);
		Dictionary_2_t190145395 * L_18 = V_6;
		NullCheck(L_18);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_18, _stringLiteral2462842201, 7);
		Dictionary_2_t190145395 * L_19 = V_6;
		NullCheck(L_19);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_19, _stringLiteral2462842202, 8);
		Dictionary_2_t190145395 * L_20 = V_6;
		NullCheck(L_20);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_20, _stringLiteral2462842203, ((int32_t)9));
		Dictionary_2_t190145395 * L_21 = V_6;
		NullCheck(L_21);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_21, _stringLiteral2462842204, ((int32_t)10));
		Dictionary_2_t190145395 * L_22 = V_6;
		NullCheck(L_22);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_22, _stringLiteral2462842205, ((int32_t)11));
		Dictionary_2_t190145395 * L_23 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(PKCS12_t2950126080_il2cpp_TypeInfo_var);
		((PKCS12_t2950126080_StaticFields*)PKCS12_t2950126080_il2cpp_TypeInfo_var->static_fields)->set_U3CU3Ef__switchU24map6_13(L_23);
	}

IL_00e9:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PKCS12_t2950126080_il2cpp_TypeInfo_var);
		Dictionary_2_t190145395 * L_24 = ((PKCS12_t2950126080_StaticFields*)PKCS12_t2950126080_il2cpp_TypeInfo_var->static_fields)->get_U3CU3Ef__switchU24map6_13();
		String_t* L_25 = V_5;
		NullCheck(L_24);
		bool L_26 = VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_24, L_25, (&V_7));
		if (!L_26)
		{
			goto IL_025a;
		}
	}
	{
		int32_t L_27 = V_7;
		if (L_27 == 0)
		{
			goto IL_0138;
		}
		if (L_27 == 1)
		{
			goto IL_014e;
		}
		if (L_27 == 2)
		{
			goto IL_0164;
		}
		if (L_27 == 3)
		{
			goto IL_017c;
		}
		if (L_27 == 4)
		{
			goto IL_0194;
		}
		if (L_27 == 5)
		{
			goto IL_01aa;
		}
		if (L_27 == 6)
		{
			goto IL_01c2;
		}
		if (L_27 == 7)
		{
			goto IL_01dd;
		}
		if (L_27 == 8)
		{
			goto IL_01f7;
		}
		if (L_27 == 9)
		{
			goto IL_0210;
		}
		if (L_27 == 10)
		{
			goto IL_0229;
		}
		if (L_27 == 11)
		{
			goto IL_0242;
		}
	}
	{
		goto IL_025a;
	}

IL_0138:
	{
		DeriveBytes_t2715912549 * L_28 = V_3;
		NullCheck(L_28);
		DeriveBytes_set_HashName_m2086526224(L_28, _stringLiteral76155, /*hidden argument*/NULL);
		V_0 = _stringLiteral67570;
		goto IL_026b;
	}

IL_014e:
	{
		DeriveBytes_t2715912549 * L_29 = V_3;
		NullCheck(L_29);
		DeriveBytes_set_HashName_m2086526224(L_29, _stringLiteral76158, /*hidden argument*/NULL);
		V_0 = _stringLiteral67570;
		goto IL_026b;
	}

IL_0164:
	{
		DeriveBytes_t2715912549 * L_30 = V_3;
		NullCheck(L_30);
		DeriveBytes_set_HashName_m2086526224(L_30, _stringLiteral76155, /*hidden argument*/NULL);
		V_0 = _stringLiteral80929;
		V_1 = 4;
		goto IL_026b;
	}

IL_017c:
	{
		DeriveBytes_t2715912549 * L_31 = V_3;
		NullCheck(L_31);
		DeriveBytes_set_HashName_m2086526224(L_31, _stringLiteral76158, /*hidden argument*/NULL);
		V_0 = _stringLiteral80929;
		V_1 = 4;
		goto IL_026b;
	}

IL_0194:
	{
		DeriveBytes_t2715912549 * L_32 = V_3;
		NullCheck(L_32);
		DeriveBytes_set_HashName_m2086526224(L_32, _stringLiteral2543909, /*hidden argument*/NULL);
		V_0 = _stringLiteral67570;
		goto IL_026b;
	}

IL_01aa:
	{
		DeriveBytes_t2715912549 * L_33 = V_3;
		NullCheck(L_33);
		DeriveBytes_set_HashName_m2086526224(L_33, _stringLiteral2543909, /*hidden argument*/NULL);
		V_0 = _stringLiteral80929;
		V_1 = 4;
		goto IL_026b;
	}

IL_01c2:
	{
		DeriveBytes_t2715912549 * L_34 = V_3;
		NullCheck(L_34);
		DeriveBytes_set_HashName_m2086526224(L_34, _stringLiteral2543909, /*hidden argument*/NULL);
		V_0 = _stringLiteral80931;
		V_1 = ((int32_t)16);
		V_2 = 0;
		goto IL_026b;
	}

IL_01dd:
	{
		DeriveBytes_t2715912549 * L_35 = V_3;
		NullCheck(L_35);
		DeriveBytes_set_HashName_m2086526224(L_35, _stringLiteral2543909, /*hidden argument*/NULL);
		V_0 = _stringLiteral80931;
		V_1 = 5;
		V_2 = 0;
		goto IL_026b;
	}

IL_01f7:
	{
		DeriveBytes_t2715912549 * L_36 = V_3;
		NullCheck(L_36);
		DeriveBytes_set_HashName_m2086526224(L_36, _stringLiteral2543909, /*hidden argument*/NULL);
		V_0 = _stringLiteral1617450676;
		V_1 = ((int32_t)24);
		goto IL_026b;
	}

IL_0210:
	{
		DeriveBytes_t2715912549 * L_37 = V_3;
		NullCheck(L_37);
		DeriveBytes_set_HashName_m2086526224(L_37, _stringLiteral2543909, /*hidden argument*/NULL);
		V_0 = _stringLiteral1617450676;
		V_1 = ((int32_t)16);
		goto IL_026b;
	}

IL_0229:
	{
		DeriveBytes_t2715912549 * L_38 = V_3;
		NullCheck(L_38);
		DeriveBytes_set_HashName_m2086526224(L_38, _stringLiteral2543909, /*hidden argument*/NULL);
		V_0 = _stringLiteral80929;
		V_1 = ((int32_t)16);
		goto IL_026b;
	}

IL_0242:
	{
		DeriveBytes_t2715912549 * L_39 = V_3;
		NullCheck(L_39);
		DeriveBytes_set_HashName_m2086526224(L_39, _stringLiteral2543909, /*hidden argument*/NULL);
		V_0 = _stringLiteral80929;
		V_1 = 5;
		goto IL_026b;
	}

IL_025a:
	{
		String_t* L_40 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_41 = String_Concat_m138640077(NULL /*static, unused*/, _stringLiteral2917363116, L_40, /*hidden argument*/NULL);
		NotSupportedException_t1374155497 * L_42 = (NotSupportedException_t1374155497 *)il2cpp_codegen_object_new(NotSupportedException_t1374155497_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m133757637(L_42, L_41, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42);
	}

IL_026b:
	{
		String_t* L_43 = V_0;
		SymmetricAlgorithm_t839208017 * L_44 = SymmetricAlgorithm_Create_m1327881011(NULL /*static, unused*/, L_43, /*hidden argument*/NULL);
		V_4 = L_44;
		SymmetricAlgorithm_t839208017 * L_45 = V_4;
		DeriveBytes_t2715912549 * L_46 = V_3;
		int32_t L_47 = V_1;
		NullCheck(L_46);
		ByteU5BU5D_t58506160* L_48 = DeriveBytes_DeriveKey_m3484345305(L_46, L_47, /*hidden argument*/NULL);
		NullCheck(L_45);
		VirtActionInvoker1< ByteU5BU5D_t58506160* >::Invoke(12 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[]) */, L_45, L_48);
		int32_t L_49 = V_2;
		if ((((int32_t)L_49) <= ((int32_t)0)))
		{
			goto IL_029e;
		}
	}
	{
		SymmetricAlgorithm_t839208017 * L_50 = V_4;
		DeriveBytes_t2715912549 * L_51 = V_3;
		int32_t L_52 = V_2;
		NullCheck(L_51);
		ByteU5BU5D_t58506160* L_53 = DeriveBytes_DeriveIV_m1504468791(L_51, L_52, /*hidden argument*/NULL);
		NullCheck(L_50);
		VirtActionInvoker1< ByteU5BU5D_t58506160* >::Invoke(10 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[]) */, L_50, L_53);
		SymmetricAlgorithm_t839208017 * L_54 = V_4;
		NullCheck(L_54);
		VirtActionInvoker1< int32_t >::Invoke(17 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Mode(System.Security.Cryptography.CipherMode) */, L_54, 1);
	}

IL_029e:
	{
		SymmetricAlgorithm_t839208017 * L_55 = V_4;
		return L_55;
	}
}
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(System.String,System.Byte[],System.Int32,System.Byte[])
extern Il2CppClass* ICryptoTransform_t4226691419_il2cpp_TypeInfo_var;
extern const uint32_t PKCS12_Decrypt_m2583016519_MetadataUsageId;
extern "C"  ByteU5BU5D_t58506160* PKCS12_Decrypt_m2583016519 (PKCS12_t2950126080 * __this, String_t* ___algorithmOid0, ByteU5BU5D_t58506160* ___salt1, int32_t ___iterationCount2, ByteU5BU5D_t58506160* ___encryptedData3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PKCS12_Decrypt_m2583016519_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	SymmetricAlgorithm_t839208017 * V_0 = NULL;
	ByteU5BU5D_t58506160* V_1 = NULL;
	Il2CppObject * V_2 = NULL;
	Exception_t1967233988 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1967233988 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (SymmetricAlgorithm_t839208017 *)NULL;
		V_1 = (ByteU5BU5D_t58506160*)NULL;
	}

IL_0004:
	try
	{ // begin try (depth: 1)
		String_t* L_0 = ___algorithmOid0;
		ByteU5BU5D_t58506160* L_1 = ___salt1;
		int32_t L_2 = ___iterationCount2;
		SymmetricAlgorithm_t839208017 * L_3 = PKCS12_GetSymmetricAlgorithm_m2527458883(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		SymmetricAlgorithm_t839208017 * L_4 = V_0;
		NullCheck(L_4);
		Il2CppObject * L_5 = VirtFuncInvoker0< Il2CppObject * >::Invoke(20 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor() */, L_4);
		V_2 = L_5;
		Il2CppObject * L_6 = V_2;
		ByteU5BU5D_t58506160* L_7 = ___encryptedData3;
		ByteU5BU5D_t58506160* L_8 = ___encryptedData3;
		NullCheck(L_8);
		NullCheck(L_6);
		ByteU5BU5D_t58506160* L_9 = InterfaceFuncInvoker3< ByteU5BU5D_t58506160*, ByteU5BU5D_t58506160*, int32_t, int32_t >::Invoke(2 /* System.Byte[] System.Security.Cryptography.ICryptoTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, ICryptoTransform_t4226691419_il2cpp_TypeInfo_var, L_6, L_7, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_8)->max_length)))));
		V_1 = L_9;
		IL2CPP_LEAVE(0x35, FINALLY_0028);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1967233988 *)e.ex;
		goto FINALLY_0028;
	}

FINALLY_0028:
	{ // begin finally (depth: 1)
		{
			SymmetricAlgorithm_t839208017 * L_10 = V_0;
			if (!L_10)
			{
				goto IL_0034;
			}
		}

IL_002e:
		{
			SymmetricAlgorithm_t839208017 * L_11 = V_0;
			NullCheck(L_11);
			SymmetricAlgorithm_Clear_m421176084(L_11, /*hidden argument*/NULL);
		}

IL_0034:
		{
			IL2CPP_END_FINALLY(40)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(40)
	{
		IL2CPP_JUMP_TBL(0x35, IL_0035)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1967233988 *)
	}

IL_0035:
	{
		ByteU5BU5D_t58506160* L_12 = V_1;
		return L_12;
	}
}
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(Mono.Security.PKCS7/EncryptedData)
extern "C"  ByteU5BU5D_t58506160* PKCS12_Decrypt_m1699029656 (PKCS12_t2950126080 * __this, EncryptedData_t636832623 * ___ed0, const MethodInfo* method)
{
	{
		EncryptedData_t636832623 * L_0 = ___ed0;
		NullCheck(L_0);
		ContentInfo_t1278398632 * L_1 = EncryptedData_get_EncryptionAlgorithm_m3999045305(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = ContentInfo_get_ContentType_m3252099384(L_1, /*hidden argument*/NULL);
		EncryptedData_t636832623 * L_3 = ___ed0;
		NullCheck(L_3);
		ContentInfo_t1278398632 * L_4 = EncryptedData_get_EncryptionAlgorithm_m3999045305(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		ASN1_t1254135647 * L_5 = ContentInfo_get_Content_m2793987994(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		ASN1_t1254135647 * L_6 = ASN1_get_Item_m3112983888(L_5, 0, /*hidden argument*/NULL);
		NullCheck(L_6);
		ByteU5BU5D_t58506160* L_7 = ASN1_get_Value_m4232529916(L_6, /*hidden argument*/NULL);
		EncryptedData_t636832623 * L_8 = ___ed0;
		NullCheck(L_8);
		ContentInfo_t1278398632 * L_9 = EncryptedData_get_EncryptionAlgorithm_m3999045305(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		ASN1_t1254135647 * L_10 = ContentInfo_get_Content_m2793987994(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		ASN1_t1254135647 * L_11 = ASN1_get_Item_m3112983888(L_10, 1, /*hidden argument*/NULL);
		int32_t L_12 = ASN1Convert_ToInt32_m1508411796(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		EncryptedData_t636832623 * L_13 = ___ed0;
		NullCheck(L_13);
		ByteU5BU5D_t58506160* L_14 = EncryptedData_get_EncryptedContent_m2775206546(L_13, /*hidden argument*/NULL);
		ByteU5BU5D_t58506160* L_15 = PKCS12_Decrypt_m2583016519(__this, L_2, L_7, L_12, L_14, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Byte[] Mono.Security.X509.PKCS12::Encrypt(System.String,System.Byte[],System.Int32,System.Byte[])
extern Il2CppClass* ICryptoTransform_t4226691419_il2cpp_TypeInfo_var;
extern Il2CppClass* IDisposable_t1628921374_il2cpp_TypeInfo_var;
extern const uint32_t PKCS12_Encrypt_m3283559711_MetadataUsageId;
extern "C"  ByteU5BU5D_t58506160* PKCS12_Encrypt_m3283559711 (PKCS12_t2950126080 * __this, String_t* ___algorithmOid0, ByteU5BU5D_t58506160* ___salt1, int32_t ___iterationCount2, ByteU5BU5D_t58506160* ___data3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PKCS12_Encrypt_m3283559711_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t58506160* V_0 = NULL;
	SymmetricAlgorithm_t839208017 * V_1 = NULL;
	Il2CppObject * V_2 = NULL;
	Exception_t1967233988 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1967233988 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (ByteU5BU5D_t58506160*)NULL;
		String_t* L_0 = ___algorithmOid0;
		ByteU5BU5D_t58506160* L_1 = ___salt1;
		int32_t L_2 = ___iterationCount2;
		SymmetricAlgorithm_t839208017 * L_3 = PKCS12_GetSymmetricAlgorithm_m2527458883(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		SymmetricAlgorithm_t839208017 * L_4 = V_1;
		NullCheck(L_4);
		Il2CppObject * L_5 = VirtFuncInvoker0< Il2CppObject * >::Invoke(22 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor() */, L_4);
		V_2 = L_5;
		Il2CppObject * L_6 = V_2;
		ByteU5BU5D_t58506160* L_7 = ___data3;
		ByteU5BU5D_t58506160* L_8 = ___data3;
		NullCheck(L_8);
		NullCheck(L_6);
		ByteU5BU5D_t58506160* L_9 = InterfaceFuncInvoker3< ByteU5BU5D_t58506160*, ByteU5BU5D_t58506160*, int32_t, int32_t >::Invoke(2 /* System.Byte[] System.Security.Cryptography.ICryptoTransform::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, ICryptoTransform_t4226691419_il2cpp_TypeInfo_var, L_6, L_7, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_8)->max_length)))));
		V_0 = L_9;
		IL2CPP_LEAVE(0x33, FINALLY_0026);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1967233988 *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		{
			SymmetricAlgorithm_t839208017 * L_10 = V_1;
			if (!L_10)
			{
				goto IL_0032;
			}
		}

IL_002c:
		{
			SymmetricAlgorithm_t839208017 * L_11 = V_1;
			NullCheck(L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1628921374_il2cpp_TypeInfo_var, L_11);
		}

IL_0032:
		{
			IL2CPP_END_FINALLY(38)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x33, IL_0033)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1967233988 *)
	}

IL_0033:
	{
		ByteU5BU5D_t58506160* L_12 = V_0;
		return L_12;
	}
}
// System.Security.Cryptography.DSAParameters Mono.Security.X509.PKCS12::GetExistingParameters(System.Boolean&)
extern Il2CppClass* IDisposable_t1628921374_il2cpp_TypeInfo_var;
extern Il2CppClass* DSAParameters_t2524359253_il2cpp_TypeInfo_var;
extern const uint32_t PKCS12_GetExistingParameters_m1851295361_MetadataUsageId;
extern "C"  DSAParameters_t2524359253  PKCS12_GetExistingParameters_m1851295361 (PKCS12_t2950126080 * __this, bool* ___found0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PKCS12_GetExistingParameters_m1851295361_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	X509Certificate_t273828613 * V_0 = NULL;
	X509CertificateEnumerator_t3569011382 * V_1 = NULL;
	DSA_t1557551819 * V_2 = NULL;
	DSAParameters_t2524359253  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Il2CppObject * V_4 = NULL;
	DSAParameters_t2524359253  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Exception_t1967233988 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1967233988 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		X509CertificateCollection_t3336811651 * L_0 = PKCS12_get_Certificates_m1930169375(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		X509CertificateEnumerator_t3569011382 * L_1 = X509CertificateCollection_GetEnumerator_m1926496255(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0040;
		}

IL_0011:
		{
			X509CertificateEnumerator_t3569011382 * L_2 = V_1;
			NullCheck(L_2);
			X509Certificate_t273828613 * L_3 = X509CertificateEnumerator_get_Current_m2126438283(L_2, /*hidden argument*/NULL);
			V_0 = L_3;
			X509Certificate_t273828613 * L_4 = V_0;
			NullCheck(L_4);
			ByteU5BU5D_t58506160* L_5 = VirtFuncInvoker0< ByteU5BU5D_t58506160* >::Invoke(7 /* System.Byte[] Mono.Security.X509.X509Certificate::get_KeyAlgorithmParameters() */, L_4);
			if (!L_5)
			{
				goto IL_0040;
			}
		}

IL_0023:
		{
			X509Certificate_t273828613 * L_6 = V_0;
			NullCheck(L_6);
			DSA_t1557551819 * L_7 = X509Certificate_get_DSA_m937980955(L_6, /*hidden argument*/NULL);
			V_2 = L_7;
			DSA_t1557551819 * L_8 = V_2;
			if (!L_8)
			{
				goto IL_0040;
			}
		}

IL_0030:
		{
			bool* L_9 = ___found0;
			*((int8_t*)(L_9)) = (int8_t)1;
			DSA_t1557551819 * L_10 = V_2;
			NullCheck(L_10);
			DSAParameters_t2524359253  L_11 = VirtFuncInvoker1< DSAParameters_t2524359253 , bool >::Invoke(11 /* System.Security.Cryptography.DSAParameters System.Security.Cryptography.DSA::ExportParameters(System.Boolean) */, L_10, (bool)0);
			V_3 = L_11;
			IL2CPP_LEAVE(0x73, FINALLY_0050);
		}

IL_0040:
		{
			X509CertificateEnumerator_t3569011382 * L_12 = V_1;
			NullCheck(L_12);
			bool L_13 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::MoveNext() */, L_12);
			if (L_13)
			{
				goto IL_0011;
			}
		}

IL_004b:
		{
			IL2CPP_LEAVE(0x65, FINALLY_0050);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1967233988 *)e.ex;
		goto FINALLY_0050;
	}

FINALLY_0050:
	{ // begin finally (depth: 1)
		{
			X509CertificateEnumerator_t3569011382 * L_14 = V_1;
			V_4 = ((Il2CppObject *)IsInst(L_14, IDisposable_t1628921374_il2cpp_TypeInfo_var));
			Il2CppObject * L_15 = V_4;
			if (L_15)
			{
				goto IL_005d;
			}
		}

IL_005c:
		{
			IL2CPP_END_FINALLY(80)
		}

IL_005d:
		{
			Il2CppObject * L_16 = V_4;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1628921374_il2cpp_TypeInfo_var, L_16);
			IL2CPP_END_FINALLY(80)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(80)
	{
		IL2CPP_JUMP_TBL(0x73, IL_0073)
		IL2CPP_JUMP_TBL(0x65, IL_0065)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1967233988 *)
	}

IL_0065:
	{
		bool* L_17 = ___found0;
		*((int8_t*)(L_17)) = (int8_t)0;
		Initobj (DSAParameters_t2524359253_il2cpp_TypeInfo_var, (&V_5));
		DSAParameters_t2524359253  L_18 = V_5;
		return L_18;
	}

IL_0073:
	{
		DSAParameters_t2524359253  L_19 = V_3;
		return L_19;
	}
}
// System.Void Mono.Security.X509.PKCS12::AddPrivateKey(Mono.Security.Cryptography.PKCS8/PrivateKeyInfo)
extern Il2CppClass* CryptographicException_t3718270561_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral966261579;
extern const uint32_t PKCS12_AddPrivateKey_m3693882703_MetadataUsageId;
extern "C"  void PKCS12_AddPrivateKey_m3693882703 (PKCS12_t2950126080 * __this, PrivateKeyInfo_t2184496331 * ___pki0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PKCS12_AddPrivateKey_m3693882703_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t58506160* V_0 = NULL;
	bool V_1 = false;
	DSAParameters_t2524359253  V_2;
	memset(&V_2, 0, sizeof(V_2));
	uint8_t V_3 = 0x0;
	{
		PrivateKeyInfo_t2184496331 * L_0 = ___pki0;
		NullCheck(L_0);
		ByteU5BU5D_t58506160* L_1 = PrivateKeyInfo_get_PrivateKey_m2153221404(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ByteU5BU5D_t58506160* L_2 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		V_3 = ((L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3)));
		uint8_t L_4 = V_3;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_001f;
		}
	}
	{
		uint8_t L_5 = V_3;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)48))))
		{
			goto IL_0046;
		}
	}
	{
		goto IL_005d;
	}

IL_001f:
	{
		DSAParameters_t2524359253  L_6 = PKCS12_GetExistingParameters_m1851295361(__this, (&V_1), /*hidden argument*/NULL);
		V_2 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		ArrayList_t2121638921 * L_8 = __this->get__keyBags_2();
		ByteU5BU5D_t58506160* L_9 = V_0;
		DSAParameters_t2524359253  L_10 = V_2;
		DSA_t1557551819 * L_11 = PrivateKeyInfo_DecodeDSA_m1682427249(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtFuncInvoker1< int32_t, Il2CppObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_8, L_11);
	}

IL_0041:
	{
		goto IL_0072;
	}

IL_0046:
	{
		ArrayList_t2121638921 * L_12 = __this->get__keyBags_2();
		ByteU5BU5D_t58506160* L_13 = V_0;
		RSA_t1557565273 * L_14 = PrivateKeyInfo_DecodeRSA_m311172684(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		VirtFuncInvoker1< int32_t, Il2CppObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_12, L_14);
		goto IL_0072;
	}

IL_005d:
	{
		ByteU5BU5D_t58506160* L_15 = V_0;
		ByteU5BU5D_t58506160* L_16 = V_0;
		NullCheck(L_16);
		Array_Clear_m2499577033(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_15, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_16)->max_length)))), /*hidden argument*/NULL);
		CryptographicException_t3718270561 * L_17 = (CryptographicException_t3718270561 *)il2cpp_codegen_object_new(CryptographicException_t3718270561_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m2400722889(L_17, _stringLiteral966261579, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17);
	}

IL_0072:
	{
		ByteU5BU5D_t58506160* L_18 = V_0;
		ByteU5BU5D_t58506160* L_19 = V_0;
		NullCheck(L_19);
		Array_Clear_m2499577033(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_18, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_19)->max_length)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.X509.PKCS12::ReadSafeBag(Mono.Security.ASN1)
extern Il2CppClass* ArgumentException_t124305799_il2cpp_TypeInfo_var;
extern Il2CppClass* PKCS12_t2950126080_il2cpp_TypeInfo_var;
extern Il2CppClass* Dictionary_2_t190145395_il2cpp_TypeInfo_var;
extern Il2CppClass* PrivateKeyInfo_t2184496331_il2cpp_TypeInfo_var;
extern Il2CppClass* EncryptedPrivateKeyInfo_t785870703_il2cpp_TypeInfo_var;
extern Il2CppClass* ContentInfo_t1278398632_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* NotSupportedException_t1374155497_il2cpp_TypeInfo_var;
extern Il2CppClass* X509Certificate_t273828613_il2cpp_TypeInfo_var;
extern Il2CppClass* SafeBag_t4111116303_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1958628151_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral456827922;
extern Il2CppCodeGenString* _stringLiteral2904264681;
extern Il2CppCodeGenString* _stringLiteral3902436161;
extern Il2CppCodeGenString* _stringLiteral3902436162;
extern Il2CppCodeGenString* _stringLiteral3902436163;
extern Il2CppCodeGenString* _stringLiteral3902436164;
extern Il2CppCodeGenString* _stringLiteral3902436165;
extern Il2CppCodeGenString* _stringLiteral3902436166;
extern Il2CppCodeGenString* _stringLiteral2688301449;
extern Il2CppCodeGenString* _stringLiteral2850533357;
extern Il2CppCodeGenString* _stringLiteral1346394767;
extern Il2CppCodeGenString* _stringLiteral3030391030;
extern Il2CppCodeGenString* _stringLiteral290614521;
extern Il2CppCodeGenString* _stringLiteral1596296360;
extern Il2CppCodeGenString* _stringLiteral3743575364;
extern Il2CppCodeGenString* _stringLiteral3743575365;
extern Il2CppCodeGenString* _stringLiteral3045757943;
extern const uint32_t PKCS12_ReadSafeBag_m4010108072_MetadataUsageId;
extern "C"  void PKCS12_ReadSafeBag_m4010108072 (PKCS12_t2950126080 * __this, ASN1_t1254135647 * ___safeBag0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PKCS12_ReadSafeBag_m4010108072_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ASN1_t1254135647 * V_0 = NULL;
	ASN1_t1254135647 * V_1 = NULL;
	String_t* V_2 = NULL;
	EncryptedPrivateKeyInfo_t785870703 * V_3 = NULL;
	ByteU5BU5D_t58506160* V_4 = NULL;
	ContentInfo_t1278398632 * V_5 = NULL;
	X509Certificate_t273828613 * V_6 = NULL;
	ByteU5BU5D_t58506160* V_7 = NULL;
	ASN1_t1254135647 * V_8 = NULL;
	int32_t V_9 = 0;
	ASN1_t1254135647 * V_10 = NULL;
	ASN1_t1254135647 * V_11 = NULL;
	String_t* V_12 = NULL;
	ASN1_t1254135647 * V_13 = NULL;
	int32_t V_14 = 0;
	ASN1_t1254135647 * V_15 = NULL;
	String_t* V_16 = NULL;
	Dictionary_2_t190145395 * V_17 = NULL;
	int32_t V_18 = 0;
	{
		ASN1_t1254135647 * L_0 = ___safeBag0;
		NullCheck(L_0);
		uint8_t L_1 = ASN1_get_Tag_m1269404867(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)48))))
		{
			goto IL_0018;
		}
	}
	{
		ArgumentException_t124305799 * L_2 = (ArgumentException_t124305799 *)il2cpp_codegen_object_new(ArgumentException_t124305799_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3544856547(L_2, _stringLiteral456827922, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0018:
	{
		ASN1_t1254135647 * L_3 = ___safeBag0;
		NullCheck(L_3);
		ASN1_t1254135647 * L_4 = ASN1_get_Item_m3112983888(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_4;
		ASN1_t1254135647 * L_5 = V_0;
		NullCheck(L_5);
		uint8_t L_6 = ASN1_get_Tag_m1269404867(L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_6) == ((int32_t)6)))
		{
			goto IL_0037;
		}
	}
	{
		ArgumentException_t124305799 * L_7 = (ArgumentException_t124305799 *)il2cpp_codegen_object_new(ArgumentException_t124305799_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3544856547(L_7, _stringLiteral2904264681, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7);
	}

IL_0037:
	{
		ASN1_t1254135647 * L_8 = ___safeBag0;
		NullCheck(L_8);
		ASN1_t1254135647 * L_9 = ASN1_get_Item_m3112983888(L_8, 1, /*hidden argument*/NULL);
		V_1 = L_9;
		ASN1_t1254135647 * L_10 = V_0;
		String_t* L_11 = ASN1Convert_ToOid_m1387992843(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		String_t* L_12 = V_2;
		V_16 = L_12;
		String_t* L_13 = V_16;
		if (!L_13)
		{
			goto IL_01cd;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PKCS12_t2950126080_il2cpp_TypeInfo_var);
		Dictionary_2_t190145395 * L_14 = ((PKCS12_t2950126080_StaticFields*)PKCS12_t2950126080_il2cpp_TypeInfo_var->static_fields)->get_U3CU3Ef__switchU24map7_14();
		if (L_14)
		{
			goto IL_00b7;
		}
	}
	{
		Dictionary_2_t190145395 * L_15 = (Dictionary_2_t190145395 *)il2cpp_codegen_object_new(Dictionary_2_t190145395_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1958628151(L_15, 6, /*hidden argument*/Dictionary_2__ctor_m1958628151_MethodInfo_var);
		V_17 = L_15;
		Dictionary_2_t190145395 * L_16 = V_17;
		NullCheck(L_16);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_16, _stringLiteral3902436161, 0);
		Dictionary_2_t190145395 * L_17 = V_17;
		NullCheck(L_17);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_17, _stringLiteral3902436162, 1);
		Dictionary_2_t190145395 * L_18 = V_17;
		NullCheck(L_18);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_18, _stringLiteral3902436163, 2);
		Dictionary_2_t190145395 * L_19 = V_17;
		NullCheck(L_19);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_19, _stringLiteral3902436164, 3);
		Dictionary_2_t190145395 * L_20 = V_17;
		NullCheck(L_20);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_20, _stringLiteral3902436165, 4);
		Dictionary_2_t190145395 * L_21 = V_17;
		NullCheck(L_21);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_21, _stringLiteral3902436166, 5);
		Dictionary_2_t190145395 * L_22 = V_17;
		IL2CPP_RUNTIME_CLASS_INIT(PKCS12_t2950126080_il2cpp_TypeInfo_var);
		((PKCS12_t2950126080_StaticFields*)PKCS12_t2950126080_il2cpp_TypeInfo_var->static_fields)->set_U3CU3Ef__switchU24map7_14(L_22);
	}

IL_00b7:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PKCS12_t2950126080_il2cpp_TypeInfo_var);
		Dictionary_2_t190145395 * L_23 = ((PKCS12_t2950126080_StaticFields*)PKCS12_t2950126080_il2cpp_TypeInfo_var->static_fields)->get_U3CU3Ef__switchU24map7_14();
		String_t* L_24 = V_16;
		NullCheck(L_23);
		bool L_25 = VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_23, L_24, (&V_18));
		if (!L_25)
		{
			goto IL_01cd;
		}
	}
	{
		int32_t L_26 = V_18;
		if (L_26 == 0)
		{
			goto IL_00ee;
		}
		if (L_26 == 1)
		{
			goto IL_0104;
		}
		if (L_26 == 2)
		{
			goto IL_014e;
		}
		if (L_26 == 3)
		{
			goto IL_01a8;
		}
		if (L_26 == 4)
		{
			goto IL_01ad;
		}
		if (L_26 == 5)
		{
			goto IL_01c8;
		}
	}
	{
		goto IL_01cd;
	}

IL_00ee:
	{
		ASN1_t1254135647 * L_27 = V_1;
		NullCheck(L_27);
		ByteU5BU5D_t58506160* L_28 = ASN1_get_Value_m4232529916(L_27, /*hidden argument*/NULL);
		PrivateKeyInfo_t2184496331 * L_29 = (PrivateKeyInfo_t2184496331 *)il2cpp_codegen_object_new(PrivateKeyInfo_t2184496331_il2cpp_TypeInfo_var);
		PrivateKeyInfo__ctor_m3331527846(L_29, L_28, /*hidden argument*/NULL);
		PKCS12_AddPrivateKey_m3693882703(__this, L_29, /*hidden argument*/NULL);
		goto IL_01d8;
	}

IL_0104:
	{
		ASN1_t1254135647 * L_30 = V_1;
		NullCheck(L_30);
		ByteU5BU5D_t58506160* L_31 = ASN1_get_Value_m4232529916(L_30, /*hidden argument*/NULL);
		EncryptedPrivateKeyInfo_t785870703 * L_32 = (EncryptedPrivateKeyInfo_t785870703 *)il2cpp_codegen_object_new(EncryptedPrivateKeyInfo_t785870703_il2cpp_TypeInfo_var);
		EncryptedPrivateKeyInfo__ctor_m3104680606(L_32, L_31, /*hidden argument*/NULL);
		V_3 = L_32;
		EncryptedPrivateKeyInfo_t785870703 * L_33 = V_3;
		NullCheck(L_33);
		String_t* L_34 = EncryptedPrivateKeyInfo_get_Algorithm_m1903026028(L_33, /*hidden argument*/NULL);
		EncryptedPrivateKeyInfo_t785870703 * L_35 = V_3;
		NullCheck(L_35);
		ByteU5BU5D_t58506160* L_36 = EncryptedPrivateKeyInfo_get_Salt_m4034382306(L_35, /*hidden argument*/NULL);
		EncryptedPrivateKeyInfo_t785870703 * L_37 = V_3;
		NullCheck(L_37);
		int32_t L_38 = EncryptedPrivateKeyInfo_get_IterationCount_m1213644604(L_37, /*hidden argument*/NULL);
		EncryptedPrivateKeyInfo_t785870703 * L_39 = V_3;
		NullCheck(L_39);
		ByteU5BU5D_t58506160* L_40 = EncryptedPrivateKeyInfo_get_EncryptedData_m1064226660(L_39, /*hidden argument*/NULL);
		ByteU5BU5D_t58506160* L_41 = PKCS12_Decrypt_m2583016519(__this, L_34, L_36, L_38, L_40, /*hidden argument*/NULL);
		V_4 = L_41;
		ByteU5BU5D_t58506160* L_42 = V_4;
		PrivateKeyInfo_t2184496331 * L_43 = (PrivateKeyInfo_t2184496331 *)il2cpp_codegen_object_new(PrivateKeyInfo_t2184496331_il2cpp_TypeInfo_var);
		PrivateKeyInfo__ctor_m3331527846(L_43, L_42, /*hidden argument*/NULL);
		PKCS12_AddPrivateKey_m3693882703(__this, L_43, /*hidden argument*/NULL);
		ByteU5BU5D_t58506160* L_44 = V_4;
		ByteU5BU5D_t58506160* L_45 = V_4;
		NullCheck(L_45);
		Array_Clear_m2499577033(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_44, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_45)->max_length)))), /*hidden argument*/NULL);
		goto IL_01d8;
	}

IL_014e:
	{
		ASN1_t1254135647 * L_46 = V_1;
		NullCheck(L_46);
		ByteU5BU5D_t58506160* L_47 = ASN1_get_Value_m4232529916(L_46, /*hidden argument*/NULL);
		ContentInfo_t1278398632 * L_48 = (ContentInfo_t1278398632 *)il2cpp_codegen_object_new(ContentInfo_t1278398632_il2cpp_TypeInfo_var);
		ContentInfo__ctor_m2758504540(L_48, L_47, /*hidden argument*/NULL);
		V_5 = L_48;
		ContentInfo_t1278398632 * L_49 = V_5;
		NullCheck(L_49);
		String_t* L_50 = ContentInfo_get_ContentType_m3252099384(L_49, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_51 = String_op_Inequality_m2125462205(NULL /*static, unused*/, L_50, _stringLiteral2688301449, /*hidden argument*/NULL);
		if (!L_51)
		{
			goto IL_017c;
		}
	}
	{
		NotSupportedException_t1374155497 * L_52 = (NotSupportedException_t1374155497 *)il2cpp_codegen_object_new(NotSupportedException_t1374155497_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m133757637(L_52, _stringLiteral2850533357, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_52);
	}

IL_017c:
	{
		ContentInfo_t1278398632 * L_53 = V_5;
		NullCheck(L_53);
		ASN1_t1254135647 * L_54 = ContentInfo_get_Content_m2793987994(L_53, /*hidden argument*/NULL);
		NullCheck(L_54);
		ASN1_t1254135647 * L_55 = ASN1_get_Item_m3112983888(L_54, 0, /*hidden argument*/NULL);
		NullCheck(L_55);
		ByteU5BU5D_t58506160* L_56 = ASN1_get_Value_m4232529916(L_55, /*hidden argument*/NULL);
		X509Certificate_t273828613 * L_57 = (X509Certificate_t273828613 *)il2cpp_codegen_object_new(X509Certificate_t273828613_il2cpp_TypeInfo_var);
		X509Certificate__ctor_m3683615677(L_57, L_56, /*hidden argument*/NULL);
		V_6 = L_57;
		X509CertificateCollection_t3336811651 * L_58 = __this->get__certs_4();
		X509Certificate_t273828613 * L_59 = V_6;
		NullCheck(L_58);
		X509CertificateCollection_Add_m1585739833(L_58, L_59, /*hidden argument*/NULL);
		goto IL_01d8;
	}

IL_01a8:
	{
		goto IL_01d8;
	}

IL_01ad:
	{
		ASN1_t1254135647 * L_60 = V_1;
		NullCheck(L_60);
		ByteU5BU5D_t58506160* L_61 = ASN1_get_Value_m4232529916(L_60, /*hidden argument*/NULL);
		V_7 = L_61;
		ArrayList_t2121638921 * L_62 = __this->get__secretBags_3();
		ByteU5BU5D_t58506160* L_63 = V_7;
		NullCheck(L_62);
		VirtFuncInvoker1< int32_t, Il2CppObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_62, (Il2CppObject *)(Il2CppObject *)L_63);
		goto IL_01d8;
	}

IL_01c8:
	{
		goto IL_01d8;
	}

IL_01cd:
	{
		ArgumentException_t124305799 * L_64 = (ArgumentException_t124305799 *)il2cpp_codegen_object_new(ArgumentException_t124305799_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3544856547(L_64, _stringLiteral1346394767, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_64);
	}

IL_01d8:
	{
		ASN1_t1254135647 * L_65 = ___safeBag0;
		NullCheck(L_65);
		int32_t L_66 = ASN1_get_Count_m3031159196(L_65, /*hidden argument*/NULL);
		if ((((int32_t)L_66) <= ((int32_t)2)))
		{
			goto IL_0347;
		}
	}
	{
		ASN1_t1254135647 * L_67 = ___safeBag0;
		NullCheck(L_67);
		ASN1_t1254135647 * L_68 = ASN1_get_Item_m3112983888(L_67, 2, /*hidden argument*/NULL);
		V_8 = L_68;
		ASN1_t1254135647 * L_69 = V_8;
		NullCheck(L_69);
		uint8_t L_70 = ASN1_get_Tag_m1269404867(L_69, /*hidden argument*/NULL);
		if ((((int32_t)L_70) == ((int32_t)((int32_t)49))))
		{
			goto IL_0206;
		}
	}
	{
		ArgumentException_t124305799 * L_71 = (ArgumentException_t124305799 *)il2cpp_codegen_object_new(ArgumentException_t124305799_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3544856547(L_71, _stringLiteral3030391030, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_71);
	}

IL_0206:
	{
		V_9 = 0;
		goto IL_0339;
	}

IL_020e:
	{
		ASN1_t1254135647 * L_72 = V_8;
		int32_t L_73 = V_9;
		NullCheck(L_72);
		ASN1_t1254135647 * L_74 = ASN1_get_Item_m3112983888(L_72, L_73, /*hidden argument*/NULL);
		V_10 = L_74;
		ASN1_t1254135647 * L_75 = V_10;
		NullCheck(L_75);
		uint8_t L_76 = ASN1_get_Tag_m1269404867(L_75, /*hidden argument*/NULL);
		if ((((int32_t)L_76) == ((int32_t)((int32_t)48))))
		{
			goto IL_0232;
		}
	}
	{
		ArgumentException_t124305799 * L_77 = (ArgumentException_t124305799 *)il2cpp_codegen_object_new(ArgumentException_t124305799_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3544856547(L_77, _stringLiteral290614521, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_77);
	}

IL_0232:
	{
		ASN1_t1254135647 * L_78 = V_10;
		NullCheck(L_78);
		ASN1_t1254135647 * L_79 = ASN1_get_Item_m3112983888(L_78, 0, /*hidden argument*/NULL);
		V_11 = L_79;
		ASN1_t1254135647 * L_80 = V_11;
		NullCheck(L_80);
		uint8_t L_81 = ASN1_get_Tag_m1269404867(L_80, /*hidden argument*/NULL);
		if ((((int32_t)L_81) == ((int32_t)6)))
		{
			goto IL_0254;
		}
	}
	{
		ArgumentException_t124305799 * L_82 = (ArgumentException_t124305799 *)il2cpp_codegen_object_new(ArgumentException_t124305799_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3544856547(L_82, _stringLiteral1596296360, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_82);
	}

IL_0254:
	{
		ASN1_t1254135647 * L_83 = V_11;
		String_t* L_84 = ASN1Convert_ToOid_m1387992843(NULL /*static, unused*/, L_83, /*hidden argument*/NULL);
		V_12 = L_84;
		ASN1_t1254135647 * L_85 = V_10;
		NullCheck(L_85);
		ASN1_t1254135647 * L_86 = ASN1_get_Item_m3112983888(L_85, 1, /*hidden argument*/NULL);
		V_13 = L_86;
		V_14 = 0;
		goto IL_0325;
	}

IL_026f:
	{
		ASN1_t1254135647 * L_87 = V_13;
		int32_t L_88 = V_14;
		NullCheck(L_87);
		ASN1_t1254135647 * L_89 = ASN1_get_Item_m3112983888(L_87, L_88, /*hidden argument*/NULL);
		V_15 = L_89;
		String_t* L_90 = V_12;
		V_16 = L_90;
		String_t* L_91 = V_16;
		if (!L_91)
		{
			goto IL_031a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PKCS12_t2950126080_il2cpp_TypeInfo_var);
		Dictionary_2_t190145395 * L_92 = ((PKCS12_t2950126080_StaticFields*)PKCS12_t2950126080_il2cpp_TypeInfo_var->static_fields)->get_U3CU3Ef__switchU24map8_15();
		if (L_92)
		{
			goto IL_02b8;
		}
	}
	{
		Dictionary_2_t190145395 * L_93 = (Dictionary_2_t190145395 *)il2cpp_codegen_object_new(Dictionary_2_t190145395_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1958628151(L_93, 2, /*hidden argument*/Dictionary_2__ctor_m1958628151_MethodInfo_var);
		V_17 = L_93;
		Dictionary_2_t190145395 * L_94 = V_17;
		NullCheck(L_94);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_94, _stringLiteral3743575364, 0);
		Dictionary_2_t190145395 * L_95 = V_17;
		NullCheck(L_95);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_95, _stringLiteral3743575365, 1);
		Dictionary_2_t190145395 * L_96 = V_17;
		IL2CPP_RUNTIME_CLASS_INIT(PKCS12_t2950126080_il2cpp_TypeInfo_var);
		((PKCS12_t2950126080_StaticFields*)PKCS12_t2950126080_il2cpp_TypeInfo_var->static_fields)->set_U3CU3Ef__switchU24map8_15(L_96);
	}

IL_02b8:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PKCS12_t2950126080_il2cpp_TypeInfo_var);
		Dictionary_2_t190145395 * L_97 = ((PKCS12_t2950126080_StaticFields*)PKCS12_t2950126080_il2cpp_TypeInfo_var->static_fields)->get_U3CU3Ef__switchU24map8_15();
		String_t* L_98 = V_16;
		NullCheck(L_97);
		bool L_99 = VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_97, L_98, (&V_18));
		if (!L_99)
		{
			goto IL_031a;
		}
	}
	{
		int32_t L_100 = V_18;
		if (!L_100)
		{
			goto IL_02df;
		}
	}
	{
		int32_t L_101 = V_18;
		if ((((int32_t)L_101) == ((int32_t)1)))
		{
			goto IL_02fd;
		}
	}
	{
		goto IL_031a;
	}

IL_02df:
	{
		ASN1_t1254135647 * L_102 = V_15;
		NullCheck(L_102);
		uint8_t L_103 = ASN1_get_Tag_m1269404867(L_102, /*hidden argument*/NULL);
		if ((((int32_t)L_103) == ((int32_t)((int32_t)30))))
		{
			goto IL_02f8;
		}
	}
	{
		ArgumentException_t124305799 * L_104 = (ArgumentException_t124305799 *)il2cpp_codegen_object_new(ArgumentException_t124305799_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3544856547(L_104, _stringLiteral3045757943, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_104);
	}

IL_02f8:
	{
		goto IL_031f;
	}

IL_02fd:
	{
		ASN1_t1254135647 * L_105 = V_15;
		NullCheck(L_105);
		uint8_t L_106 = ASN1_get_Tag_m1269404867(L_105, /*hidden argument*/NULL);
		if ((((int32_t)L_106) == ((int32_t)4)))
		{
			goto IL_0315;
		}
	}
	{
		ArgumentException_t124305799 * L_107 = (ArgumentException_t124305799 *)il2cpp_codegen_object_new(ArgumentException_t124305799_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3544856547(L_107, _stringLiteral3045757943, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_107);
	}

IL_0315:
	{
		goto IL_031f;
	}

IL_031a:
	{
		goto IL_031f;
	}

IL_031f:
	{
		int32_t L_108 = V_14;
		V_14 = ((int32_t)((int32_t)L_108+(int32_t)1));
	}

IL_0325:
	{
		int32_t L_109 = V_14;
		ASN1_t1254135647 * L_110 = V_13;
		NullCheck(L_110);
		int32_t L_111 = ASN1_get_Count_m3031159196(L_110, /*hidden argument*/NULL);
		if ((((int32_t)L_109) < ((int32_t)L_111)))
		{
			goto IL_026f;
		}
	}
	{
		int32_t L_112 = V_9;
		V_9 = ((int32_t)((int32_t)L_112+(int32_t)1));
	}

IL_0339:
	{
		int32_t L_113 = V_9;
		ASN1_t1254135647 * L_114 = V_8;
		NullCheck(L_114);
		int32_t L_115 = ASN1_get_Count_m3031159196(L_114, /*hidden argument*/NULL);
		if ((((int32_t)L_113) < ((int32_t)L_115)))
		{
			goto IL_020e;
		}
	}

IL_0347:
	{
		ArrayList_t2121638921 * L_116 = __this->get__safeBags_9();
		String_t* L_117 = V_2;
		ASN1_t1254135647 * L_118 = ___safeBag0;
		SafeBag_t4111116303 * L_119 = (SafeBag_t4111116303 *)il2cpp_codegen_object_new(SafeBag_t4111116303_il2cpp_TypeInfo_var);
		SafeBag__ctor_m2711801934(L_119, L_117, L_118, /*hidden argument*/NULL);
		NullCheck(L_116);
		VirtFuncInvoker1< int32_t, Il2CppObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_116, L_119);
		return;
	}
}
// Mono.Security.ASN1 Mono.Security.X509.PKCS12::CertificateSafeBag(Mono.Security.X509.X509Certificate,System.Collections.IDictionary)
extern Il2CppClass* ASN1_t1254135647_il2cpp_TypeInfo_var;
extern Il2CppClass* ContentInfo_t1278398632_il2cpp_TypeInfo_var;
extern Il2CppClass* IDictionary_t1654916945_il2cpp_TypeInfo_var;
extern Il2CppClass* IDictionaryEnumerator_t1541724277_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* PKCS12_t2950126080_il2cpp_TypeInfo_var;
extern Il2CppClass* Dictionary_2_t190145395_il2cpp_TypeInfo_var;
extern Il2CppClass* ArrayList_t2121638921_il2cpp_TypeInfo_var;
extern Il2CppClass* IEnumerator_t287207039_il2cpp_TypeInfo_var;
extern Il2CppClass* ByteU5BU5D_t58506160_il2cpp_TypeInfo_var;
extern Il2CppClass* IDisposable_t1628921374_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1958628151_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2688301449;
extern Il2CppCodeGenString* _stringLiteral3902436163;
extern Il2CppCodeGenString* _stringLiteral3743575364;
extern Il2CppCodeGenString* _stringLiteral3743575365;
extern const uint32_t PKCS12_CertificateSafeBag_m2143586463_MetadataUsageId;
extern "C"  ASN1_t1254135647 * PKCS12_CertificateSafeBag_m2143586463 (PKCS12_t2950126080 * __this, X509Certificate_t273828613 * ___x5090, Il2CppObject * ___attributes1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PKCS12_CertificateSafeBag_m2143586463_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ASN1_t1254135647 * V_0 = NULL;
	ContentInfo_t1278398632 * V_1 = NULL;
	ASN1_t1254135647 * V_2 = NULL;
	ASN1_t1254135647 * V_3 = NULL;
	ASN1_t1254135647 * V_4 = NULL;
	Il2CppObject * V_5 = NULL;
	String_t* V_6 = NULL;
	ArrayList_t2121638921 * V_7 = NULL;
	ASN1_t1254135647 * V_8 = NULL;
	ASN1_t1254135647 * V_9 = NULL;
	ByteU5BU5D_t58506160* V_10 = NULL;
	Il2CppObject * V_11 = NULL;
	ASN1_t1254135647 * V_12 = NULL;
	ArrayList_t2121638921 * V_13 = NULL;
	ASN1_t1254135647 * V_14 = NULL;
	ASN1_t1254135647 * V_15 = NULL;
	ByteU5BU5D_t58506160* V_16 = NULL;
	Il2CppObject * V_17 = NULL;
	ASN1_t1254135647 * V_18 = NULL;
	String_t* V_19 = NULL;
	Dictionary_2_t190145395 * V_20 = NULL;
	int32_t V_21 = 0;
	Il2CppObject * V_22 = NULL;
	Il2CppObject * V_23 = NULL;
	Exception_t1967233988 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1967233988 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		X509Certificate_t273828613 * L_0 = ___x5090;
		NullCheck(L_0);
		ByteU5BU5D_t58506160* L_1 = VirtFuncInvoker0< ByteU5BU5D_t58506160* >::Invoke(12 /* System.Byte[] Mono.Security.X509.X509Certificate::get_RawData() */, L_0);
		ASN1_t1254135647 * L_2 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m3139747246(L_2, 4, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ContentInfo_t1278398632 * L_3 = (ContentInfo_t1278398632 *)il2cpp_codegen_object_new(ContentInfo_t1278398632_il2cpp_TypeInfo_var);
		ContentInfo__ctor_m3875806349(L_3, /*hidden argument*/NULL);
		V_1 = L_3;
		ContentInfo_t1278398632 * L_4 = V_1;
		NullCheck(L_4);
		ContentInfo_set_ContentType_m1664057857(L_4, _stringLiteral2688301449, /*hidden argument*/NULL);
		ContentInfo_t1278398632 * L_5 = V_1;
		NullCheck(L_5);
		ASN1_t1254135647 * L_6 = ContentInfo_get_Content_m2793987994(L_5, /*hidden argument*/NULL);
		ASN1_t1254135647 * L_7 = V_0;
		NullCheck(L_6);
		ASN1_Add_m3856133576(L_6, L_7, /*hidden argument*/NULL);
		ASN1_t1254135647 * L_8 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m1084222443(L_8, ((int32_t)160), /*hidden argument*/NULL);
		V_2 = L_8;
		ASN1_t1254135647 * L_9 = V_2;
		ContentInfo_t1278398632 * L_10 = V_1;
		NullCheck(L_10);
		ASN1_t1254135647 * L_11 = ContentInfo_get_ASN1_m2914115734(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		ASN1_Add_m3856133576(L_9, L_11, /*hidden argument*/NULL);
		ASN1_t1254135647 * L_12 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m1084222443(L_12, ((int32_t)48), /*hidden argument*/NULL);
		V_3 = L_12;
		ASN1_t1254135647 * L_13 = V_3;
		ASN1_t1254135647 * L_14 = ASN1Convert_FromOid_m1663059922(NULL /*static, unused*/, _stringLiteral3902436163, /*hidden argument*/NULL);
		NullCheck(L_13);
		ASN1_Add_m3856133576(L_13, L_14, /*hidden argument*/NULL);
		ASN1_t1254135647 * L_15 = V_3;
		ASN1_t1254135647 * L_16 = V_2;
		NullCheck(L_15);
		ASN1_Add_m3856133576(L_15, L_16, /*hidden argument*/NULL);
		Il2CppObject * L_17 = ___attributes1;
		if (!L_17)
		{
			goto IL_0287;
		}
	}
	{
		ASN1_t1254135647 * L_18 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m1084222443(L_18, ((int32_t)49), /*hidden argument*/NULL);
		V_4 = L_18;
		Il2CppObject * L_19 = ___attributes1;
		NullCheck(L_19);
		Il2CppObject * L_20 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(4 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t1654916945_il2cpp_TypeInfo_var, L_19);
		V_5 = L_20;
		goto IL_0265;
	}

IL_0080:
	{
		Il2CppObject * L_21 = V_5;
		NullCheck(L_21);
		Il2CppObject * L_22 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(1 /* System.Object System.Collections.IDictionaryEnumerator::get_Key() */, IDictionaryEnumerator_t1541724277_il2cpp_TypeInfo_var, L_21);
		V_6 = ((String_t*)CastclassSealed(L_22, String_t_il2cpp_TypeInfo_var));
		String_t* L_23 = V_6;
		V_19 = L_23;
		String_t* L_24 = V_19;
		if (!L_24)
		{
			goto IL_0260;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PKCS12_t2950126080_il2cpp_TypeInfo_var);
		Dictionary_2_t190145395 * L_25 = ((PKCS12_t2950126080_StaticFields*)PKCS12_t2950126080_il2cpp_TypeInfo_var->static_fields)->get_U3CU3Ef__switchU24mapC_16();
		if (L_25)
		{
			goto IL_00cc;
		}
	}
	{
		Dictionary_2_t190145395 * L_26 = (Dictionary_2_t190145395 *)il2cpp_codegen_object_new(Dictionary_2_t190145395_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1958628151(L_26, 2, /*hidden argument*/Dictionary_2__ctor_m1958628151_MethodInfo_var);
		V_20 = L_26;
		Dictionary_2_t190145395 * L_27 = V_20;
		NullCheck(L_27);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_27, _stringLiteral3743575364, 0);
		Dictionary_2_t190145395 * L_28 = V_20;
		NullCheck(L_28);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_28, _stringLiteral3743575365, 1);
		Dictionary_2_t190145395 * L_29 = V_20;
		IL2CPP_RUNTIME_CLASS_INIT(PKCS12_t2950126080_il2cpp_TypeInfo_var);
		((PKCS12_t2950126080_StaticFields*)PKCS12_t2950126080_il2cpp_TypeInfo_var->static_fields)->set_U3CU3Ef__switchU24mapC_16(L_29);
	}

IL_00cc:
	{
		IL2CPP_RUNTIME_CLASS_INIT(PKCS12_t2950126080_il2cpp_TypeInfo_var);
		Dictionary_2_t190145395 * L_30 = ((PKCS12_t2950126080_StaticFields*)PKCS12_t2950126080_il2cpp_TypeInfo_var->static_fields)->get_U3CU3Ef__switchU24mapC_16();
		String_t* L_31 = V_19;
		NullCheck(L_30);
		bool L_32 = VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_30, L_31, (&V_21));
		if (!L_32)
		{
			goto IL_0260;
		}
	}
	{
		int32_t L_33 = V_21;
		if (!L_33)
		{
			goto IL_00f3;
		}
	}
	{
		int32_t L_34 = V_21;
		if ((((int32_t)L_34) == ((int32_t)1)))
		{
			goto IL_01aa;
		}
	}
	{
		goto IL_0260;
	}

IL_00f3:
	{
		Il2CppObject * L_35 = V_5;
		NullCheck(L_35);
		Il2CppObject * L_36 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(2 /* System.Object System.Collections.IDictionaryEnumerator::get_Value() */, IDictionaryEnumerator_t1541724277_il2cpp_TypeInfo_var, L_35);
		V_7 = ((ArrayList_t2121638921 *)CastclassClass(L_36, ArrayList_t2121638921_il2cpp_TypeInfo_var));
		ArrayList_t2121638921 * L_37 = V_7;
		NullCheck(L_37);
		int32_t L_38 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_37);
		if ((((int32_t)L_38) <= ((int32_t)0)))
		{
			goto IL_01a5;
		}
	}
	{
		ASN1_t1254135647 * L_39 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m1084222443(L_39, ((int32_t)48), /*hidden argument*/NULL);
		V_8 = L_39;
		ASN1_t1254135647 * L_40 = V_8;
		ASN1_t1254135647 * L_41 = ASN1Convert_FromOid_m1663059922(NULL /*static, unused*/, _stringLiteral3743575364, /*hidden argument*/NULL);
		NullCheck(L_40);
		ASN1_Add_m3856133576(L_40, L_41, /*hidden argument*/NULL);
		ASN1_t1254135647 * L_42 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m1084222443(L_42, ((int32_t)49), /*hidden argument*/NULL);
		V_9 = L_42;
		ArrayList_t2121638921 * L_43 = V_7;
		NullCheck(L_43);
		Il2CppObject * L_44 = VirtFuncInvoker0< Il2CppObject * >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_43);
		V_11 = L_44;
	}

IL_013b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_016a;
		}

IL_0140:
		{
			Il2CppObject * L_45 = V_11;
			NullCheck(L_45);
			Il2CppObject * L_46 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t287207039_il2cpp_TypeInfo_var, L_45);
			V_10 = ((ByteU5BU5D_t58506160*)Castclass(L_46, ByteU5BU5D_t58506160_il2cpp_TypeInfo_var));
			ASN1_t1254135647 * L_47 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
			ASN1__ctor_m1084222443(L_47, ((int32_t)30), /*hidden argument*/NULL);
			V_12 = L_47;
			ASN1_t1254135647 * L_48 = V_12;
			ByteU5BU5D_t58506160* L_49 = V_10;
			NullCheck(L_48);
			ASN1_set_Value_m213247127(L_48, L_49, /*hidden argument*/NULL);
			ASN1_t1254135647 * L_50 = V_9;
			ASN1_t1254135647 * L_51 = V_12;
			NullCheck(L_50);
			ASN1_Add_m3856133576(L_50, L_51, /*hidden argument*/NULL);
		}

IL_016a:
		{
			Il2CppObject * L_52 = V_11;
			NullCheck(L_52);
			bool L_53 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t287207039_il2cpp_TypeInfo_var, L_52);
			if (L_53)
			{
				goto IL_0140;
			}
		}

IL_0176:
		{
			IL2CPP_LEAVE(0x191, FINALLY_017b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1967233988 *)e.ex;
		goto FINALLY_017b;
	}

FINALLY_017b:
	{ // begin finally (depth: 1)
		{
			Il2CppObject * L_54 = V_11;
			V_22 = ((Il2CppObject *)IsInst(L_54, IDisposable_t1628921374_il2cpp_TypeInfo_var));
			Il2CppObject * L_55 = V_22;
			if (L_55)
			{
				goto IL_0189;
			}
		}

IL_0188:
		{
			IL2CPP_END_FINALLY(379)
		}

IL_0189:
		{
			Il2CppObject * L_56 = V_22;
			NullCheck(L_56);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1628921374_il2cpp_TypeInfo_var, L_56);
			IL2CPP_END_FINALLY(379)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(379)
	{
		IL2CPP_JUMP_TBL(0x191, IL_0191)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1967233988 *)
	}

IL_0191:
	{
		ASN1_t1254135647 * L_57 = V_8;
		ASN1_t1254135647 * L_58 = V_9;
		NullCheck(L_57);
		ASN1_Add_m3856133576(L_57, L_58, /*hidden argument*/NULL);
		ASN1_t1254135647 * L_59 = V_4;
		ASN1_t1254135647 * L_60 = V_8;
		NullCheck(L_59);
		ASN1_Add_m3856133576(L_59, L_60, /*hidden argument*/NULL);
	}

IL_01a5:
	{
		goto IL_0265;
	}

IL_01aa:
	{
		Il2CppObject * L_61 = V_5;
		NullCheck(L_61);
		Il2CppObject * L_62 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(2 /* System.Object System.Collections.IDictionaryEnumerator::get_Value() */, IDictionaryEnumerator_t1541724277_il2cpp_TypeInfo_var, L_61);
		V_13 = ((ArrayList_t2121638921 *)CastclassClass(L_62, ArrayList_t2121638921_il2cpp_TypeInfo_var));
		ArrayList_t2121638921 * L_63 = V_13;
		NullCheck(L_63);
		int32_t L_64 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_63);
		if ((((int32_t)L_64) <= ((int32_t)0)))
		{
			goto IL_025b;
		}
	}
	{
		ASN1_t1254135647 * L_65 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m1084222443(L_65, ((int32_t)48), /*hidden argument*/NULL);
		V_14 = L_65;
		ASN1_t1254135647 * L_66 = V_14;
		ASN1_t1254135647 * L_67 = ASN1Convert_FromOid_m1663059922(NULL /*static, unused*/, _stringLiteral3743575365, /*hidden argument*/NULL);
		NullCheck(L_66);
		ASN1_Add_m3856133576(L_66, L_67, /*hidden argument*/NULL);
		ASN1_t1254135647 * L_68 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m1084222443(L_68, ((int32_t)49), /*hidden argument*/NULL);
		V_15 = L_68;
		ArrayList_t2121638921 * L_69 = V_13;
		NullCheck(L_69);
		Il2CppObject * L_70 = VirtFuncInvoker0< Il2CppObject * >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_69);
		V_17 = L_70;
	}

IL_01f2:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0220;
		}

IL_01f7:
		{
			Il2CppObject * L_71 = V_17;
			NullCheck(L_71);
			Il2CppObject * L_72 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t287207039_il2cpp_TypeInfo_var, L_71);
			V_16 = ((ByteU5BU5D_t58506160*)Castclass(L_72, ByteU5BU5D_t58506160_il2cpp_TypeInfo_var));
			ASN1_t1254135647 * L_73 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
			ASN1__ctor_m1084222443(L_73, 4, /*hidden argument*/NULL);
			V_18 = L_73;
			ASN1_t1254135647 * L_74 = V_18;
			ByteU5BU5D_t58506160* L_75 = V_16;
			NullCheck(L_74);
			ASN1_set_Value_m213247127(L_74, L_75, /*hidden argument*/NULL);
			ASN1_t1254135647 * L_76 = V_15;
			ASN1_t1254135647 * L_77 = V_18;
			NullCheck(L_76);
			ASN1_Add_m3856133576(L_76, L_77, /*hidden argument*/NULL);
		}

IL_0220:
		{
			Il2CppObject * L_78 = V_17;
			NullCheck(L_78);
			bool L_79 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t287207039_il2cpp_TypeInfo_var, L_78);
			if (L_79)
			{
				goto IL_01f7;
			}
		}

IL_022c:
		{
			IL2CPP_LEAVE(0x247, FINALLY_0231);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1967233988 *)e.ex;
		goto FINALLY_0231;
	}

FINALLY_0231:
	{ // begin finally (depth: 1)
		{
			Il2CppObject * L_80 = V_17;
			V_23 = ((Il2CppObject *)IsInst(L_80, IDisposable_t1628921374_il2cpp_TypeInfo_var));
			Il2CppObject * L_81 = V_23;
			if (L_81)
			{
				goto IL_023f;
			}
		}

IL_023e:
		{
			IL2CPP_END_FINALLY(561)
		}

IL_023f:
		{
			Il2CppObject * L_82 = V_23;
			NullCheck(L_82);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1628921374_il2cpp_TypeInfo_var, L_82);
			IL2CPP_END_FINALLY(561)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(561)
	{
		IL2CPP_JUMP_TBL(0x247, IL_0247)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1967233988 *)
	}

IL_0247:
	{
		ASN1_t1254135647 * L_83 = V_14;
		ASN1_t1254135647 * L_84 = V_15;
		NullCheck(L_83);
		ASN1_Add_m3856133576(L_83, L_84, /*hidden argument*/NULL);
		ASN1_t1254135647 * L_85 = V_4;
		ASN1_t1254135647 * L_86 = V_14;
		NullCheck(L_85);
		ASN1_Add_m3856133576(L_85, L_86, /*hidden argument*/NULL);
	}

IL_025b:
	{
		goto IL_0265;
	}

IL_0260:
	{
		goto IL_0265;
	}

IL_0265:
	{
		Il2CppObject * L_87 = V_5;
		NullCheck(L_87);
		bool L_88 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t287207039_il2cpp_TypeInfo_var, L_87);
		if (L_88)
		{
			goto IL_0080;
		}
	}
	{
		ASN1_t1254135647 * L_89 = V_4;
		NullCheck(L_89);
		int32_t L_90 = ASN1_get_Count_m3031159196(L_89, /*hidden argument*/NULL);
		if ((((int32_t)L_90) <= ((int32_t)0)))
		{
			goto IL_0287;
		}
	}
	{
		ASN1_t1254135647 * L_91 = V_3;
		ASN1_t1254135647 * L_92 = V_4;
		NullCheck(L_91);
		ASN1_Add_m3856133576(L_91, L_92, /*hidden argument*/NULL);
	}

IL_0287:
	{
		ASN1_t1254135647 * L_93 = V_3;
		return L_93;
	}
}
// System.Byte[] Mono.Security.X509.PKCS12::MAC(System.Byte[],System.Byte[],System.Int32,System.Byte[])
extern Il2CppClass* DeriveBytes_t2715912549_il2cpp_TypeInfo_var;
extern Il2CppClass* HMACSHA1_t4029397701_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2543909;
extern const uint32_t PKCS12_MAC_m1203837730_MetadataUsageId;
extern "C"  ByteU5BU5D_t58506160* PKCS12_MAC_m1203837730 (PKCS12_t2950126080 * __this, ByteU5BU5D_t58506160* ___password0, ByteU5BU5D_t58506160* ___salt1, int32_t ___iterations2, ByteU5BU5D_t58506160* ___data3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PKCS12_MAC_m1203837730_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	DeriveBytes_t2715912549 * V_0 = NULL;
	HMACSHA1_t4029397701 * V_1 = NULL;
	{
		DeriveBytes_t2715912549 * L_0 = (DeriveBytes_t2715912549 *)il2cpp_codegen_object_new(DeriveBytes_t2715912549_il2cpp_TypeInfo_var);
		DeriveBytes__ctor_m4046501000(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		DeriveBytes_t2715912549 * L_1 = V_0;
		NullCheck(L_1);
		DeriveBytes_set_HashName_m2086526224(L_1, _stringLiteral2543909, /*hidden argument*/NULL);
		DeriveBytes_t2715912549 * L_2 = V_0;
		ByteU5BU5D_t58506160* L_3 = ___password0;
		NullCheck(L_2);
		DeriveBytes_set_Password_m2839198645(L_2, L_3, /*hidden argument*/NULL);
		DeriveBytes_t2715912549 * L_4 = V_0;
		ByteU5BU5D_t58506160* L_5 = ___salt1;
		NullCheck(L_4);
		DeriveBytes_set_Salt_m801246362(L_4, L_5, /*hidden argument*/NULL);
		DeriveBytes_t2715912549 * L_6 = V_0;
		int32_t L_7 = ___iterations2;
		NullCheck(L_6);
		DeriveBytes_set_IterationCount_m35620668(L_6, L_7, /*hidden argument*/NULL);
		HMAC_t1559704864 * L_8 = HMAC_Create_m3219387469(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = ((HMACSHA1_t4029397701 *)CastclassClass(L_8, HMACSHA1_t4029397701_il2cpp_TypeInfo_var));
		HMACSHA1_t4029397701 * L_9 = V_1;
		DeriveBytes_t2715912549 * L_10 = V_0;
		NullCheck(L_10);
		ByteU5BU5D_t58506160* L_11 = DeriveBytes_DeriveMAC_m3291939529(L_10, ((int32_t)20), /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker1< ByteU5BU5D_t58506160* >::Invoke(16 /* System.Void System.Security.Cryptography.HMAC::set_Key(System.Byte[]) */, L_9, L_11);
		HMACSHA1_t4029397701 * L_12 = V_1;
		ByteU5BU5D_t58506160* L_13 = ___data3;
		ByteU5BU5D_t58506160* L_14 = ___data3;
		NullCheck(L_14);
		NullCheck(L_12);
		ByteU5BU5D_t58506160* L_15 = HashAlgorithm_ComputeHash_m2755161132(L_12, L_13, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_14)->max_length)))), /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Byte[] Mono.Security.X509.PKCS12::GetBytes()
extern Il2CppClass* ASN1_t1254135647_il2cpp_TypeInfo_var;
extern Il2CppClass* ArrayList_t2121638921_il2cpp_TypeInfo_var;
extern Il2CppClass* IEnumerator_t287207039_il2cpp_TypeInfo_var;
extern Il2CppClass* SafeBag_t4111116303_il2cpp_TypeInfo_var;
extern Il2CppClass* ContentInfo_t1278398632_il2cpp_TypeInfo_var;
extern Il2CppClass* X509Certificate_t273828613_il2cpp_TypeInfo_var;
extern Il2CppClass* IDisposable_t1628921374_il2cpp_TypeInfo_var;
extern Il2CppClass* ByteU5BU5D_t58506160_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3902436163;
extern Il2CppCodeGenString* _stringLiteral2462842202;
extern Il2CppCodeGenString* _stringLiteral3902436161;
extern Il2CppCodeGenString* _stringLiteral3902436162;
extern Il2CppCodeGenString* _stringLiteral2198968553;
extern Il2CppCodeGenString* _stringLiteral3902436165;
extern Il2CppCodeGenString* _stringLiteral3986536014;
extern const uint32_t PKCS12_GetBytes_m1971373682_MetadataUsageId;
extern "C"  ByteU5BU5D_t58506160* PKCS12_GetBytes_m1971373682 (PKCS12_t2950126080 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PKCS12_GetBytes_m1971373682_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ASN1_t1254135647 * V_0 = NULL;
	ArrayList_t2121638921 * V_1 = NULL;
	SafeBag_t4111116303 * V_2 = NULL;
	Il2CppObject * V_3 = NULL;
	ASN1_t1254135647 * V_4 = NULL;
	ASN1_t1254135647 * V_5 = NULL;
	ContentInfo_t1278398632 * V_6 = NULL;
	ArrayList_t2121638921 * V_7 = NULL;
	ArrayList_t2121638921 * V_8 = NULL;
	X509Certificate_t273828613 * V_9 = NULL;
	X509CertificateEnumerator_t3569011382 * V_10 = NULL;
	bool V_11 = false;
	X509Certificate_t273828613 * V_12 = NULL;
	Il2CppObject * V_13 = NULL;
	X509Certificate_t273828613 * V_14 = NULL;
	Il2CppObject * V_15 = NULL;
	bool V_16 = false;
	X509Certificate_t273828613 * V_17 = NULL;
	X509CertificateEnumerator_t3569011382 * V_18 = NULL;
	X509Certificate_t273828613 * V_19 = NULL;
	Il2CppObject * V_20 = NULL;
	X509Certificate_t273828613 * V_21 = NULL;
	Il2CppObject * V_22 = NULL;
	ASN1_t1254135647 * V_23 = NULL;
	SafeBag_t4111116303 * V_24 = NULL;
	Il2CppObject * V_25 = NULL;
	ContentInfo_t1278398632 * V_26 = NULL;
	ASN1_t1254135647 * V_27 = NULL;
	SafeBag_t4111116303 * V_28 = NULL;
	Il2CppObject * V_29 = NULL;
	ASN1_t1254135647 * V_30 = NULL;
	ContentInfo_t1278398632 * V_31 = NULL;
	ASN1_t1254135647 * V_32 = NULL;
	SafeBag_t4111116303 * V_33 = NULL;
	Il2CppObject * V_34 = NULL;
	ContentInfo_t1278398632 * V_35 = NULL;
	ASN1_t1254135647 * V_36 = NULL;
	ASN1_t1254135647 * V_37 = NULL;
	ContentInfo_t1278398632 * V_38 = NULL;
	ASN1_t1254135647 * V_39 = NULL;
	ByteU5BU5D_t58506160* V_40 = NULL;
	ByteU5BU5D_t58506160* V_41 = NULL;
	ASN1_t1254135647 * V_42 = NULL;
	ASN1_t1254135647 * V_43 = NULL;
	ASN1_t1254135647 * V_44 = NULL;
	ASN1_t1254135647 * V_45 = NULL;
	Il2CppObject * V_46 = NULL;
	Il2CppObject * V_47 = NULL;
	Il2CppObject * V_48 = NULL;
	Il2CppObject * V_49 = NULL;
	Il2CppObject * V_50 = NULL;
	Il2CppObject * V_51 = NULL;
	Il2CppObject * V_52 = NULL;
	Il2CppObject * V_53 = NULL;
	Il2CppObject * V_54 = NULL;
	Il2CppObject * V_55 = NULL;
	Exception_t1967233988 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1967233988 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ASN1_t1254135647 * L_0 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m1084222443(L_0, ((int32_t)48), /*hidden argument*/NULL);
		V_0 = L_0;
		ArrayList_t2121638921 * L_1 = (ArrayList_t2121638921 *)il2cpp_codegen_object_new(ArrayList_t2121638921_il2cpp_TypeInfo_var);
		ArrayList__ctor_m1878432947(L_1, /*hidden argument*/NULL);
		V_1 = L_1;
		ArrayList_t2121638921 * L_2 = __this->get__safeBags_9();
		NullCheck(L_2);
		Il2CppObject * L_3 = VirtFuncInvoker0< Il2CppObject * >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_2);
		V_3 = L_3;
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007e;
		}

IL_001f:
		{
			Il2CppObject * L_4 = V_3;
			NullCheck(L_4);
			Il2CppObject * L_5 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t287207039_il2cpp_TypeInfo_var, L_4);
			V_2 = ((SafeBag_t4111116303 *)CastclassClass(L_5, SafeBag_t4111116303_il2cpp_TypeInfo_var));
			SafeBag_t4111116303 * L_6 = V_2;
			NullCheck(L_6);
			String_t* L_7 = SafeBag_get_BagOID_m2256458192(L_6, /*hidden argument*/NULL);
			NullCheck(L_7);
			bool L_8 = String_Equals_m3541721061(L_7, _stringLiteral3902436163, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_007e;
			}
		}

IL_0040:
		{
			SafeBag_t4111116303 * L_9 = V_2;
			NullCheck(L_9);
			ASN1_t1254135647 * L_10 = SafeBag_get_ASN1_m3365953951(L_9, /*hidden argument*/NULL);
			V_4 = L_10;
			ASN1_t1254135647 * L_11 = V_4;
			NullCheck(L_11);
			ASN1_t1254135647 * L_12 = ASN1_get_Item_m3112983888(L_11, 1, /*hidden argument*/NULL);
			V_5 = L_12;
			ASN1_t1254135647 * L_13 = V_5;
			NullCheck(L_13);
			ByteU5BU5D_t58506160* L_14 = ASN1_get_Value_m4232529916(L_13, /*hidden argument*/NULL);
			ContentInfo_t1278398632 * L_15 = (ContentInfo_t1278398632 *)il2cpp_codegen_object_new(ContentInfo_t1278398632_il2cpp_TypeInfo_var);
			ContentInfo__ctor_m2758504540(L_15, L_14, /*hidden argument*/NULL);
			V_6 = L_15;
			ArrayList_t2121638921 * L_16 = V_1;
			ContentInfo_t1278398632 * L_17 = V_6;
			NullCheck(L_17);
			ASN1_t1254135647 * L_18 = ContentInfo_get_Content_m2793987994(L_17, /*hidden argument*/NULL);
			NullCheck(L_18);
			ASN1_t1254135647 * L_19 = ASN1_get_Item_m3112983888(L_18, 0, /*hidden argument*/NULL);
			NullCheck(L_19);
			ByteU5BU5D_t58506160* L_20 = ASN1_get_Value_m4232529916(L_19, /*hidden argument*/NULL);
			X509Certificate_t273828613 * L_21 = (X509Certificate_t273828613 *)il2cpp_codegen_object_new(X509Certificate_t273828613_il2cpp_TypeInfo_var);
			X509Certificate__ctor_m3683615677(L_21, L_20, /*hidden argument*/NULL);
			NullCheck(L_16);
			VirtFuncInvoker1< int32_t, Il2CppObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_16, L_21);
		}

IL_007e:
		{
			Il2CppObject * L_22 = V_3;
			NullCheck(L_22);
			bool L_23 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t287207039_il2cpp_TypeInfo_var, L_22);
			if (L_23)
			{
				goto IL_001f;
			}
		}

IL_0089:
		{
			IL2CPP_LEAVE(0xA3, FINALLY_008e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1967233988 *)e.ex;
		goto FINALLY_008e;
	}

FINALLY_008e:
	{ // begin finally (depth: 1)
		{
			Il2CppObject * L_24 = V_3;
			V_46 = ((Il2CppObject *)IsInst(L_24, IDisposable_t1628921374_il2cpp_TypeInfo_var));
			Il2CppObject * L_25 = V_46;
			if (L_25)
			{
				goto IL_009b;
			}
		}

IL_009a:
		{
			IL2CPP_END_FINALLY(142)
		}

IL_009b:
		{
			Il2CppObject * L_26 = V_46;
			NullCheck(L_26);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1628921374_il2cpp_TypeInfo_var, L_26);
			IL2CPP_END_FINALLY(142)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(142)
	{
		IL2CPP_JUMP_TBL(0xA3, IL_00a3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1967233988 *)
	}

IL_00a3:
	{
		ArrayList_t2121638921 * L_27 = (ArrayList_t2121638921 *)il2cpp_codegen_object_new(ArrayList_t2121638921_il2cpp_TypeInfo_var);
		ArrayList__ctor_m1878432947(L_27, /*hidden argument*/NULL);
		V_7 = L_27;
		ArrayList_t2121638921 * L_28 = (ArrayList_t2121638921 *)il2cpp_codegen_object_new(ArrayList_t2121638921_il2cpp_TypeInfo_var);
		ArrayList__ctor_m1878432947(L_28, /*hidden argument*/NULL);
		V_8 = L_28;
		X509CertificateCollection_t3336811651 * L_29 = PKCS12_get_Certificates_m1930169375(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		X509CertificateEnumerator_t3569011382 * L_30 = X509CertificateCollection_GetEnumerator_m1926496255(L_29, /*hidden argument*/NULL);
		V_10 = L_30;
	}

IL_00be:
	try
	{ // begin try (depth: 1)
		{
			goto IL_013e;
		}

IL_00c3:
		{
			X509CertificateEnumerator_t3569011382 * L_31 = V_10;
			NullCheck(L_31);
			X509Certificate_t273828613 * L_32 = X509CertificateEnumerator_get_Current_m2126438283(L_31, /*hidden argument*/NULL);
			V_9 = L_32;
			V_11 = (bool)0;
			ArrayList_t2121638921 * L_33 = V_1;
			NullCheck(L_33);
			Il2CppObject * L_34 = VirtFuncInvoker0< Il2CppObject * >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_33);
			V_13 = L_34;
		}

IL_00d7:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0106;
			}

IL_00dc:
			{
				Il2CppObject * L_35 = V_13;
				NullCheck(L_35);
				Il2CppObject * L_36 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t287207039_il2cpp_TypeInfo_var, L_35);
				V_12 = ((X509Certificate_t273828613 *)CastclassClass(L_36, X509Certificate_t273828613_il2cpp_TypeInfo_var));
				X509Certificate_t273828613 * L_37 = V_9;
				NullCheck(L_37);
				ByteU5BU5D_t58506160* L_38 = VirtFuncInvoker0< ByteU5BU5D_t58506160* >::Invoke(12 /* System.Byte[] Mono.Security.X509.X509Certificate::get_RawData() */, L_37);
				X509Certificate_t273828613 * L_39 = V_12;
				NullCheck(L_39);
				ByteU5BU5D_t58506160* L_40 = VirtFuncInvoker0< ByteU5BU5D_t58506160* >::Invoke(12 /* System.Byte[] Mono.Security.X509.X509Certificate::get_RawData() */, L_39);
				bool L_41 = PKCS12_Compare_m1707054334(__this, L_38, L_40, /*hidden argument*/NULL);
				if (!L_41)
				{
					goto IL_0106;
				}
			}

IL_0103:
			{
				V_11 = (bool)1;
			}

IL_0106:
			{
				Il2CppObject * L_42 = V_13;
				NullCheck(L_42);
				bool L_43 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t287207039_il2cpp_TypeInfo_var, L_42);
				if (L_43)
				{
					goto IL_00dc;
				}
			}

IL_0112:
			{
				IL2CPP_LEAVE(0x12D, FINALLY_0117);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t1967233988 *)e.ex;
			goto FINALLY_0117;
		}

FINALLY_0117:
		{ // begin finally (depth: 2)
			{
				Il2CppObject * L_44 = V_13;
				V_47 = ((Il2CppObject *)IsInst(L_44, IDisposable_t1628921374_il2cpp_TypeInfo_var));
				Il2CppObject * L_45 = V_47;
				if (L_45)
				{
					goto IL_0125;
				}
			}

IL_0124:
			{
				IL2CPP_END_FINALLY(279)
			}

IL_0125:
			{
				Il2CppObject * L_46 = V_47;
				NullCheck(L_46);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1628921374_il2cpp_TypeInfo_var, L_46);
				IL2CPP_END_FINALLY(279)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(279)
		{
			IL2CPP_JUMP_TBL(0x12D, IL_012d)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1967233988 *)
		}

IL_012d:
		{
			bool L_47 = V_11;
			if (L_47)
			{
				goto IL_013e;
			}
		}

IL_0134:
		{
			ArrayList_t2121638921 * L_48 = V_7;
			X509Certificate_t273828613 * L_49 = V_9;
			NullCheck(L_48);
			VirtFuncInvoker1< int32_t, Il2CppObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_48, L_49);
		}

IL_013e:
		{
			X509CertificateEnumerator_t3569011382 * L_50 = V_10;
			NullCheck(L_50);
			bool L_51 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::MoveNext() */, L_50);
			if (L_51)
			{
				goto IL_00c3;
			}
		}

IL_014a:
		{
			IL2CPP_LEAVE(0x165, FINALLY_014f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1967233988 *)e.ex;
		goto FINALLY_014f;
	}

FINALLY_014f:
	{ // begin finally (depth: 1)
		{
			X509CertificateEnumerator_t3569011382 * L_52 = V_10;
			V_48 = ((Il2CppObject *)IsInst(L_52, IDisposable_t1628921374_il2cpp_TypeInfo_var));
			Il2CppObject * L_53 = V_48;
			if (L_53)
			{
				goto IL_015d;
			}
		}

IL_015c:
		{
			IL2CPP_END_FINALLY(335)
		}

IL_015d:
		{
			Il2CppObject * L_54 = V_48;
			NullCheck(L_54);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1628921374_il2cpp_TypeInfo_var, L_54);
			IL2CPP_END_FINALLY(335)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(335)
	{
		IL2CPP_JUMP_TBL(0x165, IL_0165)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1967233988 *)
	}

IL_0165:
	{
		ArrayList_t2121638921 * L_55 = V_1;
		NullCheck(L_55);
		Il2CppObject * L_56 = VirtFuncInvoker0< Il2CppObject * >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_55);
		V_15 = L_56;
	}

IL_016d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01f2;
		}

IL_0172:
		{
			Il2CppObject * L_57 = V_15;
			NullCheck(L_57);
			Il2CppObject * L_58 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t287207039_il2cpp_TypeInfo_var, L_57);
			V_14 = ((X509Certificate_t273828613 *)CastclassClass(L_58, X509Certificate_t273828613_il2cpp_TypeInfo_var));
			V_16 = (bool)0;
			X509CertificateCollection_t3336811651 * L_59 = PKCS12_get_Certificates_m1930169375(__this, /*hidden argument*/NULL);
			NullCheck(L_59);
			X509CertificateEnumerator_t3569011382 * L_60 = X509CertificateCollection_GetEnumerator_m1926496255(L_59, /*hidden argument*/NULL);
			V_18 = L_60;
		}

IL_0190:
		try
		{ // begin try (depth: 2)
			{
				goto IL_01ba;
			}

IL_0195:
			{
				X509CertificateEnumerator_t3569011382 * L_61 = V_18;
				NullCheck(L_61);
				X509Certificate_t273828613 * L_62 = X509CertificateEnumerator_get_Current_m2126438283(L_61, /*hidden argument*/NULL);
				V_17 = L_62;
				X509Certificate_t273828613 * L_63 = V_14;
				NullCheck(L_63);
				ByteU5BU5D_t58506160* L_64 = VirtFuncInvoker0< ByteU5BU5D_t58506160* >::Invoke(12 /* System.Byte[] Mono.Security.X509.X509Certificate::get_RawData() */, L_63);
				X509Certificate_t273828613 * L_65 = V_17;
				NullCheck(L_65);
				ByteU5BU5D_t58506160* L_66 = VirtFuncInvoker0< ByteU5BU5D_t58506160* >::Invoke(12 /* System.Byte[] Mono.Security.X509.X509Certificate::get_RawData() */, L_65);
				bool L_67 = PKCS12_Compare_m1707054334(__this, L_64, L_66, /*hidden argument*/NULL);
				if (!L_67)
				{
					goto IL_01ba;
				}
			}

IL_01b7:
			{
				V_16 = (bool)1;
			}

IL_01ba:
			{
				X509CertificateEnumerator_t3569011382 * L_68 = V_18;
				NullCheck(L_68);
				bool L_69 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::MoveNext() */, L_68);
				if (L_69)
				{
					goto IL_0195;
				}
			}

IL_01c6:
			{
				IL2CPP_LEAVE(0x1E1, FINALLY_01cb);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t1967233988 *)e.ex;
			goto FINALLY_01cb;
		}

FINALLY_01cb:
		{ // begin finally (depth: 2)
			{
				X509CertificateEnumerator_t3569011382 * L_70 = V_18;
				V_49 = ((Il2CppObject *)IsInst(L_70, IDisposable_t1628921374_il2cpp_TypeInfo_var));
				Il2CppObject * L_71 = V_49;
				if (L_71)
				{
					goto IL_01d9;
				}
			}

IL_01d8:
			{
				IL2CPP_END_FINALLY(459)
			}

IL_01d9:
			{
				Il2CppObject * L_72 = V_49;
				NullCheck(L_72);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1628921374_il2cpp_TypeInfo_var, L_72);
				IL2CPP_END_FINALLY(459)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(459)
		{
			IL2CPP_JUMP_TBL(0x1E1, IL_01e1)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1967233988 *)
		}

IL_01e1:
		{
			bool L_73 = V_16;
			if (L_73)
			{
				goto IL_01f2;
			}
		}

IL_01e8:
		{
			ArrayList_t2121638921 * L_74 = V_8;
			X509Certificate_t273828613 * L_75 = V_14;
			NullCheck(L_74);
			VirtFuncInvoker1< int32_t, Il2CppObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_74, L_75);
		}

IL_01f2:
		{
			Il2CppObject * L_76 = V_15;
			NullCheck(L_76);
			bool L_77 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t287207039_il2cpp_TypeInfo_var, L_76);
			if (L_77)
			{
				goto IL_0172;
			}
		}

IL_01fe:
		{
			IL2CPP_LEAVE(0x219, FINALLY_0203);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1967233988 *)e.ex;
		goto FINALLY_0203;
	}

FINALLY_0203:
	{ // begin finally (depth: 1)
		{
			Il2CppObject * L_78 = V_15;
			V_50 = ((Il2CppObject *)IsInst(L_78, IDisposable_t1628921374_il2cpp_TypeInfo_var));
			Il2CppObject * L_79 = V_50;
			if (L_79)
			{
				goto IL_0211;
			}
		}

IL_0210:
		{
			IL2CPP_END_FINALLY(515)
		}

IL_0211:
		{
			Il2CppObject * L_80 = V_50;
			NullCheck(L_80);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1628921374_il2cpp_TypeInfo_var, L_80);
			IL2CPP_END_FINALLY(515)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(515)
	{
		IL2CPP_JUMP_TBL(0x219, IL_0219)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1967233988 *)
	}

IL_0219:
	{
		ArrayList_t2121638921 * L_81 = V_8;
		NullCheck(L_81);
		Il2CppObject * L_82 = VirtFuncInvoker0< Il2CppObject * >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_81);
		V_20 = L_82;
	}

IL_0222:
	try
	{ // begin try (depth: 1)
		{
			goto IL_023d;
		}

IL_0227:
		{
			Il2CppObject * L_83 = V_20;
			NullCheck(L_83);
			Il2CppObject * L_84 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t287207039_il2cpp_TypeInfo_var, L_83);
			V_19 = ((X509Certificate_t273828613 *)CastclassClass(L_84, X509Certificate_t273828613_il2cpp_TypeInfo_var));
			X509Certificate_t273828613 * L_85 = V_19;
			PKCS12_RemoveCertificate_m2867856866(__this, L_85, /*hidden argument*/NULL);
		}

IL_023d:
		{
			Il2CppObject * L_86 = V_20;
			NullCheck(L_86);
			bool L_87 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t287207039_il2cpp_TypeInfo_var, L_86);
			if (L_87)
			{
				goto IL_0227;
			}
		}

IL_0249:
		{
			IL2CPP_LEAVE(0x264, FINALLY_024e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1967233988 *)e.ex;
		goto FINALLY_024e;
	}

FINALLY_024e:
	{ // begin finally (depth: 1)
		{
			Il2CppObject * L_88 = V_20;
			V_51 = ((Il2CppObject *)IsInst(L_88, IDisposable_t1628921374_il2cpp_TypeInfo_var));
			Il2CppObject * L_89 = V_51;
			if (L_89)
			{
				goto IL_025c;
			}
		}

IL_025b:
		{
			IL2CPP_END_FINALLY(590)
		}

IL_025c:
		{
			Il2CppObject * L_90 = V_51;
			NullCheck(L_90);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1628921374_il2cpp_TypeInfo_var, L_90);
			IL2CPP_END_FINALLY(590)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(590)
	{
		IL2CPP_JUMP_TBL(0x264, IL_0264)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1967233988 *)
	}

IL_0264:
	{
		ArrayList_t2121638921 * L_91 = V_7;
		NullCheck(L_91);
		Il2CppObject * L_92 = VirtFuncInvoker0< Il2CppObject * >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_91);
		V_22 = L_92;
	}

IL_026d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0288;
		}

IL_0272:
		{
			Il2CppObject * L_93 = V_22;
			NullCheck(L_93);
			Il2CppObject * L_94 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t287207039_il2cpp_TypeInfo_var, L_93);
			V_21 = ((X509Certificate_t273828613 *)CastclassClass(L_94, X509Certificate_t273828613_il2cpp_TypeInfo_var));
			X509Certificate_t273828613 * L_95 = V_21;
			PKCS12_AddCertificate_m3895304625(__this, L_95, /*hidden argument*/NULL);
		}

IL_0288:
		{
			Il2CppObject * L_96 = V_22;
			NullCheck(L_96);
			bool L_97 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t287207039_il2cpp_TypeInfo_var, L_96);
			if (L_97)
			{
				goto IL_0272;
			}
		}

IL_0294:
		{
			IL2CPP_LEAVE(0x2AF, FINALLY_0299);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1967233988 *)e.ex;
		goto FINALLY_0299;
	}

FINALLY_0299:
	{ // begin finally (depth: 1)
		{
			Il2CppObject * L_98 = V_22;
			V_52 = ((Il2CppObject *)IsInst(L_98, IDisposable_t1628921374_il2cpp_TypeInfo_var));
			Il2CppObject * L_99 = V_52;
			if (L_99)
			{
				goto IL_02a7;
			}
		}

IL_02a6:
		{
			IL2CPP_END_FINALLY(665)
		}

IL_02a7:
		{
			Il2CppObject * L_100 = V_52;
			NullCheck(L_100);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1628921374_il2cpp_TypeInfo_var, L_100);
			IL2CPP_END_FINALLY(665)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(665)
	{
		IL2CPP_JUMP_TBL(0x2AF, IL_02af)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1967233988 *)
	}

IL_02af:
	{
		ArrayList_t2121638921 * L_101 = __this->get__safeBags_9();
		NullCheck(L_101);
		int32_t L_102 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_101);
		if ((((int32_t)L_102) <= ((int32_t)0)))
		{
			goto IL_035f;
		}
	}
	{
		ASN1_t1254135647 * L_103 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m1084222443(L_103, ((int32_t)48), /*hidden argument*/NULL);
		V_23 = L_103;
		ArrayList_t2121638921 * L_104 = __this->get__safeBags_9();
		NullCheck(L_104);
		Il2CppObject * L_105 = VirtFuncInvoker0< Il2CppObject * >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_104);
		V_25 = L_105;
	}

IL_02d6:
	try
	{ // begin try (depth: 1)
		{
			goto IL_030e;
		}

IL_02db:
		{
			Il2CppObject * L_106 = V_25;
			NullCheck(L_106);
			Il2CppObject * L_107 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t287207039_il2cpp_TypeInfo_var, L_106);
			V_24 = ((SafeBag_t4111116303 *)CastclassClass(L_107, SafeBag_t4111116303_il2cpp_TypeInfo_var));
			SafeBag_t4111116303 * L_108 = V_24;
			NullCheck(L_108);
			String_t* L_109 = SafeBag_get_BagOID_m2256458192(L_108, /*hidden argument*/NULL);
			NullCheck(L_109);
			bool L_110 = String_Equals_m3541721061(L_109, _stringLiteral3902436163, /*hidden argument*/NULL);
			if (!L_110)
			{
				goto IL_030e;
			}
		}

IL_02ff:
		{
			ASN1_t1254135647 * L_111 = V_23;
			SafeBag_t4111116303 * L_112 = V_24;
			NullCheck(L_112);
			ASN1_t1254135647 * L_113 = SafeBag_get_ASN1_m3365953951(L_112, /*hidden argument*/NULL);
			NullCheck(L_111);
			ASN1_Add_m3856133576(L_111, L_113, /*hidden argument*/NULL);
		}

IL_030e:
		{
			Il2CppObject * L_114 = V_25;
			NullCheck(L_114);
			bool L_115 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t287207039_il2cpp_TypeInfo_var, L_114);
			if (L_115)
			{
				goto IL_02db;
			}
		}

IL_031a:
		{
			IL2CPP_LEAVE(0x335, FINALLY_031f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1967233988 *)e.ex;
		goto FINALLY_031f;
	}

FINALLY_031f:
	{ // begin finally (depth: 1)
		{
			Il2CppObject * L_116 = V_25;
			V_53 = ((Il2CppObject *)IsInst(L_116, IDisposable_t1628921374_il2cpp_TypeInfo_var));
			Il2CppObject * L_117 = V_53;
			if (L_117)
			{
				goto IL_032d;
			}
		}

IL_032c:
		{
			IL2CPP_END_FINALLY(799)
		}

IL_032d:
		{
			Il2CppObject * L_118 = V_53;
			NullCheck(L_118);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1628921374_il2cpp_TypeInfo_var, L_118);
			IL2CPP_END_FINALLY(799)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(799)
	{
		IL2CPP_JUMP_TBL(0x335, IL_0335)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1967233988 *)
	}

IL_0335:
	{
		ASN1_t1254135647 * L_119 = V_23;
		NullCheck(L_119);
		int32_t L_120 = ASN1_get_Count_m3031159196(L_119, /*hidden argument*/NULL);
		if ((((int32_t)L_120) <= ((int32_t)0)))
		{
			goto IL_035f;
		}
	}
	{
		ASN1_t1254135647 * L_121 = V_23;
		ContentInfo_t1278398632 * L_122 = PKCS12_EncryptedContentInfo_m722640604(__this, L_121, _stringLiteral2462842202, /*hidden argument*/NULL);
		V_26 = L_122;
		ASN1_t1254135647 * L_123 = V_0;
		ContentInfo_t1278398632 * L_124 = V_26;
		NullCheck(L_124);
		ASN1_t1254135647 * L_125 = ContentInfo_get_ASN1_m2914115734(L_124, /*hidden argument*/NULL);
		NullCheck(L_123);
		ASN1_Add_m3856133576(L_123, L_125, /*hidden argument*/NULL);
	}

IL_035f:
	{
		ArrayList_t2121638921 * L_126 = __this->get__safeBags_9();
		NullCheck(L_126);
		int32_t L_127 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_126);
		if ((((int32_t)L_127) <= ((int32_t)0)))
		{
			goto IL_044c;
		}
	}
	{
		ASN1_t1254135647 * L_128 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m1084222443(L_128, ((int32_t)48), /*hidden argument*/NULL);
		V_27 = L_128;
		ArrayList_t2121638921 * L_129 = __this->get__safeBags_9();
		NullCheck(L_129);
		Il2CppObject * L_130 = VirtFuncInvoker0< Il2CppObject * >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_129);
		V_29 = L_130;
	}

IL_0386:
	try
	{ // begin try (depth: 1)
		{
			goto IL_03d4;
		}

IL_038b:
		{
			Il2CppObject * L_131 = V_29;
			NullCheck(L_131);
			Il2CppObject * L_132 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t287207039_il2cpp_TypeInfo_var, L_131);
			V_28 = ((SafeBag_t4111116303 *)CastclassClass(L_132, SafeBag_t4111116303_il2cpp_TypeInfo_var));
			SafeBag_t4111116303 * L_133 = V_28;
			NullCheck(L_133);
			String_t* L_134 = SafeBag_get_BagOID_m2256458192(L_133, /*hidden argument*/NULL);
			NullCheck(L_134);
			bool L_135 = String_Equals_m3541721061(L_134, _stringLiteral3902436161, /*hidden argument*/NULL);
			if (L_135)
			{
				goto IL_03c5;
			}
		}

IL_03af:
		{
			SafeBag_t4111116303 * L_136 = V_28;
			NullCheck(L_136);
			String_t* L_137 = SafeBag_get_BagOID_m2256458192(L_136, /*hidden argument*/NULL);
			NullCheck(L_137);
			bool L_138 = String_Equals_m3541721061(L_137, _stringLiteral3902436162, /*hidden argument*/NULL);
			if (!L_138)
			{
				goto IL_03d4;
			}
		}

IL_03c5:
		{
			ASN1_t1254135647 * L_139 = V_27;
			SafeBag_t4111116303 * L_140 = V_28;
			NullCheck(L_140);
			ASN1_t1254135647 * L_141 = SafeBag_get_ASN1_m3365953951(L_140, /*hidden argument*/NULL);
			NullCheck(L_139);
			ASN1_Add_m3856133576(L_139, L_141, /*hidden argument*/NULL);
		}

IL_03d4:
		{
			Il2CppObject * L_142 = V_29;
			NullCheck(L_142);
			bool L_143 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t287207039_il2cpp_TypeInfo_var, L_142);
			if (L_143)
			{
				goto IL_038b;
			}
		}

IL_03e0:
		{
			IL2CPP_LEAVE(0x3FB, FINALLY_03e5);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1967233988 *)e.ex;
		goto FINALLY_03e5;
	}

FINALLY_03e5:
	{ // begin finally (depth: 1)
		{
			Il2CppObject * L_144 = V_29;
			V_54 = ((Il2CppObject *)IsInst(L_144, IDisposable_t1628921374_il2cpp_TypeInfo_var));
			Il2CppObject * L_145 = V_54;
			if (L_145)
			{
				goto IL_03f3;
			}
		}

IL_03f2:
		{
			IL2CPP_END_FINALLY(997)
		}

IL_03f3:
		{
			Il2CppObject * L_146 = V_54;
			NullCheck(L_146);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1628921374_il2cpp_TypeInfo_var, L_146);
			IL2CPP_END_FINALLY(997)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(997)
	{
		IL2CPP_JUMP_TBL(0x3FB, IL_03fb)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1967233988 *)
	}

IL_03fb:
	{
		ASN1_t1254135647 * L_147 = V_27;
		NullCheck(L_147);
		int32_t L_148 = ASN1_get_Count_m3031159196(L_147, /*hidden argument*/NULL);
		if ((((int32_t)L_148) <= ((int32_t)0)))
		{
			goto IL_044c;
		}
	}
	{
		ASN1_t1254135647 * L_149 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m1084222443(L_149, ((int32_t)160), /*hidden argument*/NULL);
		V_30 = L_149;
		ASN1_t1254135647 * L_150 = V_30;
		ASN1_t1254135647 * L_151 = V_27;
		NullCheck(L_151);
		ByteU5BU5D_t58506160* L_152 = VirtFuncInvoker0< ByteU5BU5D_t58506160* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_151);
		ASN1_t1254135647 * L_153 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m3139747246(L_153, 4, L_152, /*hidden argument*/NULL);
		NullCheck(L_150);
		ASN1_Add_m3856133576(L_150, L_153, /*hidden argument*/NULL);
		ContentInfo_t1278398632 * L_154 = (ContentInfo_t1278398632 *)il2cpp_codegen_object_new(ContentInfo_t1278398632_il2cpp_TypeInfo_var);
		ContentInfo__ctor_m521342869(L_154, _stringLiteral2198968553, /*hidden argument*/NULL);
		V_31 = L_154;
		ContentInfo_t1278398632 * L_155 = V_31;
		ASN1_t1254135647 * L_156 = V_30;
		NullCheck(L_155);
		ContentInfo_set_Content_m2661678287(L_155, L_156, /*hidden argument*/NULL);
		ASN1_t1254135647 * L_157 = V_0;
		ContentInfo_t1278398632 * L_158 = V_31;
		NullCheck(L_158);
		ASN1_t1254135647 * L_159 = ContentInfo_get_ASN1_m2914115734(L_158, /*hidden argument*/NULL);
		NullCheck(L_157);
		ASN1_Add_m3856133576(L_157, L_159, /*hidden argument*/NULL);
	}

IL_044c:
	{
		ArrayList_t2121638921 * L_160 = __this->get__safeBags_9();
		NullCheck(L_160);
		int32_t L_161 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_160);
		if ((((int32_t)L_161) <= ((int32_t)0)))
		{
			goto IL_04fc;
		}
	}
	{
		ASN1_t1254135647 * L_162 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m1084222443(L_162, ((int32_t)48), /*hidden argument*/NULL);
		V_32 = L_162;
		ArrayList_t2121638921 * L_163 = __this->get__safeBags_9();
		NullCheck(L_163);
		Il2CppObject * L_164 = VirtFuncInvoker0< Il2CppObject * >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_163);
		V_34 = L_164;
	}

IL_0473:
	try
	{ // begin try (depth: 1)
		{
			goto IL_04ab;
		}

IL_0478:
		{
			Il2CppObject * L_165 = V_34;
			NullCheck(L_165);
			Il2CppObject * L_166 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t287207039_il2cpp_TypeInfo_var, L_165);
			V_33 = ((SafeBag_t4111116303 *)CastclassClass(L_166, SafeBag_t4111116303_il2cpp_TypeInfo_var));
			SafeBag_t4111116303 * L_167 = V_33;
			NullCheck(L_167);
			String_t* L_168 = SafeBag_get_BagOID_m2256458192(L_167, /*hidden argument*/NULL);
			NullCheck(L_168);
			bool L_169 = String_Equals_m3541721061(L_168, _stringLiteral3902436165, /*hidden argument*/NULL);
			if (!L_169)
			{
				goto IL_04ab;
			}
		}

IL_049c:
		{
			ASN1_t1254135647 * L_170 = V_32;
			SafeBag_t4111116303 * L_171 = V_33;
			NullCheck(L_171);
			ASN1_t1254135647 * L_172 = SafeBag_get_ASN1_m3365953951(L_171, /*hidden argument*/NULL);
			NullCheck(L_170);
			ASN1_Add_m3856133576(L_170, L_172, /*hidden argument*/NULL);
		}

IL_04ab:
		{
			Il2CppObject * L_173 = V_34;
			NullCheck(L_173);
			bool L_174 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t287207039_il2cpp_TypeInfo_var, L_173);
			if (L_174)
			{
				goto IL_0478;
			}
		}

IL_04b7:
		{
			IL2CPP_LEAVE(0x4D2, FINALLY_04bc);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1967233988 *)e.ex;
		goto FINALLY_04bc;
	}

FINALLY_04bc:
	{ // begin finally (depth: 1)
		{
			Il2CppObject * L_175 = V_34;
			V_55 = ((Il2CppObject *)IsInst(L_175, IDisposable_t1628921374_il2cpp_TypeInfo_var));
			Il2CppObject * L_176 = V_55;
			if (L_176)
			{
				goto IL_04ca;
			}
		}

IL_04c9:
		{
			IL2CPP_END_FINALLY(1212)
		}

IL_04ca:
		{
			Il2CppObject * L_177 = V_55;
			NullCheck(L_177);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1628921374_il2cpp_TypeInfo_var, L_177);
			IL2CPP_END_FINALLY(1212)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1212)
	{
		IL2CPP_JUMP_TBL(0x4D2, IL_04d2)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1967233988 *)
	}

IL_04d2:
	{
		ASN1_t1254135647 * L_178 = V_32;
		NullCheck(L_178);
		int32_t L_179 = ASN1_get_Count_m3031159196(L_178, /*hidden argument*/NULL);
		if ((((int32_t)L_179) <= ((int32_t)0)))
		{
			goto IL_04fc;
		}
	}
	{
		ASN1_t1254135647 * L_180 = V_32;
		ContentInfo_t1278398632 * L_181 = PKCS12_EncryptedContentInfo_m722640604(__this, L_180, _stringLiteral2462842202, /*hidden argument*/NULL);
		V_35 = L_181;
		ASN1_t1254135647 * L_182 = V_0;
		ContentInfo_t1278398632 * L_183 = V_35;
		NullCheck(L_183);
		ASN1_t1254135647 * L_184 = ContentInfo_get_ASN1_m2914115734(L_183, /*hidden argument*/NULL);
		NullCheck(L_182);
		ASN1_Add_m3856133576(L_182, L_184, /*hidden argument*/NULL);
	}

IL_04fc:
	{
		ASN1_t1254135647 * L_185 = V_0;
		NullCheck(L_185);
		ByteU5BU5D_t58506160* L_186 = VirtFuncInvoker0< ByteU5BU5D_t58506160* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_185);
		ASN1_t1254135647 * L_187 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m3139747246(L_187, 4, L_186, /*hidden argument*/NULL);
		V_36 = L_187;
		ASN1_t1254135647 * L_188 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m1084222443(L_188, ((int32_t)160), /*hidden argument*/NULL);
		V_37 = L_188;
		ASN1_t1254135647 * L_189 = V_37;
		ASN1_t1254135647 * L_190 = V_36;
		NullCheck(L_189);
		ASN1_Add_m3856133576(L_189, L_190, /*hidden argument*/NULL);
		ContentInfo_t1278398632 * L_191 = (ContentInfo_t1278398632 *)il2cpp_codegen_object_new(ContentInfo_t1278398632_il2cpp_TypeInfo_var);
		ContentInfo__ctor_m521342869(L_191, _stringLiteral2198968553, /*hidden argument*/NULL);
		V_38 = L_191;
		ContentInfo_t1278398632 * L_192 = V_38;
		ASN1_t1254135647 * L_193 = V_37;
		NullCheck(L_192);
		ContentInfo_set_Content_m2661678287(L_192, L_193, /*hidden argument*/NULL);
		ASN1_t1254135647 * L_194 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m1084222443(L_194, ((int32_t)48), /*hidden argument*/NULL);
		V_39 = L_194;
		ByteU5BU5D_t58506160* L_195 = __this->get__password_1();
		if (!L_195)
		{
			goto IL_0600;
		}
	}
	{
		V_40 = ((ByteU5BU5D_t58506160*)SZArrayNew(ByteU5BU5D_t58506160_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20)));
		RandomNumberGenerator_t2174318432 * L_196 = PKCS12_get_RNG_m944600768(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t58506160* L_197 = V_40;
		NullCheck(L_196);
		VirtActionInvoker1< ByteU5BU5D_t58506160* >::Invoke(4 /* System.Void System.Security.Cryptography.RandomNumberGenerator::GetBytes(System.Byte[]) */, L_196, L_197);
		ByteU5BU5D_t58506160* L_198 = __this->get__password_1();
		ByteU5BU5D_t58506160* L_199 = V_40;
		int32_t L_200 = __this->get__iterations_8();
		ContentInfo_t1278398632 * L_201 = V_38;
		NullCheck(L_201);
		ASN1_t1254135647 * L_202 = ContentInfo_get_Content_m2793987994(L_201, /*hidden argument*/NULL);
		NullCheck(L_202);
		ASN1_t1254135647 * L_203 = ASN1_get_Item_m3112983888(L_202, 0, /*hidden argument*/NULL);
		NullCheck(L_203);
		ByteU5BU5D_t58506160* L_204 = ASN1_get_Value_m4232529916(L_203, /*hidden argument*/NULL);
		ByteU5BU5D_t58506160* L_205 = PKCS12_MAC_m1203837730(__this, L_198, L_199, L_200, L_204, /*hidden argument*/NULL);
		V_41 = L_205;
		ASN1_t1254135647 * L_206 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m1084222443(L_206, ((int32_t)48), /*hidden argument*/NULL);
		V_42 = L_206;
		ASN1_t1254135647 * L_207 = V_42;
		ASN1_t1254135647 * L_208 = ASN1Convert_FromOid_m1663059922(NULL /*static, unused*/, _stringLiteral3986536014, /*hidden argument*/NULL);
		NullCheck(L_207);
		ASN1_Add_m3856133576(L_207, L_208, /*hidden argument*/NULL);
		ASN1_t1254135647 * L_209 = V_42;
		ASN1_t1254135647 * L_210 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m1084222443(L_210, 5, /*hidden argument*/NULL);
		NullCheck(L_209);
		ASN1_Add_m3856133576(L_209, L_210, /*hidden argument*/NULL);
		ASN1_t1254135647 * L_211 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m1084222443(L_211, ((int32_t)48), /*hidden argument*/NULL);
		V_43 = L_211;
		ASN1_t1254135647 * L_212 = V_43;
		ASN1_t1254135647 * L_213 = V_42;
		NullCheck(L_212);
		ASN1_Add_m3856133576(L_212, L_213, /*hidden argument*/NULL);
		ASN1_t1254135647 * L_214 = V_43;
		ByteU5BU5D_t58506160* L_215 = V_41;
		ASN1_t1254135647 * L_216 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m3139747246(L_216, 4, L_215, /*hidden argument*/NULL);
		NullCheck(L_214);
		ASN1_Add_m3856133576(L_214, L_216, /*hidden argument*/NULL);
		ASN1_t1254135647 * L_217 = V_39;
		ASN1_t1254135647 * L_218 = V_43;
		NullCheck(L_217);
		ASN1_Add_m3856133576(L_217, L_218, /*hidden argument*/NULL);
		ASN1_t1254135647 * L_219 = V_39;
		ByteU5BU5D_t58506160* L_220 = V_40;
		ASN1_t1254135647 * L_221 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m3139747246(L_221, 4, L_220, /*hidden argument*/NULL);
		NullCheck(L_219);
		ASN1_Add_m3856133576(L_219, L_221, /*hidden argument*/NULL);
		ASN1_t1254135647 * L_222 = V_39;
		int32_t L_223 = __this->get__iterations_8();
		ASN1_t1254135647 * L_224 = ASN1Convert_FromInt32_m2294019845(NULL /*static, unused*/, L_223, /*hidden argument*/NULL);
		NullCheck(L_222);
		ASN1_Add_m3856133576(L_222, L_224, /*hidden argument*/NULL);
	}

IL_0600:
	{
		ByteU5BU5D_t58506160* L_225 = ((ByteU5BU5D_t58506160*)SZArrayNew(ByteU5BU5D_t58506160_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_225);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_225, 0);
		(L_225)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)3);
		ASN1_t1254135647 * L_226 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m3139747246(L_226, 2, L_225, /*hidden argument*/NULL);
		V_44 = L_226;
		ASN1_t1254135647 * L_227 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m1084222443(L_227, ((int32_t)48), /*hidden argument*/NULL);
		V_45 = L_227;
		ASN1_t1254135647 * L_228 = V_45;
		ASN1_t1254135647 * L_229 = V_44;
		NullCheck(L_228);
		ASN1_Add_m3856133576(L_228, L_229, /*hidden argument*/NULL);
		ASN1_t1254135647 * L_230 = V_45;
		ContentInfo_t1278398632 * L_231 = V_38;
		NullCheck(L_231);
		ASN1_t1254135647 * L_232 = ContentInfo_get_ASN1_m2914115734(L_231, /*hidden argument*/NULL);
		NullCheck(L_230);
		ASN1_Add_m3856133576(L_230, L_232, /*hidden argument*/NULL);
		ASN1_t1254135647 * L_233 = V_39;
		NullCheck(L_233);
		int32_t L_234 = ASN1_get_Count_m3031159196(L_233, /*hidden argument*/NULL);
		if ((((int32_t)L_234) <= ((int32_t)0)))
		{
			goto IL_064b;
		}
	}
	{
		ASN1_t1254135647 * L_235 = V_45;
		ASN1_t1254135647 * L_236 = V_39;
		NullCheck(L_235);
		ASN1_Add_m3856133576(L_235, L_236, /*hidden argument*/NULL);
	}

IL_064b:
	{
		ASN1_t1254135647 * L_237 = V_45;
		NullCheck(L_237);
		ByteU5BU5D_t58506160* L_238 = VirtFuncInvoker0< ByteU5BU5D_t58506160* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_237);
		return L_238;
	}
}
// Mono.Security.PKCS7/ContentInfo Mono.Security.X509.PKCS12::EncryptedContentInfo(Mono.Security.ASN1,System.String)
extern Il2CppClass* ByteU5BU5D_t58506160_il2cpp_TypeInfo_var;
extern Il2CppClass* ASN1_t1254135647_il2cpp_TypeInfo_var;
extern Il2CppClass* ContentInfo_t1278398632_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2198968553;
extern Il2CppCodeGenString* _stringLiteral2198968558;
extern const uint32_t PKCS12_EncryptedContentInfo_m722640604_MetadataUsageId;
extern "C"  ContentInfo_t1278398632 * PKCS12_EncryptedContentInfo_m722640604 (PKCS12_t2950126080 * __this, ASN1_t1254135647 * ___safeBags0, String_t* ___algorithmOid1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PKCS12_EncryptedContentInfo_m722640604_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t58506160* V_0 = NULL;
	ASN1_t1254135647 * V_1 = NULL;
	ASN1_t1254135647 * V_2 = NULL;
	ByteU5BU5D_t58506160* V_3 = NULL;
	ASN1_t1254135647 * V_4 = NULL;
	ASN1_t1254135647 * V_5 = NULL;
	ASN1_t1254135647 * V_6 = NULL;
	ASN1_t1254135647 * V_7 = NULL;
	ASN1_t1254135647 * V_8 = NULL;
	ContentInfo_t1278398632 * V_9 = NULL;
	{
		V_0 = ((ByteU5BU5D_t58506160*)SZArrayNew(ByteU5BU5D_t58506160_il2cpp_TypeInfo_var, (uint32_t)8));
		RandomNumberGenerator_t2174318432 * L_0 = PKCS12_get_RNG_m944600768(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t58506160* L_1 = V_0;
		NullCheck(L_0);
		VirtActionInvoker1< ByteU5BU5D_t58506160* >::Invoke(4 /* System.Void System.Security.Cryptography.RandomNumberGenerator::GetBytes(System.Byte[]) */, L_0, L_1);
		ASN1_t1254135647 * L_2 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m1084222443(L_2, ((int32_t)48), /*hidden argument*/NULL);
		V_1 = L_2;
		ASN1_t1254135647 * L_3 = V_1;
		ByteU5BU5D_t58506160* L_4 = V_0;
		ASN1_t1254135647 * L_5 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m3139747246(L_5, 4, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ASN1_Add_m3856133576(L_3, L_5, /*hidden argument*/NULL);
		ASN1_t1254135647 * L_6 = V_1;
		int32_t L_7 = __this->get__iterations_8();
		ASN1_t1254135647 * L_8 = ASN1Convert_FromInt32_m2294019845(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ASN1_Add_m3856133576(L_6, L_8, /*hidden argument*/NULL);
		ASN1_t1254135647 * L_9 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m1084222443(L_9, ((int32_t)48), /*hidden argument*/NULL);
		V_2 = L_9;
		ASN1_t1254135647 * L_10 = V_2;
		String_t* L_11 = ___algorithmOid1;
		ASN1_t1254135647 * L_12 = ASN1Convert_FromOid_m1663059922(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		ASN1_Add_m3856133576(L_10, L_12, /*hidden argument*/NULL);
		ASN1_t1254135647 * L_13 = V_2;
		ASN1_t1254135647 * L_14 = V_1;
		NullCheck(L_13);
		ASN1_Add_m3856133576(L_13, L_14, /*hidden argument*/NULL);
		String_t* L_15 = ___algorithmOid1;
		ByteU5BU5D_t58506160* L_16 = V_0;
		int32_t L_17 = __this->get__iterations_8();
		ASN1_t1254135647 * L_18 = ___safeBags0;
		NullCheck(L_18);
		ByteU5BU5D_t58506160* L_19 = VirtFuncInvoker0< ByteU5BU5D_t58506160* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_18);
		ByteU5BU5D_t58506160* L_20 = PKCS12_Encrypt_m3283559711(__this, L_15, L_16, L_17, L_19, /*hidden argument*/NULL);
		V_3 = L_20;
		ByteU5BU5D_t58506160* L_21 = V_3;
		ASN1_t1254135647 * L_22 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m3139747246(L_22, ((int32_t)128), L_21, /*hidden argument*/NULL);
		V_4 = L_22;
		ASN1_t1254135647 * L_23 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m1084222443(L_23, ((int32_t)48), /*hidden argument*/NULL);
		V_5 = L_23;
		ASN1_t1254135647 * L_24 = V_5;
		ASN1_t1254135647 * L_25 = ASN1Convert_FromOid_m1663059922(NULL /*static, unused*/, _stringLiteral2198968553, /*hidden argument*/NULL);
		NullCheck(L_24);
		ASN1_Add_m3856133576(L_24, L_25, /*hidden argument*/NULL);
		ASN1_t1254135647 * L_26 = V_5;
		ASN1_t1254135647 * L_27 = V_2;
		NullCheck(L_26);
		ASN1_Add_m3856133576(L_26, L_27, /*hidden argument*/NULL);
		ASN1_t1254135647 * L_28 = V_5;
		ASN1_t1254135647 * L_29 = V_4;
		NullCheck(L_28);
		ASN1_Add_m3856133576(L_28, L_29, /*hidden argument*/NULL);
		ASN1_t1254135647 * L_30 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m3139747246(L_30, 2, ((ByteU5BU5D_t58506160*)SZArrayNew(ByteU5BU5D_t58506160_il2cpp_TypeInfo_var, (uint32_t)1)), /*hidden argument*/NULL);
		V_6 = L_30;
		ASN1_t1254135647 * L_31 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m1084222443(L_31, ((int32_t)48), /*hidden argument*/NULL);
		V_7 = L_31;
		ASN1_t1254135647 * L_32 = V_7;
		ASN1_t1254135647 * L_33 = V_6;
		NullCheck(L_32);
		ASN1_Add_m3856133576(L_32, L_33, /*hidden argument*/NULL);
		ASN1_t1254135647 * L_34 = V_7;
		ASN1_t1254135647 * L_35 = V_5;
		NullCheck(L_34);
		ASN1_Add_m3856133576(L_34, L_35, /*hidden argument*/NULL);
		ASN1_t1254135647 * L_36 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m1084222443(L_36, ((int32_t)160), /*hidden argument*/NULL);
		V_8 = L_36;
		ASN1_t1254135647 * L_37 = V_8;
		ASN1_t1254135647 * L_38 = V_7;
		NullCheck(L_37);
		ASN1_Add_m3856133576(L_37, L_38, /*hidden argument*/NULL);
		ContentInfo_t1278398632 * L_39 = (ContentInfo_t1278398632 *)il2cpp_codegen_object_new(ContentInfo_t1278398632_il2cpp_TypeInfo_var);
		ContentInfo__ctor_m521342869(L_39, _stringLiteral2198968558, /*hidden argument*/NULL);
		V_9 = L_39;
		ContentInfo_t1278398632 * L_40 = V_9;
		ASN1_t1254135647 * L_41 = V_8;
		NullCheck(L_40);
		ContentInfo_set_Content_m2661678287(L_40, L_41, /*hidden argument*/NULL);
		ContentInfo_t1278398632 * L_42 = V_9;
		return L_42;
	}
}
// System.Void Mono.Security.X509.PKCS12::AddCertificate(Mono.Security.X509.X509Certificate)
extern "C"  void PKCS12_AddCertificate_m3895304625 (PKCS12_t2950126080 * __this, X509Certificate_t273828613 * ___cert0, const MethodInfo* method)
{
	{
		X509Certificate_t273828613 * L_0 = ___cert0;
		PKCS12_AddCertificate_m710679726(__this, L_0, (Il2CppObject *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.X509.PKCS12::AddCertificate(Mono.Security.X509.X509Certificate,System.Collections.IDictionary)
extern Il2CppClass* SafeBag_t4111116303_il2cpp_TypeInfo_var;
extern Il2CppClass* ContentInfo_t1278398632_il2cpp_TypeInfo_var;
extern Il2CppClass* X509Certificate_t273828613_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3902436163;
extern const uint32_t PKCS12_AddCertificate_m710679726_MetadataUsageId;
extern "C"  void PKCS12_AddCertificate_m710679726 (PKCS12_t2950126080 * __this, X509Certificate_t273828613 * ___cert0, Il2CppObject * ___attributes1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PKCS12_AddCertificate_m710679726_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	SafeBag_t4111116303 * V_2 = NULL;
	ASN1_t1254135647 * V_3 = NULL;
	ASN1_t1254135647 * V_4 = NULL;
	ContentInfo_t1278398632 * V_5 = NULL;
	X509Certificate_t273828613 * V_6 = NULL;
	{
		V_0 = (bool)0;
		V_1 = 0;
		goto IL_0085;
	}

IL_0009:
	{
		ArrayList_t2121638921 * L_0 = __this->get__safeBags_9();
		int32_t L_1 = V_1;
		NullCheck(L_0);
		Il2CppObject * L_2 = VirtFuncInvoker1< Il2CppObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		V_2 = ((SafeBag_t4111116303 *)CastclassClass(L_2, SafeBag_t4111116303_il2cpp_TypeInfo_var));
		SafeBag_t4111116303 * L_3 = V_2;
		NullCheck(L_3);
		String_t* L_4 = SafeBag_get_BagOID_m2256458192(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5 = String_Equals_m3541721061(L_4, _stringLiteral3902436163, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0081;
		}
	}
	{
		SafeBag_t4111116303 * L_6 = V_2;
		NullCheck(L_6);
		ASN1_t1254135647 * L_7 = SafeBag_get_ASN1_m3365953951(L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		ASN1_t1254135647 * L_8 = V_3;
		NullCheck(L_8);
		ASN1_t1254135647 * L_9 = ASN1_get_Item_m3112983888(L_8, 1, /*hidden argument*/NULL);
		V_4 = L_9;
		ASN1_t1254135647 * L_10 = V_4;
		NullCheck(L_10);
		ByteU5BU5D_t58506160* L_11 = ASN1_get_Value_m4232529916(L_10, /*hidden argument*/NULL);
		ContentInfo_t1278398632 * L_12 = (ContentInfo_t1278398632 *)il2cpp_codegen_object_new(ContentInfo_t1278398632_il2cpp_TypeInfo_var);
		ContentInfo__ctor_m2758504540(L_12, L_11, /*hidden argument*/NULL);
		V_5 = L_12;
		ContentInfo_t1278398632 * L_13 = V_5;
		NullCheck(L_13);
		ASN1_t1254135647 * L_14 = ContentInfo_get_Content_m2793987994(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		ASN1_t1254135647 * L_15 = ASN1_get_Item_m3112983888(L_14, 0, /*hidden argument*/NULL);
		NullCheck(L_15);
		ByteU5BU5D_t58506160* L_16 = ASN1_get_Value_m4232529916(L_15, /*hidden argument*/NULL);
		X509Certificate_t273828613 * L_17 = (X509Certificate_t273828613 *)il2cpp_codegen_object_new(X509Certificate_t273828613_il2cpp_TypeInfo_var);
		X509Certificate__ctor_m3683615677(L_17, L_16, /*hidden argument*/NULL);
		V_6 = L_17;
		X509Certificate_t273828613 * L_18 = ___cert0;
		NullCheck(L_18);
		ByteU5BU5D_t58506160* L_19 = VirtFuncInvoker0< ByteU5BU5D_t58506160* >::Invoke(12 /* System.Byte[] Mono.Security.X509.X509Certificate::get_RawData() */, L_18);
		X509Certificate_t273828613 * L_20 = V_6;
		NullCheck(L_20);
		ByteU5BU5D_t58506160* L_21 = VirtFuncInvoker0< ByteU5BU5D_t58506160* >::Invoke(12 /* System.Byte[] Mono.Security.X509.X509Certificate::get_RawData() */, L_20);
		bool L_22 = PKCS12_Compare_m1707054334(__this, L_19, L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0081;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_0081:
	{
		int32_t L_23 = V_1;
		V_1 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_0085:
	{
		bool L_24 = V_0;
		if (L_24)
		{
			goto IL_009c;
		}
	}
	{
		int32_t L_25 = V_1;
		ArrayList_t2121638921 * L_26 = __this->get__safeBags_9();
		NullCheck(L_26);
		int32_t L_27 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_26);
		if ((((int32_t)L_25) < ((int32_t)L_27)))
		{
			goto IL_0009;
		}
	}

IL_009c:
	{
		bool L_28 = V_0;
		if (L_28)
		{
			goto IL_00c7;
		}
	}
	{
		ArrayList_t2121638921 * L_29 = __this->get__safeBags_9();
		X509Certificate_t273828613 * L_30 = ___cert0;
		Il2CppObject * L_31 = ___attributes1;
		ASN1_t1254135647 * L_32 = PKCS12_CertificateSafeBag_m2143586463(__this, L_30, L_31, /*hidden argument*/NULL);
		SafeBag_t4111116303 * L_33 = (SafeBag_t4111116303 *)il2cpp_codegen_object_new(SafeBag_t4111116303_il2cpp_TypeInfo_var);
		SafeBag__ctor_m2711801934(L_33, _stringLiteral3902436163, L_32, /*hidden argument*/NULL);
		NullCheck(L_29);
		VirtFuncInvoker1< int32_t, Il2CppObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_29, L_33);
		__this->set__certsChanged_7((bool)1);
	}

IL_00c7:
	{
		return;
	}
}
// System.Void Mono.Security.X509.PKCS12::RemoveCertificate(Mono.Security.X509.X509Certificate)
extern "C"  void PKCS12_RemoveCertificate_m2867856866 (PKCS12_t2950126080 * __this, X509Certificate_t273828613 * ___cert0, const MethodInfo* method)
{
	{
		X509Certificate_t273828613 * L_0 = ___cert0;
		PKCS12_RemoveCertificate_m2039050845(__this, L_0, (Il2CppObject *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.X509.PKCS12::RemoveCertificate(Mono.Security.X509.X509Certificate,System.Collections.IDictionary)
extern Il2CppClass* SafeBag_t4111116303_il2cpp_TypeInfo_var;
extern Il2CppClass* ContentInfo_t1278398632_il2cpp_TypeInfo_var;
extern Il2CppClass* X509Certificate_t273828613_il2cpp_TypeInfo_var;
extern Il2CppClass* IDictionary_t1654916945_il2cpp_TypeInfo_var;
extern Il2CppClass* ArrayList_t2121638921_il2cpp_TypeInfo_var;
extern Il2CppClass* ByteU5BU5D_t58506160_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3902436163;
extern const uint32_t PKCS12_RemoveCertificate_m2039050845_MetadataUsageId;
extern "C"  void PKCS12_RemoveCertificate_m2039050845 (PKCS12_t2950126080 * __this, X509Certificate_t273828613 * ___cert0, Il2CppObject * ___attrs1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PKCS12_RemoveCertificate_m2039050845_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SafeBag_t4111116303 * V_2 = NULL;
	ASN1_t1254135647 * V_3 = NULL;
	ASN1_t1254135647 * V_4 = NULL;
	ContentInfo_t1278398632 * V_5 = NULL;
	X509Certificate_t273828613 * V_6 = NULL;
	ASN1_t1254135647 * V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	ASN1_t1254135647 * V_10 = NULL;
	ASN1_t1254135647 * V_11 = NULL;
	String_t* V_12 = NULL;
	ArrayList_t2121638921 * V_13 = NULL;
	ASN1_t1254135647 * V_14 = NULL;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	ASN1_t1254135647 * V_17 = NULL;
	ByteU5BU5D_t58506160* V_18 = NULL;
	{
		V_0 = (-1);
		V_1 = 0;
		goto IL_018d;
	}

IL_0009:
	{
		ArrayList_t2121638921 * L_0 = __this->get__safeBags_9();
		int32_t L_1 = V_1;
		NullCheck(L_0);
		Il2CppObject * L_2 = VirtFuncInvoker1< Il2CppObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		V_2 = ((SafeBag_t4111116303 *)CastclassClass(L_2, SafeBag_t4111116303_il2cpp_TypeInfo_var));
		SafeBag_t4111116303 * L_3 = V_2;
		NullCheck(L_3);
		String_t* L_4 = SafeBag_get_BagOID_m2256458192(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5 = String_Equals_m3541721061(L_4, _stringLiteral3902436163, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0189;
		}
	}
	{
		SafeBag_t4111116303 * L_6 = V_2;
		NullCheck(L_6);
		ASN1_t1254135647 * L_7 = SafeBag_get_ASN1_m3365953951(L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		ASN1_t1254135647 * L_8 = V_3;
		NullCheck(L_8);
		ASN1_t1254135647 * L_9 = ASN1_get_Item_m3112983888(L_8, 1, /*hidden argument*/NULL);
		V_4 = L_9;
		ASN1_t1254135647 * L_10 = V_4;
		NullCheck(L_10);
		ByteU5BU5D_t58506160* L_11 = ASN1_get_Value_m4232529916(L_10, /*hidden argument*/NULL);
		ContentInfo_t1278398632 * L_12 = (ContentInfo_t1278398632 *)il2cpp_codegen_object_new(ContentInfo_t1278398632_il2cpp_TypeInfo_var);
		ContentInfo__ctor_m2758504540(L_12, L_11, /*hidden argument*/NULL);
		V_5 = L_12;
		ContentInfo_t1278398632 * L_13 = V_5;
		NullCheck(L_13);
		ASN1_t1254135647 * L_14 = ContentInfo_get_Content_m2793987994(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		ASN1_t1254135647 * L_15 = ASN1_get_Item_m3112983888(L_14, 0, /*hidden argument*/NULL);
		NullCheck(L_15);
		ByteU5BU5D_t58506160* L_16 = ASN1_get_Value_m4232529916(L_15, /*hidden argument*/NULL);
		X509Certificate_t273828613 * L_17 = (X509Certificate_t273828613 *)il2cpp_codegen_object_new(X509Certificate_t273828613_il2cpp_TypeInfo_var);
		X509Certificate__ctor_m3683615677(L_17, L_16, /*hidden argument*/NULL);
		V_6 = L_17;
		X509Certificate_t273828613 * L_18 = ___cert0;
		NullCheck(L_18);
		ByteU5BU5D_t58506160* L_19 = VirtFuncInvoker0< ByteU5BU5D_t58506160* >::Invoke(12 /* System.Byte[] Mono.Security.X509.X509Certificate::get_RawData() */, L_18);
		X509Certificate_t273828613 * L_20 = V_6;
		NullCheck(L_20);
		ByteU5BU5D_t58506160* L_21 = VirtFuncInvoker0< ByteU5BU5D_t58506160* >::Invoke(12 /* System.Byte[] Mono.Security.X509.X509Certificate::get_RawData() */, L_20);
		bool L_22 = PKCS12_Compare_m1707054334(__this, L_19, L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0189;
		}
	}
	{
		Il2CppObject * L_23 = ___attrs1;
		if (!L_23)
		{
			goto IL_0187;
		}
	}
	{
		ASN1_t1254135647 * L_24 = V_3;
		NullCheck(L_24);
		int32_t L_25 = ASN1_get_Count_m3031159196(L_24, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_25) == ((uint32_t)3))))
		{
			goto IL_0182;
		}
	}
	{
		ASN1_t1254135647 * L_26 = V_3;
		NullCheck(L_26);
		ASN1_t1254135647 * L_27 = ASN1_get_Item_m3112983888(L_26, 2, /*hidden argument*/NULL);
		V_7 = L_27;
		V_8 = 0;
		V_9 = 0;
		goto IL_0164;
	}

IL_00a5:
	{
		ASN1_t1254135647 * L_28 = V_7;
		int32_t L_29 = V_9;
		NullCheck(L_28);
		ASN1_t1254135647 * L_30 = ASN1_get_Item_m3112983888(L_28, L_29, /*hidden argument*/NULL);
		V_10 = L_30;
		ASN1_t1254135647 * L_31 = V_10;
		NullCheck(L_31);
		ASN1_t1254135647 * L_32 = ASN1_get_Item_m3112983888(L_31, 0, /*hidden argument*/NULL);
		V_11 = L_32;
		ASN1_t1254135647 * L_33 = V_11;
		String_t* L_34 = ASN1Convert_ToOid_m1387992843(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		V_12 = L_34;
		Il2CppObject * L_35 = ___attrs1;
		String_t* L_36 = V_12;
		NullCheck(L_35);
		Il2CppObject * L_37 = InterfaceFuncInvoker1< Il2CppObject *, Il2CppObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t1654916945_il2cpp_TypeInfo_var, L_35, L_36);
		V_13 = ((ArrayList_t2121638921 *)CastclassClass(L_37, ArrayList_t2121638921_il2cpp_TypeInfo_var));
		ArrayList_t2121638921 * L_38 = V_13;
		if (!L_38)
		{
			goto IL_015e;
		}
	}
	{
		ASN1_t1254135647 * L_39 = V_10;
		NullCheck(L_39);
		ASN1_t1254135647 * L_40 = ASN1_get_Item_m3112983888(L_39, 1, /*hidden argument*/NULL);
		V_14 = L_40;
		ArrayList_t2121638921 * L_41 = V_13;
		NullCheck(L_41);
		int32_t L_42 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_41);
		ASN1_t1254135647 * L_43 = V_14;
		NullCheck(L_43);
		int32_t L_44 = ASN1_get_Count_m3031159196(L_43, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_42) == ((uint32_t)L_44))))
		{
			goto IL_015e;
		}
	}
	{
		V_15 = 0;
		V_16 = 0;
		goto IL_013c;
	}

IL_0101:
	{
		ASN1_t1254135647 * L_45 = V_14;
		int32_t L_46 = V_16;
		NullCheck(L_45);
		ASN1_t1254135647 * L_47 = ASN1_get_Item_m3112983888(L_45, L_46, /*hidden argument*/NULL);
		V_17 = L_47;
		ArrayList_t2121638921 * L_48 = V_13;
		int32_t L_49 = V_16;
		NullCheck(L_48);
		Il2CppObject * L_50 = VirtFuncInvoker1< Il2CppObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_48, L_49);
		V_18 = ((ByteU5BU5D_t58506160*)Castclass(L_50, ByteU5BU5D_t58506160_il2cpp_TypeInfo_var));
		ByteU5BU5D_t58506160* L_51 = V_18;
		ASN1_t1254135647 * L_52 = V_17;
		NullCheck(L_52);
		ByteU5BU5D_t58506160* L_53 = ASN1_get_Value_m4232529916(L_52, /*hidden argument*/NULL);
		bool L_54 = PKCS12_Compare_m1707054334(__this, L_51, L_53, /*hidden argument*/NULL);
		if (!L_54)
		{
			goto IL_0136;
		}
	}
	{
		int32_t L_55 = V_15;
		V_15 = ((int32_t)((int32_t)L_55+(int32_t)1));
	}

IL_0136:
	{
		int32_t L_56 = V_16;
		V_16 = ((int32_t)((int32_t)L_56+(int32_t)1));
	}

IL_013c:
	{
		int32_t L_57 = V_16;
		ASN1_t1254135647 * L_58 = V_14;
		NullCheck(L_58);
		int32_t L_59 = ASN1_get_Count_m3031159196(L_58, /*hidden argument*/NULL);
		if ((((int32_t)L_57) < ((int32_t)L_59)))
		{
			goto IL_0101;
		}
	}
	{
		int32_t L_60 = V_15;
		ASN1_t1254135647 * L_61 = V_14;
		NullCheck(L_61);
		int32_t L_62 = ASN1_get_Count_m3031159196(L_61, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_60) == ((uint32_t)L_62))))
		{
			goto IL_015e;
		}
	}
	{
		int32_t L_63 = V_8;
		V_8 = ((int32_t)((int32_t)L_63+(int32_t)1));
	}

IL_015e:
	{
		int32_t L_64 = V_9;
		V_9 = ((int32_t)((int32_t)L_64+(int32_t)1));
	}

IL_0164:
	{
		int32_t L_65 = V_9;
		ASN1_t1254135647 * L_66 = V_7;
		NullCheck(L_66);
		int32_t L_67 = ASN1_get_Count_m3031159196(L_66, /*hidden argument*/NULL);
		if ((((int32_t)L_65) < ((int32_t)L_67)))
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_68 = V_8;
		ASN1_t1254135647 * L_69 = V_7;
		NullCheck(L_69);
		int32_t L_70 = ASN1_get_Count_m3031159196(L_69, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_68) == ((uint32_t)L_70))))
		{
			goto IL_0182;
		}
	}
	{
		int32_t L_71 = V_1;
		V_0 = L_71;
	}

IL_0182:
	{
		goto IL_0189;
	}

IL_0187:
	{
		int32_t L_72 = V_1;
		V_0 = L_72;
	}

IL_0189:
	{
		int32_t L_73 = V_1;
		V_1 = ((int32_t)((int32_t)L_73+(int32_t)1));
	}

IL_018d:
	{
		int32_t L_74 = V_0;
		if ((!(((uint32_t)L_74) == ((uint32_t)(-1)))))
		{
			goto IL_01a5;
		}
	}
	{
		int32_t L_75 = V_1;
		ArrayList_t2121638921 * L_76 = __this->get__safeBags_9();
		NullCheck(L_76);
		int32_t L_77 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_76);
		if ((((int32_t)L_75) < ((int32_t)L_77)))
		{
			goto IL_0009;
		}
	}

IL_01a5:
	{
		int32_t L_78 = V_0;
		if ((((int32_t)L_78) == ((int32_t)(-1))))
		{
			goto IL_01bf;
		}
	}
	{
		ArrayList_t2121638921 * L_79 = __this->get__safeBags_9();
		int32_t L_80 = V_0;
		NullCheck(L_79);
		VirtActionInvoker1< int32_t >::Invoke(39 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_79, L_80);
		__this->set__certsChanged_7((bool)1);
	}

IL_01bf:
	{
		return;
	}
}
// System.Object Mono.Security.X509.PKCS12::Clone()
extern Il2CppClass* Encoding_t180559927_il2cpp_TypeInfo_var;
extern Il2CppClass* PKCS12_t2950126080_il2cpp_TypeInfo_var;
extern const uint32_t PKCS12_Clone_m668285869_MetadataUsageId;
extern "C"  Il2CppObject * PKCS12_Clone_m668285869 (PKCS12_t2950126080 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PKCS12_Clone_m668285869_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	PKCS12_t2950126080 * V_0 = NULL;
	{
		V_0 = (PKCS12_t2950126080 *)NULL;
		ByteU5BU5D_t58506160* L_0 = __this->get__password_1();
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		ByteU5BU5D_t58506160* L_1 = PKCS12_GetBytes_m1971373682(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t180559927_il2cpp_TypeInfo_var);
		Encoding_t180559927 * L_2 = Encoding_get_BigEndianUnicode_m1578127592(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t58506160* L_3 = __this->get__password_1();
		NullCheck(L_2);
		String_t* L_4 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t58506160* >::Invoke(22 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_2, L_3);
		PKCS12_t2950126080 * L_5 = (PKCS12_t2950126080 *)il2cpp_codegen_object_new(PKCS12_t2950126080_il2cpp_TypeInfo_var);
		PKCS12__ctor_m3870049384(L_5, L_1, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_003a;
	}

IL_002e:
	{
		ByteU5BU5D_t58506160* L_6 = PKCS12_GetBytes_m1971373682(__this, /*hidden argument*/NULL);
		PKCS12_t2950126080 * L_7 = (PKCS12_t2950126080 *)il2cpp_codegen_object_new(PKCS12_t2950126080_il2cpp_TypeInfo_var);
		PKCS12__ctor_m721197356(L_7, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
	}

IL_003a:
	{
		PKCS12_t2950126080 * L_8 = V_0;
		int32_t L_9 = PKCS12_get_IterationCount_m1936461050(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		PKCS12_set_IterationCount_m4214894503(L_8, L_9, /*hidden argument*/NULL);
		PKCS12_t2950126080 * L_10 = V_0;
		return L_10;
	}
}
// System.Int32 Mono.Security.X509.PKCS12::get_MaximumPasswordLength()
extern Il2CppClass* PKCS12_t2950126080_il2cpp_TypeInfo_var;
extern const uint32_t PKCS12_get_MaximumPasswordLength_m1083541051_MetadataUsageId;
extern "C"  int32_t PKCS12_get_MaximumPasswordLength_m1083541051 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PKCS12_get_MaximumPasswordLength_m1083541051_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PKCS12_t2950126080_il2cpp_TypeInfo_var);
		int32_t L_0 = ((PKCS12_t2950126080_StaticFields*)PKCS12_t2950126080_il2cpp_TypeInfo_var->static_fields)->get_password_max_length_11();
		return L_0;
	}
}
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::.ctor()
extern "C"  void DeriveBytes__ctor_m4046501000 (DeriveBytes_t2715912549 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::.cctor()
extern Il2CppClass* ByteU5BU5D_t58506160_il2cpp_TypeInfo_var;
extern Il2CppClass* DeriveBytes_t2715912549_il2cpp_TypeInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3E_t3053238934____U24U24fieldU2D11_6_FieldInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3E_t3053238934____U24U24fieldU2D12_7_FieldInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3E_t3053238934____U24U24fieldU2D13_8_FieldInfo_var;
extern const uint32_t DeriveBytes__cctor_m405383205_MetadataUsageId;
extern "C"  void DeriveBytes__cctor_m405383205 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (DeriveBytes__cctor_m405383205_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t58506160* L_0 = ((ByteU5BU5D_t58506160*)SZArrayNew(ByteU5BU5D_t58506160_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64)));
		RuntimeHelpers_InitializeArray_m2058365049(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_0, LoadFieldToken(U3CPrivateImplementationDetailsU3E_t3053238934____U24U24fieldU2D11_6_FieldInfo_var), /*hidden argument*/NULL);
		((DeriveBytes_t2715912549_StaticFields*)DeriveBytes_t2715912549_il2cpp_TypeInfo_var->static_fields)->set_keyDiversifier_0(L_0);
		ByteU5BU5D_t58506160* L_1 = ((ByteU5BU5D_t58506160*)SZArrayNew(ByteU5BU5D_t58506160_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64)));
		RuntimeHelpers_InitializeArray_m2058365049(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_1, LoadFieldToken(U3CPrivateImplementationDetailsU3E_t3053238934____U24U24fieldU2D12_7_FieldInfo_var), /*hidden argument*/NULL);
		((DeriveBytes_t2715912549_StaticFields*)DeriveBytes_t2715912549_il2cpp_TypeInfo_var->static_fields)->set_ivDiversifier_1(L_1);
		ByteU5BU5D_t58506160* L_2 = ((ByteU5BU5D_t58506160*)SZArrayNew(ByteU5BU5D_t58506160_il2cpp_TypeInfo_var, (uint32_t)((int32_t)64)));
		RuntimeHelpers_InitializeArray_m2058365049(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_2, LoadFieldToken(U3CPrivateImplementationDetailsU3E_t3053238934____U24U24fieldU2D13_8_FieldInfo_var), /*hidden argument*/NULL);
		((DeriveBytes_t2715912549_StaticFields*)DeriveBytes_t2715912549_il2cpp_TypeInfo_var->static_fields)->set_macDiversifier_2(L_2);
		return;
	}
}
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_HashName(System.String)
extern "C"  void DeriveBytes_set_HashName_m2086526224 (DeriveBytes_t2715912549 * __this, String_t* ___value0, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set__hashName_3(L_0);
		return;
	}
}
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_IterationCount(System.Int32)
extern "C"  void DeriveBytes_set_IterationCount_m35620668 (DeriveBytes_t2715912549 * __this, int32_t ___value0, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set__iterations_4(L_0);
		return;
	}
}
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_Password(System.Byte[])
extern Il2CppClass* ByteU5BU5D_t58506160_il2cpp_TypeInfo_var;
extern const uint32_t DeriveBytes_set_Password_m2839198645_MetadataUsageId;
extern "C"  void DeriveBytes_set_Password_m2839198645 (DeriveBytes_t2715912549 * __this, ByteU5BU5D_t58506160* ___value0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (DeriveBytes_set_Password_m2839198645_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t58506160* L_0 = ___value0;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		__this->set__password_5(((ByteU5BU5D_t58506160*)SZArrayNew(ByteU5BU5D_t58506160_il2cpp_TypeInfo_var, (uint32_t)0)));
		goto IL_0028;
	}

IL_0017:
	{
		ByteU5BU5D_t58506160* L_1 = ___value0;
		NullCheck((Il2CppArray *)(Il2CppArray *)L_1);
		Il2CppObject * L_2 = VirtFuncInvoker0< Il2CppObject * >::Invoke(5 /* System.Object System.Array::Clone() */, (Il2CppArray *)(Il2CppArray *)L_1);
		__this->set__password_5(((ByteU5BU5D_t58506160*)Castclass(L_2, ByteU5BU5D_t58506160_il2cpp_TypeInfo_var)));
	}

IL_0028:
	{
		return;
	}
}
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::set_Salt(System.Byte[])
extern Il2CppClass* ByteU5BU5D_t58506160_il2cpp_TypeInfo_var;
extern const uint32_t DeriveBytes_set_Salt_m801246362_MetadataUsageId;
extern "C"  void DeriveBytes_set_Salt_m801246362 (DeriveBytes_t2715912549 * __this, ByteU5BU5D_t58506160* ___value0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (DeriveBytes_set_Salt_m801246362_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t58506160* L_0 = ___value0;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		ByteU5BU5D_t58506160* L_1 = ___value0;
		NullCheck((Il2CppArray *)(Il2CppArray *)L_1);
		Il2CppObject * L_2 = VirtFuncInvoker0< Il2CppObject * >::Invoke(5 /* System.Object System.Array::Clone() */, (Il2CppArray *)(Il2CppArray *)L_1);
		__this->set__salt_6(((ByteU5BU5D_t58506160*)Castclass(L_2, ByteU5BU5D_t58506160_il2cpp_TypeInfo_var)));
		goto IL_0023;
	}

IL_001c:
	{
		__this->set__salt_6((ByteU5BU5D_t58506160*)NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Void Mono.Security.X509.PKCS12/DeriveBytes::Adjust(System.Byte[],System.Int32,System.Byte[])
extern "C"  void DeriveBytes_Adjust_m1390246396 (DeriveBytes_t2715912549 * __this, ByteU5BU5D_t58506160* ___a0, int32_t ___aOff1, ByteU5BU5D_t58506160* ___b2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_t58506160* L_0 = ___b2;
		ByteU5BU5D_t58506160* L_1 = ___b2;
		NullCheck(L_1);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, ((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_1)->max_length))))-(int32_t)1)));
		int32_t L_2 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_1)->max_length))))-(int32_t)1));
		ByteU5BU5D_t58506160* L_3 = ___a0;
		int32_t L_4 = ___aOff1;
		ByteU5BU5D_t58506160* L_5 = ___b2;
		NullCheck(L_5);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, ((int32_t)((int32_t)((int32_t)((int32_t)L_4+(int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_5)->max_length))))))-(int32_t)1)));
		int32_t L_6 = ((int32_t)((int32_t)((int32_t)((int32_t)L_4+(int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_5)->max_length))))))-(int32_t)1));
		V_0 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2)))&(int32_t)((int32_t)255)))+(int32_t)((int32_t)((int32_t)((L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6)))&(int32_t)((int32_t)255)))))+(int32_t)1));
		ByteU5BU5D_t58506160* L_7 = ___a0;
		int32_t L_8 = ___aOff1;
		ByteU5BU5D_t58506160* L_9 = ___b2;
		NullCheck(L_9);
		int32_t L_10 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, ((int32_t)((int32_t)((int32_t)((int32_t)L_8+(int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_9)->max_length))))))-(int32_t)1)));
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)((int32_t)((int32_t)L_8+(int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_9)->max_length))))))-(int32_t)1))), (uint8_t)(((int32_t)((uint8_t)L_10))));
		int32_t L_11 = V_0;
		V_0 = ((int32_t)((int32_t)L_11>>(int32_t)8));
		ByteU5BU5D_t58506160* L_12 = ___b2;
		NullCheck(L_12);
		V_1 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_12)->max_length))))-(int32_t)2));
		goto IL_0061;
	}

IL_003a:
	{
		int32_t L_13 = V_0;
		ByteU5BU5D_t58506160* L_14 = ___b2;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		ByteU5BU5D_t58506160* L_17 = ___a0;
		int32_t L_18 = ___aOff1;
		int32_t L_19 = V_1;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)((int32_t)L_18+(int32_t)L_19)));
		int32_t L_20 = ((int32_t)((int32_t)L_18+(int32_t)L_19));
		V_0 = ((int32_t)((int32_t)L_13+(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16)))&(int32_t)((int32_t)255)))+(int32_t)((int32_t)((int32_t)((L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_20)))&(int32_t)((int32_t)255)))))));
		ByteU5BU5D_t58506160* L_21 = ___a0;
		int32_t L_22 = ___aOff1;
		int32_t L_23 = V_1;
		int32_t L_24 = V_0;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, ((int32_t)((int32_t)L_22+(int32_t)L_23)));
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_22+(int32_t)L_23))), (uint8_t)(((int32_t)((uint8_t)L_24))));
		int32_t L_25 = V_0;
		V_0 = ((int32_t)((int32_t)L_25>>(int32_t)8));
		int32_t L_26 = V_1;
		V_1 = ((int32_t)((int32_t)L_26-(int32_t)1));
	}

IL_0061:
	{
		int32_t L_27 = V_1;
		if ((((int32_t)L_27) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		return;
	}
}
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::Derive(System.Byte[],System.Int32)
extern Il2CppClass* ByteU5BU5D_t58506160_il2cpp_TypeInfo_var;
extern const uint32_t DeriveBytes_Derive_m641766759_MetadataUsageId;
extern "C"  ByteU5BU5D_t58506160* DeriveBytes_Derive_m641766759 (DeriveBytes_t2715912549 * __this, ByteU5BU5D_t58506160* ___diversifier0, int32_t ___n1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (DeriveBytes_Derive_m641766759_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	HashAlgorithm_t24372250 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_t58506160* V_3 = NULL;
	ByteU5BU5D_t58506160* V_4 = NULL;
	int32_t V_5 = 0;
	ByteU5BU5D_t58506160* V_6 = NULL;
	int32_t V_7 = 0;
	ByteU5BU5D_t58506160* V_8 = NULL;
	ByteU5BU5D_t58506160* V_9 = NULL;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	ByteU5BU5D_t58506160* V_12 = NULL;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	{
		String_t* L_0 = __this->get__hashName_3();
		HashAlgorithm_t24372250 * L_1 = HashAlgorithm_Create_m2014549577(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		HashAlgorithm_t24372250 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 System.Security.Cryptography.HashAlgorithm::get_HashSize() */, L_2);
		V_1 = ((int32_t)((int32_t)L_3>>(int32_t)3));
		V_2 = ((int32_t)64);
		int32_t L_4 = ___n1;
		V_3 = ((ByteU5BU5D_t58506160*)SZArrayNew(ByteU5BU5D_t58506160_il2cpp_TypeInfo_var, (uint32_t)L_4));
		ByteU5BU5D_t58506160* L_5 = __this->get__salt_6();
		if (!L_5)
		{
			goto IL_0083;
		}
	}
	{
		ByteU5BU5D_t58506160* L_6 = __this->get__salt_6();
		NullCheck(L_6);
		if (!(((int32_t)((int32_t)(((Il2CppArray *)L_6)->max_length)))))
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_7 = V_2;
		ByteU5BU5D_t58506160* L_8 = __this->get__salt_6();
		NullCheck(L_8);
		int32_t L_9 = V_2;
		int32_t L_10 = V_2;
		V_4 = ((ByteU5BU5D_t58506160*)SZArrayNew(ByteU5BU5D_t58506160_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)L_7*(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_8)->max_length))))+(int32_t)L_9))-(int32_t)1))/(int32_t)L_10))))));
		V_5 = 0;
		goto IL_0073;
	}

IL_0056:
	{
		ByteU5BU5D_t58506160* L_11 = V_4;
		int32_t L_12 = V_5;
		ByteU5BU5D_t58506160* L_13 = __this->get__salt_6();
		int32_t L_14 = V_5;
		ByteU5BU5D_t58506160* L_15 = __this->get__salt_6();
		NullCheck(L_15);
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, ((int32_t)((int32_t)L_14%(int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_15)->max_length)))))));
		int32_t L_16 = ((int32_t)((int32_t)L_14%(int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_15)->max_length))))));
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(L_12), (uint8_t)((L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_16))));
		int32_t L_17 = V_5;
		V_5 = ((int32_t)((int32_t)L_17+(int32_t)1));
	}

IL_0073:
	{
		int32_t L_18 = V_5;
		ByteU5BU5D_t58506160* L_19 = V_4;
		NullCheck(L_19);
		if ((!(((uint32_t)L_18) == ((uint32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_19)->max_length))))))))
		{
			goto IL_0056;
		}
	}
	{
		goto IL_008b;
	}

IL_0083:
	{
		V_4 = ((ByteU5BU5D_t58506160*)SZArrayNew(ByteU5BU5D_t58506160_il2cpp_TypeInfo_var, (uint32_t)0));
	}

IL_008b:
	{
		ByteU5BU5D_t58506160* L_20 = __this->get__password_5();
		if (!L_20)
		{
			goto IL_00ef;
		}
	}
	{
		ByteU5BU5D_t58506160* L_21 = __this->get__password_5();
		NullCheck(L_21);
		if (!(((int32_t)((int32_t)(((Il2CppArray *)L_21)->max_length)))))
		{
			goto IL_00ef;
		}
	}
	{
		int32_t L_22 = V_2;
		ByteU5BU5D_t58506160* L_23 = __this->get__password_5();
		NullCheck(L_23);
		int32_t L_24 = V_2;
		int32_t L_25 = V_2;
		V_6 = ((ByteU5BU5D_t58506160*)SZArrayNew(ByteU5BU5D_t58506160_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)L_22*(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_23)->max_length))))+(int32_t)L_24))-(int32_t)1))/(int32_t)L_25))))));
		V_7 = 0;
		goto IL_00df;
	}

IL_00c2:
	{
		ByteU5BU5D_t58506160* L_26 = V_6;
		int32_t L_27 = V_7;
		ByteU5BU5D_t58506160* L_28 = __this->get__password_5();
		int32_t L_29 = V_7;
		ByteU5BU5D_t58506160* L_30 = __this->get__password_5();
		NullCheck(L_30);
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, ((int32_t)((int32_t)L_29%(int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_30)->max_length)))))));
		int32_t L_31 = ((int32_t)((int32_t)L_29%(int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_30)->max_length))))));
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, L_27);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (uint8_t)((L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_31))));
		int32_t L_32 = V_7;
		V_7 = ((int32_t)((int32_t)L_32+(int32_t)1));
	}

IL_00df:
	{
		int32_t L_33 = V_7;
		ByteU5BU5D_t58506160* L_34 = V_6;
		NullCheck(L_34);
		if ((!(((uint32_t)L_33) == ((uint32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_34)->max_length))))))))
		{
			goto IL_00c2;
		}
	}
	{
		goto IL_00f7;
	}

IL_00ef:
	{
		V_6 = ((ByteU5BU5D_t58506160*)SZArrayNew(ByteU5BU5D_t58506160_il2cpp_TypeInfo_var, (uint32_t)0));
	}

IL_00f7:
	{
		ByteU5BU5D_t58506160* L_35 = V_4;
		NullCheck(L_35);
		ByteU5BU5D_t58506160* L_36 = V_6;
		NullCheck(L_36);
		V_8 = ((ByteU5BU5D_t58506160*)SZArrayNew(ByteU5BU5D_t58506160_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_35)->max_length))))+(int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_36)->max_length))))))));
		ByteU5BU5D_t58506160* L_37 = V_4;
		ByteU5BU5D_t58506160* L_38 = V_8;
		ByteU5BU5D_t58506160* L_39 = V_4;
		NullCheck(L_39);
		Buffer_BlockCopy_m1580643184(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_37, 0, (Il2CppArray *)(Il2CppArray *)L_38, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_39)->max_length)))), /*hidden argument*/NULL);
		ByteU5BU5D_t58506160* L_40 = V_6;
		ByteU5BU5D_t58506160* L_41 = V_8;
		ByteU5BU5D_t58506160* L_42 = V_4;
		NullCheck(L_42);
		ByteU5BU5D_t58506160* L_43 = V_6;
		NullCheck(L_43);
		Buffer_BlockCopy_m1580643184(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_40, 0, (Il2CppArray *)(Il2CppArray *)L_41, (((int32_t)((int32_t)(((Il2CppArray *)L_42)->max_length)))), (((int32_t)((int32_t)(((Il2CppArray *)L_43)->max_length)))), /*hidden argument*/NULL);
		int32_t L_44 = V_2;
		V_9 = ((ByteU5BU5D_t58506160*)SZArrayNew(ByteU5BU5D_t58506160_il2cpp_TypeInfo_var, (uint32_t)L_44));
		int32_t L_45 = ___n1;
		int32_t L_46 = V_1;
		int32_t L_47 = V_1;
		V_10 = ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_45+(int32_t)L_46))-(int32_t)1))/(int32_t)L_47));
		V_11 = 1;
		goto IL_0226;
	}

IL_0141:
	{
		HashAlgorithm_t24372250 * L_48 = V_0;
		ByteU5BU5D_t58506160* L_49 = ___diversifier0;
		ByteU5BU5D_t58506160* L_50 = ___diversifier0;
		NullCheck(L_50);
		ByteU5BU5D_t58506160* L_51 = ___diversifier0;
		NullCheck(L_48);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t58506160*, int32_t, int32_t, ByteU5BU5D_t58506160*, int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_48, L_49, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_50)->max_length)))), L_51, 0);
		HashAlgorithm_t24372250 * L_52 = V_0;
		ByteU5BU5D_t58506160* L_53 = V_8;
		ByteU5BU5D_t58506160* L_54 = V_8;
		NullCheck(L_54);
		NullCheck(L_52);
		VirtFuncInvoker3< ByteU5BU5D_t58506160*, ByteU5BU5D_t58506160*, int32_t, int32_t >::Invoke(7 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, L_52, L_53, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_54)->max_length)))));
		HashAlgorithm_t24372250 * L_55 = V_0;
		NullCheck(L_55);
		ByteU5BU5D_t58506160* L_56 = VirtFuncInvoker0< ByteU5BU5D_t58506160* >::Invoke(9 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::get_Hash() */, L_55);
		V_12 = L_56;
		HashAlgorithm_t24372250 * L_57 = V_0;
		NullCheck(L_57);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Security.Cryptography.HashAlgorithm::Initialize() */, L_57);
		V_13 = 1;
		goto IL_0188;
	}

IL_0173:
	{
		HashAlgorithm_t24372250 * L_58 = V_0;
		ByteU5BU5D_t58506160* L_59 = V_12;
		ByteU5BU5D_t58506160* L_60 = V_12;
		NullCheck(L_60);
		NullCheck(L_58);
		ByteU5BU5D_t58506160* L_61 = HashAlgorithm_ComputeHash_m2755161132(L_58, L_59, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_60)->max_length)))), /*hidden argument*/NULL);
		V_12 = L_61;
		int32_t L_62 = V_13;
		V_13 = ((int32_t)((int32_t)L_62+(int32_t)1));
	}

IL_0188:
	{
		int32_t L_63 = V_13;
		int32_t L_64 = __this->get__iterations_4();
		if ((!(((uint32_t)L_63) == ((uint32_t)L_64))))
		{
			goto IL_0173;
		}
	}
	{
		V_14 = 0;
		goto IL_01b2;
	}

IL_019d:
	{
		ByteU5BU5D_t58506160* L_65 = V_9;
		int32_t L_66 = V_14;
		ByteU5BU5D_t58506160* L_67 = V_12;
		int32_t L_68 = V_14;
		ByteU5BU5D_t58506160* L_69 = V_12;
		NullCheck(L_69);
		NullCheck(L_67);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_67, ((int32_t)((int32_t)L_68%(int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_69)->max_length)))))));
		int32_t L_70 = ((int32_t)((int32_t)L_68%(int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_69)->max_length))))));
		NullCheck(L_65);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_65, L_66);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(L_66), (uint8_t)((L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_70))));
		int32_t L_71 = V_14;
		V_14 = ((int32_t)((int32_t)L_71+(int32_t)1));
	}

IL_01b2:
	{
		int32_t L_72 = V_14;
		ByteU5BU5D_t58506160* L_73 = V_9;
		NullCheck(L_73);
		if ((!(((uint32_t)L_72) == ((uint32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_73)->max_length))))))))
		{
			goto IL_019d;
		}
	}
	{
		V_15 = 0;
		goto IL_01d9;
	}

IL_01c5:
	{
		ByteU5BU5D_t58506160* L_74 = V_8;
		int32_t L_75 = V_15;
		int32_t L_76 = V_2;
		ByteU5BU5D_t58506160* L_77 = V_9;
		DeriveBytes_Adjust_m1390246396(__this, L_74, ((int32_t)((int32_t)L_75*(int32_t)L_76)), L_77, /*hidden argument*/NULL);
		int32_t L_78 = V_15;
		V_15 = ((int32_t)((int32_t)L_78+(int32_t)1));
	}

IL_01d9:
	{
		int32_t L_79 = V_15;
		ByteU5BU5D_t58506160* L_80 = V_8;
		NullCheck(L_80);
		int32_t L_81 = V_2;
		if ((!(((uint32_t)L_79) == ((uint32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_80)->max_length))))/(int32_t)L_81))))))
		{
			goto IL_01c5;
		}
	}
	{
		int32_t L_82 = V_11;
		int32_t L_83 = V_10;
		if ((!(((uint32_t)L_82) == ((uint32_t)L_83))))
		{
			goto IL_020d;
		}
	}
	{
		ByteU5BU5D_t58506160* L_84 = V_12;
		ByteU5BU5D_t58506160* L_85 = V_3;
		int32_t L_86 = V_11;
		int32_t L_87 = V_1;
		ByteU5BU5D_t58506160* L_88 = V_3;
		NullCheck(L_88);
		int32_t L_89 = V_11;
		int32_t L_90 = V_1;
		Buffer_BlockCopy_m1580643184(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_84, 0, (Il2CppArray *)(Il2CppArray *)L_85, ((int32_t)((int32_t)((int32_t)((int32_t)L_86-(int32_t)1))*(int32_t)L_87)), ((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_88)->max_length))))-(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_89-(int32_t)1))*(int32_t)L_90)))), /*hidden argument*/NULL);
		goto IL_0220;
	}

IL_020d:
	{
		ByteU5BU5D_t58506160* L_91 = V_12;
		ByteU5BU5D_t58506160* L_92 = V_3;
		int32_t L_93 = V_11;
		int32_t L_94 = V_1;
		ByteU5BU5D_t58506160* L_95 = V_12;
		NullCheck(L_95);
		Buffer_BlockCopy_m1580643184(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_91, 0, (Il2CppArray *)(Il2CppArray *)L_92, ((int32_t)((int32_t)((int32_t)((int32_t)L_93-(int32_t)1))*(int32_t)L_94)), (((int32_t)((int32_t)(((Il2CppArray *)L_95)->max_length)))), /*hidden argument*/NULL);
	}

IL_0220:
	{
		int32_t L_96 = V_11;
		V_11 = ((int32_t)((int32_t)L_96+(int32_t)1));
	}

IL_0226:
	{
		int32_t L_97 = V_11;
		int32_t L_98 = V_10;
		if ((((int32_t)L_97) <= ((int32_t)L_98)))
		{
			goto IL_0141;
		}
	}
	{
		ByteU5BU5D_t58506160* L_99 = V_3;
		return L_99;
	}
}
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::DeriveKey(System.Int32)
extern Il2CppClass* DeriveBytes_t2715912549_il2cpp_TypeInfo_var;
extern const uint32_t DeriveBytes_DeriveKey_m3484345305_MetadataUsageId;
extern "C"  ByteU5BU5D_t58506160* DeriveBytes_DeriveKey_m3484345305 (DeriveBytes_t2715912549 * __this, int32_t ___size0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (DeriveBytes_DeriveKey_m3484345305_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DeriveBytes_t2715912549_il2cpp_TypeInfo_var);
		ByteU5BU5D_t58506160* L_0 = ((DeriveBytes_t2715912549_StaticFields*)DeriveBytes_t2715912549_il2cpp_TypeInfo_var->static_fields)->get_keyDiversifier_0();
		int32_t L_1 = ___size0;
		ByteU5BU5D_t58506160* L_2 = DeriveBytes_Derive_m641766759(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::DeriveIV(System.Int32)
extern Il2CppClass* DeriveBytes_t2715912549_il2cpp_TypeInfo_var;
extern const uint32_t DeriveBytes_DeriveIV_m1504468791_MetadataUsageId;
extern "C"  ByteU5BU5D_t58506160* DeriveBytes_DeriveIV_m1504468791 (DeriveBytes_t2715912549 * __this, int32_t ___size0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (DeriveBytes_DeriveIV_m1504468791_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DeriveBytes_t2715912549_il2cpp_TypeInfo_var);
		ByteU5BU5D_t58506160* L_0 = ((DeriveBytes_t2715912549_StaticFields*)DeriveBytes_t2715912549_il2cpp_TypeInfo_var->static_fields)->get_ivDiversifier_1();
		int32_t L_1 = ___size0;
		ByteU5BU5D_t58506160* L_2 = DeriveBytes_Derive_m641766759(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::DeriveMAC(System.Int32)
extern Il2CppClass* DeriveBytes_t2715912549_il2cpp_TypeInfo_var;
extern const uint32_t DeriveBytes_DeriveMAC_m3291939529_MetadataUsageId;
extern "C"  ByteU5BU5D_t58506160* DeriveBytes_DeriveMAC_m3291939529 (DeriveBytes_t2715912549 * __this, int32_t ___size0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (DeriveBytes_DeriveMAC_m3291939529_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DeriveBytes_t2715912549_il2cpp_TypeInfo_var);
		ByteU5BU5D_t58506160* L_0 = ((DeriveBytes_t2715912549_StaticFields*)DeriveBytes_t2715912549_il2cpp_TypeInfo_var->static_fields)->get_macDiversifier_2();
		int32_t L_1 = ___size0;
		ByteU5BU5D_t58506160* L_2 = DeriveBytes_Derive_m641766759(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Mono.Security.X509.SafeBag::.ctor(System.String,Mono.Security.ASN1)
extern "C"  void SafeBag__ctor_m2711801934 (SafeBag_t4111116303 * __this, String_t* ___bagOID0, ASN1_t1254135647 * ___asn11, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___bagOID0;
		__this->set__bagOID_0(L_0);
		ASN1_t1254135647 * L_1 = ___asn11;
		__this->set__asn1_1(L_1);
		return;
	}
}
// System.String Mono.Security.X509.SafeBag::get_BagOID()
extern "C"  String_t* SafeBag_get_BagOID_m2256458192 (SafeBag_t4111116303 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = __this->get__bagOID_0();
		return L_0;
	}
}
// Mono.Security.ASN1 Mono.Security.X509.SafeBag::get_ASN1()
extern "C"  ASN1_t1254135647 * SafeBag_get_ASN1_m3365953951 (SafeBag_t4111116303 * __this, const MethodInfo* method)
{
	{
		ASN1_t1254135647 * L_0 = __this->get__asn1_1();
		return L_0;
	}
}
// System.Void Mono.Security.X509.X501::.cctor()
extern Il2CppClass* ByteU5BU5D_t58506160_il2cpp_TypeInfo_var;
extern Il2CppClass* X501_t591126674_il2cpp_TypeInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3E_t3053238934____U24U24fieldU2D14_9_FieldInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3E_t3053238934____U24U24fieldU2D15_10_FieldInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3E_t3053238934____U24U24fieldU2D16_11_FieldInfo_var;
extern const uint32_t X501__cctor_m2619822114_MetadataUsageId;
extern "C"  void X501__cctor_m2619822114 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X501__cctor_m2619822114_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t58506160* L_0 = ((ByteU5BU5D_t58506160*)SZArrayNew(ByteU5BU5D_t58506160_il2cpp_TypeInfo_var, (uint32_t)3));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)85));
		ByteU5BU5D_t58506160* L_1 = L_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)4);
		ByteU5BU5D_t58506160* L_2 = L_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)6);
		((X501_t591126674_StaticFields*)X501_t591126674_il2cpp_TypeInfo_var->static_fields)->set_countryName_0(L_2);
		ByteU5BU5D_t58506160* L_3 = ((ByteU5BU5D_t58506160*)SZArrayNew(ByteU5BU5D_t58506160_il2cpp_TypeInfo_var, (uint32_t)3));
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)85));
		ByteU5BU5D_t58506160* L_4 = L_3;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 1);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)4);
		ByteU5BU5D_t58506160* L_5 = L_4;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 2);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)10));
		((X501_t591126674_StaticFields*)X501_t591126674_il2cpp_TypeInfo_var->static_fields)->set_organizationName_1(L_5);
		ByteU5BU5D_t58506160* L_6 = ((ByteU5BU5D_t58506160*)SZArrayNew(ByteU5BU5D_t58506160_il2cpp_TypeInfo_var, (uint32_t)3));
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 0);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)85));
		ByteU5BU5D_t58506160* L_7 = L_6;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 1);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)4);
		ByteU5BU5D_t58506160* L_8 = L_7;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)11));
		((X501_t591126674_StaticFields*)X501_t591126674_il2cpp_TypeInfo_var->static_fields)->set_organizationalUnitName_2(L_8);
		ByteU5BU5D_t58506160* L_9 = ((ByteU5BU5D_t58506160*)SZArrayNew(ByteU5BU5D_t58506160_il2cpp_TypeInfo_var, (uint32_t)3));
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, 0);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)85));
		ByteU5BU5D_t58506160* L_10 = L_9;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 1);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)4);
		ByteU5BU5D_t58506160* L_11 = L_10;
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, 2);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)3);
		((X501_t591126674_StaticFields*)X501_t591126674_il2cpp_TypeInfo_var->static_fields)->set_commonName_3(L_11);
		ByteU5BU5D_t58506160* L_12 = ((ByteU5BU5D_t58506160*)SZArrayNew(ByteU5BU5D_t58506160_il2cpp_TypeInfo_var, (uint32_t)3));
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, 0);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)85));
		ByteU5BU5D_t58506160* L_13 = L_12;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 1);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)4);
		ByteU5BU5D_t58506160* L_14 = L_13;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, 2);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)7);
		((X501_t591126674_StaticFields*)X501_t591126674_il2cpp_TypeInfo_var->static_fields)->set_localityName_4(L_14);
		ByteU5BU5D_t58506160* L_15 = ((ByteU5BU5D_t58506160*)SZArrayNew(ByteU5BU5D_t58506160_il2cpp_TypeInfo_var, (uint32_t)3));
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)85));
		ByteU5BU5D_t58506160* L_16 = L_15;
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 1);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)4);
		ByteU5BU5D_t58506160* L_17 = L_16;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, 2);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)8);
		((X501_t591126674_StaticFields*)X501_t591126674_il2cpp_TypeInfo_var->static_fields)->set_stateOrProvinceName_5(L_17);
		ByteU5BU5D_t58506160* L_18 = ((ByteU5BU5D_t58506160*)SZArrayNew(ByteU5BU5D_t58506160_il2cpp_TypeInfo_var, (uint32_t)3));
		NullCheck(L_18);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_18, 0);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)85));
		ByteU5BU5D_t58506160* L_19 = L_18;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 1);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)4);
		ByteU5BU5D_t58506160* L_20 = L_19;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 2);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)9));
		((X501_t591126674_StaticFields*)X501_t591126674_il2cpp_TypeInfo_var->static_fields)->set_streetAddress_6(L_20);
		ByteU5BU5D_t58506160* L_21 = ((ByteU5BU5D_t58506160*)SZArrayNew(ByteU5BU5D_t58506160_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10)));
		RuntimeHelpers_InitializeArray_m2058365049(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_21, LoadFieldToken(U3CPrivateImplementationDetailsU3E_t3053238934____U24U24fieldU2D14_9_FieldInfo_var), /*hidden argument*/NULL);
		((X501_t591126674_StaticFields*)X501_t591126674_il2cpp_TypeInfo_var->static_fields)->set_domainComponent_7(L_21);
		ByteU5BU5D_t58506160* L_22 = ((ByteU5BU5D_t58506160*)SZArrayNew(ByteU5BU5D_t58506160_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10)));
		RuntimeHelpers_InitializeArray_m2058365049(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_22, LoadFieldToken(U3CPrivateImplementationDetailsU3E_t3053238934____U24U24fieldU2D15_10_FieldInfo_var), /*hidden argument*/NULL);
		((X501_t591126674_StaticFields*)X501_t591126674_il2cpp_TypeInfo_var->static_fields)->set_userid_8(L_22);
		ByteU5BU5D_t58506160* L_23 = ((ByteU5BU5D_t58506160*)SZArrayNew(ByteU5BU5D_t58506160_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9)));
		RuntimeHelpers_InitializeArray_m2058365049(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_23, LoadFieldToken(U3CPrivateImplementationDetailsU3E_t3053238934____U24U24fieldU2D16_11_FieldInfo_var), /*hidden argument*/NULL);
		((X501_t591126674_StaticFields*)X501_t591126674_il2cpp_TypeInfo_var->static_fields)->set_email_9(L_23);
		ByteU5BU5D_t58506160* L_24 = ((ByteU5BU5D_t58506160*)SZArrayNew(ByteU5BU5D_t58506160_il2cpp_TypeInfo_var, (uint32_t)3));
		NullCheck(L_24);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 0);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)85));
		ByteU5BU5D_t58506160* L_25 = L_24;
		NullCheck(L_25);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_25, 1);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)4);
		ByteU5BU5D_t58506160* L_26 = L_25;
		NullCheck(L_26);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_26, 2);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)46));
		((X501_t591126674_StaticFields*)X501_t591126674_il2cpp_TypeInfo_var->static_fields)->set_dnQualifier_10(L_26);
		ByteU5BU5D_t58506160* L_27 = ((ByteU5BU5D_t58506160*)SZArrayNew(ByteU5BU5D_t58506160_il2cpp_TypeInfo_var, (uint32_t)3));
		NullCheck(L_27);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_27, 0);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)85));
		ByteU5BU5D_t58506160* L_28 = L_27;
		NullCheck(L_28);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_28, 1);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)4);
		ByteU5BU5D_t58506160* L_29 = L_28;
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, 2);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)12));
		((X501_t591126674_StaticFields*)X501_t591126674_il2cpp_TypeInfo_var->static_fields)->set_title_11(L_29);
		ByteU5BU5D_t58506160* L_30 = ((ByteU5BU5D_t58506160*)SZArrayNew(ByteU5BU5D_t58506160_il2cpp_TypeInfo_var, (uint32_t)3));
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, 0);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)85));
		ByteU5BU5D_t58506160* L_31 = L_30;
		NullCheck(L_31);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_31, 1);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)4);
		ByteU5BU5D_t58506160* L_32 = L_31;
		NullCheck(L_32);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_32, 2);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)4);
		((X501_t591126674_StaticFields*)X501_t591126674_il2cpp_TypeInfo_var->static_fields)->set_surname_12(L_32);
		ByteU5BU5D_t58506160* L_33 = ((ByteU5BU5D_t58506160*)SZArrayNew(ByteU5BU5D_t58506160_il2cpp_TypeInfo_var, (uint32_t)3));
		NullCheck(L_33);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_33, 0);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)85));
		ByteU5BU5D_t58506160* L_34 = L_33;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, 1);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)4);
		ByteU5BU5D_t58506160* L_35 = L_34;
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, 2);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)42));
		((X501_t591126674_StaticFields*)X501_t591126674_il2cpp_TypeInfo_var->static_fields)->set_givenName_13(L_35);
		ByteU5BU5D_t58506160* L_36 = ((ByteU5BU5D_t58506160*)SZArrayNew(ByteU5BU5D_t58506160_il2cpp_TypeInfo_var, (uint32_t)3));
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, 0);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)85));
		ByteU5BU5D_t58506160* L_37 = L_36;
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, 1);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)4);
		ByteU5BU5D_t58506160* L_38 = L_37;
		NullCheck(L_38);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_38, 2);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)43));
		((X501_t591126674_StaticFields*)X501_t591126674_il2cpp_TypeInfo_var->static_fields)->set_initial_14(L_38);
		return;
	}
}
// System.String Mono.Security.X509.X501::ToString(Mono.Security.ASN1)
extern Il2CppClass* StringBuilder_t3822575854_il2cpp_TypeInfo_var;
extern Il2CppClass* X501_t591126674_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1396;
extern const uint32_t X501_ToString_m1957208426_MetadataUsageId;
extern "C"  String_t* X501_ToString_m1957208426 (Il2CppObject * __this /* static, unused */, ASN1_t1254135647 * ___seq0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X501_ToString_m1957208426_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t3822575854 * V_0 = NULL;
	int32_t V_1 = 0;
	ASN1_t1254135647 * V_2 = NULL;
	{
		StringBuilder_t3822575854 * L_0 = (StringBuilder_t3822575854 *)il2cpp_codegen_object_new(StringBuilder_t3822575854_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m135953004(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_003b;
	}

IL_000d:
	{
		ASN1_t1254135647 * L_1 = ___seq0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		ASN1_t1254135647 * L_3 = ASN1_get_Item_m3112983888(L_1, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		StringBuilder_t3822575854 * L_4 = V_0;
		ASN1_t1254135647 * L_5 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(X501_t591126674_il2cpp_TypeInfo_var);
		X501_AppendEntry_m1741585464(NULL /*static, unused*/, L_4, L_5, (bool)1, /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		ASN1_t1254135647 * L_7 = ___seq0;
		NullCheck(L_7);
		int32_t L_8 = ASN1_get_Count_m3031159196(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_6) >= ((int32_t)((int32_t)((int32_t)L_8-(int32_t)1)))))
		{
			goto IL_0037;
		}
	}
	{
		StringBuilder_t3822575854 * L_9 = V_0;
		NullCheck(L_9);
		StringBuilder_Append_m3898090075(L_9, _stringLiteral1396, /*hidden argument*/NULL);
	}

IL_0037:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_003b:
	{
		int32_t L_11 = V_1;
		ASN1_t1254135647 * L_12 = ___seq0;
		NullCheck(L_12);
		int32_t L_13 = ASN1_get_Count_m3031159196(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_000d;
		}
	}
	{
		StringBuilder_t3822575854 * L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15 = StringBuilder_ToString_m350379841(L_14, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.String Mono.Security.X509.X501::ToString(Mono.Security.ASN1,System.Boolean,System.String,System.Boolean)
extern Il2CppClass* StringBuilder_t3822575854_il2cpp_TypeInfo_var;
extern Il2CppClass* X501_t591126674_il2cpp_TypeInfo_var;
extern const uint32_t X501_ToString_m3368169422_MetadataUsageId;
extern "C"  String_t* X501_ToString_m3368169422 (Il2CppObject * __this /* static, unused */, ASN1_t1254135647 * ___seq0, bool ___reversed1, String_t* ___separator2, bool ___quotes3, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X501_ToString_m3368169422_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t3822575854 * V_0 = NULL;
	int32_t V_1 = 0;
	ASN1_t1254135647 * V_2 = NULL;
	int32_t V_3 = 0;
	ASN1_t1254135647 * V_4 = NULL;
	{
		StringBuilder_t3822575854 * L_0 = (StringBuilder_t3822575854 *)il2cpp_codegen_object_new(StringBuilder_t3822575854_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m135953004(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = ___reversed1;
		if (!L_1)
		{
			goto IL_0049;
		}
	}
	{
		ASN1_t1254135647 * L_2 = ___seq0;
		NullCheck(L_2);
		int32_t L_3 = ASN1_get_Count_m3031159196(L_2, /*hidden argument*/NULL);
		V_1 = ((int32_t)((int32_t)L_3-(int32_t)1));
		goto IL_003d;
	}

IL_001a:
	{
		ASN1_t1254135647 * L_4 = ___seq0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		ASN1_t1254135647 * L_6 = ASN1_get_Item_m3112983888(L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		StringBuilder_t3822575854 * L_7 = V_0;
		ASN1_t1254135647 * L_8 = V_2;
		bool L_9 = ___quotes3;
		IL2CPP_RUNTIME_CLASS_INIT(X501_t591126674_il2cpp_TypeInfo_var);
		X501_AppendEntry_m1741585464(NULL /*static, unused*/, L_7, L_8, L_9, /*hidden argument*/NULL);
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0039;
		}
	}
	{
		StringBuilder_t3822575854 * L_11 = V_0;
		String_t* L_12 = ___separator2;
		NullCheck(L_11);
		StringBuilder_Append_m3898090075(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0039:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)((int32_t)L_13-(int32_t)1));
	}

IL_003d:
	{
		int32_t L_14 = V_1;
		if ((((int32_t)L_14) >= ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		goto IL_0088;
	}

IL_0049:
	{
		V_3 = 0;
		goto IL_007c;
	}

IL_0050:
	{
		ASN1_t1254135647 * L_15 = ___seq0;
		int32_t L_16 = V_3;
		NullCheck(L_15);
		ASN1_t1254135647 * L_17 = ASN1_get_Item_m3112983888(L_15, L_16, /*hidden argument*/NULL);
		V_4 = L_17;
		StringBuilder_t3822575854 * L_18 = V_0;
		ASN1_t1254135647 * L_19 = V_4;
		bool L_20 = ___quotes3;
		IL2CPP_RUNTIME_CLASS_INIT(X501_t591126674_il2cpp_TypeInfo_var);
		X501_AppendEntry_m1741585464(NULL /*static, unused*/, L_18, L_19, L_20, /*hidden argument*/NULL);
		int32_t L_21 = V_3;
		ASN1_t1254135647 * L_22 = ___seq0;
		NullCheck(L_22);
		int32_t L_23 = ASN1_get_Count_m3031159196(L_22, /*hidden argument*/NULL);
		if ((((int32_t)L_21) >= ((int32_t)((int32_t)((int32_t)L_23-(int32_t)1)))))
		{
			goto IL_0078;
		}
	}
	{
		StringBuilder_t3822575854 * L_24 = V_0;
		String_t* L_25 = ___separator2;
		NullCheck(L_24);
		StringBuilder_Append_m3898090075(L_24, L_25, /*hidden argument*/NULL);
	}

IL_0078:
	{
		int32_t L_26 = V_3;
		V_3 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_007c:
	{
		int32_t L_27 = V_3;
		ASN1_t1254135647 * L_28 = ___seq0;
		NullCheck(L_28);
		int32_t L_29 = ASN1_get_Count_m3031159196(L_28, /*hidden argument*/NULL);
		if ((((int32_t)L_27) < ((int32_t)L_29)))
		{
			goto IL_0050;
		}
	}

IL_0088:
	{
		StringBuilder_t3822575854 * L_30 = V_0;
		NullCheck(L_30);
		String_t* L_31 = StringBuilder_ToString_m350379841(L_30, /*hidden argument*/NULL);
		return L_31;
	}
}
// System.Void Mono.Security.X509.X501::AppendEntry(System.Text.StringBuilder,Mono.Security.ASN1,System.Boolean)
extern Il2CppClass* X501_t591126674_il2cpp_TypeInfo_var;
extern Il2CppClass* StringBuilder_t3822575854_il2cpp_TypeInfo_var;
extern Il2CppClass* Encoding_t180559927_il2cpp_TypeInfo_var;
extern Il2CppClass* CharU5BU5D_t3416858730_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3E_t3053238934____U24U24fieldU2D17_12_FieldInfo_var;
extern Il2CppCodeGenString* _stringLiteral2138;
extern Il2CppCodeGenString* _stringLiteral2510;
extern Il2CppCodeGenString* _stringLiteral78615;
extern Il2CppCodeGenString* _stringLiteral66866;
extern Il2CppCodeGenString* _stringLiteral2417;
extern Il2CppCodeGenString* _stringLiteral2634;
extern Il2CppCodeGenString* _stringLiteral3131063450;
extern Il2CppCodeGenString* _stringLiteral67486;
extern Il2CppCodeGenString* _stringLiteral2604557;
extern Il2CppCodeGenString* _stringLiteral2200;
extern Il2CppCodeGenString* _stringLiteral1889233149;
extern Il2CppCodeGenString* _stringLiteral2665;
extern Il2CppCodeGenString* _stringLiteral82242;
extern Il2CppCodeGenString* _stringLiteral2262;
extern Il2CppCodeGenString* _stringLiteral2324;
extern Il2CppCodeGenString* _stringLiteral2425796;
extern Il2CppCodeGenString* _stringLiteral61;
extern Il2CppCodeGenString* _stringLiteral32;
extern Il2CppCodeGenString* _stringLiteral34;
extern Il2CppCodeGenString* _stringLiteral1396;
extern const uint32_t X501_AppendEntry_m1741585464_MetadataUsageId;
extern "C"  void X501_AppendEntry_m1741585464 (Il2CppObject * __this /* static, unused */, StringBuilder_t3822575854 * ___sb0, ASN1_t1254135647 * ___entry1, bool ___quotes2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X501_AppendEntry_m1741585464_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	ASN1_t1254135647 * V_1 = NULL;
	ASN1_t1254135647 * V_2 = NULL;
	ASN1_t1254135647 * V_3 = NULL;
	String_t* V_4 = NULL;
	StringBuilder_t3822575854 * V_5 = NULL;
	int32_t V_6 = 0;
	CharU5BU5D_t3416858730* V_7 = NULL;
	{
		V_0 = 0;
		goto IL_035f;
	}

IL_0007:
	{
		ASN1_t1254135647 * L_0 = ___entry1;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		ASN1_t1254135647 * L_2 = ASN1_get_Item_m3112983888(L_0, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		ASN1_t1254135647 * L_3 = V_1;
		NullCheck(L_3);
		ASN1_t1254135647 * L_4 = ASN1_get_Item_m3112983888(L_3, 1, /*hidden argument*/NULL);
		V_2 = L_4;
		ASN1_t1254135647 * L_5 = V_2;
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_035b;
	}

IL_0022:
	{
		ASN1_t1254135647 * L_6 = V_1;
		NullCheck(L_6);
		ASN1_t1254135647 * L_7 = ASN1_get_Item_m3112983888(L_6, 0, /*hidden argument*/NULL);
		V_3 = L_7;
		ASN1_t1254135647 * L_8 = V_3;
		if (L_8)
		{
			goto IL_0035;
		}
	}
	{
		goto IL_035b;
	}

IL_0035:
	{
		ASN1_t1254135647 * L_9 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(X501_t591126674_il2cpp_TypeInfo_var);
		ByteU5BU5D_t58506160* L_10 = ((X501_t591126674_StaticFields*)X501_t591126674_il2cpp_TypeInfo_var->static_fields)->get_countryName_0();
		NullCheck(L_9);
		bool L_11 = ASN1_CompareValue_m3554721387(L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0056;
		}
	}
	{
		StringBuilder_t3822575854 * L_12 = ___sb0;
		NullCheck(L_12);
		StringBuilder_Append_m3898090075(L_12, _stringLiteral2138, /*hidden argument*/NULL);
		goto IL_0249;
	}

IL_0056:
	{
		ASN1_t1254135647 * L_13 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(X501_t591126674_il2cpp_TypeInfo_var);
		ByteU5BU5D_t58506160* L_14 = ((X501_t591126674_StaticFields*)X501_t591126674_il2cpp_TypeInfo_var->static_fields)->get_organizationName_1();
		NullCheck(L_13);
		bool L_15 = ASN1_CompareValue_m3554721387(L_13, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0077;
		}
	}
	{
		StringBuilder_t3822575854 * L_16 = ___sb0;
		NullCheck(L_16);
		StringBuilder_Append_m3898090075(L_16, _stringLiteral2510, /*hidden argument*/NULL);
		goto IL_0249;
	}

IL_0077:
	{
		ASN1_t1254135647 * L_17 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(X501_t591126674_il2cpp_TypeInfo_var);
		ByteU5BU5D_t58506160* L_18 = ((X501_t591126674_StaticFields*)X501_t591126674_il2cpp_TypeInfo_var->static_fields)->get_organizationalUnitName_2();
		NullCheck(L_17);
		bool L_19 = ASN1_CompareValue_m3554721387(L_17, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0098;
		}
	}
	{
		StringBuilder_t3822575854 * L_20 = ___sb0;
		NullCheck(L_20);
		StringBuilder_Append_m3898090075(L_20, _stringLiteral78615, /*hidden argument*/NULL);
		goto IL_0249;
	}

IL_0098:
	{
		ASN1_t1254135647 * L_21 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(X501_t591126674_il2cpp_TypeInfo_var);
		ByteU5BU5D_t58506160* L_22 = ((X501_t591126674_StaticFields*)X501_t591126674_il2cpp_TypeInfo_var->static_fields)->get_commonName_3();
		NullCheck(L_21);
		bool L_23 = ASN1_CompareValue_m3554721387(L_21, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00b9;
		}
	}
	{
		StringBuilder_t3822575854 * L_24 = ___sb0;
		NullCheck(L_24);
		StringBuilder_Append_m3898090075(L_24, _stringLiteral66866, /*hidden argument*/NULL);
		goto IL_0249;
	}

IL_00b9:
	{
		ASN1_t1254135647 * L_25 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(X501_t591126674_il2cpp_TypeInfo_var);
		ByteU5BU5D_t58506160* L_26 = ((X501_t591126674_StaticFields*)X501_t591126674_il2cpp_TypeInfo_var->static_fields)->get_localityName_4();
		NullCheck(L_25);
		bool L_27 = ASN1_CompareValue_m3554721387(L_25, L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00da;
		}
	}
	{
		StringBuilder_t3822575854 * L_28 = ___sb0;
		NullCheck(L_28);
		StringBuilder_Append_m3898090075(L_28, _stringLiteral2417, /*hidden argument*/NULL);
		goto IL_0249;
	}

IL_00da:
	{
		ASN1_t1254135647 * L_29 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(X501_t591126674_il2cpp_TypeInfo_var);
		ByteU5BU5D_t58506160* L_30 = ((X501_t591126674_StaticFields*)X501_t591126674_il2cpp_TypeInfo_var->static_fields)->get_stateOrProvinceName_5();
		NullCheck(L_29);
		bool L_31 = ASN1_CompareValue_m3554721387(L_29, L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00fb;
		}
	}
	{
		StringBuilder_t3822575854 * L_32 = ___sb0;
		NullCheck(L_32);
		StringBuilder_Append_m3898090075(L_32, _stringLiteral2634, /*hidden argument*/NULL);
		goto IL_0249;
	}

IL_00fb:
	{
		ASN1_t1254135647 * L_33 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(X501_t591126674_il2cpp_TypeInfo_var);
		ByteU5BU5D_t58506160* L_34 = ((X501_t591126674_StaticFields*)X501_t591126674_il2cpp_TypeInfo_var->static_fields)->get_streetAddress_6();
		NullCheck(L_33);
		bool L_35 = ASN1_CompareValue_m3554721387(L_33, L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_011c;
		}
	}
	{
		StringBuilder_t3822575854 * L_36 = ___sb0;
		NullCheck(L_36);
		StringBuilder_Append_m3898090075(L_36, _stringLiteral3131063450, /*hidden argument*/NULL);
		goto IL_0249;
	}

IL_011c:
	{
		ASN1_t1254135647 * L_37 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(X501_t591126674_il2cpp_TypeInfo_var);
		ByteU5BU5D_t58506160* L_38 = ((X501_t591126674_StaticFields*)X501_t591126674_il2cpp_TypeInfo_var->static_fields)->get_domainComponent_7();
		NullCheck(L_37);
		bool L_39 = ASN1_CompareValue_m3554721387(L_37, L_38, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_013d;
		}
	}
	{
		StringBuilder_t3822575854 * L_40 = ___sb0;
		NullCheck(L_40);
		StringBuilder_Append_m3898090075(L_40, _stringLiteral67486, /*hidden argument*/NULL);
		goto IL_0249;
	}

IL_013d:
	{
		ASN1_t1254135647 * L_41 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(X501_t591126674_il2cpp_TypeInfo_var);
		ByteU5BU5D_t58506160* L_42 = ((X501_t591126674_StaticFields*)X501_t591126674_il2cpp_TypeInfo_var->static_fields)->get_userid_8();
		NullCheck(L_41);
		bool L_43 = ASN1_CompareValue_m3554721387(L_41, L_42, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_015e;
		}
	}
	{
		StringBuilder_t3822575854 * L_44 = ___sb0;
		NullCheck(L_44);
		StringBuilder_Append_m3898090075(L_44, _stringLiteral2604557, /*hidden argument*/NULL);
		goto IL_0249;
	}

IL_015e:
	{
		ASN1_t1254135647 * L_45 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(X501_t591126674_il2cpp_TypeInfo_var);
		ByteU5BU5D_t58506160* L_46 = ((X501_t591126674_StaticFields*)X501_t591126674_il2cpp_TypeInfo_var->static_fields)->get_email_9();
		NullCheck(L_45);
		bool L_47 = ASN1_CompareValue_m3554721387(L_45, L_46, /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_017f;
		}
	}
	{
		StringBuilder_t3822575854 * L_48 = ___sb0;
		NullCheck(L_48);
		StringBuilder_Append_m3898090075(L_48, _stringLiteral2200, /*hidden argument*/NULL);
		goto IL_0249;
	}

IL_017f:
	{
		ASN1_t1254135647 * L_49 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(X501_t591126674_il2cpp_TypeInfo_var);
		ByteU5BU5D_t58506160* L_50 = ((X501_t591126674_StaticFields*)X501_t591126674_il2cpp_TypeInfo_var->static_fields)->get_dnQualifier_10();
		NullCheck(L_49);
		bool L_51 = ASN1_CompareValue_m3554721387(L_49, L_50, /*hidden argument*/NULL);
		if (!L_51)
		{
			goto IL_01a0;
		}
	}
	{
		StringBuilder_t3822575854 * L_52 = ___sb0;
		NullCheck(L_52);
		StringBuilder_Append_m3898090075(L_52, _stringLiteral1889233149, /*hidden argument*/NULL);
		goto IL_0249;
	}

IL_01a0:
	{
		ASN1_t1254135647 * L_53 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(X501_t591126674_il2cpp_TypeInfo_var);
		ByteU5BU5D_t58506160* L_54 = ((X501_t591126674_StaticFields*)X501_t591126674_il2cpp_TypeInfo_var->static_fields)->get_title_11();
		NullCheck(L_53);
		bool L_55 = ASN1_CompareValue_m3554721387(L_53, L_54, /*hidden argument*/NULL);
		if (!L_55)
		{
			goto IL_01c1;
		}
	}
	{
		StringBuilder_t3822575854 * L_56 = ___sb0;
		NullCheck(L_56);
		StringBuilder_Append_m3898090075(L_56, _stringLiteral2665, /*hidden argument*/NULL);
		goto IL_0249;
	}

IL_01c1:
	{
		ASN1_t1254135647 * L_57 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(X501_t591126674_il2cpp_TypeInfo_var);
		ByteU5BU5D_t58506160* L_58 = ((X501_t591126674_StaticFields*)X501_t591126674_il2cpp_TypeInfo_var->static_fields)->get_surname_12();
		NullCheck(L_57);
		bool L_59 = ASN1_CompareValue_m3554721387(L_57, L_58, /*hidden argument*/NULL);
		if (!L_59)
		{
			goto IL_01e2;
		}
	}
	{
		StringBuilder_t3822575854 * L_60 = ___sb0;
		NullCheck(L_60);
		StringBuilder_Append_m3898090075(L_60, _stringLiteral82242, /*hidden argument*/NULL);
		goto IL_0249;
	}

IL_01e2:
	{
		ASN1_t1254135647 * L_61 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(X501_t591126674_il2cpp_TypeInfo_var);
		ByteU5BU5D_t58506160* L_62 = ((X501_t591126674_StaticFields*)X501_t591126674_il2cpp_TypeInfo_var->static_fields)->get_givenName_13();
		NullCheck(L_61);
		bool L_63 = ASN1_CompareValue_m3554721387(L_61, L_62, /*hidden argument*/NULL);
		if (!L_63)
		{
			goto IL_0203;
		}
	}
	{
		StringBuilder_t3822575854 * L_64 = ___sb0;
		NullCheck(L_64);
		StringBuilder_Append_m3898090075(L_64, _stringLiteral2262, /*hidden argument*/NULL);
		goto IL_0249;
	}

IL_0203:
	{
		ASN1_t1254135647 * L_65 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(X501_t591126674_il2cpp_TypeInfo_var);
		ByteU5BU5D_t58506160* L_66 = ((X501_t591126674_StaticFields*)X501_t591126674_il2cpp_TypeInfo_var->static_fields)->get_initial_14();
		NullCheck(L_65);
		bool L_67 = ASN1_CompareValue_m3554721387(L_65, L_66, /*hidden argument*/NULL);
		if (!L_67)
		{
			goto IL_0224;
		}
	}
	{
		StringBuilder_t3822575854 * L_68 = ___sb0;
		NullCheck(L_68);
		StringBuilder_Append_m3898090075(L_68, _stringLiteral2324, /*hidden argument*/NULL);
		goto IL_0249;
	}

IL_0224:
	{
		StringBuilder_t3822575854 * L_69 = ___sb0;
		NullCheck(L_69);
		StringBuilder_Append_m3898090075(L_69, _stringLiteral2425796, /*hidden argument*/NULL);
		StringBuilder_t3822575854 * L_70 = ___sb0;
		ASN1_t1254135647 * L_71 = V_3;
		String_t* L_72 = ASN1Convert_ToOid_m1387992843(NULL /*static, unused*/, L_71, /*hidden argument*/NULL);
		NullCheck(L_70);
		StringBuilder_Append_m3898090075(L_70, L_72, /*hidden argument*/NULL);
		StringBuilder_t3822575854 * L_73 = ___sb0;
		NullCheck(L_73);
		StringBuilder_Append_m3898090075(L_73, _stringLiteral61, /*hidden argument*/NULL);
	}

IL_0249:
	{
		V_4 = (String_t*)NULL;
		ASN1_t1254135647 * L_74 = V_2;
		NullCheck(L_74);
		uint8_t L_75 = ASN1_get_Tag_m1269404867(L_74, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_75) == ((uint32_t)((int32_t)30)))))
		{
			goto IL_029d;
		}
	}
	{
		StringBuilder_t3822575854 * L_76 = (StringBuilder_t3822575854 *)il2cpp_codegen_object_new(StringBuilder_t3822575854_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m135953004(L_76, /*hidden argument*/NULL);
		V_5 = L_76;
		V_6 = 1;
		goto IL_0280;
	}

IL_0268:
	{
		StringBuilder_t3822575854 * L_77 = V_5;
		ASN1_t1254135647 * L_78 = V_2;
		NullCheck(L_78);
		ByteU5BU5D_t58506160* L_79 = ASN1_get_Value_m4232529916(L_78, /*hidden argument*/NULL);
		int32_t L_80 = V_6;
		NullCheck(L_79);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_79, L_80);
		int32_t L_81 = L_80;
		NullCheck(L_77);
		StringBuilder_Append_m2143093878(L_77, (((int32_t)((uint16_t)((L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81)))))), /*hidden argument*/NULL);
		int32_t L_82 = V_6;
		V_6 = ((int32_t)((int32_t)L_82+(int32_t)2));
	}

IL_0280:
	{
		int32_t L_83 = V_6;
		ASN1_t1254135647 * L_84 = V_2;
		NullCheck(L_84);
		ByteU5BU5D_t58506160* L_85 = ASN1_get_Value_m4232529916(L_84, /*hidden argument*/NULL);
		NullCheck(L_85);
		if ((((int32_t)L_83) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_85)->max_length)))))))
		{
			goto IL_0268;
		}
	}
	{
		StringBuilder_t3822575854 * L_86 = V_5;
		NullCheck(L_86);
		String_t* L_87 = StringBuilder_ToString_m350379841(L_86, /*hidden argument*/NULL);
		V_4 = L_87;
		goto IL_0338;
	}

IL_029d:
	{
		ASN1_t1254135647 * L_88 = V_2;
		NullCheck(L_88);
		uint8_t L_89 = ASN1_get_Tag_m1269404867(L_88, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_89) == ((uint32_t)((int32_t)20)))))
		{
			goto IL_02c1;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t180559927_il2cpp_TypeInfo_var);
		Encoding_t180559927 * L_90 = Encoding_get_UTF7_m619557558(NULL /*static, unused*/, /*hidden argument*/NULL);
		ASN1_t1254135647 * L_91 = V_2;
		NullCheck(L_91);
		ByteU5BU5D_t58506160* L_92 = ASN1_get_Value_m4232529916(L_91, /*hidden argument*/NULL);
		NullCheck(L_90);
		String_t* L_93 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t58506160* >::Invoke(22 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_90, L_92);
		V_4 = L_93;
		goto IL_02d3;
	}

IL_02c1:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t180559927_il2cpp_TypeInfo_var);
		Encoding_t180559927 * L_94 = Encoding_get_UTF8_m619558519(NULL /*static, unused*/, /*hidden argument*/NULL);
		ASN1_t1254135647 * L_95 = V_2;
		NullCheck(L_95);
		ByteU5BU5D_t58506160* L_96 = ASN1_get_Value_m4232529916(L_95, /*hidden argument*/NULL);
		NullCheck(L_94);
		String_t* L_97 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t58506160* >::Invoke(22 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_94, L_96);
		V_4 = L_97;
	}

IL_02d3:
	{
		CharU5BU5D_t3416858730* L_98 = ((CharU5BU5D_t3416858730*)SZArrayNew(CharU5BU5D_t3416858730_il2cpp_TypeInfo_var, (uint32_t)7));
		RuntimeHelpers_InitializeArray_m2058365049(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_98, LoadFieldToken(U3CPrivateImplementationDetailsU3E_t3053238934____U24U24fieldU2D17_12_FieldInfo_var), /*hidden argument*/NULL);
		V_7 = L_98;
		bool L_99 = ___quotes2;
		if (!L_99)
		{
			goto IL_0338;
		}
	}
	{
		String_t* L_100 = V_4;
		CharU5BU5D_t3416858730* L_101 = V_7;
		String_t* L_102 = V_4;
		NullCheck(L_102);
		int32_t L_103 = String_get_Length_m2979997331(L_102, /*hidden argument*/NULL);
		NullCheck(L_100);
		int32_t L_104 = String_IndexOfAny_m472916468(L_100, L_101, 0, L_103, /*hidden argument*/NULL);
		if ((((int32_t)L_104) > ((int32_t)0)))
		{
			goto IL_0325;
		}
	}
	{
		String_t* L_105 = V_4;
		NullCheck(L_105);
		bool L_106 = String_StartsWith_m1500793453(L_105, _stringLiteral32, /*hidden argument*/NULL);
		if (L_106)
		{
			goto IL_0325;
		}
	}
	{
		String_t* L_107 = V_4;
		NullCheck(L_107);
		bool L_108 = String_EndsWith_m2265568550(L_107, _stringLiteral32, /*hidden argument*/NULL);
		if (!L_108)
		{
			goto IL_0338;
		}
	}

IL_0325:
	{
		String_t* L_109 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_110 = String_Concat_m1825781833(NULL /*static, unused*/, _stringLiteral34, L_109, _stringLiteral34, /*hidden argument*/NULL);
		V_4 = L_110;
	}

IL_0338:
	{
		StringBuilder_t3822575854 * L_111 = ___sb0;
		String_t* L_112 = V_4;
		NullCheck(L_111);
		StringBuilder_Append_m3898090075(L_111, L_112, /*hidden argument*/NULL);
		int32_t L_113 = V_0;
		ASN1_t1254135647 * L_114 = ___entry1;
		NullCheck(L_114);
		int32_t L_115 = ASN1_get_Count_m3031159196(L_114, /*hidden argument*/NULL);
		if ((((int32_t)L_113) >= ((int32_t)((int32_t)((int32_t)L_115-(int32_t)1)))))
		{
			goto IL_035b;
		}
	}
	{
		StringBuilder_t3822575854 * L_116 = ___sb0;
		NullCheck(L_116);
		StringBuilder_Append_m3898090075(L_116, _stringLiteral1396, /*hidden argument*/NULL);
	}

IL_035b:
	{
		int32_t L_117 = V_0;
		V_0 = ((int32_t)((int32_t)L_117+(int32_t)1));
	}

IL_035f:
	{
		int32_t L_118 = V_0;
		ASN1_t1254135647 * L_119 = ___entry1;
		NullCheck(L_119);
		int32_t L_120 = ASN1_get_Count_m3031159196(L_119, /*hidden argument*/NULL);
		if ((((int32_t)L_118) < ((int32_t)L_120)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Mono.Security.X509.X509Certificate::.ctor(System.Byte[])
extern Il2CppClass* X509Certificate_t273828613_il2cpp_TypeInfo_var;
extern Il2CppClass* Exception_t1967233988_il2cpp_TypeInfo_var;
extern Il2CppClass* CryptographicException_t3718270561_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4105360759;
extern const uint32_t X509Certificate__ctor_m3683615677_MetadataUsageId;
extern "C"  void X509Certificate__ctor_m3683615677 (X509Certificate_t273828613 * __this, ByteU5BU5D_t58506160* ___data0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate__ctor_m3683615677_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t1967233988 * V_0 = NULL;
	Exception_t1967233988 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1967233988 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t58506160* L_0 = ___data0;
		if (!L_0)
		{
			goto IL_004a;
		}
	}
	{
		ByteU5BU5D_t58506160* L_1 = ___data0;
		NullCheck(L_1);
		if ((((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_1)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_0043;
		}
	}
	{
		ByteU5BU5D_t58506160* L_2 = ___data0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		if ((((int32_t)((L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3)))) == ((int32_t)((int32_t)48))))
		{
			goto IL_0043;
		}
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		ByteU5BU5D_t58506160* L_4 = ___data0;
		IL2CPP_RUNTIME_CLASS_INIT(X509Certificate_t273828613_il2cpp_TypeInfo_var);
		ByteU5BU5D_t58506160* L_5 = X509Certificate_PEM_m3879103085(NULL /*static, unused*/, _stringLiteral4105360759, L_4, /*hidden argument*/NULL);
		___data0 = L_5;
		goto IL_0043;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t1967233988 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t1967233988_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0031;
		throw e;
	}

CATCH_0031:
	{ // begin catch(System.Exception)
		{
			V_0 = ((Exception_t1967233988 *)__exception_local);
			IL2CPP_RUNTIME_CLASS_INIT(X509Certificate_t273828613_il2cpp_TypeInfo_var);
			String_t* L_6 = ((X509Certificate_t273828613_StaticFields*)X509Certificate_t273828613_il2cpp_TypeInfo_var->static_fields)->get_encoding_error_22();
			Exception_t1967233988 * L_7 = V_0;
			CryptographicException_t3718270561 * L_8 = (CryptographicException_t3718270561 *)il2cpp_codegen_object_new(CryptographicException_t3718270561_il2cpp_TypeInfo_var);
			CryptographicException__ctor_m2542276749(L_8, L_6, L_7, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_8);
		}

IL_003e:
		{
			goto IL_0043;
		}
	} // end catch (depth: 1)

IL_0043:
	{
		ByteU5BU5D_t58506160* L_9 = ___data0;
		X509Certificate_Parse_m1221896268(__this, L_9, /*hidden argument*/NULL);
	}

IL_004a:
	{
		return;
	}
}
// System.Void Mono.Security.X509.X509Certificate::.cctor()
extern Il2CppClass* X509Certificate_t273828613_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2770949631;
extern const uint32_t X509Certificate__cctor_m3957890465_MetadataUsageId;
extern "C"  void X509Certificate__cctor_m3957890465 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate__cctor_m3957890465_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = Locale_GetText_m4086560262(NULL /*static, unused*/, _stringLiteral2770949631, /*hidden argument*/NULL);
		((X509Certificate_t273828613_StaticFields*)X509Certificate_t273828613_il2cpp_TypeInfo_var->static_fields)->set_encoding_error_22(L_0);
		return;
	}
}
// System.Void Mono.Security.X509.X509Certificate::Parse(System.Byte[])
extern Il2CppClass* ASN1_t1254135647_il2cpp_TypeInfo_var;
extern Il2CppClass* X509Certificate_t273828613_il2cpp_TypeInfo_var;
extern Il2CppClass* CryptographicException_t3718270561_il2cpp_TypeInfo_var;
extern Il2CppClass* X501_t591126674_il2cpp_TypeInfo_var;
extern Il2CppClass* ByteU5BU5D_t58506160_il2cpp_TypeInfo_var;
extern Il2CppClass* X509ExtensionCollection_t3528692651_il2cpp_TypeInfo_var;
extern Il2CppClass* Exception_t1967233988_il2cpp_TypeInfo_var;
extern const uint32_t X509Certificate_Parse_m1221896268_MetadataUsageId;
extern "C"  void X509Certificate_Parse_m1221896268 (X509Certificate_t273828613 * __this, ByteU5BU5D_t58506160* ___data0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_Parse_m1221896268_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ASN1_t1254135647 * V_0 = NULL;
	int32_t V_1 = 0;
	ASN1_t1254135647 * V_2 = NULL;
	ASN1_t1254135647 * V_3 = NULL;
	ASN1_t1254135647 * V_4 = NULL;
	ASN1_t1254135647 * V_5 = NULL;
	ASN1_t1254135647 * V_6 = NULL;
	ASN1_t1254135647 * V_7 = NULL;
	ASN1_t1254135647 * V_8 = NULL;
	ASN1_t1254135647 * V_9 = NULL;
	ASN1_t1254135647 * V_10 = NULL;
	ASN1_t1254135647 * V_11 = NULL;
	int32_t V_12 = 0;
	ByteU5BU5D_t58506160* V_13 = NULL;
	ASN1_t1254135647 * V_14 = NULL;
	ASN1_t1254135647 * V_15 = NULL;
	ASN1_t1254135647 * V_16 = NULL;
	Exception_t1967233988 * V_17 = NULL;
	Exception_t1967233988 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1967233988 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	X509Certificate_t273828613 * G_B11_0 = NULL;
	X509Certificate_t273828613 * G_B10_0 = NULL;
	ByteU5BU5D_t58506160* G_B12_0 = NULL;
	X509Certificate_t273828613 * G_B12_1 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			ByteU5BU5D_t58506160* L_0 = ___data0;
			ASN1_t1254135647 * L_1 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
			ASN1__ctor_m2555733065(L_1, L_0, /*hidden argument*/NULL);
			__this->set_decoder_0(L_1);
			ASN1_t1254135647 * L_2 = __this->get_decoder_0();
			NullCheck(L_2);
			uint8_t L_3 = ASN1_get_Tag_m1269404867(L_2, /*hidden argument*/NULL);
			if ((((int32_t)L_3) == ((int32_t)((int32_t)48))))
			{
				goto IL_0029;
			}
		}

IL_001e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(X509Certificate_t273828613_il2cpp_TypeInfo_var);
			String_t* L_4 = ((X509Certificate_t273828613_StaticFields*)X509Certificate_t273828613_il2cpp_TypeInfo_var->static_fields)->get_encoding_error_22();
			CryptographicException_t3718270561 * L_5 = (CryptographicException_t3718270561 *)il2cpp_codegen_object_new(CryptographicException_t3718270561_il2cpp_TypeInfo_var);
			CryptographicException__ctor_m2400722889(L_5, L_4, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_5);
		}

IL_0029:
		{
			ASN1_t1254135647 * L_6 = __this->get_decoder_0();
			NullCheck(L_6);
			ASN1_t1254135647 * L_7 = ASN1_get_Item_m3112983888(L_6, 0, /*hidden argument*/NULL);
			NullCheck(L_7);
			uint8_t L_8 = ASN1_get_Tag_m1269404867(L_7, /*hidden argument*/NULL);
			if ((((int32_t)L_8) == ((int32_t)((int32_t)48))))
			{
				goto IL_004c;
			}
		}

IL_0041:
		{
			IL2CPP_RUNTIME_CLASS_INIT(X509Certificate_t273828613_il2cpp_TypeInfo_var);
			String_t* L_9 = ((X509Certificate_t273828613_StaticFields*)X509Certificate_t273828613_il2cpp_TypeInfo_var->static_fields)->get_encoding_error_22();
			CryptographicException_t3718270561 * L_10 = (CryptographicException_t3718270561 *)il2cpp_codegen_object_new(CryptographicException_t3718270561_il2cpp_TypeInfo_var);
			CryptographicException__ctor_m2400722889(L_10, L_9, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_10);
		}

IL_004c:
		{
			ASN1_t1254135647 * L_11 = __this->get_decoder_0();
			NullCheck(L_11);
			ASN1_t1254135647 * L_12 = ASN1_get_Item_m3112983888(L_11, 0, /*hidden argument*/NULL);
			V_0 = L_12;
			V_1 = 0;
			ASN1_t1254135647 * L_13 = __this->get_decoder_0();
			NullCheck(L_13);
			ASN1_t1254135647 * L_14 = ASN1_get_Item_m3112983888(L_13, 0, /*hidden argument*/NULL);
			int32_t L_15 = V_1;
			NullCheck(L_14);
			ASN1_t1254135647 * L_16 = ASN1_get_Item_m3112983888(L_14, L_15, /*hidden argument*/NULL);
			V_2 = L_16;
			__this->set_version_17(1);
			ASN1_t1254135647 * L_17 = V_2;
			NullCheck(L_17);
			uint8_t L_18 = ASN1_get_Tag_m1269404867(L_17, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)160)))))
			{
				goto IL_00b0;
			}
		}

IL_0085:
		{
			ASN1_t1254135647 * L_19 = V_2;
			NullCheck(L_19);
			int32_t L_20 = ASN1_get_Count_m3031159196(L_19, /*hidden argument*/NULL);
			if ((((int32_t)L_20) <= ((int32_t)0)))
			{
				goto IL_00b0;
			}
		}

IL_0091:
		{
			int32_t L_21 = __this->get_version_17();
			ASN1_t1254135647 * L_22 = V_2;
			NullCheck(L_22);
			ASN1_t1254135647 * L_23 = ASN1_get_Item_m3112983888(L_22, 0, /*hidden argument*/NULL);
			NullCheck(L_23);
			ByteU5BU5D_t58506160* L_24 = ASN1_get_Value_m4232529916(L_23, /*hidden argument*/NULL);
			NullCheck(L_24);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 0);
			int32_t L_25 = 0;
			__this->set_version_17(((int32_t)((int32_t)L_21+(int32_t)((L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25))))));
			int32_t L_26 = V_1;
			V_1 = ((int32_t)((int32_t)L_26+(int32_t)1));
		}

IL_00b0:
		{
			ASN1_t1254135647 * L_27 = __this->get_decoder_0();
			NullCheck(L_27);
			ASN1_t1254135647 * L_28 = ASN1_get_Item_m3112983888(L_27, 0, /*hidden argument*/NULL);
			int32_t L_29 = V_1;
			int32_t L_30 = L_29;
			V_1 = ((int32_t)((int32_t)L_30+(int32_t)1));
			NullCheck(L_28);
			ASN1_t1254135647 * L_31 = ASN1_get_Item_m3112983888(L_28, L_30, /*hidden argument*/NULL);
			V_3 = L_31;
			ASN1_t1254135647 * L_32 = V_3;
			NullCheck(L_32);
			uint8_t L_33 = ASN1_get_Tag_m1269404867(L_32, /*hidden argument*/NULL);
			if ((((int32_t)L_33) == ((int32_t)2)))
			{
				goto IL_00de;
			}
		}

IL_00d3:
		{
			IL2CPP_RUNTIME_CLASS_INIT(X509Certificate_t273828613_il2cpp_TypeInfo_var);
			String_t* L_34 = ((X509Certificate_t273828613_StaticFields*)X509Certificate_t273828613_il2cpp_TypeInfo_var->static_fields)->get_encoding_error_22();
			CryptographicException_t3718270561 * L_35 = (CryptographicException_t3718270561 *)il2cpp_codegen_object_new(CryptographicException_t3718270561_il2cpp_TypeInfo_var);
			CryptographicException__ctor_m2400722889(L_35, L_34, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_35);
		}

IL_00de:
		{
			ASN1_t1254135647 * L_36 = V_3;
			NullCheck(L_36);
			ByteU5BU5D_t58506160* L_37 = ASN1_get_Value_m4232529916(L_36, /*hidden argument*/NULL);
			__this->set_serialnumber_18(L_37);
			ByteU5BU5D_t58506160* L_38 = __this->get_serialnumber_18();
			ByteU5BU5D_t58506160* L_39 = __this->get_serialnumber_18();
			NullCheck(L_39);
			Array_Reverse_m3064094494(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_38, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_39)->max_length)))), /*hidden argument*/NULL);
			int32_t L_40 = V_1;
			V_1 = ((int32_t)((int32_t)L_40+(int32_t)1));
			ASN1_t1254135647 * L_41 = V_0;
			int32_t L_42 = V_1;
			int32_t L_43 = L_42;
			V_1 = ((int32_t)((int32_t)L_43+(int32_t)1));
			NullCheck(L_41);
			ASN1_t1254135647 * L_44 = ASN1_Element_m2786077841(L_41, L_43, ((int32_t)48), /*hidden argument*/NULL);
			__this->set_issuer_4(L_44);
			ASN1_t1254135647 * L_45 = __this->get_issuer_4();
			IL2CPP_RUNTIME_CLASS_INIT(X501_t591126674_il2cpp_TypeInfo_var);
			String_t* L_46 = X501_ToString_m1957208426(NULL /*static, unused*/, L_45, /*hidden argument*/NULL);
			__this->set_m_issuername_5(L_46);
			ASN1_t1254135647 * L_47 = V_0;
			int32_t L_48 = V_1;
			int32_t L_49 = L_48;
			V_1 = ((int32_t)((int32_t)L_49+(int32_t)1));
			NullCheck(L_47);
			ASN1_t1254135647 * L_50 = ASN1_Element_m2786077841(L_47, L_49, ((int32_t)48), /*hidden argument*/NULL);
			V_4 = L_50;
			ASN1_t1254135647 * L_51 = V_4;
			NullCheck(L_51);
			ASN1_t1254135647 * L_52 = ASN1_get_Item_m3112983888(L_51, 0, /*hidden argument*/NULL);
			V_5 = L_52;
			ASN1_t1254135647 * L_53 = V_5;
			DateTime_t339033936  L_54 = ASN1Convert_ToDateTime_m864003254(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
			__this->set_m_from_2(L_54);
			ASN1_t1254135647 * L_55 = V_4;
			NullCheck(L_55);
			ASN1_t1254135647 * L_56 = ASN1_get_Item_m3112983888(L_55, 1, /*hidden argument*/NULL);
			V_6 = L_56;
			ASN1_t1254135647 * L_57 = V_6;
			DateTime_t339033936  L_58 = ASN1Convert_ToDateTime_m864003254(NULL /*static, unused*/, L_57, /*hidden argument*/NULL);
			__this->set_m_until_3(L_58);
			ASN1_t1254135647 * L_59 = V_0;
			int32_t L_60 = V_1;
			int32_t L_61 = L_60;
			V_1 = ((int32_t)((int32_t)L_61+(int32_t)1));
			NullCheck(L_59);
			ASN1_t1254135647 * L_62 = ASN1_Element_m2786077841(L_59, L_61, ((int32_t)48), /*hidden argument*/NULL);
			__this->set_subject_8(L_62);
			ASN1_t1254135647 * L_63 = __this->get_subject_8();
			String_t* L_64 = X501_ToString_m1957208426(NULL /*static, unused*/, L_63, /*hidden argument*/NULL);
			__this->set_m_subject_9(L_64);
			ASN1_t1254135647 * L_65 = V_0;
			int32_t L_66 = V_1;
			int32_t L_67 = L_66;
			V_1 = ((int32_t)((int32_t)L_67+(int32_t)1));
			NullCheck(L_65);
			ASN1_t1254135647 * L_68 = ASN1_Element_m2786077841(L_65, L_67, ((int32_t)48), /*hidden argument*/NULL);
			V_7 = L_68;
			ASN1_t1254135647 * L_69 = V_7;
			NullCheck(L_69);
			ASN1_t1254135647 * L_70 = ASN1_Element_m2786077841(L_69, 0, ((int32_t)48), /*hidden argument*/NULL);
			V_8 = L_70;
			ASN1_t1254135647 * L_71 = V_8;
			NullCheck(L_71);
			ASN1_t1254135647 * L_72 = ASN1_Element_m2786077841(L_71, 0, 6, /*hidden argument*/NULL);
			V_9 = L_72;
			ASN1_t1254135647 * L_73 = V_9;
			String_t* L_74 = ASN1Convert_ToOid_m1387992843(NULL /*static, unused*/, L_73, /*hidden argument*/NULL);
			__this->set_m_keyalgo_6(L_74);
			ASN1_t1254135647 * L_75 = V_8;
			NullCheck(L_75);
			ASN1_t1254135647 * L_76 = ASN1_get_Item_m3112983888(L_75, 1, /*hidden argument*/NULL);
			V_10 = L_76;
			ASN1_t1254135647 * L_77 = V_8;
			NullCheck(L_77);
			int32_t L_78 = ASN1_get_Count_m3031159196(L_77, /*hidden argument*/NULL);
			G_B10_0 = __this;
			if ((((int32_t)L_78) <= ((int32_t)1)))
			{
				G_B11_0 = __this;
				goto IL_01de;
			}
		}

IL_01d2:
		{
			ASN1_t1254135647 * L_79 = V_10;
			NullCheck(L_79);
			ByteU5BU5D_t58506160* L_80 = VirtFuncInvoker0< ByteU5BU5D_t58506160* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_79);
			G_B12_0 = L_80;
			G_B12_1 = G_B10_0;
			goto IL_01df;
		}

IL_01de:
		{
			G_B12_0 = ((ByteU5BU5D_t58506160*)(NULL));
			G_B12_1 = G_B11_0;
		}

IL_01df:
		{
			NullCheck(G_B12_1);
			G_B12_1->set_m_keyalgoparams_7(G_B12_0);
			ASN1_t1254135647 * L_81 = V_7;
			NullCheck(L_81);
			ASN1_t1254135647 * L_82 = ASN1_Element_m2786077841(L_81, 1, 3, /*hidden argument*/NULL);
			V_11 = L_82;
			ASN1_t1254135647 * L_83 = V_11;
			NullCheck(L_83);
			int32_t L_84 = ASN1_get_Length_m1785136283(L_83, /*hidden argument*/NULL);
			V_12 = ((int32_t)((int32_t)L_84-(int32_t)1));
			int32_t L_85 = V_12;
			__this->set_m_publickey_10(((ByteU5BU5D_t58506160*)SZArrayNew(ByteU5BU5D_t58506160_il2cpp_TypeInfo_var, (uint32_t)L_85)));
			ASN1_t1254135647 * L_86 = V_11;
			NullCheck(L_86);
			ByteU5BU5D_t58506160* L_87 = ASN1_get_Value_m4232529916(L_86, /*hidden argument*/NULL);
			ByteU5BU5D_t58506160* L_88 = __this->get_m_publickey_10();
			int32_t L_89 = V_12;
			Buffer_BlockCopy_m1580643184(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_87, 1, (Il2CppArray *)(Il2CppArray *)L_88, 0, L_89, /*hidden argument*/NULL);
			ASN1_t1254135647 * L_90 = __this->get_decoder_0();
			NullCheck(L_90);
			ASN1_t1254135647 * L_91 = ASN1_get_Item_m3112983888(L_90, 2, /*hidden argument*/NULL);
			NullCheck(L_91);
			ByteU5BU5D_t58506160* L_92 = ASN1_get_Value_m4232529916(L_91, /*hidden argument*/NULL);
			V_13 = L_92;
			ByteU5BU5D_t58506160* L_93 = V_13;
			NullCheck(L_93);
			__this->set_signature_11(((ByteU5BU5D_t58506160*)SZArrayNew(ByteU5BU5D_t58506160_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_93)->max_length))))-(int32_t)1)))));
			ByteU5BU5D_t58506160* L_94 = V_13;
			ByteU5BU5D_t58506160* L_95 = __this->get_signature_11();
			ByteU5BU5D_t58506160* L_96 = __this->get_signature_11();
			NullCheck(L_96);
			Buffer_BlockCopy_m1580643184(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_94, 1, (Il2CppArray *)(Il2CppArray *)L_95, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_96)->max_length)))), /*hidden argument*/NULL);
			ASN1_t1254135647 * L_97 = __this->get_decoder_0();
			NullCheck(L_97);
			ASN1_t1254135647 * L_98 = ASN1_get_Item_m3112983888(L_97, 1, /*hidden argument*/NULL);
			V_8 = L_98;
			ASN1_t1254135647 * L_99 = V_8;
			NullCheck(L_99);
			ASN1_t1254135647 * L_100 = ASN1_Element_m2786077841(L_99, 0, 6, /*hidden argument*/NULL);
			V_9 = L_100;
			ASN1_t1254135647 * L_101 = V_9;
			String_t* L_102 = ASN1Convert_ToOid_m1387992843(NULL /*static, unused*/, L_101, /*hidden argument*/NULL);
			__this->set_m_signaturealgo_12(L_102);
			ASN1_t1254135647 * L_103 = V_8;
			NullCheck(L_103);
			ASN1_t1254135647 * L_104 = ASN1_get_Item_m3112983888(L_103, 1, /*hidden argument*/NULL);
			V_10 = L_104;
			ASN1_t1254135647 * L_105 = V_10;
			if (!L_105)
			{
				goto IL_02a1;
			}
		}

IL_028f:
		{
			ASN1_t1254135647 * L_106 = V_10;
			NullCheck(L_106);
			ByteU5BU5D_t58506160* L_107 = VirtFuncInvoker0< ByteU5BU5D_t58506160* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_106);
			__this->set_m_signaturealgoparams_13(L_107);
			goto IL_02a8;
		}

IL_02a1:
		{
			__this->set_m_signaturealgoparams_13((ByteU5BU5D_t58506160*)NULL);
		}

IL_02a8:
		{
			ASN1_t1254135647 * L_108 = V_0;
			int32_t L_109 = V_1;
			NullCheck(L_108);
			ASN1_t1254135647 * L_110 = ASN1_Element_m2786077841(L_108, L_109, ((int32_t)129), /*hidden argument*/NULL);
			V_14 = L_110;
			ASN1_t1254135647 * L_111 = V_14;
			if (!L_111)
			{
				goto IL_02ce;
			}
		}

IL_02bd:
		{
			int32_t L_112 = V_1;
			V_1 = ((int32_t)((int32_t)L_112+(int32_t)1));
			ASN1_t1254135647 * L_113 = V_14;
			NullCheck(L_113);
			ByteU5BU5D_t58506160* L_114 = ASN1_get_Value_m4232529916(L_113, /*hidden argument*/NULL);
			__this->set_issuerUniqueID_19(L_114);
		}

IL_02ce:
		{
			ASN1_t1254135647 * L_115 = V_0;
			int32_t L_116 = V_1;
			NullCheck(L_115);
			ASN1_t1254135647 * L_117 = ASN1_Element_m2786077841(L_115, L_116, ((int32_t)130), /*hidden argument*/NULL);
			V_15 = L_117;
			ASN1_t1254135647 * L_118 = V_15;
			if (!L_118)
			{
				goto IL_02f4;
			}
		}

IL_02e3:
		{
			int32_t L_119 = V_1;
			V_1 = ((int32_t)((int32_t)L_119+(int32_t)1));
			ASN1_t1254135647 * L_120 = V_15;
			NullCheck(L_120);
			ByteU5BU5D_t58506160* L_121 = ASN1_get_Value_m4232529916(L_120, /*hidden argument*/NULL);
			__this->set_subjectUniqueID_20(L_121);
		}

IL_02f4:
		{
			ASN1_t1254135647 * L_122 = V_0;
			int32_t L_123 = V_1;
			NullCheck(L_122);
			ASN1_t1254135647 * L_124 = ASN1_Element_m2786077841(L_122, L_123, ((int32_t)163), /*hidden argument*/NULL);
			V_16 = L_124;
			ASN1_t1254135647 * L_125 = V_16;
			if (!L_125)
			{
				goto IL_032e;
			}
		}

IL_0309:
		{
			ASN1_t1254135647 * L_126 = V_16;
			NullCheck(L_126);
			int32_t L_127 = ASN1_get_Count_m3031159196(L_126, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_127) == ((uint32_t)1))))
			{
				goto IL_032e;
			}
		}

IL_0316:
		{
			ASN1_t1254135647 * L_128 = V_16;
			NullCheck(L_128);
			ASN1_t1254135647 * L_129 = ASN1_get_Item_m3112983888(L_128, 0, /*hidden argument*/NULL);
			X509ExtensionCollection_t3528692651 * L_130 = (X509ExtensionCollection_t3528692651 *)il2cpp_codegen_object_new(X509ExtensionCollection_t3528692651_il2cpp_TypeInfo_var);
			X509ExtensionCollection__ctor_m2115523054(L_130, L_129, /*hidden argument*/NULL);
			__this->set_extensions_21(L_130);
			goto IL_033a;
		}

IL_032e:
		{
			X509ExtensionCollection_t3528692651 * L_131 = (X509ExtensionCollection_t3528692651 *)il2cpp_codegen_object_new(X509ExtensionCollection_t3528692651_il2cpp_TypeInfo_var);
			X509ExtensionCollection__ctor_m2115523054(L_131, (ASN1_t1254135647 *)NULL, /*hidden argument*/NULL);
			__this->set_extensions_21(L_131);
		}

IL_033a:
		{
			ByteU5BU5D_t58506160* L_132 = ___data0;
			NullCheck((Il2CppArray *)(Il2CppArray *)L_132);
			Il2CppObject * L_133 = VirtFuncInvoker0< Il2CppObject * >::Invoke(5 /* System.Object System.Array::Clone() */, (Il2CppArray *)(Il2CppArray *)L_132);
			__this->set_m_encodedcert_1(((ByteU5BU5D_t58506160*)Castclass(L_133, ByteU5BU5D_t58506160_il2cpp_TypeInfo_var)));
			goto IL_0364;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t1967233988 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t1967233988_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0350;
		throw e;
	}

CATCH_0350:
	{ // begin catch(System.Exception)
		{
			V_17 = ((Exception_t1967233988 *)__exception_local);
			IL2CPP_RUNTIME_CLASS_INIT(X509Certificate_t273828613_il2cpp_TypeInfo_var);
			String_t* L_134 = ((X509Certificate_t273828613_StaticFields*)X509Certificate_t273828613_il2cpp_TypeInfo_var->static_fields)->get_encoding_error_22();
			Exception_t1967233988 * L_135 = V_17;
			CryptographicException_t3718270561 * L_136 = (CryptographicException_t3718270561 *)il2cpp_codegen_object_new(CryptographicException_t3718270561_il2cpp_TypeInfo_var);
			CryptographicException__ctor_m2542276749(L_136, L_134, L_135, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_136);
		}

IL_035f:
		{
			goto IL_0364;
		}
	} // end catch (depth: 1)

IL_0364:
	{
		return;
	}
}
// System.Byte[] Mono.Security.X509.X509Certificate::GetUnsignedBigInteger(System.Byte[])
extern Il2CppClass* ByteU5BU5D_t58506160_il2cpp_TypeInfo_var;
extern const uint32_t X509Certificate_GetUnsignedBigInteger_m3057380224_MetadataUsageId;
extern "C"  ByteU5BU5D_t58506160* X509Certificate_GetUnsignedBigInteger_m3057380224 (X509Certificate_t273828613 * __this, ByteU5BU5D_t58506160* ___integer0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_GetUnsignedBigInteger_m3057380224_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_t58506160* V_1 = NULL;
	{
		ByteU5BU5D_t58506160* L_0 = ___integer0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		int32_t L_1 = 0;
		if (((L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1))))
		{
			goto IL_0021;
		}
	}
	{
		ByteU5BU5D_t58506160* L_2 = ___integer0;
		NullCheck(L_2);
		V_0 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_2)->max_length))))-(int32_t)1));
		int32_t L_3 = V_0;
		V_1 = ((ByteU5BU5D_t58506160*)SZArrayNew(ByteU5BU5D_t58506160_il2cpp_TypeInfo_var, (uint32_t)L_3));
		ByteU5BU5D_t58506160* L_4 = ___integer0;
		ByteU5BU5D_t58506160* L_5 = V_1;
		int32_t L_6 = V_0;
		Buffer_BlockCopy_m1580643184(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_4, 1, (Il2CppArray *)(Il2CppArray *)L_5, 0, L_6, /*hidden argument*/NULL);
		ByteU5BU5D_t58506160* L_7 = V_1;
		return L_7;
	}

IL_0021:
	{
		ByteU5BU5D_t58506160* L_8 = ___integer0;
		return L_8;
	}
}
// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::get_DSA()
extern Il2CppClass* CryptographicException_t3718270561_il2cpp_TypeInfo_var;
extern Il2CppClass* DSAParameters_t2524359253_il2cpp_TypeInfo_var;
extern Il2CppClass* ASN1_t1254135647_il2cpp_TypeInfo_var;
extern Il2CppClass* DSACryptoServiceProvider_t1493589900_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3821850616;
extern const uint32_t X509Certificate_get_DSA_m937980955_MetadataUsageId;
extern "C"  DSA_t1557551819 * X509Certificate_get_DSA_m937980955 (X509Certificate_t273828613 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_get_DSA_m937980955_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	DSAParameters_t2524359253  V_0;
	memset(&V_0, 0, sizeof(V_0));
	ASN1_t1254135647 * V_1 = NULL;
	ASN1_t1254135647 * V_2 = NULL;
	{
		ByteU5BU5D_t58506160* L_0 = __this->get_m_keyalgoparams_7();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		CryptographicException_t3718270561 * L_1 = (CryptographicException_t3718270561 *)il2cpp_codegen_object_new(CryptographicException_t3718270561_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m2400722889(L_1, _stringLiteral3821850616, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0016:
	{
		DSA_t1557551819 * L_2 = __this->get__dsa_16();
		if (L_2)
		{
			goto IL_012e;
		}
	}
	{
		Initobj (DSAParameters_t2524359253_il2cpp_TypeInfo_var, (&V_0));
		ByteU5BU5D_t58506160* L_3 = __this->get_m_publickey_10();
		ASN1_t1254135647 * L_4 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m2555733065(L_4, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		ASN1_t1254135647 * L_5 = V_1;
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		ASN1_t1254135647 * L_6 = V_1;
		NullCheck(L_6);
		uint8_t L_7 = ASN1_get_Tag_m1269404867(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_7) == ((int32_t)2)))
		{
			goto IL_0049;
		}
	}

IL_0047:
	{
		return (DSA_t1557551819 *)NULL;
	}

IL_0049:
	{
		ASN1_t1254135647 * L_8 = V_1;
		NullCheck(L_8);
		ByteU5BU5D_t58506160* L_9 = ASN1_get_Value_m4232529916(L_8, /*hidden argument*/NULL);
		ByteU5BU5D_t58506160* L_10 = X509Certificate_GetUnsignedBigInteger_m3057380224(__this, L_9, /*hidden argument*/NULL);
		(&V_0)->set_Y_7(L_10);
		ByteU5BU5D_t58506160* L_11 = __this->get_m_keyalgoparams_7();
		ASN1_t1254135647 * L_12 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m2555733065(L_12, L_11, /*hidden argument*/NULL);
		V_2 = L_12;
		ASN1_t1254135647 * L_13 = V_2;
		if (!L_13)
		{
			goto IL_0087;
		}
	}
	{
		ASN1_t1254135647 * L_14 = V_2;
		NullCheck(L_14);
		uint8_t L_15 = ASN1_get_Tag_m1269404867(L_14, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_0087;
		}
	}
	{
		ASN1_t1254135647 * L_16 = V_2;
		NullCheck(L_16);
		int32_t L_17 = ASN1_get_Count_m3031159196(L_16, /*hidden argument*/NULL);
		if ((((int32_t)L_17) >= ((int32_t)3)))
		{
			goto IL_0089;
		}
	}

IL_0087:
	{
		return (DSA_t1557551819 *)NULL;
	}

IL_0089:
	{
		ASN1_t1254135647 * L_18 = V_2;
		NullCheck(L_18);
		ASN1_t1254135647 * L_19 = ASN1_get_Item_m3112983888(L_18, 0, /*hidden argument*/NULL);
		NullCheck(L_19);
		uint8_t L_20 = ASN1_get_Tag_m1269404867(L_19, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)2))))
		{
			goto IL_00bf;
		}
	}
	{
		ASN1_t1254135647 * L_21 = V_2;
		NullCheck(L_21);
		ASN1_t1254135647 * L_22 = ASN1_get_Item_m3112983888(L_21, 1, /*hidden argument*/NULL);
		NullCheck(L_22);
		uint8_t L_23 = ASN1_get_Tag_m1269404867(L_22, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)2))))
		{
			goto IL_00bf;
		}
	}
	{
		ASN1_t1254135647 * L_24 = V_2;
		NullCheck(L_24);
		ASN1_t1254135647 * L_25 = ASN1_get_Item_m3112983888(L_24, 2, /*hidden argument*/NULL);
		NullCheck(L_25);
		uint8_t L_26 = ASN1_get_Tag_m1269404867(L_25, /*hidden argument*/NULL);
		if ((((int32_t)L_26) == ((int32_t)2)))
		{
			goto IL_00c1;
		}
	}

IL_00bf:
	{
		return (DSA_t1557551819 *)NULL;
	}

IL_00c1:
	{
		ASN1_t1254135647 * L_27 = V_2;
		NullCheck(L_27);
		ASN1_t1254135647 * L_28 = ASN1_get_Item_m3112983888(L_27, 0, /*hidden argument*/NULL);
		NullCheck(L_28);
		ByteU5BU5D_t58506160* L_29 = ASN1_get_Value_m4232529916(L_28, /*hidden argument*/NULL);
		ByteU5BU5D_t58506160* L_30 = X509Certificate_GetUnsignedBigInteger_m3057380224(__this, L_29, /*hidden argument*/NULL);
		(&V_0)->set_P_3(L_30);
		ASN1_t1254135647 * L_31 = V_2;
		NullCheck(L_31);
		ASN1_t1254135647 * L_32 = ASN1_get_Item_m3112983888(L_31, 1, /*hidden argument*/NULL);
		NullCheck(L_32);
		ByteU5BU5D_t58506160* L_33 = ASN1_get_Value_m4232529916(L_32, /*hidden argument*/NULL);
		ByteU5BU5D_t58506160* L_34 = X509Certificate_GetUnsignedBigInteger_m3057380224(__this, L_33, /*hidden argument*/NULL);
		(&V_0)->set_Q_4(L_34);
		ASN1_t1254135647 * L_35 = V_2;
		NullCheck(L_35);
		ASN1_t1254135647 * L_36 = ASN1_get_Item_m3112983888(L_35, 2, /*hidden argument*/NULL);
		NullCheck(L_36);
		ByteU5BU5D_t58506160* L_37 = ASN1_get_Value_m4232529916(L_36, /*hidden argument*/NULL);
		ByteU5BU5D_t58506160* L_38 = X509Certificate_GetUnsignedBigInteger_m3057380224(__this, L_37, /*hidden argument*/NULL);
		(&V_0)->set_G_1(L_38);
		ByteU5BU5D_t58506160* L_39 = (&V_0)->get_Y_7();
		NullCheck(L_39);
		DSACryptoServiceProvider_t1493589900 * L_40 = (DSACryptoServiceProvider_t1493589900 *)il2cpp_codegen_object_new(DSACryptoServiceProvider_t1493589900_il2cpp_TypeInfo_var);
		DSACryptoServiceProvider__ctor_m2273755103(L_40, ((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_39)->max_length))))<<(int32_t)3)), /*hidden argument*/NULL);
		__this->set__dsa_16(L_40);
		DSA_t1557551819 * L_41 = __this->get__dsa_16();
		DSAParameters_t2524359253  L_42 = V_0;
		NullCheck(L_41);
		VirtActionInvoker1< DSAParameters_t2524359253  >::Invoke(12 /* System.Void System.Security.Cryptography.DSA::ImportParameters(System.Security.Cryptography.DSAParameters) */, L_41, L_42);
	}

IL_012e:
	{
		DSA_t1557551819 * L_43 = __this->get__dsa_16();
		return L_43;
	}
}
// System.Void Mono.Security.X509.X509Certificate::set_DSA(System.Security.Cryptography.DSA)
extern "C"  void X509Certificate_set_DSA_m225206720 (X509Certificate_t273828613 * __this, DSA_t1557551819 * ___value0, const MethodInfo* method)
{
	{
		DSA_t1557551819 * L_0 = ___value0;
		__this->set__dsa_16(L_0);
		DSA_t1557551819 * L_1 = ___value0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		__this->set__rsa_15((RSA_t1557565273 *)NULL);
	}

IL_0014:
	{
		return;
	}
}
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::get_Extensions()
extern "C"  X509ExtensionCollection_t3528692651 * X509Certificate_get_Extensions_m1715365530 (X509Certificate_t273828613 * __this, const MethodInfo* method)
{
	{
		X509ExtensionCollection_t3528692651 * L_0 = __this->get_extensions_21();
		return L_0;
	}
}
// System.Byte[] Mono.Security.X509.X509Certificate::get_Hash()
extern Il2CppClass* X509Certificate_t273828613_il2cpp_TypeInfo_var;
extern Il2CppClass* Dictionary_2_t190145395_il2cpp_TypeInfo_var;
extern Il2CppClass* ByteU5BU5D_t58506160_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1958628151_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2198962788;
extern Il2CppCodeGenString* _stringLiteral2198962790;
extern Il2CppCodeGenString* _stringLiteral2198962791;
extern Il2CppCodeGenString* _stringLiteral3986536017;
extern Il2CppCodeGenString* _stringLiteral3392410245;
extern Il2CppCodeGenString* _stringLiteral3743337006;
extern const uint32_t X509Certificate_get_Hash_m2925829113_MetadataUsageId;
extern "C"  ByteU5BU5D_t58506160* X509Certificate_get_Hash_m2925829113 (X509Certificate_t273828613 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_get_Hash_m2925829113_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	HashAlgorithm_t24372250 * V_0 = NULL;
	ByteU5BU5D_t58506160* V_1 = NULL;
	String_t* V_2 = NULL;
	Dictionary_2_t190145395 * V_3 = NULL;
	int32_t V_4 = 0;
	{
		ByteU5BU5D_t58506160* L_0 = __this->get_certhash_14();
		if (L_0)
		{
			goto IL_0116;
		}
	}
	{
		V_0 = (HashAlgorithm_t24372250 *)NULL;
		String_t* L_1 = __this->get_m_signaturealgo_12();
		V_2 = L_1;
		String_t* L_2 = V_2;
		if (!L_2)
		{
			goto IL_00d3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(X509Certificate_t273828613_il2cpp_TypeInfo_var);
		Dictionary_2_t190145395 * L_3 = ((X509Certificate_t273828613_StaticFields*)X509Certificate_t273828613_il2cpp_TypeInfo_var->static_fields)->get_U3CU3Ef__switchU24mapF_23();
		if (L_3)
		{
			goto IL_0079;
		}
	}
	{
		Dictionary_2_t190145395 * L_4 = (Dictionary_2_t190145395 *)il2cpp_codegen_object_new(Dictionary_2_t190145395_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1958628151(L_4, 6, /*hidden argument*/Dictionary_2__ctor_m1958628151_MethodInfo_var);
		V_3 = L_4;
		Dictionary_2_t190145395 * L_5 = V_3;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_5, _stringLiteral2198962788, 0);
		Dictionary_2_t190145395 * L_6 = V_3;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_6, _stringLiteral2198962790, 1);
		Dictionary_2_t190145395 * L_7 = V_3;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_7, _stringLiteral2198962791, 2);
		Dictionary_2_t190145395 * L_8 = V_3;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_8, _stringLiteral3986536017, 2);
		Dictionary_2_t190145395 * L_9 = V_3;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_9, _stringLiteral3392410245, 2);
		Dictionary_2_t190145395 * L_10 = V_3;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_10, _stringLiteral3743337006, 3);
		Dictionary_2_t190145395 * L_11 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(X509Certificate_t273828613_il2cpp_TypeInfo_var);
		((X509Certificate_t273828613_StaticFields*)X509Certificate_t273828613_il2cpp_TypeInfo_var->static_fields)->set_U3CU3Ef__switchU24mapF_23(L_11);
	}

IL_0079:
	{
		IL2CPP_RUNTIME_CLASS_INIT(X509Certificate_t273828613_il2cpp_TypeInfo_var);
		Dictionary_2_t190145395 * L_12 = ((X509Certificate_t273828613_StaticFields*)X509Certificate_t273828613_il2cpp_TypeInfo_var->static_fields)->get_U3CU3Ef__switchU24mapF_23();
		String_t* L_13 = V_2;
		NullCheck(L_12);
		bool L_14 = VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_12, L_13, (&V_4));
		if (!L_14)
		{
			goto IL_00d3;
		}
	}
	{
		int32_t L_15 = V_4;
		if (L_15 == 0)
		{
			goto IL_00a7;
		}
		if (L_15 == 1)
		{
			goto IL_00b2;
		}
		if (L_15 == 2)
		{
			goto IL_00bd;
		}
		if (L_15 == 3)
		{
			goto IL_00c8;
		}
	}
	{
		goto IL_00d3;
	}

IL_00a7:
	{
		MD2_t3745417136 * L_16 = MD2_Create_m1400591135(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_00d5;
	}

IL_00b2:
	{
		MD5_t1557559991 * L_17 = MD5_Create_m3551683961(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_17;
		goto IL_00d5;
	}

IL_00bd:
	{
		SHA1_t1560027742 * L_18 = SHA1_Create_m2764862537(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_18;
		goto IL_00d5;
	}

IL_00c8:
	{
		SHA256_t4002183040 * L_19 = SHA256_Create_m2242546445(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_19;
		goto IL_00d5;
	}

IL_00d3:
	{
		return (ByteU5BU5D_t58506160*)NULL;
	}

IL_00d5:
	{
		ASN1_t1254135647 * L_20 = __this->get_decoder_0();
		if (!L_20)
		{
			goto IL_00f1;
		}
	}
	{
		ASN1_t1254135647 * L_21 = __this->get_decoder_0();
		NullCheck(L_21);
		int32_t L_22 = ASN1_get_Count_m3031159196(L_21, /*hidden argument*/NULL);
		if ((((int32_t)L_22) >= ((int32_t)1)))
		{
			goto IL_00f3;
		}
	}

IL_00f1:
	{
		return (ByteU5BU5D_t58506160*)NULL;
	}

IL_00f3:
	{
		ASN1_t1254135647 * L_23 = __this->get_decoder_0();
		NullCheck(L_23);
		ASN1_t1254135647 * L_24 = ASN1_get_Item_m3112983888(L_23, 0, /*hidden argument*/NULL);
		NullCheck(L_24);
		ByteU5BU5D_t58506160* L_25 = VirtFuncInvoker0< ByteU5BU5D_t58506160* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_24);
		V_1 = L_25;
		HashAlgorithm_t24372250 * L_26 = V_0;
		ByteU5BU5D_t58506160* L_27 = V_1;
		ByteU5BU5D_t58506160* L_28 = V_1;
		NullCheck(L_28);
		NullCheck(L_26);
		ByteU5BU5D_t58506160* L_29 = HashAlgorithm_ComputeHash_m2755161132(L_26, L_27, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_28)->max_length)))), /*hidden argument*/NULL);
		__this->set_certhash_14(L_29);
	}

IL_0116:
	{
		ByteU5BU5D_t58506160* L_30 = __this->get_certhash_14();
		NullCheck((Il2CppArray *)(Il2CppArray *)L_30);
		Il2CppObject * L_31 = VirtFuncInvoker0< Il2CppObject * >::Invoke(5 /* System.Object System.Array::Clone() */, (Il2CppArray *)(Il2CppArray *)L_30);
		return ((ByteU5BU5D_t58506160*)Castclass(L_31, ByteU5BU5D_t58506160_il2cpp_TypeInfo_var));
	}
}
// System.String Mono.Security.X509.X509Certificate::get_IssuerName()
extern "C"  String_t* X509Certificate_get_IssuerName_m3235776392 (X509Certificate_t273828613 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = __this->get_m_issuername_5();
		return L_0;
	}
}
// System.String Mono.Security.X509.X509Certificate::get_KeyAlgorithm()
extern "C"  String_t* X509Certificate_get_KeyAlgorithm_m3661706164 (X509Certificate_t273828613 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = __this->get_m_keyalgo_6();
		return L_0;
	}
}
// System.Byte[] Mono.Security.X509.X509Certificate::get_KeyAlgorithmParameters()
extern Il2CppClass* ByteU5BU5D_t58506160_il2cpp_TypeInfo_var;
extern const uint32_t X509Certificate_get_KeyAlgorithmParameters_m2708577349_MetadataUsageId;
extern "C"  ByteU5BU5D_t58506160* X509Certificate_get_KeyAlgorithmParameters_m2708577349 (X509Certificate_t273828613 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_get_KeyAlgorithmParameters_m2708577349_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t58506160* L_0 = __this->get_m_keyalgoparams_7();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (ByteU5BU5D_t58506160*)NULL;
	}

IL_000d:
	{
		ByteU5BU5D_t58506160* L_1 = __this->get_m_keyalgoparams_7();
		NullCheck((Il2CppArray *)(Il2CppArray *)L_1);
		Il2CppObject * L_2 = VirtFuncInvoker0< Il2CppObject * >::Invoke(5 /* System.Object System.Array::Clone() */, (Il2CppArray *)(Il2CppArray *)L_1);
		return ((ByteU5BU5D_t58506160*)Castclass(L_2, ByteU5BU5D_t58506160_il2cpp_TypeInfo_var));
	}
}
// System.Void Mono.Security.X509.X509Certificate::set_KeyAlgorithmParameters(System.Byte[])
extern "C"  void X509Certificate_set_KeyAlgorithmParameters_m769560986 (X509Certificate_t273828613 * __this, ByteU5BU5D_t58506160* ___value0, const MethodInfo* method)
{
	{
		ByteU5BU5D_t58506160* L_0 = ___value0;
		__this->set_m_keyalgoparams_7(L_0);
		return;
	}
}
// System.Byte[] Mono.Security.X509.X509Certificate::get_PublicKey()
extern Il2CppClass* ByteU5BU5D_t58506160_il2cpp_TypeInfo_var;
extern const uint32_t X509Certificate_get_PublicKey_m835022733_MetadataUsageId;
extern "C"  ByteU5BU5D_t58506160* X509Certificate_get_PublicKey_m835022733 (X509Certificate_t273828613 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_get_PublicKey_m835022733_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t58506160* L_0 = __this->get_m_publickey_10();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (ByteU5BU5D_t58506160*)NULL;
	}

IL_000d:
	{
		ByteU5BU5D_t58506160* L_1 = __this->get_m_publickey_10();
		NullCheck((Il2CppArray *)(Il2CppArray *)L_1);
		Il2CppObject * L_2 = VirtFuncInvoker0< Il2CppObject * >::Invoke(5 /* System.Object System.Array::Clone() */, (Il2CppArray *)(Il2CppArray *)L_1);
		return ((ByteU5BU5D_t58506160*)Castclass(L_2, ByteU5BU5D_t58506160_il2cpp_TypeInfo_var));
	}
}
// System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::get_RSA()
extern Il2CppClass* RSAParameters_t2711684451_il2cpp_TypeInfo_var;
extern Il2CppClass* ASN1_t1254135647_il2cpp_TypeInfo_var;
extern Il2CppClass* RSACryptoServiceProvider_t555495358_il2cpp_TypeInfo_var;
extern const uint32_t X509Certificate_get_RSA_m842279223_MetadataUsageId;
extern "C"  RSA_t1557565273 * X509Certificate_get_RSA_m842279223 (X509Certificate_t273828613 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_get_RSA_m842279223_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	RSAParameters_t2711684451  V_0;
	memset(&V_0, 0, sizeof(V_0));
	ASN1_t1254135647 * V_1 = NULL;
	ASN1_t1254135647 * V_2 = NULL;
	ASN1_t1254135647 * V_3 = NULL;
	int32_t V_4 = 0;
	{
		RSA_t1557565273 * L_0 = __this->get__rsa_15();
		if (L_0)
		{
			goto IL_0097;
		}
	}
	{
		Initobj (RSAParameters_t2711684451_il2cpp_TypeInfo_var, (&V_0));
		ByteU5BU5D_t58506160* L_1 = __this->get_m_publickey_10();
		ASN1_t1254135647 * L_2 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m2555733065(L_2, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		ASN1_t1254135647 * L_3 = V_1;
		NullCheck(L_3);
		ASN1_t1254135647 * L_4 = ASN1_get_Item_m3112983888(L_3, 0, /*hidden argument*/NULL);
		V_2 = L_4;
		ASN1_t1254135647 * L_5 = V_2;
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		ASN1_t1254135647 * L_6 = V_2;
		NullCheck(L_6);
		uint8_t L_7 = ASN1_get_Tag_m1269404867(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_7) == ((int32_t)2)))
		{
			goto IL_003b;
		}
	}

IL_0039:
	{
		return (RSA_t1557565273 *)NULL;
	}

IL_003b:
	{
		ASN1_t1254135647 * L_8 = V_1;
		NullCheck(L_8);
		ASN1_t1254135647 * L_9 = ASN1_get_Item_m3112983888(L_8, 1, /*hidden argument*/NULL);
		V_3 = L_9;
		ASN1_t1254135647 * L_10 = V_3;
		NullCheck(L_10);
		uint8_t L_11 = ASN1_get_Tag_m1269404867(L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_11) == ((int32_t)2)))
		{
			goto IL_0051;
		}
	}
	{
		return (RSA_t1557565273 *)NULL;
	}

IL_0051:
	{
		ASN1_t1254135647 * L_12 = V_2;
		NullCheck(L_12);
		ByteU5BU5D_t58506160* L_13 = ASN1_get_Value_m4232529916(L_12, /*hidden argument*/NULL);
		ByteU5BU5D_t58506160* L_14 = X509Certificate_GetUnsignedBigInteger_m3057380224(__this, L_13, /*hidden argument*/NULL);
		(&V_0)->set_Modulus_6(L_14);
		ASN1_t1254135647 * L_15 = V_3;
		NullCheck(L_15);
		ByteU5BU5D_t58506160* L_16 = ASN1_get_Value_m4232529916(L_15, /*hidden argument*/NULL);
		(&V_0)->set_Exponent_7(L_16);
		ByteU5BU5D_t58506160* L_17 = (&V_0)->get_Modulus_6();
		NullCheck(L_17);
		V_4 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_17)->max_length))))<<(int32_t)3));
		int32_t L_18 = V_4;
		RSACryptoServiceProvider_t555495358 * L_19 = (RSACryptoServiceProvider_t555495358 *)il2cpp_codegen_object_new(RSACryptoServiceProvider_t555495358_il2cpp_TypeInfo_var);
		RSACryptoServiceProvider__ctor_m4233192173(L_19, L_18, /*hidden argument*/NULL);
		__this->set__rsa_15(L_19);
		RSA_t1557565273 * L_20 = __this->get__rsa_15();
		RSAParameters_t2711684451  L_21 = V_0;
		NullCheck(L_20);
		VirtActionInvoker1< RSAParameters_t2711684451  >::Invoke(13 /* System.Void System.Security.Cryptography.RSA::ImportParameters(System.Security.Cryptography.RSAParameters) */, L_20, L_21);
	}

IL_0097:
	{
		RSA_t1557565273 * L_22 = __this->get__rsa_15();
		return L_22;
	}
}
// System.Void Mono.Security.X509.X509Certificate::set_RSA(System.Security.Cryptography.RSA)
extern "C"  void X509Certificate_set_RSA_m547377152 (X509Certificate_t273828613 * __this, RSA_t1557565273 * ___value0, const MethodInfo* method)
{
	{
		RSA_t1557565273 * L_0 = ___value0;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		__this->set__dsa_16((DSA_t1557551819 *)NULL);
	}

IL_000d:
	{
		RSA_t1557565273 * L_1 = ___value0;
		__this->set__rsa_15(L_1);
		return;
	}
}
// System.Byte[] Mono.Security.X509.X509Certificate::get_RawData()
extern Il2CppClass* ByteU5BU5D_t58506160_il2cpp_TypeInfo_var;
extern const uint32_t X509Certificate_get_RawData_m2988459721_MetadataUsageId;
extern "C"  ByteU5BU5D_t58506160* X509Certificate_get_RawData_m2988459721 (X509Certificate_t273828613 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_get_RawData_m2988459721_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t58506160* L_0 = __this->get_m_encodedcert_1();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (ByteU5BU5D_t58506160*)NULL;
	}

IL_000d:
	{
		ByteU5BU5D_t58506160* L_1 = __this->get_m_encodedcert_1();
		NullCheck((Il2CppArray *)(Il2CppArray *)L_1);
		Il2CppObject * L_2 = VirtFuncInvoker0< Il2CppObject * >::Invoke(5 /* System.Object System.Array::Clone() */, (Il2CppArray *)(Il2CppArray *)L_1);
		return ((ByteU5BU5D_t58506160*)Castclass(L_2, ByteU5BU5D_t58506160_il2cpp_TypeInfo_var));
	}
}
// System.Byte[] Mono.Security.X509.X509Certificate::get_SerialNumber()
extern Il2CppClass* ByteU5BU5D_t58506160_il2cpp_TypeInfo_var;
extern const uint32_t X509Certificate_get_SerialNumber_m1906128776_MetadataUsageId;
extern "C"  ByteU5BU5D_t58506160* X509Certificate_get_SerialNumber_m1906128776 (X509Certificate_t273828613 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_get_SerialNumber_m1906128776_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t58506160* L_0 = __this->get_serialnumber_18();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (ByteU5BU5D_t58506160*)NULL;
	}

IL_000d:
	{
		ByteU5BU5D_t58506160* L_1 = __this->get_serialnumber_18();
		NullCheck((Il2CppArray *)(Il2CppArray *)L_1);
		Il2CppObject * L_2 = VirtFuncInvoker0< Il2CppObject * >::Invoke(5 /* System.Object System.Array::Clone() */, (Il2CppArray *)(Il2CppArray *)L_1);
		return ((ByteU5BU5D_t58506160*)Castclass(L_2, ByteU5BU5D_t58506160_il2cpp_TypeInfo_var));
	}
}
// System.Byte[] Mono.Security.X509.X509Certificate::get_Signature()
extern Il2CppClass* X509Certificate_t273828613_il2cpp_TypeInfo_var;
extern Il2CppClass* Dictionary_2_t190145395_il2cpp_TypeInfo_var;
extern Il2CppClass* ByteU5BU5D_t58506160_il2cpp_TypeInfo_var;
extern Il2CppClass* ASN1_t1254135647_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* CryptographicException_t3718270561_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1958628151_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2198962788;
extern Il2CppCodeGenString* _stringLiteral2198962790;
extern Il2CppCodeGenString* _stringLiteral2198962791;
extern Il2CppCodeGenString* _stringLiteral3986536017;
extern Il2CppCodeGenString* _stringLiteral3743337006;
extern Il2CppCodeGenString* _stringLiteral3392410245;
extern Il2CppCodeGenString* _stringLiteral3904661102;
extern const uint32_t X509Certificate_get_Signature_m2856370319_MetadataUsageId;
extern "C"  ByteU5BU5D_t58506160* X509Certificate_get_Signature_m2856370319 (X509Certificate_t273828613 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_get_Signature_m2856370319_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ASN1_t1254135647 * V_0 = NULL;
	ByteU5BU5D_t58506160* V_1 = NULL;
	ByteU5BU5D_t58506160* V_2 = NULL;
	ByteU5BU5D_t58506160* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	String_t* V_8 = NULL;
	Dictionary_2_t190145395 * V_9 = NULL;
	int32_t V_10 = 0;
	{
		ByteU5BU5D_t58506160* L_0 = __this->get_signature_11();
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (ByteU5BU5D_t58506160*)NULL;
	}

IL_000d:
	{
		String_t* L_1 = __this->get_m_signaturealgo_12();
		V_8 = L_1;
		String_t* L_2 = V_8;
		if (!L_2)
		{
			goto IL_015a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(X509Certificate_t273828613_il2cpp_TypeInfo_var);
		Dictionary_2_t190145395 * L_3 = ((X509Certificate_t273828613_StaticFields*)X509Certificate_t273828613_il2cpp_TypeInfo_var->static_fields)->get_U3CU3Ef__switchU24map10_24();
		if (L_3)
		{
			goto IL_0083;
		}
	}
	{
		Dictionary_2_t190145395 * L_4 = (Dictionary_2_t190145395 *)il2cpp_codegen_object_new(Dictionary_2_t190145395_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1958628151(L_4, 6, /*hidden argument*/Dictionary_2__ctor_m1958628151_MethodInfo_var);
		V_9 = L_4;
		Dictionary_2_t190145395 * L_5 = V_9;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_5, _stringLiteral2198962788, 0);
		Dictionary_2_t190145395 * L_6 = V_9;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_6, _stringLiteral2198962790, 0);
		Dictionary_2_t190145395 * L_7 = V_9;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_7, _stringLiteral2198962791, 0);
		Dictionary_2_t190145395 * L_8 = V_9;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_8, _stringLiteral3986536017, 0);
		Dictionary_2_t190145395 * L_9 = V_9;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_9, _stringLiteral3743337006, 0);
		Dictionary_2_t190145395 * L_10 = V_9;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_10, _stringLiteral3392410245, 1);
		Dictionary_2_t190145395 * L_11 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(X509Certificate_t273828613_il2cpp_TypeInfo_var);
		((X509Certificate_t273828613_StaticFields*)X509Certificate_t273828613_il2cpp_TypeInfo_var->static_fields)->set_U3CU3Ef__switchU24map10_24(L_11);
	}

IL_0083:
	{
		IL2CPP_RUNTIME_CLASS_INIT(X509Certificate_t273828613_il2cpp_TypeInfo_var);
		Dictionary_2_t190145395 * L_12 = ((X509Certificate_t273828613_StaticFields*)X509Certificate_t273828613_il2cpp_TypeInfo_var->static_fields)->get_U3CU3Ef__switchU24map10_24();
		String_t* L_13 = V_8;
		NullCheck(L_12);
		bool L_14 = VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_12, L_13, (&V_10));
		if (!L_14)
		{
			goto IL_015a;
		}
	}
	{
		int32_t L_15 = V_10;
		if (!L_15)
		{
			goto IL_00aa;
		}
	}
	{
		int32_t L_16 = V_10;
		if ((((int32_t)L_16) == ((int32_t)1)))
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_015a;
	}

IL_00aa:
	{
		ByteU5BU5D_t58506160* L_17 = __this->get_signature_11();
		NullCheck((Il2CppArray *)(Il2CppArray *)L_17);
		Il2CppObject * L_18 = VirtFuncInvoker0< Il2CppObject * >::Invoke(5 /* System.Object System.Array::Clone() */, (Il2CppArray *)(Il2CppArray *)L_17);
		return ((ByteU5BU5D_t58506160*)Castclass(L_18, ByteU5BU5D_t58506160_il2cpp_TypeInfo_var));
	}

IL_00bb:
	{
		ByteU5BU5D_t58506160* L_19 = __this->get_signature_11();
		ASN1_t1254135647 * L_20 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m2555733065(L_20, L_19, /*hidden argument*/NULL);
		V_0 = L_20;
		ASN1_t1254135647 * L_21 = V_0;
		if (!L_21)
		{
			goto IL_00d9;
		}
	}
	{
		ASN1_t1254135647 * L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23 = ASN1_get_Count_m3031159196(L_22, /*hidden argument*/NULL);
		if ((((int32_t)L_23) == ((int32_t)2)))
		{
			goto IL_00db;
		}
	}

IL_00d9:
	{
		return (ByteU5BU5D_t58506160*)NULL;
	}

IL_00db:
	{
		ASN1_t1254135647 * L_24 = V_0;
		NullCheck(L_24);
		ASN1_t1254135647 * L_25 = ASN1_get_Item_m3112983888(L_24, 0, /*hidden argument*/NULL);
		NullCheck(L_25);
		ByteU5BU5D_t58506160* L_26 = ASN1_get_Value_m4232529916(L_25, /*hidden argument*/NULL);
		V_1 = L_26;
		ASN1_t1254135647 * L_27 = V_0;
		NullCheck(L_27);
		ASN1_t1254135647 * L_28 = ASN1_get_Item_m3112983888(L_27, 1, /*hidden argument*/NULL);
		NullCheck(L_28);
		ByteU5BU5D_t58506160* L_29 = ASN1_get_Value_m4232529916(L_28, /*hidden argument*/NULL);
		V_2 = L_29;
		V_3 = ((ByteU5BU5D_t58506160*)SZArrayNew(ByteU5BU5D_t58506160_il2cpp_TypeInfo_var, (uint32_t)((int32_t)40)));
		ByteU5BU5D_t58506160* L_30 = V_1;
		NullCheck(L_30);
		int32_t L_31 = Math_Max_m1309380475(NULL /*static, unused*/, 0, ((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_30)->max_length))))-(int32_t)((int32_t)20))), /*hidden argument*/NULL);
		V_4 = L_31;
		ByteU5BU5D_t58506160* L_32 = V_1;
		NullCheck(L_32);
		int32_t L_33 = Math_Max_m1309380475(NULL /*static, unused*/, 0, ((int32_t)((int32_t)((int32_t)20)-(int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_32)->max_length)))))), /*hidden argument*/NULL);
		V_5 = L_33;
		ByteU5BU5D_t58506160* L_34 = V_1;
		int32_t L_35 = V_4;
		ByteU5BU5D_t58506160* L_36 = V_3;
		int32_t L_37 = V_5;
		ByteU5BU5D_t58506160* L_38 = V_1;
		NullCheck(L_38);
		int32_t L_39 = V_4;
		Buffer_BlockCopy_m1580643184(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_34, L_35, (Il2CppArray *)(Il2CppArray *)L_36, L_37, ((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_38)->max_length))))-(int32_t)L_39)), /*hidden argument*/NULL);
		ByteU5BU5D_t58506160* L_40 = V_2;
		NullCheck(L_40);
		int32_t L_41 = Math_Max_m1309380475(NULL /*static, unused*/, 0, ((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_40)->max_length))))-(int32_t)((int32_t)20))), /*hidden argument*/NULL);
		V_6 = L_41;
		ByteU5BU5D_t58506160* L_42 = V_2;
		NullCheck(L_42);
		int32_t L_43 = Math_Max_m1309380475(NULL /*static, unused*/, ((int32_t)20), ((int32_t)((int32_t)((int32_t)40)-(int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_42)->max_length)))))), /*hidden argument*/NULL);
		V_7 = L_43;
		ByteU5BU5D_t58506160* L_44 = V_2;
		int32_t L_45 = V_6;
		ByteU5BU5D_t58506160* L_46 = V_3;
		int32_t L_47 = V_7;
		ByteU5BU5D_t58506160* L_48 = V_2;
		NullCheck(L_48);
		int32_t L_49 = V_6;
		Buffer_BlockCopy_m1580643184(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_44, L_45, (Il2CppArray *)(Il2CppArray *)L_46, L_47, ((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_48)->max_length))))-(int32_t)L_49)), /*hidden argument*/NULL);
		ByteU5BU5D_t58506160* L_50 = V_3;
		return L_50;
	}

IL_015a:
	{
		String_t* L_51 = __this->get_m_signaturealgo_12();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_52 = String_Concat_m138640077(NULL /*static, unused*/, _stringLiteral3904661102, L_51, /*hidden argument*/NULL);
		CryptographicException_t3718270561 * L_53 = (CryptographicException_t3718270561 *)il2cpp_codegen_object_new(CryptographicException_t3718270561_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m2400722889(L_53, L_52, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_53);
	}
}
// System.String Mono.Security.X509.X509Certificate::get_SignatureAlgorithm()
extern "C"  String_t* X509Certificate_get_SignatureAlgorithm_m2628075899 (X509Certificate_t273828613 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = __this->get_m_signaturealgo_12();
		return L_0;
	}
}
// System.String Mono.Security.X509.X509Certificate::get_SubjectName()
extern "C"  String_t* X509Certificate_get_SubjectName_m4227284693 (X509Certificate_t273828613 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = __this->get_m_subject_9();
		return L_0;
	}
}
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidFrom()
extern "C"  DateTime_t339033936  X509Certificate_get_ValidFrom_m3810659470 (X509Certificate_t273828613 * __this, const MethodInfo* method)
{
	{
		DateTime_t339033936  L_0 = __this->get_m_from_2();
		return L_0;
	}
}
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidUntil()
extern "C"  DateTime_t339033936  X509Certificate_get_ValidUntil_m2484027100 (X509Certificate_t273828613 * __this, const MethodInfo* method)
{
	{
		DateTime_t339033936  L_0 = __this->get_m_until_3();
		return L_0;
	}
}
// System.Int32 Mono.Security.X509.X509Certificate::get_Version()
extern "C"  int32_t X509Certificate_get_Version_m3883833137 (X509Certificate_t273828613 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_version_17();
		return L_0;
	}
}
// System.Boolean Mono.Security.X509.X509Certificate::get_IsCurrent()
extern Il2CppClass* DateTime_t339033936_il2cpp_TypeInfo_var;
extern const uint32_t X509Certificate_get_IsCurrent_m3064883298_MetadataUsageId;
extern "C"  bool X509Certificate_get_IsCurrent_m3064883298 (X509Certificate_t273828613 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_get_IsCurrent_m3064883298_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t339033936_il2cpp_TypeInfo_var);
		DateTime_t339033936  L_0 = DateTime_get_UtcNow_m685282732(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_1 = X509Certificate_WasCurrent_m3800725474(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Mono.Security.X509.X509Certificate::WasCurrent(System.DateTime)
extern Il2CppClass* DateTime_t339033936_il2cpp_TypeInfo_var;
extern const uint32_t X509Certificate_WasCurrent_m3800725474_MetadataUsageId;
extern "C"  bool X509Certificate_WasCurrent_m3800725474 (X509Certificate_t273828613 * __this, DateTime_t339033936  ___instant0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_WasCurrent_m3800725474_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		DateTime_t339033936  L_0 = ___instant0;
		DateTime_t339033936  L_1 = VirtFuncInvoker0< DateTime_t339033936  >::Invoke(17 /* System.DateTime Mono.Security.X509.X509Certificate::get_ValidFrom() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t339033936_il2cpp_TypeInfo_var);
		bool L_2 = DateTime_op_GreaterThan_m3846016869(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		DateTime_t339033936  L_3 = ___instant0;
		DateTime_t339033936  L_4 = VirtFuncInvoker0< DateTime_t339033936  >::Invoke(18 /* System.DateTime Mono.Security.X509.X509Certificate::get_ValidUntil() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t339033936_il2cpp_TypeInfo_var);
		bool L_5 = DateTime_op_LessThanOrEqual_m354447689(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		return (bool)G_B3_0;
	}
}
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.DSA)
extern Il2CppClass* DSASignatureDeformatter_t426713980_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2543909;
extern const uint32_t X509Certificate_VerifySignature_m120457372_MetadataUsageId;
extern "C"  bool X509Certificate_VerifySignature_m120457372 (X509Certificate_t273828613 * __this, DSA_t1557551819 * ___dsa0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_VerifySignature_m120457372_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	DSASignatureDeformatter_t426713980 * V_0 = NULL;
	{
		DSA_t1557551819 * L_0 = ___dsa0;
		DSASignatureDeformatter_t426713980 * L_1 = (DSASignatureDeformatter_t426713980 *)il2cpp_codegen_object_new(DSASignatureDeformatter_t426713980_il2cpp_TypeInfo_var);
		DSASignatureDeformatter__ctor_m1067293596(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		DSASignatureDeformatter_t426713980 * L_2 = V_0;
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void System.Security.Cryptography.DSASignatureDeformatter::SetHashAlgorithm(System.String) */, L_2, _stringLiteral2543909);
		DSASignatureDeformatter_t426713980 * L_3 = V_0;
		ByteU5BU5D_t58506160* L_4 = X509Certificate_get_Hash_m2925829113(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t58506160* L_5 = VirtFuncInvoker0< ByteU5BU5D_t58506160* >::Invoke(14 /* System.Byte[] Mono.Security.X509.X509Certificate::get_Signature() */, __this);
		NullCheck(L_3);
		bool L_6 = VirtFuncInvoker2< bool, ByteU5BU5D_t58506160*, ByteU5BU5D_t58506160* >::Invoke(6 /* System.Boolean System.Security.Cryptography.DSASignatureDeformatter::VerifySignature(System.Byte[],System.Byte[]) */, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.RSA)
extern Il2CppClass* RSAPKCS1SignatureDeformatter_t1504052144_il2cpp_TypeInfo_var;
extern Il2CppClass* X509Certificate_t273828613_il2cpp_TypeInfo_var;
extern Il2CppClass* Dictionary_2_t190145395_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* CryptographicException_t3718270561_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1958628151_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2198962788;
extern Il2CppCodeGenString* _stringLiteral2198962790;
extern Il2CppCodeGenString* _stringLiteral2198962791;
extern Il2CppCodeGenString* _stringLiteral3986536017;
extern Il2CppCodeGenString* _stringLiteral3743337006;
extern Il2CppCodeGenString* _stringLiteral76155;
extern Il2CppCodeGenString* _stringLiteral76158;
extern Il2CppCodeGenString* _stringLiteral2543909;
extern Il2CppCodeGenString* _stringLiteral2444699207;
extern Il2CppCodeGenString* _stringLiteral3904661102;
extern const uint32_t X509Certificate_VerifySignature_m120874446_MetadataUsageId;
extern "C"  bool X509Certificate_VerifySignature_m120874446 (X509Certificate_t273828613 * __this, RSA_t1557565273 * ___rsa0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_VerifySignature_m120874446_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	RSAPKCS1SignatureDeformatter_t1504052144 * V_0 = NULL;
	String_t* V_1 = NULL;
	Dictionary_2_t190145395 * V_2 = NULL;
	int32_t V_3 = 0;
	{
		RSA_t1557565273 * L_0 = ___rsa0;
		RSAPKCS1SignatureDeformatter_t1504052144 * L_1 = (RSAPKCS1SignatureDeformatter_t1504052144 *)il2cpp_codegen_object_new(RSAPKCS1SignatureDeformatter_t1504052144_il2cpp_TypeInfo_var);
		RSAPKCS1SignatureDeformatter__ctor_m3465174692(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = __this->get_m_signaturealgo_12();
		V_1 = L_2;
		String_t* L_3 = V_1;
		if (!L_3)
		{
			goto IL_00d4;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(X509Certificate_t273828613_il2cpp_TypeInfo_var);
		Dictionary_2_t190145395 * L_4 = ((X509Certificate_t273828613_StaticFields*)X509Certificate_t273828613_il2cpp_TypeInfo_var->static_fields)->get_U3CU3Ef__switchU24map11_25();
		if (L_4)
		{
			goto IL_0067;
		}
	}
	{
		Dictionary_2_t190145395 * L_5 = (Dictionary_2_t190145395 *)il2cpp_codegen_object_new(Dictionary_2_t190145395_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1958628151(L_5, 5, /*hidden argument*/Dictionary_2__ctor_m1958628151_MethodInfo_var);
		V_2 = L_5;
		Dictionary_2_t190145395 * L_6 = V_2;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_6, _stringLiteral2198962788, 0);
		Dictionary_2_t190145395 * L_7 = V_2;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_7, _stringLiteral2198962790, 1);
		Dictionary_2_t190145395 * L_8 = V_2;
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_8, _stringLiteral2198962791, 2);
		Dictionary_2_t190145395 * L_9 = V_2;
		NullCheck(L_9);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_9, _stringLiteral3986536017, 2);
		Dictionary_2_t190145395 * L_10 = V_2;
		NullCheck(L_10);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_10, _stringLiteral3743337006, 3);
		Dictionary_2_t190145395 * L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(X509Certificate_t273828613_il2cpp_TypeInfo_var);
		((X509Certificate_t273828613_StaticFields*)X509Certificate_t273828613_il2cpp_TypeInfo_var->static_fields)->set_U3CU3Ef__switchU24map11_25(L_11);
	}

IL_0067:
	{
		IL2CPP_RUNTIME_CLASS_INIT(X509Certificate_t273828613_il2cpp_TypeInfo_var);
		Dictionary_2_t190145395 * L_12 = ((X509Certificate_t273828613_StaticFields*)X509Certificate_t273828613_il2cpp_TypeInfo_var->static_fields)->get_U3CU3Ef__switchU24map11_25();
		String_t* L_13 = V_1;
		NullCheck(L_12);
		bool L_14 = VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_12, L_13, (&V_3));
		if (!L_14)
		{
			goto IL_00d4;
		}
	}
	{
		int32_t L_15 = V_3;
		if (L_15 == 0)
		{
			goto IL_0094;
		}
		if (L_15 == 1)
		{
			goto IL_00a4;
		}
		if (L_15 == 2)
		{
			goto IL_00b4;
		}
		if (L_15 == 3)
		{
			goto IL_00c4;
		}
	}
	{
		goto IL_00d4;
	}

IL_0094:
	{
		RSAPKCS1SignatureDeformatter_t1504052144 * L_16 = V_0;
		NullCheck(L_16);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetHashAlgorithm(System.String) */, L_16, _stringLiteral76155);
		goto IL_00ea;
	}

IL_00a4:
	{
		RSAPKCS1SignatureDeformatter_t1504052144 * L_17 = V_0;
		NullCheck(L_17);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetHashAlgorithm(System.String) */, L_17, _stringLiteral76158);
		goto IL_00ea;
	}

IL_00b4:
	{
		RSAPKCS1SignatureDeformatter_t1504052144 * L_18 = V_0;
		NullCheck(L_18);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetHashAlgorithm(System.String) */, L_18, _stringLiteral2543909);
		goto IL_00ea;
	}

IL_00c4:
	{
		RSAPKCS1SignatureDeformatter_t1504052144 * L_19 = V_0;
		NullCheck(L_19);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetHashAlgorithm(System.String) */, L_19, _stringLiteral2444699207);
		goto IL_00ea;
	}

IL_00d4:
	{
		String_t* L_20 = __this->get_m_signaturealgo_12();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m138640077(NULL /*static, unused*/, _stringLiteral3904661102, L_20, /*hidden argument*/NULL);
		CryptographicException_t3718270561 * L_22 = (CryptographicException_t3718270561 *)il2cpp_codegen_object_new(CryptographicException_t3718270561_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m2400722889(L_22, L_21, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22);
	}

IL_00ea:
	{
		RSAPKCS1SignatureDeformatter_t1504052144 * L_23 = V_0;
		ByteU5BU5D_t58506160* L_24 = X509Certificate_get_Hash_m2925829113(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t58506160* L_25 = VirtFuncInvoker0< ByteU5BU5D_t58506160* >::Invoke(14 /* System.Byte[] Mono.Security.X509.X509Certificate::get_Signature() */, __this);
		NullCheck(L_23);
		bool L_26 = VirtFuncInvoker2< bool, ByteU5BU5D_t58506160*, ByteU5BU5D_t58506160* >::Invoke(6 /* System.Boolean System.Security.Cryptography.RSAPKCS1SignatureDeformatter::VerifySignature(System.Byte[],System.Byte[]) */, L_23, L_24, L_25);
		return L_26;
	}
}
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
extern Il2CppClass* ArgumentNullException_t3214793280_il2cpp_TypeInfo_var;
extern Il2CppClass* RSA_t1557565273_il2cpp_TypeInfo_var;
extern Il2CppClass* DSA_t1557551819_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* NotSupportedException_t1374155497_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3104;
extern Il2CppCodeGenString* _stringLiteral1712030853;
extern const uint32_t X509Certificate_VerifySignature_m2925184021_MetadataUsageId;
extern "C"  bool X509Certificate_VerifySignature_m2925184021 (X509Certificate_t273828613 * __this, AsymmetricAlgorithm_t4236534322 * ___aa0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_VerifySignature_m2925184021_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		AsymmetricAlgorithm_t4236534322 * L_0 = ___aa0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t3214793280 * L_1 = (ArgumentNullException_t3214793280 *)il2cpp_codegen_object_new(ArgumentNullException_t3214793280_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m135444188(L_1, _stringLiteral3104, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		AsymmetricAlgorithm_t4236534322 * L_2 = ___aa0;
		if (!((RSA_t1557565273 *)IsInstClass(L_2, RSA_t1557565273_il2cpp_TypeInfo_var)))
		{
			goto IL_0029;
		}
	}
	{
		AsymmetricAlgorithm_t4236534322 * L_3 = ___aa0;
		bool L_4 = X509Certificate_VerifySignature_m120874446(__this, ((RSA_t1557565273 *)IsInstClass(L_3, RSA_t1557565273_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_4;
	}

IL_0029:
	{
		AsymmetricAlgorithm_t4236534322 * L_5 = ___aa0;
		if (!((DSA_t1557551819 *)IsInstClass(L_5, DSA_t1557551819_il2cpp_TypeInfo_var)))
		{
			goto IL_0041;
		}
	}
	{
		AsymmetricAlgorithm_t4236534322 * L_6 = ___aa0;
		bool L_7 = X509Certificate_VerifySignature_m120457372(__this, ((DSA_t1557551819 *)IsInstClass(L_6, DSA_t1557551819_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_7;
	}

IL_0041:
	{
		AsymmetricAlgorithm_t4236534322 * L_8 = ___aa0;
		NullCheck(L_8);
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m138640077(NULL /*static, unused*/, _stringLiteral1712030853, L_9, /*hidden argument*/NULL);
		NotSupportedException_t1374155497 * L_11 = (NotSupportedException_t1374155497 *)il2cpp_codegen_object_new(NotSupportedException_t1374155497_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m133757637(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11);
	}
}
// System.Boolean Mono.Security.X509.X509Certificate::get_IsSelfSigned()
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const uint32_t X509Certificate_get_IsSelfSigned_m3915010913_MetadataUsageId;
extern "C"  bool X509Certificate_get_IsSelfSigned_m3915010913 (X509Certificate_t273828613 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_get_IsSelfSigned_m3915010913_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = __this->get_m_issuername_5();
		String_t* L_1 = __this->get_m_subject_9();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		RSA_t1557565273 * L_3 = VirtFuncInvoker0< RSA_t1557565273 * >::Invoke(10 /* System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::get_RSA() */, __this);
		bool L_4 = X509Certificate_VerifySignature_m120874446(__this, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0023:
	{
		return (bool)0;
	}
}
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetIssuerName()
extern "C"  ASN1_t1254135647 * X509Certificate_GetIssuerName_m1167655045 (X509Certificate_t273828613 * __this, const MethodInfo* method)
{
	{
		ASN1_t1254135647 * L_0 = __this->get_issuer_4();
		return L_0;
	}
}
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetSubjectName()
extern "C"  ASN1_t1254135647 * X509Certificate_GetSubjectName_m245065080 (X509Certificate_t273828613 * __this, const MethodInfo* method)
{
	{
		ASN1_t1254135647 * L_0 = __this->get_subject_8();
		return L_0;
	}
}
// System.Void Mono.Security.X509.X509Certificate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern Il2CppCodeGenString* _stringLiteral112680;
extern const uint32_t X509Certificate_GetObjectData_m2959679786_MetadataUsageId;
extern "C"  void X509Certificate_GetObjectData_m2959679786 (X509Certificate_t273828613 * __this, SerializationInfo_t2995724695 * ___info0, StreamingContext_t986364934  ___context1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_GetObjectData_m2959679786_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		SerializationInfo_t2995724695 * L_0 = ___info0;
		ByteU5BU5D_t58506160* L_1 = __this->get_m_encodedcert_1();
		NullCheck(L_0);
		SerializationInfo_AddValue_m469120675(L_0, _stringLiteral112680, (Il2CppObject *)(Il2CppObject *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Byte[] Mono.Security.X509.X509Certificate::PEM(System.String,System.Byte[])
extern Il2CppClass* Encoding_t180559927_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Convert_t1097883944_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral332087753;
extern Il2CppCodeGenString* _stringLiteral3387880727;
extern const uint32_t X509Certificate_PEM_m3879103085_MetadataUsageId;
extern "C"  ByteU5BU5D_t58506160* X509Certificate_PEM_m3879103085 (Il2CppObject * __this /* static, unused */, String_t* ___type0, ByteU5BU5D_t58506160* ___data1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Certificate_PEM_m3879103085_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t180559927_il2cpp_TypeInfo_var);
		Encoding_t180559927 * L_0 = Encoding_get_ASCII_m1425378925(NULL /*static, unused*/, /*hidden argument*/NULL);
		ByteU5BU5D_t58506160* L_1 = ___data1;
		NullCheck(L_0);
		String_t* L_2 = VirtFuncInvoker1< String_t*, ByteU5BU5D_t58506160* >::Invoke(22 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_0, L_1);
		V_0 = L_2;
		String_t* L_3 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Format_m2471250780(NULL /*static, unused*/, _stringLiteral332087753, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		String_t* L_5 = ___type0;
		String_t* L_6 = String_Format_m2471250780(NULL /*static, unused*/, _stringLiteral3387880727, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		String_t* L_7 = V_0;
		String_t* L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = String_IndexOf_m1476794331(L_7, L_8, /*hidden argument*/NULL);
		String_t* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11 = String_get_Length_m2979997331(L_10, /*hidden argument*/NULL);
		V_3 = ((int32_t)((int32_t)L_9+(int32_t)L_11));
		String_t* L_12 = V_0;
		String_t* L_13 = V_2;
		int32_t L_14 = V_3;
		NullCheck(L_12);
		int32_t L_15 = String_IndexOf_m1991631068(L_12, L_13, L_14, /*hidden argument*/NULL);
		V_4 = L_15;
		String_t* L_16 = V_0;
		int32_t L_17 = V_3;
		int32_t L_18 = V_4;
		int32_t L_19 = V_3;
		NullCheck(L_16);
		String_t* L_20 = String_Substring_m675079568(L_16, L_17, ((int32_t)((int32_t)L_18-(int32_t)L_19)), /*hidden argument*/NULL);
		V_5 = L_20;
		String_t* L_21 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1097883944_il2cpp_TypeInfo_var);
		ByteU5BU5D_t58506160* L_22 = Convert_FromBase64String_m901846280(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.Void Mono.Security.X509.X509CertificateCollection::.ctor()
extern "C"  void X509CertificateCollection__ctor_m2517521230 (X509CertificateCollection_t3336811651 * __this, const MethodInfo* method)
{
	{
		CollectionBase__ctor_m3181013581(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.X509.X509CertificateCollection::.ctor(Mono.Security.X509.X509CertificateCollection)
extern "C"  void X509CertificateCollection__ctor_m1273937252 (X509CertificateCollection_t3336811651 * __this, X509CertificateCollection_t3336811651 * ___value0, const MethodInfo* method)
{
	{
		CollectionBase__ctor_m3181013581(__this, /*hidden argument*/NULL);
		X509CertificateCollection_t3336811651 * L_0 = ___value0;
		X509CertificateCollection_AddRange_m2353463272(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator Mono.Security.X509.X509CertificateCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * X509CertificateCollection_System_Collections_IEnumerable_GetEnumerator_m4286050429 (X509CertificateCollection_t3336811651 * __this, const MethodInfo* method)
{
	{
		ArrayList_t2121638921 * L_0 = CollectionBase_get_InnerList_m2840879970(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Il2CppObject * L_1 = VirtFuncInvoker0< Il2CppObject * >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		return L_1;
	}
}
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509CertificateCollection::get_Item(System.Int32)
extern Il2CppClass* X509Certificate_t273828613_il2cpp_TypeInfo_var;
extern const uint32_t X509CertificateCollection_get_Item_m1446680334_MetadataUsageId;
extern "C"  X509Certificate_t273828613 * X509CertificateCollection_get_Item_m1446680334 (X509CertificateCollection_t3336811651 * __this, int32_t ___index0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateCollection_get_Item_m1446680334_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t2121638921 * L_0 = CollectionBase_get_InnerList_m2840879970(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		Il2CppObject * L_2 = VirtFuncInvoker1< Il2CppObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		return ((X509Certificate_t273828613 *)CastclassClass(L_2, X509Certificate_t273828613_il2cpp_TypeInfo_var));
	}
}
// System.Int32 Mono.Security.X509.X509CertificateCollection::Add(Mono.Security.X509.X509Certificate)
extern Il2CppClass* ArgumentNullException_t3214793280_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral111972721;
extern const uint32_t X509CertificateCollection_Add_m1585739833_MetadataUsageId;
extern "C"  int32_t X509CertificateCollection_Add_m1585739833 (X509CertificateCollection_t3336811651 * __this, X509Certificate_t273828613 * ___value0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateCollection_Add_m1585739833_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		X509Certificate_t273828613 * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t3214793280 * L_1 = (ArgumentNullException_t3214793280 *)il2cpp_codegen_object_new(ArgumentNullException_t3214793280_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m135444188(L_1, _stringLiteral111972721, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		ArrayList_t2121638921 * L_2 = CollectionBase_get_InnerList_m2840879970(__this, /*hidden argument*/NULL);
		X509Certificate_t273828613 * L_3 = ___value0;
		NullCheck(L_2);
		int32_t L_4 = VirtFuncInvoker1< int32_t, Il2CppObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_2, L_3);
		return L_4;
	}
}
// System.Void Mono.Security.X509.X509CertificateCollection::AddRange(Mono.Security.X509.X509CertificateCollection)
extern Il2CppClass* ArgumentNullException_t3214793280_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral111972721;
extern const uint32_t X509CertificateCollection_AddRange_m2353463272_MetadataUsageId;
extern "C"  void X509CertificateCollection_AddRange_m2353463272 (X509CertificateCollection_t3336811651 * __this, X509CertificateCollection_t3336811651 * ___value0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateCollection_AddRange_m2353463272_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		X509CertificateCollection_t3336811651 * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t3214793280 * L_1 = (ArgumentNullException_t3214793280 *)il2cpp_codegen_object_new(ArgumentNullException_t3214793280_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m135444188(L_1, _stringLiteral111972721, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		V_0 = 0;
		goto IL_002f;
	}

IL_0018:
	{
		ArrayList_t2121638921 * L_2 = CollectionBase_get_InnerList_m2840879970(__this, /*hidden argument*/NULL);
		X509CertificateCollection_t3336811651 * L_3 = ___value0;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		X509Certificate_t273828613 * L_5 = X509CertificateCollection_get_Item_m1446680334(L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtFuncInvoker1< int32_t, Il2CppObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_2, L_5);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)1));
	}

IL_002f:
	{
		int32_t L_7 = V_0;
		X509CertificateCollection_t3336811651 * L_8 = ___value0;
		NullCheck(L_8);
		ArrayList_t2121638921 * L_9 = CollectionBase_get_InnerList_m2840879970(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_9);
		if ((((int32_t)L_7) < ((int32_t)L_10)))
		{
			goto IL_0018;
		}
	}
	{
		return;
	}
}
// System.Boolean Mono.Security.X509.X509CertificateCollection::Contains(Mono.Security.X509.X509Certificate)
extern "C"  bool X509CertificateCollection_Contains_m1747801975 (X509CertificateCollection_t3336811651 * __this, X509Certificate_t273828613 * ___value0, const MethodInfo* method)
{
	{
		X509Certificate_t273828613 * L_0 = ___value0;
		int32_t L_1 = X509CertificateCollection_IndexOf_m2746488929(__this, L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator Mono.Security.X509.X509CertificateCollection::GetEnumerator()
extern Il2CppClass* X509CertificateEnumerator_t3569011382_il2cpp_TypeInfo_var;
extern const uint32_t X509CertificateCollection_GetEnumerator_m1926496255_MetadataUsageId;
extern "C"  X509CertificateEnumerator_t3569011382 * X509CertificateCollection_GetEnumerator_m1926496255 (X509CertificateCollection_t3336811651 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateCollection_GetEnumerator_m1926496255_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		X509CertificateEnumerator_t3569011382 * L_0 = (X509CertificateEnumerator_t3569011382 *)il2cpp_codegen_object_new(X509CertificateEnumerator_t3569011382_il2cpp_TypeInfo_var);
		X509CertificateEnumerator__ctor_m3786714110(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Int32 Mono.Security.X509.X509CertificateCollection::GetHashCode()
extern "C"  int32_t X509CertificateCollection_GetHashCode_m2363682709 (X509CertificateCollection_t3336811651 * __this, const MethodInfo* method)
{
	{
		ArrayList_t2121638921 * L_0 = CollectionBase_get_InnerList_m2840879970(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Int32 Mono.Security.X509.X509CertificateCollection::IndexOf(Mono.Security.X509.X509Certificate)
extern Il2CppClass* ArgumentNullException_t3214793280_il2cpp_TypeInfo_var;
extern Il2CppClass* X509Certificate_t273828613_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral111972721;
extern const uint32_t X509CertificateCollection_IndexOf_m2746488929_MetadataUsageId;
extern "C"  int32_t X509CertificateCollection_IndexOf_m2746488929 (X509CertificateCollection_t3336811651 * __this, X509Certificate_t273828613 * ___value0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateCollection_IndexOf_m2746488929_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t58506160* V_0 = NULL;
	int32_t V_1 = 0;
	X509Certificate_t273828613 * V_2 = NULL;
	{
		X509Certificate_t273828613 * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t3214793280 * L_1 = (ArgumentNullException_t3214793280 *)il2cpp_codegen_object_new(ArgumentNullException_t3214793280_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m135444188(L_1, _stringLiteral111972721, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		X509Certificate_t273828613 * L_2 = ___value0;
		NullCheck(L_2);
		ByteU5BU5D_t58506160* L_3 = X509Certificate_get_Hash_m2925829113(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0049;
	}

IL_001f:
	{
		ArrayList_t2121638921 * L_4 = CollectionBase_get_InnerList_m2840879970(__this, /*hidden argument*/NULL);
		int32_t L_5 = V_1;
		NullCheck(L_4);
		Il2CppObject * L_6 = VirtFuncInvoker1< Il2CppObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_4, L_5);
		V_2 = ((X509Certificate_t273828613 *)CastclassClass(L_6, X509Certificate_t273828613_il2cpp_TypeInfo_var));
		X509Certificate_t273828613 * L_7 = V_2;
		NullCheck(L_7);
		ByteU5BU5D_t58506160* L_8 = X509Certificate_get_Hash_m2925829113(L_7, /*hidden argument*/NULL);
		ByteU5BU5D_t58506160* L_9 = V_0;
		bool L_10 = X509CertificateCollection_Compare_m1507319785(__this, L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_11 = V_1;
		return L_11;
	}

IL_0045:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0049:
	{
		int32_t L_13 = V_1;
		ArrayList_t2121638921 * L_14 = CollectionBase_get_InnerList_m2840879970(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_14);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_001f;
		}
	}
	{
		return (-1);
	}
}
// System.Void Mono.Security.X509.X509CertificateCollection::Remove(Mono.Security.X509.X509Certificate)
extern "C"  void X509CertificateCollection_Remove_m2746334158 (X509CertificateCollection_t3336811651 * __this, X509Certificate_t273828613 * ___value0, const MethodInfo* method)
{
	{
		ArrayList_t2121638921 * L_0 = CollectionBase_get_InnerList_m2840879970(__this, /*hidden argument*/NULL);
		X509Certificate_t273828613 * L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< Il2CppObject * >::Invoke(38 /* System.Void System.Collections.ArrayList::Remove(System.Object) */, L_0, L_1);
		return;
	}
}
// System.Boolean Mono.Security.X509.X509CertificateCollection::Compare(System.Byte[],System.Byte[])
extern "C"  bool X509CertificateCollection_Compare_m1507319785 (X509CertificateCollection_t3336811651 * __this, ByteU5BU5D_t58506160* ___array10, ByteU5BU5D_t58506160* ___array21, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_t58506160* L_0 = ___array10;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ByteU5BU5D_t58506160* L_1 = ___array21;
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		return (bool)1;
	}

IL_000e:
	{
		ByteU5BU5D_t58506160* L_2 = ___array10;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		ByteU5BU5D_t58506160* L_3 = ___array21;
		if (L_3)
		{
			goto IL_001c;
		}
	}

IL_001a:
	{
		return (bool)0;
	}

IL_001c:
	{
		ByteU5BU5D_t58506160* L_4 = ___array10;
		NullCheck(L_4);
		ByteU5BU5D_t58506160* L_5 = ___array21;
		NullCheck(L_5);
		if ((((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_4)->max_length))))) == ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_5)->max_length)))))))
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		V_0 = 0;
		goto IL_0041;
	}

IL_0030:
	{
		ByteU5BU5D_t58506160* L_6 = ___array10;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		ByteU5BU5D_t58506160* L_9 = ___array21;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		if ((((int32_t)((L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8)))) == ((int32_t)((L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11))))))
		{
			goto IL_003d;
		}
	}
	{
		return (bool)0;
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0041:
	{
		int32_t L_13 = V_0;
		ByteU5BU5D_t58506160* L_14 = ___array10;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_14)->max_length)))))))
		{
			goto IL_0030;
		}
	}
	{
		return (bool)1;
	}
}
// System.Void Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::.ctor(Mono.Security.X509.X509CertificateCollection)
extern Il2CppClass* IEnumerable_t287189635_il2cpp_TypeInfo_var;
extern const uint32_t X509CertificateEnumerator__ctor_m3786714110_MetadataUsageId;
extern "C"  void X509CertificateEnumerator__ctor_m3786714110 (X509CertificateEnumerator_t3569011382 * __this, X509CertificateCollection_t3336811651 * ___mappings0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateEnumerator__ctor_m3786714110_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		X509CertificateCollection_t3336811651 * L_0 = ___mappings0;
		NullCheck(L_0);
		Il2CppObject * L_1 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t287189635_il2cpp_TypeInfo_var, L_0);
		__this->set_enumerator_0(L_1);
		return;
	}
}
// System.Object Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.get_Current()
extern Il2CppClass* IEnumerator_t287207039_il2cpp_TypeInfo_var;
extern const uint32_t X509CertificateEnumerator_System_Collections_IEnumerator_get_Current_m974397704_MetadataUsageId;
extern "C"  Il2CppObject * X509CertificateEnumerator_System_Collections_IEnumerator_get_Current_m974397704 (X509CertificateEnumerator_t3569011382 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateEnumerator_System_Collections_IEnumerator_get_Current_m974397704_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Il2CppObject * L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		Il2CppObject * L_1 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t287207039_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.MoveNext()
extern Il2CppClass* IEnumerator_t287207039_il2cpp_TypeInfo_var;
extern const uint32_t X509CertificateEnumerator_System_Collections_IEnumerator_MoveNext_m1008796181_MetadataUsageId;
extern "C"  bool X509CertificateEnumerator_System_Collections_IEnumerator_MoveNext_m1008796181 (X509CertificateEnumerator_t3569011382 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateEnumerator_System_Collections_IEnumerator_MoveNext_m1008796181_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Il2CppObject * L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t287207039_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.Reset()
extern Il2CppClass* IEnumerator_t287207039_il2cpp_TypeInfo_var;
extern const uint32_t X509CertificateEnumerator_System_Collections_IEnumerator_Reset_m2173605650_MetadataUsageId;
extern "C"  void X509CertificateEnumerator_System_Collections_IEnumerator_Reset_m2173605650 (X509CertificateEnumerator_t3569011382 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateEnumerator_System_Collections_IEnumerator_Reset_m2173605650_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Il2CppObject * L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t287207039_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::get_Current()
extern Il2CppClass* IEnumerator_t287207039_il2cpp_TypeInfo_var;
extern Il2CppClass* X509Certificate_t273828613_il2cpp_TypeInfo_var;
extern const uint32_t X509CertificateEnumerator_get_Current_m2126438283_MetadataUsageId;
extern "C"  X509Certificate_t273828613 * X509CertificateEnumerator_get_Current_m2126438283 (X509CertificateEnumerator_t3569011382 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateEnumerator_get_Current_m2126438283_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Il2CppObject * L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		Il2CppObject * L_1 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t287207039_il2cpp_TypeInfo_var, L_0);
		return ((X509Certificate_t273828613 *)CastclassClass(L_1, X509Certificate_t273828613_il2cpp_TypeInfo_var));
	}
}
// System.Boolean Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::MoveNext()
extern Il2CppClass* IEnumerator_t287207039_il2cpp_TypeInfo_var;
extern const uint32_t X509CertificateEnumerator_MoveNext_m4038787598_MetadataUsageId;
extern "C"  bool X509CertificateEnumerator_MoveNext_m4038787598 (X509CertificateEnumerator_t3569011382 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateEnumerator_MoveNext_m4038787598_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Il2CppObject * L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t287207039_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::Reset()
extern Il2CppClass* IEnumerator_t287207039_il2cpp_TypeInfo_var;
extern const uint32_t X509CertificateEnumerator_Reset_m2282105749_MetadataUsageId;
extern "C"  void X509CertificateEnumerator_Reset_m2282105749 (X509CertificateEnumerator_t3569011382 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509CertificateEnumerator_Reset_m2282105749_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Il2CppObject * L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t287207039_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void Mono.Security.X509.X509Chain::.ctor()
extern Il2CppClass* X509CertificateCollection_t3336811651_il2cpp_TypeInfo_var;
extern const uint32_t X509Chain__ctor_m4239706530_MetadataUsageId;
extern "C"  void X509Chain__ctor_m4239706530 (X509Chain_t3968320430 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Chain__ctor_m4239706530_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		X509CertificateCollection_t3336811651 * L_0 = (X509CertificateCollection_t3336811651 *)il2cpp_codegen_object_new(X509CertificateCollection_t3336811651_il2cpp_TypeInfo_var);
		X509CertificateCollection__ctor_m2517521230(L_0, /*hidden argument*/NULL);
		__this->set_certs_1(L_0);
		return;
	}
}
// System.Void Mono.Security.X509.X509Chain::.ctor(Mono.Security.X509.X509CertificateCollection)
extern Il2CppClass* X509CertificateCollection_t3336811651_il2cpp_TypeInfo_var;
extern const uint32_t X509Chain__ctor_m2818311608_MetadataUsageId;
extern "C"  void X509Chain__ctor_m2818311608 (X509Chain_t3968320430 * __this, X509CertificateCollection_t3336811651 * ___chain0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Chain__ctor_m2818311608_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		X509Chain__ctor_m4239706530(__this, /*hidden argument*/NULL);
		X509CertificateCollection_t3336811651 * L_0 = (X509CertificateCollection_t3336811651 *)il2cpp_codegen_object_new(X509CertificateCollection_t3336811651_il2cpp_TypeInfo_var);
		X509CertificateCollection__ctor_m2517521230(L_0, /*hidden argument*/NULL);
		__this->set__chain_3(L_0);
		X509CertificateCollection_t3336811651 * L_1 = __this->get__chain_3();
		X509CertificateCollection_t3336811651 * L_2 = ___chain0;
		NullCheck(L_1);
		X509CertificateCollection_AddRange_m2353463272(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// Mono.Security.X509.X509ChainStatusFlags Mono.Security.X509.X509Chain::get_Status()
extern "C"  int32_t X509Chain_get_Status_m4000836433 (X509Chain_t3968320430 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get__status_4();
		return L_0;
	}
}
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::get_TrustAnchors()
extern Il2CppClass* X509CertificateCollection_t3336811651_il2cpp_TypeInfo_var;
extern const uint32_t X509Chain_get_TrustAnchors_m885238782_MetadataUsageId;
extern "C"  X509CertificateCollection_t3336811651 * X509Chain_get_TrustAnchors_m885238782 (X509Chain_t3968320430 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Chain_get_TrustAnchors_m885238782_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		X509CertificateCollection_t3336811651 * L_0 = __this->get_roots_0();
		if (L_0)
		{
			goto IL_002d;
		}
	}
	{
		X509CertificateCollection_t3336811651 * L_1 = (X509CertificateCollection_t3336811651 *)il2cpp_codegen_object_new(X509CertificateCollection_t3336811651_il2cpp_TypeInfo_var);
		X509CertificateCollection__ctor_m2517521230(L_1, /*hidden argument*/NULL);
		__this->set_roots_0(L_1);
		X509CertificateCollection_t3336811651 * L_2 = __this->get_roots_0();
		X509CertificateCollection_t3336811651 * L_3 = X509StoreManager_get_TrustedRootCertificates_m2593128238(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		X509CertificateCollection_AddRange_m2353463272(L_2, L_3, /*hidden argument*/NULL);
		X509CertificateCollection_t3336811651 * L_4 = __this->get_roots_0();
		return L_4;
	}

IL_002d:
	{
		X509CertificateCollection_t3336811651 * L_5 = __this->get_roots_0();
		return L_5;
	}
}
// System.Boolean Mono.Security.X509.X509Chain::Build(Mono.Security.X509.X509Certificate)
extern Il2CppClass* X509CertificateCollection_t3336811651_il2cpp_TypeInfo_var;
extern Il2CppClass* IDisposable_t1628921374_il2cpp_TypeInfo_var;
extern const uint32_t X509Chain_Build_m2539190260_MetadataUsageId;
extern "C"  bool X509Chain_Build_m2539190260 (X509Chain_t3968320430 * __this, X509Certificate_t273828613 * ___leaf0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Chain_Build_m2539190260_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	X509Certificate_t273828613 * V_0 = NULL;
	X509Certificate_t273828613 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	X509Certificate_t273828613 * V_4 = NULL;
	X509CertificateEnumerator_t3569011382 * V_5 = NULL;
	bool V_6 = false;
	Il2CppObject * V_7 = NULL;
	Exception_t1967233988 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1967233988 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		__this->set__status_4(0);
		X509CertificateCollection_t3336811651 * L_0 = __this->get__chain_3();
		if (L_0)
		{
			goto IL_0060;
		}
	}
	{
		X509CertificateCollection_t3336811651 * L_1 = (X509CertificateCollection_t3336811651 *)il2cpp_codegen_object_new(X509CertificateCollection_t3336811651_il2cpp_TypeInfo_var);
		X509CertificateCollection__ctor_m2517521230(L_1, /*hidden argument*/NULL);
		__this->set__chain_3(L_1);
		X509Certificate_t273828613 * L_2 = ___leaf0;
		V_0 = L_2;
		X509Certificate_t273828613 * L_3 = V_0;
		V_1 = L_3;
		goto IL_003d;
	}

IL_0026:
	{
		X509Certificate_t273828613 * L_4 = V_0;
		V_1 = L_4;
		X509CertificateCollection_t3336811651 * L_5 = __this->get__chain_3();
		X509Certificate_t273828613 * L_6 = V_0;
		NullCheck(L_5);
		X509CertificateCollection_Add_m1585739833(L_5, L_6, /*hidden argument*/NULL);
		X509Certificate_t273828613 * L_7 = V_0;
		X509Certificate_t273828613 * L_8 = X509Chain_FindCertificateParent_m3659377521(__this, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
	}

IL_003d:
	{
		X509Certificate_t273828613 * L_9 = V_0;
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		X509Certificate_t273828613 * L_10 = V_0;
		NullCheck(L_10);
		bool L_11 = X509Certificate_get_IsSelfSigned_m3915010913(L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0026;
		}
	}

IL_004e:
	{
		X509Certificate_t273828613 * L_12 = V_1;
		X509Certificate_t273828613 * L_13 = X509Chain_FindCertificateRoot_m3426389033(__this, L_12, /*hidden argument*/NULL);
		__this->set__root_2(L_13);
		goto IL_00fa;
	}

IL_0060:
	{
		X509CertificateCollection_t3336811651 * L_14 = __this->get__chain_3();
		NullCheck(L_14);
		int32_t L_15 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Collections.CollectionBase::get_Count() */, L_14);
		V_2 = L_15;
		int32_t L_16 = V_2;
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_00ed;
		}
	}
	{
		X509Certificate_t273828613 * L_17 = ___leaf0;
		X509CertificateCollection_t3336811651 * L_18 = __this->get__chain_3();
		NullCheck(L_18);
		X509Certificate_t273828613 * L_19 = X509CertificateCollection_get_Item_m1446680334(L_18, 0, /*hidden argument*/NULL);
		bool L_20 = X509Chain_IsParent_m3808002146(__this, L_17, L_19, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00e8;
		}
	}
	{
		V_3 = 1;
		goto IL_00c0;
	}

IL_0092:
	{
		X509CertificateCollection_t3336811651 * L_21 = __this->get__chain_3();
		int32_t L_22 = V_3;
		NullCheck(L_21);
		X509Certificate_t273828613 * L_23 = X509CertificateCollection_get_Item_m1446680334(L_21, ((int32_t)((int32_t)L_22-(int32_t)1)), /*hidden argument*/NULL);
		X509CertificateCollection_t3336811651 * L_24 = __this->get__chain_3();
		int32_t L_25 = V_3;
		NullCheck(L_24);
		X509Certificate_t273828613 * L_26 = X509CertificateCollection_get_Item_m1446680334(L_24, L_25, /*hidden argument*/NULL);
		bool L_27 = X509Chain_IsParent_m3808002146(__this, L_23, L_26, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_00bc;
		}
	}
	{
		goto IL_00c7;
	}

IL_00bc:
	{
		int32_t L_28 = V_3;
		V_3 = ((int32_t)((int32_t)L_28+(int32_t)1));
	}

IL_00c0:
	{
		int32_t L_29 = V_3;
		int32_t L_30 = V_2;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0092;
		}
	}

IL_00c7:
	{
		int32_t L_31 = V_3;
		int32_t L_32 = V_2;
		if ((!(((uint32_t)L_31) == ((uint32_t)L_32))))
		{
			goto IL_00e8;
		}
	}
	{
		X509CertificateCollection_t3336811651 * L_33 = __this->get__chain_3();
		int32_t L_34 = V_2;
		NullCheck(L_33);
		X509Certificate_t273828613 * L_35 = X509CertificateCollection_get_Item_m1446680334(L_33, ((int32_t)((int32_t)L_34-(int32_t)1)), /*hidden argument*/NULL);
		X509Certificate_t273828613 * L_36 = X509Chain_FindCertificateRoot_m3426389033(__this, L_35, /*hidden argument*/NULL);
		__this->set__root_2(L_36);
	}

IL_00e8:
	{
		goto IL_00fa;
	}

IL_00ed:
	{
		X509Certificate_t273828613 * L_37 = ___leaf0;
		X509Certificate_t273828613 * L_38 = X509Chain_FindCertificateRoot_m3426389033(__this, L_37, /*hidden argument*/NULL);
		__this->set__root_2(L_38);
	}

IL_00fa:
	{
		X509CertificateCollection_t3336811651 * L_39 = __this->get__chain_3();
		if (!L_39)
		{
			goto IL_01a6;
		}
	}
	{
		int32_t L_40 = __this->get__status_4();
		if (L_40)
		{
			goto IL_01a6;
		}
	}
	{
		X509CertificateCollection_t3336811651 * L_41 = __this->get__chain_3();
		NullCheck(L_41);
		X509CertificateEnumerator_t3569011382 * L_42 = X509CertificateCollection_GetEnumerator_m1926496255(L_41, /*hidden argument*/NULL);
		V_5 = L_42;
	}

IL_011d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0140;
		}

IL_0122:
		{
			X509CertificateEnumerator_t3569011382 * L_43 = V_5;
			NullCheck(L_43);
			X509Certificate_t273828613 * L_44 = X509CertificateEnumerator_get_Current_m2126438283(L_43, /*hidden argument*/NULL);
			V_4 = L_44;
			X509Certificate_t273828613 * L_45 = V_4;
			bool L_46 = X509Chain_IsValid_m122831928(__this, L_45, /*hidden argument*/NULL);
			if (L_46)
			{
				goto IL_0140;
			}
		}

IL_0138:
		{
			V_6 = (bool)0;
			IL2CPP_LEAVE(0x1B0, FINALLY_0151);
		}

IL_0140:
		{
			X509CertificateEnumerator_t3569011382 * L_47 = V_5;
			NullCheck(L_47);
			bool L_48 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::MoveNext() */, L_47);
			if (L_48)
			{
				goto IL_0122;
			}
		}

IL_014c:
		{
			IL2CPP_LEAVE(0x167, FINALLY_0151);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1967233988 *)e.ex;
		goto FINALLY_0151;
	}

FINALLY_0151:
	{ // begin finally (depth: 1)
		{
			X509CertificateEnumerator_t3569011382 * L_49 = V_5;
			V_7 = ((Il2CppObject *)IsInst(L_49, IDisposable_t1628921374_il2cpp_TypeInfo_var));
			Il2CppObject * L_50 = V_7;
			if (L_50)
			{
				goto IL_015f;
			}
		}

IL_015e:
		{
			IL2CPP_END_FINALLY(337)
		}

IL_015f:
		{
			Il2CppObject * L_51 = V_7;
			NullCheck(L_51);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1628921374_il2cpp_TypeInfo_var, L_51);
			IL2CPP_END_FINALLY(337)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(337)
	{
		IL2CPP_JUMP_TBL(0x1B0, IL_01b0)
		IL2CPP_JUMP_TBL(0x167, IL_0167)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1967233988 *)
	}

IL_0167:
	{
		X509Certificate_t273828613 * L_52 = ___leaf0;
		bool L_53 = X509Chain_IsValid_m122831928(__this, L_52, /*hidden argument*/NULL);
		if (L_53)
		{
			goto IL_0188;
		}
	}
	{
		int32_t L_54 = __this->get__status_4();
		if ((!(((uint32_t)L_54) == ((uint32_t)2))))
		{
			goto IL_0186;
		}
	}
	{
		__this->set__status_4(1);
	}

IL_0186:
	{
		return (bool)0;
	}

IL_0188:
	{
		X509Certificate_t273828613 * L_55 = __this->get__root_2();
		if (!L_55)
		{
			goto IL_01a6;
		}
	}
	{
		X509Certificate_t273828613 * L_56 = __this->get__root_2();
		bool L_57 = X509Chain_IsValid_m122831928(__this, L_56, /*hidden argument*/NULL);
		if (L_57)
		{
			goto IL_01a6;
		}
	}
	{
		return (bool)0;
	}

IL_01a6:
	{
		int32_t L_58 = __this->get__status_4();
		return (bool)((((int32_t)L_58) == ((int32_t)0))? 1 : 0);
	}

IL_01b0:
	{
		bool L_59 = V_6;
		return L_59;
	}
}
// System.Boolean Mono.Security.X509.X509Chain::IsValid(Mono.Security.X509.X509Certificate)
extern Il2CppClass* ServicePointManager_t3601037980_il2cpp_TypeInfo_var;
extern const uint32_t X509Chain_IsValid_m122831928_MetadataUsageId;
extern "C"  bool X509Chain_IsValid_m122831928 (X509Chain_t3968320430 * __this, X509Certificate_t273828613 * ___cert0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Chain_IsValid_m122831928_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		X509Certificate_t273828613 * L_0 = ___cert0;
		NullCheck(L_0);
		bool L_1 = X509Certificate_get_IsCurrent_m3064883298(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		__this->set__status_4(2);
		return (bool)0;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ServicePointManager_t3601037980_il2cpp_TypeInfo_var);
		bool L_2 = ServicePointManager_get_CheckCertificateRevocationList_m838738096(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}

IL_001e:
	{
		return (bool)1;
	}
}
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::FindCertificateParent(Mono.Security.X509.X509Certificate)
extern Il2CppClass* IDisposable_t1628921374_il2cpp_TypeInfo_var;
extern const uint32_t X509Chain_FindCertificateParent_m3659377521_MetadataUsageId;
extern "C"  X509Certificate_t273828613 * X509Chain_FindCertificateParent_m3659377521 (X509Chain_t3968320430 * __this, X509Certificate_t273828613 * ___child0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Chain_FindCertificateParent_m3659377521_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	X509Certificate_t273828613 * V_0 = NULL;
	X509CertificateEnumerator_t3569011382 * V_1 = NULL;
	X509Certificate_t273828613 * V_2 = NULL;
	Il2CppObject * V_3 = NULL;
	Exception_t1967233988 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1967233988 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		X509CertificateCollection_t3336811651 * L_0 = __this->get_certs_1();
		NullCheck(L_0);
		X509CertificateEnumerator_t3569011382 * L_1 = X509CertificateCollection_GetEnumerator_m1926496255(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002c;
		}

IL_0011:
		{
			X509CertificateEnumerator_t3569011382 * L_2 = V_1;
			NullCheck(L_2);
			X509Certificate_t273828613 * L_3 = X509CertificateEnumerator_get_Current_m2126438283(L_2, /*hidden argument*/NULL);
			V_0 = L_3;
			X509Certificate_t273828613 * L_4 = ___child0;
			X509Certificate_t273828613 * L_5 = V_0;
			bool L_6 = X509Chain_IsParent_m3808002146(__this, L_4, L_5, /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_002c;
			}
		}

IL_0025:
		{
			X509Certificate_t273828613 * L_7 = V_0;
			V_2 = L_7;
			IL2CPP_LEAVE(0x50, FINALLY_003c);
		}

IL_002c:
		{
			X509CertificateEnumerator_t3569011382 * L_8 = V_1;
			NullCheck(L_8);
			bool L_9 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::MoveNext() */, L_8);
			if (L_9)
			{
				goto IL_0011;
			}
		}

IL_0037:
		{
			IL2CPP_LEAVE(0x4E, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1967233988 *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		{
			X509CertificateEnumerator_t3569011382 * L_10 = V_1;
			V_3 = ((Il2CppObject *)IsInst(L_10, IDisposable_t1628921374_il2cpp_TypeInfo_var));
			Il2CppObject * L_11 = V_3;
			if (L_11)
			{
				goto IL_0047;
			}
		}

IL_0046:
		{
			IL2CPP_END_FINALLY(60)
		}

IL_0047:
		{
			Il2CppObject * L_12 = V_3;
			NullCheck(L_12);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1628921374_il2cpp_TypeInfo_var, L_12);
			IL2CPP_END_FINALLY(60)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x50, IL_0050)
		IL2CPP_JUMP_TBL(0x4E, IL_004e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1967233988 *)
	}

IL_004e:
	{
		return (X509Certificate_t273828613 *)NULL;
	}

IL_0050:
	{
		X509Certificate_t273828613 * L_13 = V_2;
		return L_13;
	}
}
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::FindCertificateRoot(Mono.Security.X509.X509Certificate)
extern Il2CppClass* IDisposable_t1628921374_il2cpp_TypeInfo_var;
extern const uint32_t X509Chain_FindCertificateRoot_m3426389033_MetadataUsageId;
extern "C"  X509Certificate_t273828613 * X509Chain_FindCertificateRoot_m3426389033 (X509Chain_t3968320430 * __this, X509Certificate_t273828613 * ___potentialRoot0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Chain_FindCertificateRoot_m3426389033_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	X509Certificate_t273828613 * V_0 = NULL;
	X509CertificateEnumerator_t3569011382 * V_1 = NULL;
	X509Certificate_t273828613 * V_2 = NULL;
	Il2CppObject * V_3 = NULL;
	Exception_t1967233988 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1967233988 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		X509Certificate_t273828613 * L_0 = ___potentialRoot0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		__this->set__status_4(((int32_t)65536));
		return (X509Certificate_t273828613 *)NULL;
	}

IL_0013:
	{
		X509Certificate_t273828613 * L_1 = ___potentialRoot0;
		bool L_2 = X509Chain_IsTrusted_m622221811(__this, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		X509Certificate_t273828613 * L_3 = ___potentialRoot0;
		return L_3;
	}

IL_0021:
	{
		X509CertificateCollection_t3336811651 * L_4 = X509Chain_get_TrustAnchors_m885238782(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		X509CertificateEnumerator_t3569011382 * L_5 = X509CertificateCollection_GetEnumerator_m1926496255(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
	}

IL_002d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004d;
		}

IL_0032:
		{
			X509CertificateEnumerator_t3569011382 * L_6 = V_1;
			NullCheck(L_6);
			X509Certificate_t273828613 * L_7 = X509CertificateEnumerator_get_Current_m2126438283(L_6, /*hidden argument*/NULL);
			V_0 = L_7;
			X509Certificate_t273828613 * L_8 = ___potentialRoot0;
			X509Certificate_t273828613 * L_9 = V_0;
			bool L_10 = X509Chain_IsParent_m3808002146(__this, L_8, L_9, /*hidden argument*/NULL);
			if (!L_10)
			{
				goto IL_004d;
			}
		}

IL_0046:
		{
			X509Certificate_t273828613 * L_11 = V_0;
			V_2 = L_11;
			IL2CPP_LEAVE(0x91, FINALLY_005d);
		}

IL_004d:
		{
			X509CertificateEnumerator_t3569011382 * L_12 = V_1;
			NullCheck(L_12);
			bool L_13 = VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::MoveNext() */, L_12);
			if (L_13)
			{
				goto IL_0032;
			}
		}

IL_0058:
		{
			IL2CPP_LEAVE(0x6F, FINALLY_005d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1967233988 *)e.ex;
		goto FINALLY_005d;
	}

FINALLY_005d:
	{ // begin finally (depth: 1)
		{
			X509CertificateEnumerator_t3569011382 * L_14 = V_1;
			V_3 = ((Il2CppObject *)IsInst(L_14, IDisposable_t1628921374_il2cpp_TypeInfo_var));
			Il2CppObject * L_15 = V_3;
			if (L_15)
			{
				goto IL_0068;
			}
		}

IL_0067:
		{
			IL2CPP_END_FINALLY(93)
		}

IL_0068:
		{
			Il2CppObject * L_16 = V_3;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1628921374_il2cpp_TypeInfo_var, L_16);
			IL2CPP_END_FINALLY(93)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(93)
	{
		IL2CPP_JUMP_TBL(0x91, IL_0091)
		IL2CPP_JUMP_TBL(0x6F, IL_006f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1967233988 *)
	}

IL_006f:
	{
		X509Certificate_t273828613 * L_17 = ___potentialRoot0;
		NullCheck(L_17);
		bool L_18 = X509Certificate_get_IsSelfSigned_m3915010913(L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0084;
		}
	}
	{
		__this->set__status_4(((int32_t)32));
		X509Certificate_t273828613 * L_19 = ___potentialRoot0;
		return L_19;
	}

IL_0084:
	{
		__this->set__status_4(((int32_t)65536));
		return (X509Certificate_t273828613 *)NULL;
	}

IL_0091:
	{
		X509Certificate_t273828613 * L_20 = V_2;
		return L_20;
	}
}
// System.Boolean Mono.Security.X509.X509Chain::IsTrusted(Mono.Security.X509.X509Certificate)
extern "C"  bool X509Chain_IsTrusted_m622221811 (X509Chain_t3968320430 * __this, X509Certificate_t273828613 * ___potentialTrusted0, const MethodInfo* method)
{
	{
		X509CertificateCollection_t3336811651 * L_0 = X509Chain_get_TrustAnchors_m885238782(__this, /*hidden argument*/NULL);
		X509Certificate_t273828613 * L_1 = ___potentialTrusted0;
		NullCheck(L_0);
		bool L_2 = X509CertificateCollection_Contains_m1747801975(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Mono.Security.X509.X509Chain::IsParent(Mono.Security.X509.X509Certificate,Mono.Security.X509.X509Certificate)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* BasicConstraintsExtension_t455698010_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3839369850;
extern const uint32_t X509Chain_IsParent_m3808002146_MetadataUsageId;
extern "C"  bool X509Chain_IsParent_m3808002146 (X509Chain_t3968320430 * __this, X509Certificate_t273828613 * ___child0, X509Certificate_t273828613 * ___parent1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Chain_IsParent_m3808002146_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	X509Extension_t1510964269 * V_0 = NULL;
	BasicConstraintsExtension_t455698010 * V_1 = NULL;
	{
		X509Certificate_t273828613 * L_0 = ___child0;
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String Mono.Security.X509.X509Certificate::get_IssuerName() */, L_0);
		X509Certificate_t273828613 * L_2 = ___parent1;
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String Mono.Security.X509.X509Certificate::get_SubjectName() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Inequality_m2125462205(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		X509Certificate_t273828613 * L_5 = ___parent1;
		NullCheck(L_5);
		int32_t L_6 = X509Certificate_get_Version_m3883833137(L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_6) <= ((int32_t)2)))
		{
			goto IL_0074;
		}
	}
	{
		X509Certificate_t273828613 * L_7 = ___parent1;
		bool L_8 = X509Chain_IsTrusted_m622221811(__this, L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0074;
		}
	}
	{
		X509Certificate_t273828613 * L_9 = ___parent1;
		NullCheck(L_9);
		X509ExtensionCollection_t3528692651 * L_10 = X509Certificate_get_Extensions_m1715365530(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		X509Extension_t1510964269 * L_11 = X509ExtensionCollection_get_Item_m3340679653(L_10, _stringLiteral3839369850, /*hidden argument*/NULL);
		V_0 = L_11;
		X509Extension_t1510964269 * L_12 = V_0;
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		X509Extension_t1510964269 * L_13 = V_0;
		BasicConstraintsExtension_t455698010 * L_14 = (BasicConstraintsExtension_t455698010 *)il2cpp_codegen_object_new(BasicConstraintsExtension_t455698010_il2cpp_TypeInfo_var);
		BasicConstraintsExtension__ctor_m1872483704(L_14, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		BasicConstraintsExtension_t455698010 * L_15 = V_1;
		NullCheck(L_15);
		bool L_16 = BasicConstraintsExtension_get_CertificateAuthority_m1090073055(L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_0064;
		}
	}
	{
		__this->set__status_4(((int32_t)1024));
	}

IL_0064:
	{
		goto IL_0074;
	}

IL_0069:
	{
		__this->set__status_4(((int32_t)1024));
	}

IL_0074:
	{
		X509Certificate_t273828613 * L_17 = ___child0;
		X509Certificate_t273828613 * L_18 = ___parent1;
		NullCheck(L_18);
		RSA_t1557565273 * L_19 = VirtFuncInvoker0< RSA_t1557565273 * >::Invoke(10 /* System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::get_RSA() */, L_18);
		NullCheck(L_17);
		bool L_20 = X509Certificate_VerifySignature_m120874446(L_17, L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_008e;
		}
	}
	{
		__this->set__status_4(8);
		return (bool)0;
	}

IL_008e:
	{
		return (bool)1;
	}
}
// System.Void Mono.Security.X509.X509Crl::.ctor(System.Byte[])
extern Il2CppClass* ArgumentNullException_t3214793280_il2cpp_TypeInfo_var;
extern Il2CppClass* ByteU5BU5D_t58506160_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral98781;
extern const uint32_t X509Crl__ctor_m1270803331_MetadataUsageId;
extern "C"  void X509Crl__ctor_m1270803331 (X509Crl_t2942805322 * __this, ByteU5BU5D_t58506160* ___crl0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Crl__ctor_m1270803331_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t58506160* L_0 = ___crl0;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t3214793280 * L_1 = (ArgumentNullException_t3214793280 *)il2cpp_codegen_object_new(ArgumentNullException_t3214793280_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m135444188(L_1, _stringLiteral98781, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0017:
	{
		ByteU5BU5D_t58506160* L_2 = ___crl0;
		NullCheck((Il2CppArray *)(Il2CppArray *)L_2);
		Il2CppObject * L_3 = VirtFuncInvoker0< Il2CppObject * >::Invoke(5 /* System.Object System.Array::Clone() */, (Il2CppArray *)(Il2CppArray *)L_2);
		__this->set_encoded_8(((ByteU5BU5D_t58506160*)Castclass(L_3, ByteU5BU5D_t58506160_il2cpp_TypeInfo_var)));
		ByteU5BU5D_t58506160* L_4 = __this->get_encoded_8();
		X509Crl_Parse_m3104051218(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.X509.X509Crl::Parse(System.Byte[])
extern Il2CppClass* ASN1_t1254135647_il2cpp_TypeInfo_var;
extern Il2CppClass* CryptographicException_t3718270561_il2cpp_TypeInfo_var;
extern Il2CppClass* X501_t591126674_il2cpp_TypeInfo_var;
extern Il2CppClass* ArrayList_t2121638921_il2cpp_TypeInfo_var;
extern Il2CppClass* X509CrlEntry_t3291243611_il2cpp_TypeInfo_var;
extern Il2CppClass* X509ExtensionCollection_t3528692651_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* ByteU5BU5D_t58506160_il2cpp_TypeInfo_var;
extern Il2CppClass* Il2CppObject_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3952156313;
extern Il2CppCodeGenString* _stringLiteral2639820495;
extern const uint32_t X509Crl_Parse_m3104051218_MetadataUsageId;
extern "C"  void X509Crl_Parse_m3104051218 (X509Crl_t2942805322 * __this, ByteU5BU5D_t58506160* ___crl0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Crl_Parse_m3104051218_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = NULL;
	ASN1_t1254135647 * V_1 = NULL;
	ASN1_t1254135647 * V_2 = NULL;
	int32_t V_3 = 0;
	ASN1_t1254135647 * V_4 = NULL;
	ASN1_t1254135647 * V_5 = NULL;
	int32_t V_6 = 0;
	ASN1_t1254135647 * V_7 = NULL;
	String_t* V_8 = NULL;
	ByteU5BU5D_t58506160* V_9 = NULL;
	Exception_t1967233988 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1967233988 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = _stringLiteral3952156313;
	}

IL_0006:
	try
	{ // begin try (depth: 1)
		{
			ByteU5BU5D_t58506160* L_0 = __this->get_encoded_8();
			ASN1_t1254135647 * L_1 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
			ASN1__ctor_m2555733065(L_1, L_0, /*hidden argument*/NULL);
			V_1 = L_1;
			ASN1_t1254135647 * L_2 = V_1;
			NullCheck(L_2);
			uint8_t L_3 = ASN1_get_Tag_m1269404867(L_2, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)48)))))
			{
				goto IL_002b;
			}
		}

IL_001f:
		{
			ASN1_t1254135647 * L_4 = V_1;
			NullCheck(L_4);
			int32_t L_5 = ASN1_get_Count_m3031159196(L_4, /*hidden argument*/NULL);
			if ((((int32_t)L_5) == ((int32_t)3)))
			{
				goto IL_0032;
			}
		}

IL_002b:
		{
			String_t* L_6 = V_0;
			CryptographicException_t3718270561 * L_7 = (CryptographicException_t3718270561 *)il2cpp_codegen_object_new(CryptographicException_t3718270561_il2cpp_TypeInfo_var);
			CryptographicException__ctor_m2400722889(L_7, L_6, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_7);
		}

IL_0032:
		{
			ASN1_t1254135647 * L_8 = V_1;
			NullCheck(L_8);
			ASN1_t1254135647 * L_9 = ASN1_get_Item_m3112983888(L_8, 0, /*hidden argument*/NULL);
			V_2 = L_9;
			ASN1_t1254135647 * L_10 = V_2;
			NullCheck(L_10);
			uint8_t L_11 = ASN1_get_Tag_m1269404867(L_10, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)48)))))
			{
				goto IL_0053;
			}
		}

IL_0047:
		{
			ASN1_t1254135647 * L_12 = V_2;
			NullCheck(L_12);
			int32_t L_13 = ASN1_get_Count_m3031159196(L_12, /*hidden argument*/NULL);
			if ((((int32_t)L_13) >= ((int32_t)3)))
			{
				goto IL_005a;
			}
		}

IL_0053:
		{
			String_t* L_14 = V_0;
			CryptographicException_t3718270561 * L_15 = (CryptographicException_t3718270561 *)il2cpp_codegen_object_new(CryptographicException_t3718270561_il2cpp_TypeInfo_var);
			CryptographicException__ctor_m2400722889(L_15, L_14, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_15);
		}

IL_005a:
		{
			V_3 = 0;
			ASN1_t1254135647 * L_16 = V_2;
			int32_t L_17 = V_3;
			NullCheck(L_16);
			ASN1_t1254135647 * L_18 = ASN1_get_Item_m3112983888(L_16, L_17, /*hidden argument*/NULL);
			NullCheck(L_18);
			uint8_t L_19 = ASN1_get_Tag_m1269404867(L_18, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_19) == ((uint32_t)2))))
			{
				goto IL_008e;
			}
		}

IL_006e:
		{
			ASN1_t1254135647 * L_20 = V_2;
			int32_t L_21 = V_3;
			int32_t L_22 = L_21;
			V_3 = ((int32_t)((int32_t)L_22+(int32_t)1));
			NullCheck(L_20);
			ASN1_t1254135647 * L_23 = ASN1_get_Item_m3112983888(L_20, L_22, /*hidden argument*/NULL);
			NullCheck(L_23);
			ByteU5BU5D_t58506160* L_24 = ASN1_get_Value_m4232529916(L_23, /*hidden argument*/NULL);
			NullCheck(L_24);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_24, 0);
			int32_t L_25 = 0;
			__this->set_version_1((((int32_t)((uint8_t)((int32_t)((int32_t)((L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25)))+(int32_t)1))))));
			goto IL_0095;
		}

IL_008e:
		{
			__this->set_version_1(1);
		}

IL_0095:
		{
			ASN1_t1254135647 * L_26 = V_2;
			int32_t L_27 = V_3;
			int32_t L_28 = L_27;
			V_3 = ((int32_t)((int32_t)L_28+(int32_t)1));
			NullCheck(L_26);
			ASN1_t1254135647 * L_29 = ASN1_get_Item_m3112983888(L_26, L_28, /*hidden argument*/NULL);
			NullCheck(L_29);
			ASN1_t1254135647 * L_30 = ASN1_get_Item_m3112983888(L_29, 0, /*hidden argument*/NULL);
			String_t* L_31 = ASN1Convert_ToOid_m1387992843(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
			__this->set_signatureOID_5(L_31);
			ASN1_t1254135647 * L_32 = V_2;
			int32_t L_33 = V_3;
			int32_t L_34 = L_33;
			V_3 = ((int32_t)((int32_t)L_34+(int32_t)1));
			NullCheck(L_32);
			ASN1_t1254135647 * L_35 = ASN1_get_Item_m3112983888(L_32, L_34, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(X501_t591126674_il2cpp_TypeInfo_var);
			String_t* L_36 = X501_ToString_m1957208426(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
			__this->set_issuer_0(L_36);
			ASN1_t1254135647 * L_37 = V_2;
			int32_t L_38 = V_3;
			int32_t L_39 = L_38;
			V_3 = ((int32_t)((int32_t)L_39+(int32_t)1));
			NullCheck(L_37);
			ASN1_t1254135647 * L_40 = ASN1_get_Item_m3112983888(L_37, L_39, /*hidden argument*/NULL);
			DateTime_t339033936  L_41 = ASN1Convert_ToDateTime_m864003254(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
			__this->set_thisUpdate_2(L_41);
			ASN1_t1254135647 * L_42 = V_2;
			int32_t L_43 = V_3;
			int32_t L_44 = L_43;
			V_3 = ((int32_t)((int32_t)L_44+(int32_t)1));
			NullCheck(L_42);
			ASN1_t1254135647 * L_45 = ASN1_get_Item_m3112983888(L_42, L_44, /*hidden argument*/NULL);
			V_4 = L_45;
			ASN1_t1254135647 * L_46 = V_4;
			NullCheck(L_46);
			uint8_t L_47 = ASN1_get_Tag_m1269404867(L_46, /*hidden argument*/NULL);
			if ((((int32_t)L_47) == ((int32_t)((int32_t)23))))
			{
				goto IL_0106;
			}
		}

IL_00f8:
		{
			ASN1_t1254135647 * L_48 = V_4;
			NullCheck(L_48);
			uint8_t L_49 = ASN1_get_Tag_m1269404867(L_48, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_49) == ((uint32_t)((int32_t)24)))))
			{
				goto IL_0120;
			}
		}

IL_0106:
		{
			ASN1_t1254135647 * L_50 = V_4;
			DateTime_t339033936  L_51 = ASN1Convert_ToDateTime_m864003254(NULL /*static, unused*/, L_50, /*hidden argument*/NULL);
			__this->set_nextUpdate_3(L_51);
			ASN1_t1254135647 * L_52 = V_2;
			int32_t L_53 = V_3;
			int32_t L_54 = L_53;
			V_3 = ((int32_t)((int32_t)L_54+(int32_t)1));
			NullCheck(L_52);
			ASN1_t1254135647 * L_55 = ASN1_get_Item_m3112983888(L_52, L_54, /*hidden argument*/NULL);
			V_4 = L_55;
		}

IL_0120:
		{
			ArrayList_t2121638921 * L_56 = (ArrayList_t2121638921 *)il2cpp_codegen_object_new(ArrayList_t2121638921_il2cpp_TypeInfo_var);
			ArrayList__ctor_m1878432947(L_56, /*hidden argument*/NULL);
			__this->set_entries_4(L_56);
			ASN1_t1254135647 * L_57 = V_4;
			if (!L_57)
			{
				goto IL_017f;
			}
		}

IL_0132:
		{
			ASN1_t1254135647 * L_58 = V_4;
			NullCheck(L_58);
			uint8_t L_59 = ASN1_get_Tag_m1269404867(L_58, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_59) == ((uint32_t)((int32_t)48)))))
			{
				goto IL_017f;
			}
		}

IL_0140:
		{
			ASN1_t1254135647 * L_60 = V_4;
			V_5 = L_60;
			V_6 = 0;
			goto IL_016c;
		}

IL_014c:
		{
			ArrayList_t2121638921 * L_61 = __this->get_entries_4();
			ASN1_t1254135647 * L_62 = V_5;
			int32_t L_63 = V_6;
			NullCheck(L_62);
			ASN1_t1254135647 * L_64 = ASN1_get_Item_m3112983888(L_62, L_63, /*hidden argument*/NULL);
			X509CrlEntry_t3291243611 * L_65 = (X509CrlEntry_t3291243611 *)il2cpp_codegen_object_new(X509CrlEntry_t3291243611_il2cpp_TypeInfo_var);
			X509CrlEntry__ctor_m2720899934(L_65, L_64, /*hidden argument*/NULL);
			NullCheck(L_61);
			VirtFuncInvoker1< int32_t, Il2CppObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_61, L_65);
			int32_t L_66 = V_6;
			V_6 = ((int32_t)((int32_t)L_66+(int32_t)1));
		}

IL_016c:
		{
			int32_t L_67 = V_6;
			ASN1_t1254135647 * L_68 = V_5;
			NullCheck(L_68);
			int32_t L_69 = ASN1_get_Count_m3031159196(L_68, /*hidden argument*/NULL);
			if ((((int32_t)L_67) < ((int32_t)L_69)))
			{
				goto IL_014c;
			}
		}

IL_017a:
		{
			goto IL_0183;
		}

IL_017f:
		{
			int32_t L_70 = V_3;
			V_3 = ((int32_t)((int32_t)L_70-(int32_t)1));
		}

IL_0183:
		{
			ASN1_t1254135647 * L_71 = V_2;
			int32_t L_72 = V_3;
			NullCheck(L_71);
			ASN1_t1254135647 * L_73 = ASN1_get_Item_m3112983888(L_71, L_72, /*hidden argument*/NULL);
			V_7 = L_73;
			ASN1_t1254135647 * L_74 = V_7;
			if (!L_74)
			{
				goto IL_01c9;
			}
		}

IL_0193:
		{
			ASN1_t1254135647 * L_75 = V_7;
			NullCheck(L_75);
			uint8_t L_76 = ASN1_get_Tag_m1269404867(L_75, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_76) == ((uint32_t)((int32_t)160)))))
			{
				goto IL_01c9;
			}
		}

IL_01a4:
		{
			ASN1_t1254135647 * L_77 = V_7;
			NullCheck(L_77);
			int32_t L_78 = ASN1_get_Count_m3031159196(L_77, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_78) == ((uint32_t)1))))
			{
				goto IL_01c9;
			}
		}

IL_01b1:
		{
			ASN1_t1254135647 * L_79 = V_7;
			NullCheck(L_79);
			ASN1_t1254135647 * L_80 = ASN1_get_Item_m3112983888(L_79, 0, /*hidden argument*/NULL);
			X509ExtensionCollection_t3528692651 * L_81 = (X509ExtensionCollection_t3528692651 *)il2cpp_codegen_object_new(X509ExtensionCollection_t3528692651_il2cpp_TypeInfo_var);
			X509ExtensionCollection__ctor_m2115523054(L_81, L_80, /*hidden argument*/NULL);
			__this->set_extensions_7(L_81);
			goto IL_01d5;
		}

IL_01c9:
		{
			X509ExtensionCollection_t3528692651 * L_82 = (X509ExtensionCollection_t3528692651 *)il2cpp_codegen_object_new(X509ExtensionCollection_t3528692651_il2cpp_TypeInfo_var);
			X509ExtensionCollection__ctor_m2115523054(L_82, (ASN1_t1254135647 *)NULL, /*hidden argument*/NULL);
			__this->set_extensions_7(L_82);
		}

IL_01d5:
		{
			ASN1_t1254135647 * L_83 = V_1;
			NullCheck(L_83);
			ASN1_t1254135647 * L_84 = ASN1_get_Item_m3112983888(L_83, 1, /*hidden argument*/NULL);
			NullCheck(L_84);
			ASN1_t1254135647 * L_85 = ASN1_get_Item_m3112983888(L_84, 0, /*hidden argument*/NULL);
			String_t* L_86 = ASN1Convert_ToOid_m1387992843(NULL /*static, unused*/, L_85, /*hidden argument*/NULL);
			V_8 = L_86;
			String_t* L_87 = __this->get_signatureOID_5();
			String_t* L_88 = V_8;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_89 = String_op_Inequality_m2125462205(NULL /*static, unused*/, L_87, L_88, /*hidden argument*/NULL);
			if (!L_89)
			{
				goto IL_020c;
			}
		}

IL_01fb:
		{
			String_t* L_90 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_91 = String_Concat_m138640077(NULL /*static, unused*/, L_90, _stringLiteral2639820495, /*hidden argument*/NULL);
			CryptographicException_t3718270561 * L_92 = (CryptographicException_t3718270561 *)il2cpp_codegen_object_new(CryptographicException_t3718270561_il2cpp_TypeInfo_var);
			CryptographicException__ctor_m2400722889(L_92, L_91, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_92);
		}

IL_020c:
		{
			ASN1_t1254135647 * L_93 = V_1;
			NullCheck(L_93);
			ASN1_t1254135647 * L_94 = ASN1_get_Item_m3112983888(L_93, 2, /*hidden argument*/NULL);
			NullCheck(L_94);
			ByteU5BU5D_t58506160* L_95 = ASN1_get_Value_m4232529916(L_94, /*hidden argument*/NULL);
			V_9 = L_95;
			ByteU5BU5D_t58506160* L_96 = V_9;
			NullCheck(L_96);
			__this->set_signature_6(((ByteU5BU5D_t58506160*)SZArrayNew(ByteU5BU5D_t58506160_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_96)->max_length))))-(int32_t)1)))));
			ByteU5BU5D_t58506160* L_97 = V_9;
			ByteU5BU5D_t58506160* L_98 = __this->get_signature_6();
			ByteU5BU5D_t58506160* L_99 = __this->get_signature_6();
			NullCheck(L_99);
			Buffer_BlockCopy_m1580643184(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_97, 1, (Il2CppArray *)(Il2CppArray *)L_98, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_99)->max_length)))), /*hidden argument*/NULL);
			goto IL_0254;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t1967233988 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Il2CppObject_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0247;
		throw e;
	}

CATCH_0247:
	{ // begin catch(System.Object)
		{
			String_t* L_100 = V_0;
			CryptographicException_t3718270561 * L_101 = (CryptographicException_t3718270561 *)il2cpp_codegen_object_new(CryptographicException_t3718270561_il2cpp_TypeInfo_var);
			CryptographicException__ctor_m2400722889(L_101, L_100, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_101);
		}

IL_024f:
		{
			goto IL_0254;
		}
	} // end catch (depth: 1)

IL_0254:
	{
		return;
	}
}
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::get_Extensions()
extern "C"  X509ExtensionCollection_t3528692651 * X509Crl_get_Extensions_m1716860512 (X509Crl_t2942805322 * __this, const MethodInfo* method)
{
	{
		X509ExtensionCollection_t3528692651 * L_0 = __this->get_extensions_7();
		return L_0;
	}
}
// System.Byte[] Mono.Security.X509.X509Crl::get_Hash()
extern Il2CppClass* ASN1_t1254135647_il2cpp_TypeInfo_var;
extern const uint32_t X509Crl_get_Hash_m2225876287_MetadataUsageId;
extern "C"  ByteU5BU5D_t58506160* X509Crl_get_Hash_m2225876287 (X509Crl_t2942805322 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Crl_get_Hash_m2225876287_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ASN1_t1254135647 * V_0 = NULL;
	ByteU5BU5D_t58506160* V_1 = NULL;
	HashAlgorithm_t24372250 * V_2 = NULL;
	{
		ByteU5BU5D_t58506160* L_0 = __this->get_hash_value_9();
		if (L_0)
		{
			goto IL_003d;
		}
	}
	{
		ByteU5BU5D_t58506160* L_1 = __this->get_encoded_8();
		ASN1_t1254135647 * L_2 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m2555733065(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ASN1_t1254135647 * L_3 = V_0;
		NullCheck(L_3);
		ASN1_t1254135647 * L_4 = ASN1_get_Item_m3112983888(L_3, 0, /*hidden argument*/NULL);
		NullCheck(L_4);
		ByteU5BU5D_t58506160* L_5 = VirtFuncInvoker0< ByteU5BU5D_t58506160* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_4);
		V_1 = L_5;
		String_t* L_6 = X509Crl_GetHashName_m3316681040(__this, /*hidden argument*/NULL);
		HashAlgorithm_t24372250 * L_7 = HashAlgorithm_Create_m2014549577(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		HashAlgorithm_t24372250 * L_8 = V_2;
		ByteU5BU5D_t58506160* L_9 = V_1;
		NullCheck(L_8);
		ByteU5BU5D_t58506160* L_10 = HashAlgorithm_ComputeHash_m1325366732(L_8, L_9, /*hidden argument*/NULL);
		__this->set_hash_value_9(L_10);
	}

IL_003d:
	{
		ByteU5BU5D_t58506160* L_11 = __this->get_hash_value_9();
		return L_11;
	}
}
// System.String Mono.Security.X509.X509Crl::get_IssuerName()
extern "C"  String_t* X509Crl_get_IssuerName_m3685864782 (X509Crl_t2942805322 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = __this->get_issuer_0();
		return L_0;
	}
}
// System.DateTime Mono.Security.X509.X509Crl::get_NextUpdate()
extern "C"  DateTime_t339033936  X509Crl_get_NextUpdate_m571696380 (X509Crl_t2942805322 * __this, const MethodInfo* method)
{
	{
		DateTime_t339033936  L_0 = __this->get_nextUpdate_3();
		return L_0;
	}
}
// System.Boolean Mono.Security.X509.X509Crl::Compare(System.Byte[],System.Byte[])
extern "C"  bool X509Crl_Compare_m1588393905 (X509Crl_t2942805322 * __this, ByteU5BU5D_t58506160* ___array10, ByteU5BU5D_t58506160* ___array21, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_t58506160* L_0 = ___array10;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ByteU5BU5D_t58506160* L_1 = ___array21;
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		return (bool)1;
	}

IL_000e:
	{
		ByteU5BU5D_t58506160* L_2 = ___array10;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		ByteU5BU5D_t58506160* L_3 = ___array21;
		if (L_3)
		{
			goto IL_001c;
		}
	}

IL_001a:
	{
		return (bool)0;
	}

IL_001c:
	{
		ByteU5BU5D_t58506160* L_4 = ___array10;
		NullCheck(L_4);
		ByteU5BU5D_t58506160* L_5 = ___array21;
		NullCheck(L_5);
		if ((((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_4)->max_length))))) == ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_5)->max_length)))))))
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		V_0 = 0;
		goto IL_0041;
	}

IL_0030:
	{
		ByteU5BU5D_t58506160* L_6 = ___array10;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		ByteU5BU5D_t58506160* L_9 = ___array21;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		if ((((int32_t)((L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8)))) == ((int32_t)((L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11))))))
		{
			goto IL_003d;
		}
	}
	{
		return (bool)0;
	}

IL_003d:
	{
		int32_t L_12 = V_0;
		V_0 = ((int32_t)((int32_t)L_12+(int32_t)1));
	}

IL_0041:
	{
		int32_t L_13 = V_0;
		ByteU5BU5D_t58506160* L_14 = ___array10;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_14)->max_length)))))))
		{
			goto IL_0030;
		}
	}
	{
		return (bool)1;
	}
}
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(Mono.Security.X509.X509Certificate)
extern Il2CppClass* ArgumentNullException_t3214793280_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3627398;
extern const uint32_t X509Crl_GetCrlEntry_m4208400872_MetadataUsageId;
extern "C"  X509CrlEntry_t3291243611 * X509Crl_GetCrlEntry_m4208400872 (X509Crl_t2942805322 * __this, X509Certificate_t273828613 * ___x5090, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Crl_GetCrlEntry_m4208400872_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		X509Certificate_t273828613 * L_0 = ___x5090;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t3214793280 * L_1 = (ArgumentNullException_t3214793280 *)il2cpp_codegen_object_new(ArgumentNullException_t3214793280_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m135444188(L_1, _stringLiteral3627398, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		X509Certificate_t273828613 * L_2 = ___x5090;
		NullCheck(L_2);
		ByteU5BU5D_t58506160* L_3 = VirtFuncInvoker0< ByteU5BU5D_t58506160* >::Invoke(13 /* System.Byte[] Mono.Security.X509.X509Certificate::get_SerialNumber() */, L_2);
		X509CrlEntry_t3291243611 * L_4 = X509Crl_GetCrlEntry_m1555363125(__this, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(System.Byte[])
extern Il2CppClass* ArgumentNullException_t3214793280_il2cpp_TypeInfo_var;
extern Il2CppClass* X509CrlEntry_t3291243611_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral83787357;
extern const uint32_t X509Crl_GetCrlEntry_m1555363125_MetadataUsageId;
extern "C"  X509CrlEntry_t3291243611 * X509Crl_GetCrlEntry_m1555363125 (X509Crl_t2942805322 * __this, ByteU5BU5D_t58506160* ___serialNumber0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Crl_GetCrlEntry_m1555363125_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	X509CrlEntry_t3291243611 * V_1 = NULL;
	{
		ByteU5BU5D_t58506160* L_0 = ___serialNumber0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t3214793280 * L_1 = (ArgumentNullException_t3214793280 *)il2cpp_codegen_object_new(ArgumentNullException_t3214793280_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m135444188(L_1, _stringLiteral83787357, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		V_0 = 0;
		goto IL_0042;
	}

IL_0018:
	{
		ArrayList_t2121638921 * L_2 = __this->get_entries_4();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		Il2CppObject * L_4 = VirtFuncInvoker1< Il2CppObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_2, L_3);
		V_1 = ((X509CrlEntry_t3291243611 *)CastclassClass(L_4, X509CrlEntry_t3291243611_il2cpp_TypeInfo_var));
		ByteU5BU5D_t58506160* L_5 = ___serialNumber0;
		X509CrlEntry_t3291243611 * L_6 = V_1;
		NullCheck(L_6);
		ByteU5BU5D_t58506160* L_7 = X509CrlEntry_get_SerialNumber_m2092313770(L_6, /*hidden argument*/NULL);
		bool L_8 = X509Crl_Compare_m1588393905(__this, L_5, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		X509CrlEntry_t3291243611 * L_9 = V_1;
		return L_9;
	}

IL_003e:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0042:
	{
		int32_t L_11 = V_0;
		ArrayList_t2121638921 * L_12 = __this->get_entries_4();
		NullCheck(L_12);
		int32_t L_13 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_12);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0018;
		}
	}
	{
		return (X509CrlEntry_t3291243611 *)NULL;
	}
}
// System.String Mono.Security.X509.X509Crl::GetHashName()
extern Il2CppClass* X509Crl_t2942805322_il2cpp_TypeInfo_var;
extern Il2CppClass* Dictionary_2_t190145395_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* CryptographicException_t3718270561_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m1958628151_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2198962788;
extern Il2CppCodeGenString* _stringLiteral2198962790;
extern Il2CppCodeGenString* _stringLiteral3392410245;
extern Il2CppCodeGenString* _stringLiteral2198962791;
extern Il2CppCodeGenString* _stringLiteral76155;
extern Il2CppCodeGenString* _stringLiteral76158;
extern Il2CppCodeGenString* _stringLiteral2543909;
extern Il2CppCodeGenString* _stringLiteral3904661102;
extern const uint32_t X509Crl_GetHashName_m3316681040_MetadataUsageId;
extern "C"  String_t* X509Crl_GetHashName_m3316681040 (X509Crl_t2942805322 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Crl_GetHashName_m3316681040_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = NULL;
	Dictionary_2_t190145395 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		String_t* L_0 = __this->get_signatureOID_5();
		V_0 = L_0;
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_008f;
		}
	}
	{
		Dictionary_2_t190145395 * L_2 = ((X509Crl_t2942805322_StaticFields*)X509Crl_t2942805322_il2cpp_TypeInfo_var->static_fields)->get_U3CU3Ef__switchU24map13_10();
		if (L_2)
		{
			goto IL_0054;
		}
	}
	{
		Dictionary_2_t190145395 * L_3 = (Dictionary_2_t190145395 *)il2cpp_codegen_object_new(Dictionary_2_t190145395_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1958628151(L_3, 4, /*hidden argument*/Dictionary_2__ctor_m1958628151_MethodInfo_var);
		V_1 = L_3;
		Dictionary_2_t190145395 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_4, _stringLiteral2198962788, 0);
		Dictionary_2_t190145395 * L_5 = V_1;
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_5, _stringLiteral2198962790, 1);
		Dictionary_2_t190145395 * L_6 = V_1;
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_6, _stringLiteral3392410245, 2);
		Dictionary_2_t190145395 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker2< String_t*, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1) */, L_7, _stringLiteral2198962791, 2);
		Dictionary_2_t190145395 * L_8 = V_1;
		((X509Crl_t2942805322_StaticFields*)X509Crl_t2942805322_il2cpp_TypeInfo_var->static_fields)->set_U3CU3Ef__switchU24map13_10(L_8);
	}

IL_0054:
	{
		Dictionary_2_t190145395 * L_9 = ((X509Crl_t2942805322_StaticFields*)X509Crl_t2942805322_il2cpp_TypeInfo_var->static_fields)->get_U3CU3Ef__switchU24map13_10();
		String_t* L_10 = V_0;
		NullCheck(L_9);
		bool L_11 = VirtFuncInvoker2< bool, String_t*, int32_t* >::Invoke(32 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&) */, L_9, L_10, (&V_2));
		if (!L_11)
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_12 = V_2;
		if (L_12 == 0)
		{
			goto IL_007d;
		}
		if (L_12 == 1)
		{
			goto IL_0083;
		}
		if (L_12 == 2)
		{
			goto IL_0089;
		}
	}
	{
		goto IL_008f;
	}

IL_007d:
	{
		return _stringLiteral76155;
	}

IL_0083:
	{
		return _stringLiteral76158;
	}

IL_0089:
	{
		return _stringLiteral2543909;
	}

IL_008f:
	{
		String_t* L_13 = __this->get_signatureOID_5();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m138640077(NULL /*static, unused*/, _stringLiteral3904661102, L_13, /*hidden argument*/NULL);
		CryptographicException_t3718270561 * L_15 = (CryptographicException_t3718270561 *)il2cpp_codegen_object_new(CryptographicException_t3718270561_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m2400722889(L_15, L_14, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15);
	}
}
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.DSA)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* CryptographicException_t3718270561_il2cpp_TypeInfo_var;
extern Il2CppClass* DSASignatureDeformatter_t426713980_il2cpp_TypeInfo_var;
extern Il2CppClass* ASN1_t1254135647_il2cpp_TypeInfo_var;
extern Il2CppClass* ByteU5BU5D_t58506160_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3392410245;
extern Il2CppCodeGenString* _stringLiteral3904661102;
extern Il2CppCodeGenString* _stringLiteral2543909;
extern const uint32_t X509Crl_VerifySignature_m1549750422_MetadataUsageId;
extern "C"  bool X509Crl_VerifySignature_m1549750422 (X509Crl_t2942805322 * __this, DSA_t1557551819 * ___dsa0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Crl_VerifySignature_m1549750422_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	DSASignatureDeformatter_t426713980 * V_0 = NULL;
	ASN1_t1254135647 * V_1 = NULL;
	ByteU5BU5D_t58506160* V_2 = NULL;
	ByteU5BU5D_t58506160* V_3 = NULL;
	ByteU5BU5D_t58506160* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		String_t* L_0 = __this->get_signatureOID_5();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_op_Inequality_m2125462205(NULL /*static, unused*/, L_0, _stringLiteral3392410245, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		String_t* L_2 = __this->get_signatureOID_5();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m138640077(NULL /*static, unused*/, _stringLiteral3904661102, L_2, /*hidden argument*/NULL);
		CryptographicException_t3718270561 * L_4 = (CryptographicException_t3718270561 *)il2cpp_codegen_object_new(CryptographicException_t3718270561_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m2400722889(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4);
	}

IL_002b:
	{
		DSA_t1557551819 * L_5 = ___dsa0;
		DSASignatureDeformatter_t426713980 * L_6 = (DSASignatureDeformatter_t426713980 *)il2cpp_codegen_object_new(DSASignatureDeformatter_t426713980_il2cpp_TypeInfo_var);
		DSASignatureDeformatter__ctor_m1067293596(L_6, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		DSASignatureDeformatter_t426713980 * L_7 = V_0;
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void System.Security.Cryptography.DSASignatureDeformatter::SetHashAlgorithm(System.String) */, L_7, _stringLiteral2543909);
		ByteU5BU5D_t58506160* L_8 = __this->get_signature_6();
		ASN1_t1254135647 * L_9 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m2555733065(L_9, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		ASN1_t1254135647 * L_10 = V_1;
		if (!L_10)
		{
			goto IL_005b;
		}
	}
	{
		ASN1_t1254135647 * L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = ASN1_get_Count_m3031159196(L_11, /*hidden argument*/NULL);
		if ((((int32_t)L_12) == ((int32_t)2)))
		{
			goto IL_005d;
		}
	}

IL_005b:
	{
		return (bool)0;
	}

IL_005d:
	{
		ASN1_t1254135647 * L_13 = V_1;
		NullCheck(L_13);
		ASN1_t1254135647 * L_14 = ASN1_get_Item_m3112983888(L_13, 0, /*hidden argument*/NULL);
		NullCheck(L_14);
		ByteU5BU5D_t58506160* L_15 = ASN1_get_Value_m4232529916(L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		ASN1_t1254135647 * L_16 = V_1;
		NullCheck(L_16);
		ASN1_t1254135647 * L_17 = ASN1_get_Item_m3112983888(L_16, 1, /*hidden argument*/NULL);
		NullCheck(L_17);
		ByteU5BU5D_t58506160* L_18 = ASN1_get_Value_m4232529916(L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		V_4 = ((ByteU5BU5D_t58506160*)SZArrayNew(ByteU5BU5D_t58506160_il2cpp_TypeInfo_var, (uint32_t)((int32_t)40)));
		ByteU5BU5D_t58506160* L_19 = V_2;
		NullCheck(L_19);
		int32_t L_20 = Math_Max_m1309380475(NULL /*static, unused*/, 0, ((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_19)->max_length))))-(int32_t)((int32_t)20))), /*hidden argument*/NULL);
		V_5 = L_20;
		ByteU5BU5D_t58506160* L_21 = V_2;
		NullCheck(L_21);
		int32_t L_22 = Math_Max_m1309380475(NULL /*static, unused*/, 0, ((int32_t)((int32_t)((int32_t)20)-(int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_21)->max_length)))))), /*hidden argument*/NULL);
		V_6 = L_22;
		ByteU5BU5D_t58506160* L_23 = V_2;
		int32_t L_24 = V_5;
		ByteU5BU5D_t58506160* L_25 = V_4;
		int32_t L_26 = V_6;
		ByteU5BU5D_t58506160* L_27 = V_2;
		NullCheck(L_27);
		int32_t L_28 = V_5;
		Buffer_BlockCopy_m1580643184(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_23, L_24, (Il2CppArray *)(Il2CppArray *)L_25, L_26, ((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_27)->max_length))))-(int32_t)L_28)), /*hidden argument*/NULL);
		ByteU5BU5D_t58506160* L_29 = V_3;
		NullCheck(L_29);
		int32_t L_30 = Math_Max_m1309380475(NULL /*static, unused*/, 0, ((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_29)->max_length))))-(int32_t)((int32_t)20))), /*hidden argument*/NULL);
		V_7 = L_30;
		ByteU5BU5D_t58506160* L_31 = V_3;
		NullCheck(L_31);
		int32_t L_32 = Math_Max_m1309380475(NULL /*static, unused*/, ((int32_t)20), ((int32_t)((int32_t)((int32_t)40)-(int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_31)->max_length)))))), /*hidden argument*/NULL);
		V_8 = L_32;
		ByteU5BU5D_t58506160* L_33 = V_3;
		int32_t L_34 = V_7;
		ByteU5BU5D_t58506160* L_35 = V_4;
		int32_t L_36 = V_8;
		ByteU5BU5D_t58506160* L_37 = V_3;
		NullCheck(L_37);
		int32_t L_38 = V_7;
		Buffer_BlockCopy_m1580643184(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_33, L_34, (Il2CppArray *)(Il2CppArray *)L_35, L_36, ((int32_t)((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_37)->max_length))))-(int32_t)L_38)), /*hidden argument*/NULL);
		DSASignatureDeformatter_t426713980 * L_39 = V_0;
		ByteU5BU5D_t58506160* L_40 = X509Crl_get_Hash_m2225876287(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t58506160* L_41 = V_4;
		NullCheck(L_39);
		bool L_42 = VirtFuncInvoker2< bool, ByteU5BU5D_t58506160*, ByteU5BU5D_t58506160* >::Invoke(6 /* System.Boolean System.Security.Cryptography.DSASignatureDeformatter::VerifySignature(System.Byte[],System.Byte[]) */, L_39, L_40, L_41);
		return L_42;
	}
}
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.RSA)
extern Il2CppClass* RSAPKCS1SignatureDeformatter_t1504052144_il2cpp_TypeInfo_var;
extern const uint32_t X509Crl_VerifySignature_m1550167496_MetadataUsageId;
extern "C"  bool X509Crl_VerifySignature_m1550167496 (X509Crl_t2942805322 * __this, RSA_t1557565273 * ___rsa0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Crl_VerifySignature_m1550167496_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	RSAPKCS1SignatureDeformatter_t1504052144 * V_0 = NULL;
	{
		RSA_t1557565273 * L_0 = ___rsa0;
		RSAPKCS1SignatureDeformatter_t1504052144 * L_1 = (RSAPKCS1SignatureDeformatter_t1504052144 *)il2cpp_codegen_object_new(RSAPKCS1SignatureDeformatter_t1504052144_il2cpp_TypeInfo_var);
		RSAPKCS1SignatureDeformatter__ctor_m3465174692(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RSAPKCS1SignatureDeformatter_t1504052144 * L_2 = V_0;
		String_t* L_3 = X509Crl_GetHashName_m3316681040(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void System.Security.Cryptography.RSAPKCS1SignatureDeformatter::SetHashAlgorithm(System.String) */, L_2, L_3);
		RSAPKCS1SignatureDeformatter_t1504052144 * L_4 = V_0;
		ByteU5BU5D_t58506160* L_5 = X509Crl_get_Hash_m2225876287(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t58506160* L_6 = __this->get_signature_6();
		NullCheck(L_4);
		bool L_7 = VirtFuncInvoker2< bool, ByteU5BU5D_t58506160*, ByteU5BU5D_t58506160* >::Invoke(6 /* System.Boolean System.Security.Cryptography.RSAPKCS1SignatureDeformatter::VerifySignature(System.Byte[],System.Byte[]) */, L_4, L_5, L_6);
		return L_7;
	}
}
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
extern Il2CppClass* ArgumentNullException_t3214793280_il2cpp_TypeInfo_var;
extern Il2CppClass* RSA_t1557565273_il2cpp_TypeInfo_var;
extern Il2CppClass* DSA_t1557551819_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* NotSupportedException_t1374155497_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3104;
extern Il2CppCodeGenString* _stringLiteral1712030853;
extern const uint32_t X509Crl_VerifySignature_m1677776911_MetadataUsageId;
extern "C"  bool X509Crl_VerifySignature_m1677776911 (X509Crl_t2942805322 * __this, AsymmetricAlgorithm_t4236534322 * ___aa0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Crl_VerifySignature_m1677776911_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		AsymmetricAlgorithm_t4236534322 * L_0 = ___aa0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t3214793280 * L_1 = (ArgumentNullException_t3214793280 *)il2cpp_codegen_object_new(ArgumentNullException_t3214793280_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m135444188(L_1, _stringLiteral3104, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		AsymmetricAlgorithm_t4236534322 * L_2 = ___aa0;
		if (!((RSA_t1557565273 *)IsInstClass(L_2, RSA_t1557565273_il2cpp_TypeInfo_var)))
		{
			goto IL_0029;
		}
	}
	{
		AsymmetricAlgorithm_t4236534322 * L_3 = ___aa0;
		bool L_4 = X509Crl_VerifySignature_m1550167496(__this, ((RSA_t1557565273 *)IsInstClass(L_3, RSA_t1557565273_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_4;
	}

IL_0029:
	{
		AsymmetricAlgorithm_t4236534322 * L_5 = ___aa0;
		if (!((DSA_t1557551819 *)IsInstClass(L_5, DSA_t1557551819_il2cpp_TypeInfo_var)))
		{
			goto IL_0041;
		}
	}
	{
		AsymmetricAlgorithm_t4236534322 * L_6 = ___aa0;
		bool L_7 = X509Crl_VerifySignature_m1549750422(__this, ((DSA_t1557551819 *)IsInstClass(L_6, DSA_t1557551819_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_7;
	}

IL_0041:
	{
		AsymmetricAlgorithm_t4236534322 * L_8 = ___aa0;
		NullCheck(L_8);
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m138640077(NULL /*static, unused*/, _stringLiteral1712030853, L_9, /*hidden argument*/NULL);
		NotSupportedException_t1374155497 * L_11 = (NotSupportedException_t1374155497 *)il2cpp_codegen_object_new(NotSupportedException_t1374155497_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m133757637(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11);
	}
}
// System.Void Mono.Security.X509.X509Crl/X509CrlEntry::.ctor(Mono.Security.ASN1)
extern Il2CppClass* X509ExtensionCollection_t3528692651_il2cpp_TypeInfo_var;
extern const uint32_t X509CrlEntry__ctor_m2720899934_MetadataUsageId;
extern "C"  void X509CrlEntry__ctor_m2720899934 (X509CrlEntry_t3291243611 * __this, ASN1_t1254135647 * ___entry0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509CrlEntry__ctor_m2720899934_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		ASN1_t1254135647 * L_0 = ___entry0;
		NullCheck(L_0);
		ASN1_t1254135647 * L_1 = ASN1_get_Item_m3112983888(L_0, 0, /*hidden argument*/NULL);
		NullCheck(L_1);
		ByteU5BU5D_t58506160* L_2 = ASN1_get_Value_m4232529916(L_1, /*hidden argument*/NULL);
		__this->set_sn_0(L_2);
		ByteU5BU5D_t58506160* L_3 = __this->get_sn_0();
		Array_Reverse_m3430038334(NULL /*static, unused*/, (Il2CppArray *)(Il2CppArray *)L_3, /*hidden argument*/NULL);
		ASN1_t1254135647 * L_4 = ___entry0;
		NullCheck(L_4);
		ASN1_t1254135647 * L_5 = ASN1_get_Item_m3112983888(L_4, 1, /*hidden argument*/NULL);
		DateTime_t339033936  L_6 = ASN1Convert_ToDateTime_m864003254(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		__this->set_revocationDate_1(L_6);
		ASN1_t1254135647 * L_7 = ___entry0;
		NullCheck(L_7);
		ASN1_t1254135647 * L_8 = ASN1_get_Item_m3112983888(L_7, 2, /*hidden argument*/NULL);
		X509ExtensionCollection_t3528692651 * L_9 = (X509ExtensionCollection_t3528692651 *)il2cpp_codegen_object_new(X509ExtensionCollection_t3528692651_il2cpp_TypeInfo_var);
		X509ExtensionCollection__ctor_m2115523054(L_9, L_8, /*hidden argument*/NULL);
		__this->set_extensions_2(L_9);
		return;
	}
}
// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::get_SerialNumber()
extern Il2CppClass* ByteU5BU5D_t58506160_il2cpp_TypeInfo_var;
extern const uint32_t X509CrlEntry_get_SerialNumber_m2092313770_MetadataUsageId;
extern "C"  ByteU5BU5D_t58506160* X509CrlEntry_get_SerialNumber_m2092313770 (X509CrlEntry_t3291243611 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509CrlEntry_get_SerialNumber_m2092313770_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t58506160* L_0 = __this->get_sn_0();
		NullCheck((Il2CppArray *)(Il2CppArray *)L_0);
		Il2CppObject * L_1 = VirtFuncInvoker0< Il2CppObject * >::Invoke(5 /* System.Object System.Array::Clone() */, (Il2CppArray *)(Il2CppArray *)L_0);
		return ((ByteU5BU5D_t58506160*)Castclass(L_1, ByteU5BU5D_t58506160_il2cpp_TypeInfo_var));
	}
}
// System.DateTime Mono.Security.X509.X509Crl/X509CrlEntry::get_RevocationDate()
extern "C"  DateTime_t339033936  X509CrlEntry_get_RevocationDate_m3530161450 (X509CrlEntry_t3291243611 * __this, const MethodInfo* method)
{
	{
		DateTime_t339033936  L_0 = __this->get_revocationDate_1();
		return L_0;
	}
}
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl/X509CrlEntry::get_Extensions()
extern "C"  X509ExtensionCollection_t3528692651 * X509CrlEntry_get_Extensions_m73360358 (X509CrlEntry_t3291243611 * __this, const MethodInfo* method)
{
	{
		X509ExtensionCollection_t3528692651 * L_0 = __this->get_extensions_2();
		return L_0;
	}
}
// System.Void Mono.Security.X509.X509Extension::.ctor(Mono.Security.ASN1)
extern Il2CppClass* ArgumentException_t124305799_il2cpp_TypeInfo_var;
extern Il2CppClass* ASN1_t1254135647_il2cpp_TypeInfo_var;
extern Il2CppClass* Il2CppObject_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2299733936;
extern const uint32_t X509Extension__ctor_m2888521900_MetadataUsageId;
extern "C"  void X509Extension__ctor_m2888521900 (X509Extension_t1510964269 * __this, ASN1_t1254135647 * ___asn10, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Extension__ctor_m2888521900_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ASN1_t1254135647 * V_0 = NULL;
	Exception_t1967233988 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1967233988 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	X509Extension_t1510964269 * G_B7_0 = NULL;
	X509Extension_t1510964269 * G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	X509Extension_t1510964269 * G_B8_1 = NULL;
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		ASN1_t1254135647 * L_0 = ___asn10;
		NullCheck(L_0);
		uint8_t L_1 = ASN1_get_Tag_m1269404867(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_001f;
		}
	}
	{
		ASN1_t1254135647 * L_2 = ___asn10;
		NullCheck(L_2);
		int32_t L_3 = ASN1_get_Count_m3031159196(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) >= ((int32_t)2)))
		{
			goto IL_002f;
		}
	}

IL_001f:
	{
		String_t* L_4 = Locale_GetText_m4086560262(NULL /*static, unused*/, _stringLiteral2299733936, /*hidden argument*/NULL);
		ArgumentException_t124305799 * L_5 = (ArgumentException_t124305799 *)il2cpp_codegen_object_new(ArgumentException_t124305799_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3544856547(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5);
	}

IL_002f:
	{
		ASN1_t1254135647 * L_6 = ___asn10;
		NullCheck(L_6);
		ASN1_t1254135647 * L_7 = ASN1_get_Item_m3112983888(L_6, 0, /*hidden argument*/NULL);
		NullCheck(L_7);
		uint8_t L_8 = ASN1_get_Tag_m1269404867(L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_8) == ((int32_t)6)))
		{
			goto IL_0051;
		}
	}
	{
		String_t* L_9 = Locale_GetText_m4086560262(NULL /*static, unused*/, _stringLiteral2299733936, /*hidden argument*/NULL);
		ArgumentException_t124305799 * L_10 = (ArgumentException_t124305799 *)il2cpp_codegen_object_new(ArgumentException_t124305799_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3544856547(L_10, L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10);
	}

IL_0051:
	{
		ASN1_t1254135647 * L_11 = ___asn10;
		NullCheck(L_11);
		ASN1_t1254135647 * L_12 = ASN1_get_Item_m3112983888(L_11, 0, /*hidden argument*/NULL);
		String_t* L_13 = ASN1Convert_ToOid_m1387992843(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		__this->set_extnOid_0(L_13);
		ASN1_t1254135647 * L_14 = ___asn10;
		NullCheck(L_14);
		ASN1_t1254135647 * L_15 = ASN1_get_Item_m3112983888(L_14, 1, /*hidden argument*/NULL);
		NullCheck(L_15);
		uint8_t L_16 = ASN1_get_Tag_m1269404867(L_15, /*hidden argument*/NULL);
		G_B6_0 = __this;
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			G_B7_0 = __this;
			goto IL_008d;
		}
	}
	{
		ASN1_t1254135647 * L_17 = ___asn10;
		NullCheck(L_17);
		ASN1_t1254135647 * L_18 = ASN1_get_Item_m3112983888(L_17, 1, /*hidden argument*/NULL);
		NullCheck(L_18);
		ByteU5BU5D_t58506160* L_19 = ASN1_get_Value_m4232529916(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, 0);
		int32_t L_20 = 0;
		G_B8_0 = ((((int32_t)((L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20)))) == ((int32_t)((int32_t)255)))? 1 : 0);
		G_B8_1 = G_B6_0;
		goto IL_008e;
	}

IL_008d:
	{
		G_B8_0 = 0;
		G_B8_1 = G_B7_0;
	}

IL_008e:
	{
		NullCheck(G_B8_1);
		G_B8_1->set_extnCritical_1((bool)G_B8_0);
		ASN1_t1254135647 * L_21 = ___asn10;
		ASN1_t1254135647 * L_22 = ___asn10;
		NullCheck(L_22);
		int32_t L_23 = ASN1_get_Count_m3031159196(L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		ASN1_t1254135647 * L_24 = ASN1_get_Item_m3112983888(L_21, ((int32_t)((int32_t)L_23-(int32_t)1)), /*hidden argument*/NULL);
		__this->set_extnValue_2(L_24);
		ASN1_t1254135647 * L_25 = __this->get_extnValue_2();
		NullCheck(L_25);
		uint8_t L_26 = ASN1_get_Tag_m1269404867(L_25, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_26) == ((uint32_t)4))))
		{
			goto IL_010e;
		}
	}
	{
		ASN1_t1254135647 * L_27 = __this->get_extnValue_2();
		NullCheck(L_27);
		int32_t L_28 = ASN1_get_Length_m1785136283(L_27, /*hidden argument*/NULL);
		if ((((int32_t)L_28) <= ((int32_t)0)))
		{
			goto IL_010e;
		}
	}
	{
		ASN1_t1254135647 * L_29 = __this->get_extnValue_2();
		NullCheck(L_29);
		int32_t L_30 = ASN1_get_Count_m3031159196(L_29, /*hidden argument*/NULL);
		if (L_30)
		{
			goto IL_010e;
		}
	}

IL_00d9:
	try
	{ // begin try (depth: 1)
		ASN1_t1254135647 * L_31 = __this->get_extnValue_2();
		NullCheck(L_31);
		ByteU5BU5D_t58506160* L_32 = ASN1_get_Value_m4232529916(L_31, /*hidden argument*/NULL);
		ASN1_t1254135647 * L_33 = (ASN1_t1254135647 *)il2cpp_codegen_object_new(ASN1_t1254135647_il2cpp_TypeInfo_var);
		ASN1__ctor_m2555733065(L_33, L_32, /*hidden argument*/NULL);
		V_0 = L_33;
		ASN1_t1254135647 * L_34 = __this->get_extnValue_2();
		NullCheck(L_34);
		ASN1_set_Value_m213247127(L_34, (ByteU5BU5D_t58506160*)(ByteU5BU5D_t58506160*)NULL, /*hidden argument*/NULL);
		ASN1_t1254135647 * L_35 = __this->get_extnValue_2();
		ASN1_t1254135647 * L_36 = V_0;
		NullCheck(L_35);
		ASN1_Add_m3856133576(L_35, L_36, /*hidden argument*/NULL);
		goto IL_010e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t1967233988 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Il2CppObject_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0108;
		throw e;
	}

CATCH_0108:
	{ // begin catch(System.Object)
		goto IL_010e;
	} // end catch (depth: 1)

IL_010e:
	{
		VirtActionInvoker0::Invoke(4 /* System.Void Mono.Security.X509.X509Extension::Decode() */, __this);
		return;
	}
}
// System.Void Mono.Security.X509.X509Extension::.ctor(Mono.Security.X509.X509Extension)
extern Il2CppClass* ArgumentNullException_t3214793280_il2cpp_TypeInfo_var;
extern Il2CppClass* ArgumentException_t124305799_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3682409535;
extern Il2CppCodeGenString* _stringLiteral2299733936;
extern const uint32_t X509Extension__ctor_m3298017424_MetadataUsageId;
extern "C"  void X509Extension__ctor_m3298017424 (X509Extension_t1510964269 * __this, X509Extension_t1510964269 * ___extension0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Extension__ctor_m3298017424_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		X509Extension_t1510964269 * L_0 = ___extension0;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t3214793280 * L_1 = (ArgumentNullException_t3214793280 *)il2cpp_codegen_object_new(ArgumentNullException_t3214793280_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m135444188(L_1, _stringLiteral3682409535, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0017:
	{
		X509Extension_t1510964269 * L_2 = ___extension0;
		NullCheck(L_2);
		ASN1_t1254135647 * L_3 = X509Extension_get_Value_m2134276875(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0044;
		}
	}
	{
		X509Extension_t1510964269 * L_4 = ___extension0;
		NullCheck(L_4);
		ASN1_t1254135647 * L_5 = X509Extension_get_Value_m2134276875(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		uint8_t L_6 = ASN1_get_Tag_m1269404867(L_5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)4))))
		{
			goto IL_0044;
		}
	}
	{
		X509Extension_t1510964269 * L_7 = ___extension0;
		NullCheck(L_7);
		ASN1_t1254135647 * L_8 = X509Extension_get_Value_m2134276875(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9 = ASN1_get_Count_m3031159196(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_9) == ((int32_t)1)))
		{
			goto IL_0054;
		}
	}

IL_0044:
	{
		String_t* L_10 = Locale_GetText_m4086560262(NULL /*static, unused*/, _stringLiteral2299733936, /*hidden argument*/NULL);
		ArgumentException_t124305799 * L_11 = (ArgumentException_t124305799 *)il2cpp_codegen_object_new(ArgumentException_t124305799_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3544856547(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11);
	}

IL_0054:
	{
		X509Extension_t1510964269 * L_12 = ___extension0;
		NullCheck(L_12);
		String_t* L_13 = X509Extension_get_Oid_m915067552(L_12, /*hidden argument*/NULL);
		__this->set_extnOid_0(L_13);
		X509Extension_t1510964269 * L_14 = ___extension0;
		NullCheck(L_14);
		bool L_15 = X509Extension_get_Critical_m1084086934(L_14, /*hidden argument*/NULL);
		__this->set_extnCritical_1(L_15);
		X509Extension_t1510964269 * L_16 = ___extension0;
		NullCheck(L_16);
		ASN1_t1254135647 * L_17 = X509Extension_get_Value_m2134276875(L_16, /*hidden argument*/NULL);
		__this->set_extnValue_2(L_17);
		VirtActionInvoker0::Invoke(4 /* System.Void Mono.Security.X509.X509Extension::Decode() */, __this);
		return;
	}
}
// System.Void Mono.Security.X509.X509Extension::Decode()
extern "C"  void X509Extension_Decode_m4266869134 (X509Extension_t1510964269 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Mono.Security.X509.X509Extension::Encode()
extern "C"  void X509Extension_Encode_m1112310710 (X509Extension_t1510964269 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.String Mono.Security.X509.X509Extension::get_Oid()
extern "C"  String_t* X509Extension_get_Oid_m915067552 (X509Extension_t1510964269 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = __this->get_extnOid_0();
		return L_0;
	}
}
// System.Boolean Mono.Security.X509.X509Extension::get_Critical()
extern "C"  bool X509Extension_get_Critical_m1084086934 (X509Extension_t1510964269 * __this, const MethodInfo* method)
{
	{
		bool L_0 = __this->get_extnCritical_1();
		return L_0;
	}
}
// Mono.Security.ASN1 Mono.Security.X509.X509Extension::get_Value()
extern "C"  ASN1_t1254135647 * X509Extension_get_Value_m2134276875 (X509Extension_t1510964269 * __this, const MethodInfo* method)
{
	{
		ASN1_t1254135647 * L_0 = __this->get_extnValue_2();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		VirtActionInvoker0::Invoke(5 /* System.Void Mono.Security.X509.X509Extension::Encode() */, __this);
	}

IL_0011:
	{
		ASN1_t1254135647 * L_1 = __this->get_extnValue_2();
		return L_1;
	}
}
// System.Boolean Mono.Security.X509.X509Extension::Equals(System.Object)
extern Il2CppClass* X509Extension_t1510964269_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const uint32_t X509Extension_Equals_m131878599_MetadataUsageId;
extern "C"  bool X509Extension_Equals_m131878599 (X509Extension_t1510964269 * __this, Il2CppObject * ___obj0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Extension_Equals_m131878599_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	X509Extension_t1510964269 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		Il2CppObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (bool)0;
	}

IL_0008:
	{
		Il2CppObject * L_1 = ___obj0;
		V_0 = ((X509Extension_t1510964269 *)IsInstClass(L_1, X509Extension_t1510964269_il2cpp_TypeInfo_var));
		X509Extension_t1510964269 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		bool L_3 = __this->get_extnCritical_1();
		X509Extension_t1510964269 * L_4 = V_0;
		NullCheck(L_4);
		bool L_5 = L_4->get_extnCritical_1();
		if ((((int32_t)L_3) == ((int32_t)L_5)))
		{
			goto IL_002a;
		}
	}
	{
		return (bool)0;
	}

IL_002a:
	{
		String_t* L_6 = __this->get_extnOid_0();
		X509Extension_t1510964269 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = L_7->get_extnOid_0();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_op_Inequality_m2125462205(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		return (bool)0;
	}

IL_0042:
	{
		ASN1_t1254135647 * L_10 = __this->get_extnValue_2();
		NullCheck(L_10);
		int32_t L_11 = ASN1_get_Length_m1785136283(L_10, /*hidden argument*/NULL);
		X509Extension_t1510964269 * L_12 = V_0;
		NullCheck(L_12);
		ASN1_t1254135647 * L_13 = L_12->get_extnValue_2();
		NullCheck(L_13);
		int32_t L_14 = ASN1_get_Length_m1785136283(L_13, /*hidden argument*/NULL);
		if ((((int32_t)L_11) == ((int32_t)L_14)))
		{
			goto IL_005f;
		}
	}
	{
		return (bool)0;
	}

IL_005f:
	{
		V_1 = 0;
		goto IL_0089;
	}

IL_0066:
	{
		ASN1_t1254135647 * L_15 = __this->get_extnValue_2();
		int32_t L_16 = V_1;
		NullCheck(L_15);
		ASN1_t1254135647 * L_17 = ASN1_get_Item_m3112983888(L_15, L_16, /*hidden argument*/NULL);
		X509Extension_t1510964269 * L_18 = V_0;
		NullCheck(L_18);
		ASN1_t1254135647 * L_19 = L_18->get_extnValue_2();
		int32_t L_20 = V_1;
		NullCheck(L_19);
		ASN1_t1254135647 * L_21 = ASN1_get_Item_m3112983888(L_19, L_20, /*hidden argument*/NULL);
		if ((((Il2CppObject*)(ASN1_t1254135647 *)L_17) == ((Il2CppObject*)(ASN1_t1254135647 *)L_21)))
		{
			goto IL_0085;
		}
	}
	{
		return (bool)0;
	}

IL_0085:
	{
		int32_t L_22 = V_1;
		V_1 = ((int32_t)((int32_t)L_22+(int32_t)1));
	}

IL_0089:
	{
		int32_t L_23 = V_1;
		ASN1_t1254135647 * L_24 = __this->get_extnValue_2();
		NullCheck(L_24);
		int32_t L_25 = ASN1_get_Length_m1785136283(L_24, /*hidden argument*/NULL);
		if ((((int32_t)L_23) < ((int32_t)L_25)))
		{
			goto IL_0066;
		}
	}
	{
		return (bool)1;
	}
}
// System.Int32 Mono.Security.X509.X509Extension::GetHashCode()
extern "C"  int32_t X509Extension_GetHashCode_m1621273003 (X509Extension_t1510964269 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = __this->get_extnOid_0();
		NullCheck(L_0);
		int32_t L_1 = String_GetHashCode_m471729487(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Mono.Security.X509.X509Extension::WriteLine(System.Text.StringBuilder,System.Int32,System.Int32)
extern Il2CppClass* CultureInfo_t3603717042_il2cpp_TypeInfo_var;
extern Il2CppClass* Convert_t1097883944_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2778;
extern Il2CppCodeGenString* _stringLiteral32;
extern Il2CppCodeGenString* _stringLiteral31776;
extern Il2CppCodeGenString* _stringLiteral1024;
extern Il2CppCodeGenString* _stringLiteral46;
extern const uint32_t X509Extension_WriteLine_m4265102453_MetadataUsageId;
extern "C"  void X509Extension_WriteLine_m4265102453 (X509Extension_t1510964269 * __this, StringBuilder_t3822575854 * ___sb0, int32_t ___n1, int32_t ___pos2, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Extension_WriteLine_m4265102453_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t58506160* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	{
		ASN1_t1254135647 * L_0 = __this->get_extnValue_2();
		NullCheck(L_0);
		ByteU5BU5D_t58506160* L_1 = ASN1_get_Value_m4232529916(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = ___pos2;
		V_1 = L_2;
		V_2 = 0;
		goto IL_005e;
	}

IL_0015:
	{
		int32_t L_3 = V_2;
		int32_t L_4 = ___n1;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_004e;
		}
	}
	{
		StringBuilder_t3822575854 * L_5 = ___sb0;
		ByteU5BU5D_t58506160* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		V_1 = ((int32_t)((int32_t)L_8+(int32_t)1));
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_8);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t3603717042_il2cpp_TypeInfo_var);
		CultureInfo_t3603717042 * L_9 = CultureInfo_get_InvariantCulture_m764001524(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_10 = Byte_ToString_m1210459538(((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), _stringLiteral2778, L_9, /*hidden argument*/NULL);
		NullCheck(L_5);
		StringBuilder_Append_m3898090075(L_5, L_10, /*hidden argument*/NULL);
		StringBuilder_t3822575854 * L_11 = ___sb0;
		NullCheck(L_11);
		StringBuilder_Append_m3898090075(L_11, _stringLiteral32, /*hidden argument*/NULL);
		goto IL_005a;
	}

IL_004e:
	{
		StringBuilder_t3822575854 * L_12 = ___sb0;
		NullCheck(L_12);
		StringBuilder_Append_m3898090075(L_12, _stringLiteral31776, /*hidden argument*/NULL);
	}

IL_005a:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_005e:
	{
		int32_t L_14 = V_2;
		if ((((int32_t)L_14) < ((int32_t)8)))
		{
			goto IL_0015;
		}
	}
	{
		StringBuilder_t3822575854 * L_15 = ___sb0;
		NullCheck(L_15);
		StringBuilder_Append_m3898090075(L_15, _stringLiteral1024, /*hidden argument*/NULL);
		int32_t L_16 = ___pos2;
		V_1 = L_16;
		V_3 = 0;
		goto IL_00af;
	}

IL_007a:
	{
		ByteU5BU5D_t58506160* L_17 = V_0;
		int32_t L_18 = V_1;
		int32_t L_19 = L_18;
		V_1 = ((int32_t)((int32_t)L_19+(int32_t)1));
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_19);
		int32_t L_20 = L_19;
		V_4 = ((L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_20)));
		uint8_t L_21 = V_4;
		if ((((int32_t)L_21) >= ((int32_t)((int32_t)32))))
		{
			goto IL_009d;
		}
	}
	{
		StringBuilder_t3822575854 * L_22 = ___sb0;
		NullCheck(L_22);
		StringBuilder_Append_m3898090075(L_22, _stringLiteral46, /*hidden argument*/NULL);
		goto IL_00ab;
	}

IL_009d:
	{
		StringBuilder_t3822575854 * L_23 = ___sb0;
		uint8_t L_24 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1097883944_il2cpp_TypeInfo_var);
		uint16_t L_25 = Convert_ToChar_m975090646(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		NullCheck(L_23);
		StringBuilder_Append_m2143093878(L_23, L_25, /*hidden argument*/NULL);
	}

IL_00ab:
	{
		int32_t L_26 = V_3;
		V_3 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_00af:
	{
		int32_t L_27 = V_3;
		int32_t L_28 = ___n1;
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_007a;
		}
	}
	{
		StringBuilder_t3822575854 * L_29 = ___sb0;
		String_t* L_30 = Environment_get_NewLine_m1034655108(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_29);
		StringBuilder_Append_m3898090075(L_29, L_30, /*hidden argument*/NULL);
		return;
	}
}
// System.String Mono.Security.X509.X509Extension::ToString()
extern Il2CppClass* StringBuilder_t3822575854_il2cpp_TypeInfo_var;
extern const uint32_t X509Extension_ToString_m1923324847_MetadataUsageId;
extern "C"  String_t* X509Extension_ToString_m1923324847 (X509Extension_t1510964269 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Extension_ToString_m1923324847_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	StringBuilder_t3822575854 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		StringBuilder_t3822575854 * L_0 = (StringBuilder_t3822575854 *)il2cpp_codegen_object_new(StringBuilder_t3822575854_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m135953004(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		ASN1_t1254135647 * L_1 = __this->get_extnValue_2();
		NullCheck(L_1);
		int32_t L_2 = ASN1_get_Length_m1785136283(L_1, /*hidden argument*/NULL);
		V_1 = ((int32_t)((int32_t)L_2>>(int32_t)3));
		ASN1_t1254135647 * L_3 = __this->get_extnValue_2();
		NullCheck(L_3);
		int32_t L_4 = ASN1_get_Length_m1785136283(L_3, /*hidden argument*/NULL);
		int32_t L_5 = V_1;
		V_2 = ((int32_t)((int32_t)L_4-(int32_t)((int32_t)((int32_t)L_5<<(int32_t)3))));
		V_3 = 0;
		V_4 = 0;
		goto IL_0041;
	}

IL_002e:
	{
		StringBuilder_t3822575854 * L_6 = V_0;
		int32_t L_7 = V_3;
		X509Extension_WriteLine_m4265102453(__this, L_6, 8, L_7, /*hidden argument*/NULL);
		int32_t L_8 = V_3;
		V_3 = ((int32_t)((int32_t)L_8+(int32_t)8));
		int32_t L_9 = V_4;
		V_4 = ((int32_t)((int32_t)L_9+(int32_t)1));
	}

IL_0041:
	{
		int32_t L_10 = V_4;
		int32_t L_11 = V_1;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_002e;
		}
	}
	{
		StringBuilder_t3822575854 * L_12 = V_0;
		int32_t L_13 = V_2;
		int32_t L_14 = V_3;
		X509Extension_WriteLine_m4265102453(__this, L_12, L_13, L_14, /*hidden argument*/NULL);
		StringBuilder_t3822575854 * L_15 = V_0;
		NullCheck(L_15);
		String_t* L_16 = StringBuilder_ToString_m350379841(L_15, /*hidden argument*/NULL);
		return L_16;
	}
}
// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor()
extern "C"  void X509ExtensionCollection__ctor_m3777468326 (X509ExtensionCollection_t3528692651 * __this, const MethodInfo* method)
{
	{
		CollectionBase__ctor_m3181013581(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor(Mono.Security.ASN1)
extern Il2CppClass* Exception_t1967233988_il2cpp_TypeInfo_var;
extern Il2CppClass* X509Extension_t1510964269_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1668520826;
extern const uint32_t X509ExtensionCollection__ctor_m2115523054_MetadataUsageId;
extern "C"  void X509ExtensionCollection__ctor_m2115523054 (X509ExtensionCollection_t3528692651 * __this, ASN1_t1254135647 * ___asn10, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509ExtensionCollection__ctor_m2115523054_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	X509Extension_t1510964269 * V_1 = NULL;
	{
		X509ExtensionCollection__ctor_m3777468326(__this, /*hidden argument*/NULL);
		__this->set_readOnly_1((bool)1);
		ASN1_t1254135647 * L_0 = ___asn10;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		return;
	}

IL_0014:
	{
		ASN1_t1254135647 * L_1 = ___asn10;
		NullCheck(L_1);
		uint8_t L_2 = ASN1_get_Tag_m1269404867(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) == ((int32_t)((int32_t)48))))
		{
			goto IL_002c;
		}
	}
	{
		Exception_t1967233988 * L_3 = (Exception_t1967233988 *)il2cpp_codegen_object_new(Exception_t1967233988_il2cpp_TypeInfo_var);
		Exception__ctor_m3870771296(L_3, _stringLiteral1668520826, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3);
	}

IL_002c:
	{
		V_0 = 0;
		goto IL_0051;
	}

IL_0033:
	{
		ASN1_t1254135647 * L_4 = ___asn10;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		ASN1_t1254135647 * L_6 = ASN1_get_Item_m3112983888(L_4, L_5, /*hidden argument*/NULL);
		X509Extension_t1510964269 * L_7 = (X509Extension_t1510964269 *)il2cpp_codegen_object_new(X509Extension_t1510964269_il2cpp_TypeInfo_var);
		X509Extension__ctor_m2888521900(L_7, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		ArrayList_t2121638921 * L_8 = CollectionBase_get_InnerList_m2840879970(__this, /*hidden argument*/NULL);
		X509Extension_t1510964269 * L_9 = V_1;
		NullCheck(L_8);
		VirtFuncInvoker1< int32_t, Il2CppObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_8, L_9);
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0051:
	{
		int32_t L_11 = V_0;
		ASN1_t1254135647 * L_12 = ___asn10;
		NullCheck(L_12);
		int32_t L_13 = ASN1_get_Count_m3031159196(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0033;
		}
	}
	{
		return;
	}
}
// System.Collections.IEnumerator Mono.Security.X509.X509ExtensionCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * X509ExtensionCollection_System_Collections_IEnumerable_GetEnumerator_m2588592549 (X509ExtensionCollection_t3528692651 * __this, const MethodInfo* method)
{
	{
		ArrayList_t2121638921 * L_0 = CollectionBase_get_InnerList_m2840879970(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Il2CppObject * L_1 = VirtFuncInvoker0< Il2CppObject * >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		return L_1;
	}
}
// System.Int32 Mono.Security.X509.X509ExtensionCollection::IndexOf(System.String)
extern Il2CppClass* ArgumentNullException_t3214793280_il2cpp_TypeInfo_var;
extern Il2CppClass* X509Extension_t1510964269_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral110026;
extern const uint32_t X509ExtensionCollection_IndexOf_m1626273533_MetadataUsageId;
extern "C"  int32_t X509ExtensionCollection_IndexOf_m1626273533 (X509ExtensionCollection_t3528692651 * __this, String_t* ___oid0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509ExtensionCollection_IndexOf_m1626273533_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	X509Extension_t1510964269 * V_1 = NULL;
	{
		String_t* L_0 = ___oid0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t3214793280 * L_1 = (ArgumentNullException_t3214793280 *)il2cpp_codegen_object_new(ArgumentNullException_t3214793280_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m135444188(L_1, _stringLiteral110026, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		V_0 = 0;
		goto IL_0041;
	}

IL_0018:
	{
		ArrayList_t2121638921 * L_2 = CollectionBase_get_InnerList_m2840879970(__this, /*hidden argument*/NULL);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		Il2CppObject * L_4 = VirtFuncInvoker1< Il2CppObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_2, L_3);
		V_1 = ((X509Extension_t1510964269 *)CastclassClass(L_4, X509Extension_t1510964269_il2cpp_TypeInfo_var));
		X509Extension_t1510964269 * L_5 = V_1;
		NullCheck(L_5);
		String_t* L_6 = X509Extension_get_Oid_m915067552(L_5, /*hidden argument*/NULL);
		String_t* L_7 = ___oid0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_8 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}

IL_003d:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0041:
	{
		int32_t L_11 = V_0;
		ArrayList_t2121638921 * L_12 = CollectionBase_get_InnerList_m2840879970(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		int32_t L_13 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_12);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0018;
		}
	}
	{
		return (-1);
	}
}
// Mono.Security.X509.X509Extension Mono.Security.X509.X509ExtensionCollection::get_Item(System.String)
extern Il2CppClass* X509Extension_t1510964269_il2cpp_TypeInfo_var;
extern const uint32_t X509ExtensionCollection_get_Item_m3340679653_MetadataUsageId;
extern "C"  X509Extension_t1510964269 * X509ExtensionCollection_get_Item_m3340679653 (X509ExtensionCollection_t3528692651 * __this, String_t* ___oid0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509ExtensionCollection_get_Item_m3340679653_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___oid0;
		int32_t L_1 = X509ExtensionCollection_IndexOf_m1626273533(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0011;
		}
	}
	{
		return (X509Extension_t1510964269 *)NULL;
	}

IL_0011:
	{
		ArrayList_t2121638921 * L_3 = CollectionBase_get_InnerList_m2840879970(__this, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		Il2CppObject * L_5 = VirtFuncInvoker1< Il2CppObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_3, L_4);
		return ((X509Extension_t1510964269 *)CastclassClass(L_5, X509Extension_t1510964269_il2cpp_TypeInfo_var));
	}
}
// System.Void Mono.Security.X509.X509Store::.ctor(System.String,System.Boolean)
extern "C"  void X509Store__ctor_m3740673213 (X509Store_t3983467982 * __this, String_t* ___path0, bool ___crl1, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___path0;
		__this->set__storePath_0(L_0);
		bool L_1 = ___crl1;
		__this->set__crl_3(L_1);
		return;
	}
}
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::get_Certificates()
extern "C"  X509CertificateCollection_t3336811651 * X509Store_get_Certificates_m3707205492 (X509Store_t3983467982 * __this, const MethodInfo* method)
{
	{
		X509CertificateCollection_t3336811651 * L_0 = __this->get__certificates_1();
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_1 = __this->get__storePath_0();
		X509CertificateCollection_t3336811651 * L_2 = X509Store_BuildCertificatesCollection_m1851273927(__this, L_1, /*hidden argument*/NULL);
		__this->set__certificates_1(L_2);
	}

IL_001d:
	{
		X509CertificateCollection_t3336811651 * L_3 = __this->get__certificates_1();
		return L_3;
	}
}
// System.Collections.ArrayList Mono.Security.X509.X509Store::get_Crls()
extern Il2CppClass* ArrayList_t2121638921_il2cpp_TypeInfo_var;
extern const uint32_t X509Store_get_Crls_m3945141465_MetadataUsageId;
extern "C"  ArrayList_t2121638921 * X509Store_get_Crls_m3945141465 (X509Store_t3983467982 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Store_get_Crls_m3945141465_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = __this->get__crl_3();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArrayList_t2121638921 * L_1 = (ArrayList_t2121638921 *)il2cpp_codegen_object_new(ArrayList_t2121638921_il2cpp_TypeInfo_var);
		ArrayList__ctor_m1878432947(L_1, /*hidden argument*/NULL);
		__this->set__crls_2(L_1);
	}

IL_0016:
	{
		ArrayList_t2121638921 * L_2 = __this->get__crls_2();
		if (L_2)
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_3 = __this->get__storePath_0();
		ArrayList_t2121638921 * L_4 = X509Store_BuildCrlsCollection_m2551806712(__this, L_3, /*hidden argument*/NULL);
		__this->set__crls_2(L_4);
	}

IL_0033:
	{
		ArrayList_t2121638921 * L_5 = __this->get__crls_2();
		return L_5;
	}
}
// System.Byte[] Mono.Security.X509.X509Store::Load(System.String)
extern Il2CppClass* ByteU5BU5D_t58506160_il2cpp_TypeInfo_var;
extern Il2CppClass* IDisposable_t1628921374_il2cpp_TypeInfo_var;
extern const uint32_t X509Store_Load_m507057712_MetadataUsageId;
extern "C"  ByteU5BU5D_t58506160* X509Store_Load_m507057712 (X509Store_t3983467982 * __this, String_t* ___filename0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Store_Load_m507057712_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t58506160* V_0 = NULL;
	FileStream_t1527309539 * V_1 = NULL;
	Exception_t1967233988 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1967233988 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (ByteU5BU5D_t58506160*)NULL;
		String_t* L_0 = ___filename0;
		FileStream_t1527309539 * L_1 = File_OpenRead_m3104031109(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_1 = L_1;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		FileStream_t1527309539 * L_2 = V_1;
		NullCheck(L_2);
		int64_t L_3 = VirtFuncInvoker0< int64_t >::Invoke(8 /* System.Int64 System.IO.FileStream::get_Length() */, L_2);
		if ((int64_t)(L_3) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception());
		V_0 = ((ByteU5BU5D_t58506160*)SZArrayNew(ByteU5BU5D_t58506160_il2cpp_TypeInfo_var, (uint32_t)(((intptr_t)L_3))));
		FileStream_t1527309539 * L_4 = V_1;
		ByteU5BU5D_t58506160* L_5 = V_0;
		ByteU5BU5D_t58506160* L_6 = V_0;
		NullCheck(L_6);
		NullCheck(L_4);
		VirtFuncInvoker3< int32_t, ByteU5BU5D_t58506160*, int32_t, int32_t >::Invoke(14 /* System.Int32 System.IO.FileStream::Read(System.Byte[],System.Int32,System.Int32) */, L_4, L_5, 0, (((int32_t)((int32_t)(((Il2CppArray *)L_6)->max_length)))));
		FileStream_t1527309539 * L_7 = V_1;
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(12 /* System.Void System.IO.Stream::Close() */, L_7);
		IL2CPP_LEAVE(0x3A, FINALLY_002d);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1967233988 *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		{
			FileStream_t1527309539 * L_8 = V_1;
			if (!L_8)
			{
				goto IL_0039;
			}
		}

IL_0033:
		{
			FileStream_t1527309539 * L_9 = V_1;
			NullCheck(L_9);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1628921374_il2cpp_TypeInfo_var, L_9);
		}

IL_0039:
		{
			IL2CPP_END_FINALLY(45)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_JUMP_TBL(0x3A, IL_003a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1967233988 *)
	}

IL_003a:
	{
		ByteU5BU5D_t58506160* L_10 = V_0;
		return L_10;
	}
}
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Store::LoadCertificate(System.String)
extern Il2CppClass* X509Certificate_t273828613_il2cpp_TypeInfo_var;
extern const uint32_t X509Store_LoadCertificate_m2281266908_MetadataUsageId;
extern "C"  X509Certificate_t273828613 * X509Store_LoadCertificate_m2281266908 (X509Store_t3983467982 * __this, String_t* ___filename0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Store_LoadCertificate_m2281266908_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t58506160* V_0 = NULL;
	X509Certificate_t273828613 * V_1 = NULL;
	{
		String_t* L_0 = ___filename0;
		ByteU5BU5D_t58506160* L_1 = X509Store_Load_m507057712(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ByteU5BU5D_t58506160* L_2 = V_0;
		X509Certificate_t273828613 * L_3 = (X509Certificate_t273828613 *)il2cpp_codegen_object_new(X509Certificate_t273828613_il2cpp_TypeInfo_var);
		X509Certificate__ctor_m3683615677(L_3, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		X509Certificate_t273828613 * L_4 = V_1;
		return L_4;
	}
}
// Mono.Security.X509.X509Crl Mono.Security.X509.X509Store::LoadCrl(System.String)
extern Il2CppClass* X509Crl_t2942805322_il2cpp_TypeInfo_var;
extern const uint32_t X509Store_LoadCrl_m371472464_MetadataUsageId;
extern "C"  X509Crl_t2942805322 * X509Store_LoadCrl_m371472464 (X509Store_t3983467982 * __this, String_t* ___filename0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Store_LoadCrl_m371472464_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t58506160* V_0 = NULL;
	X509Crl_t2942805322 * V_1 = NULL;
	{
		String_t* L_0 = ___filename0;
		ByteU5BU5D_t58506160* L_1 = X509Store_Load_m507057712(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ByteU5BU5D_t58506160* L_2 = V_0;
		X509Crl_t2942805322 * L_3 = (X509Crl_t2942805322 *)il2cpp_codegen_object_new(X509Crl_t2942805322_il2cpp_TypeInfo_var);
		X509Crl__ctor_m1270803331(L_3, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		X509Crl_t2942805322 * L_4 = V_1;
		return L_4;
	}
}
// System.Boolean Mono.Security.X509.X509Store::CheckStore(System.String,System.Boolean)
extern Il2CppClass* Il2CppObject_il2cpp_TypeInfo_var;
extern const uint32_t X509Store_CheckStore_m4197144772_MetadataUsageId;
extern "C"  bool X509Store_CheckStore_m4197144772 (X509Store_t3983467982 * __this, String_t* ___path0, bool ___throwException1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Store_CheckStore_m4197144772_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Exception_t1967233988 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1967233988 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_0 = ___path0;
			bool L_1 = Directory_Exists_m4117375188(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_0012;
			}
		}

IL_000b:
		{
			V_0 = (bool)1;
			goto IL_003f;
		}

IL_0012:
		{
			String_t* L_2 = ___path0;
			Directory_CreateDirectory_m677877474(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
			String_t* L_3 = ___path0;
			bool L_4 = Directory_Exists_m4117375188(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
			V_0 = L_4;
			goto IL_003f;
		}

IL_0025:
		{
			; // IL_0025: leave IL_003f
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t1967233988 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Il2CppObject_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_002a;
		throw e;
	}

CATCH_002a:
	{ // begin catch(System.Object)
		{
			bool L_5 = ___throwException1;
			if (!L_5)
			{
				goto IL_0033;
			}
		}

IL_0031:
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(__exception_local);
		}

IL_0033:
		{
			V_0 = (bool)0;
			goto IL_003f;
		}

IL_003a:
		{
			; // IL_003a: leave IL_003f
		}
	} // end catch (depth: 1)

IL_003f:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::BuildCertificatesCollection(System.String)
extern Il2CppClass* X509CertificateCollection_t3336811651_il2cpp_TypeInfo_var;
extern Il2CppClass* Path_t2029632748_il2cpp_TypeInfo_var;
extern Il2CppClass* Il2CppObject_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral40256652;
extern const uint32_t X509Store_BuildCertificatesCollection_m1851273927_MetadataUsageId;
extern "C"  X509CertificateCollection_t3336811651 * X509Store_BuildCertificatesCollection_m1851273927 (X509Store_t3983467982 * __this, String_t* ___storeName0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Store_BuildCertificatesCollection_m1851273927_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	X509CertificateCollection_t3336811651 * V_0 = NULL;
	String_t* V_1 = NULL;
	StringU5BU5D_t2956870243* V_2 = NULL;
	String_t* V_3 = NULL;
	StringU5BU5D_t2956870243* V_4 = NULL;
	int32_t V_5 = 0;
	X509Certificate_t273828613 * V_6 = NULL;
	Exception_t1967233988 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1967233988 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		X509CertificateCollection_t3336811651 * L_0 = (X509CertificateCollection_t3336811651 *)il2cpp_codegen_object_new(X509CertificateCollection_t3336811651_il2cpp_TypeInfo_var);
		X509CertificateCollection__ctor_m2517521230(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = __this->get__storePath_0();
		String_t* L_2 = ___storeName0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t2029632748_il2cpp_TypeInfo_var);
		String_t* L_3 = Path_Combine_m4122812896(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		String_t* L_4 = V_1;
		bool L_5 = X509Store_CheckStore_m4197144772(__this, L_4, (bool)0, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		X509CertificateCollection_t3336811651 * L_6 = V_0;
		return L_6;
	}

IL_0022:
	{
		String_t* L_7 = V_1;
		StringU5BU5D_t2956870243* L_8 = Directory_GetFiles_m2573902858(NULL /*static, unused*/, L_7, _stringLiteral40256652, /*hidden argument*/NULL);
		V_2 = L_8;
		StringU5BU5D_t2956870243* L_9 = V_2;
		if (!L_9)
		{
			goto IL_007c;
		}
	}
	{
		StringU5BU5D_t2956870243* L_10 = V_2;
		NullCheck(L_10);
		if ((((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_10)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_007c;
		}
	}
	{
		StringU5BU5D_t2956870243* L_11 = V_2;
		V_4 = L_11;
		V_5 = 0;
		goto IL_0071;
	}

IL_0048:
	{
		StringU5BU5D_t2956870243* L_12 = V_4;
		int32_t L_13 = V_5;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		V_3 = ((L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14)));
	}

IL_004e:
	try
	{ // begin try (depth: 1)
		String_t* L_15 = V_3;
		X509Certificate_t273828613 * L_16 = X509Store_LoadCertificate_m2281266908(__this, L_15, /*hidden argument*/NULL);
		V_6 = L_16;
		X509CertificateCollection_t3336811651 * L_17 = V_0;
		X509Certificate_t273828613 * L_18 = V_6;
		NullCheck(L_17);
		X509CertificateCollection_Add_m1585739833(L_17, L_18, /*hidden argument*/NULL);
		goto IL_006b;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t1967233988 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Il2CppObject_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0065;
		throw e;
	}

CATCH_0065:
	{ // begin catch(System.Object)
		goto IL_006b;
	} // end catch (depth: 1)

IL_006b:
	{
		int32_t L_19 = V_5;
		V_5 = ((int32_t)((int32_t)L_19+(int32_t)1));
	}

IL_0071:
	{
		int32_t L_20 = V_5;
		StringU5BU5D_t2956870243* L_21 = V_4;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_21)->max_length)))))))
		{
			goto IL_0048;
		}
	}

IL_007c:
	{
		X509CertificateCollection_t3336811651 * L_22 = V_0;
		return L_22;
	}
}
// System.Collections.ArrayList Mono.Security.X509.X509Store::BuildCrlsCollection(System.String)
extern Il2CppClass* ArrayList_t2121638921_il2cpp_TypeInfo_var;
extern Il2CppClass* Path_t2029632748_il2cpp_TypeInfo_var;
extern Il2CppClass* Il2CppObject_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral40257049;
extern const uint32_t X509Store_BuildCrlsCollection_m2551806712_MetadataUsageId;
extern "C"  ArrayList_t2121638921 * X509Store_BuildCrlsCollection_m2551806712 (X509Store_t3983467982 * __this, String_t* ___storeName0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Store_BuildCrlsCollection_m2551806712_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	ArrayList_t2121638921 * V_0 = NULL;
	String_t* V_1 = NULL;
	StringU5BU5D_t2956870243* V_2 = NULL;
	String_t* V_3 = NULL;
	StringU5BU5D_t2956870243* V_4 = NULL;
	int32_t V_5 = 0;
	X509Crl_t2942805322 * V_6 = NULL;
	Exception_t1967233988 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1967233988 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ArrayList_t2121638921 * L_0 = (ArrayList_t2121638921 *)il2cpp_codegen_object_new(ArrayList_t2121638921_il2cpp_TypeInfo_var);
		ArrayList__ctor_m1878432947(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = __this->get__storePath_0();
		String_t* L_2 = ___storeName0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t2029632748_il2cpp_TypeInfo_var);
		String_t* L_3 = Path_Combine_m4122812896(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		String_t* L_4 = V_1;
		bool L_5 = X509Store_CheckStore_m4197144772(__this, L_4, (bool)0, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0022;
		}
	}
	{
		ArrayList_t2121638921 * L_6 = V_0;
		return L_6;
	}

IL_0022:
	{
		String_t* L_7 = V_1;
		StringU5BU5D_t2956870243* L_8 = Directory_GetFiles_m2573902858(NULL /*static, unused*/, L_7, _stringLiteral40257049, /*hidden argument*/NULL);
		V_2 = L_8;
		StringU5BU5D_t2956870243* L_9 = V_2;
		if (!L_9)
		{
			goto IL_007c;
		}
	}
	{
		StringU5BU5D_t2956870243* L_10 = V_2;
		NullCheck(L_10);
		if ((((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_10)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_007c;
		}
	}
	{
		StringU5BU5D_t2956870243* L_11 = V_2;
		V_4 = L_11;
		V_5 = 0;
		goto IL_0071;
	}

IL_0048:
	{
		StringU5BU5D_t2956870243* L_12 = V_4;
		int32_t L_13 = V_5;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		V_3 = ((L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14)));
	}

IL_004e:
	try
	{ // begin try (depth: 1)
		String_t* L_15 = V_3;
		X509Crl_t2942805322 * L_16 = X509Store_LoadCrl_m371472464(__this, L_15, /*hidden argument*/NULL);
		V_6 = L_16;
		ArrayList_t2121638921 * L_17 = V_0;
		X509Crl_t2942805322 * L_18 = V_6;
		NullCheck(L_17);
		VirtFuncInvoker1< int32_t, Il2CppObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_17, L_18);
		goto IL_006b;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t1967233988 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Il2CppObject_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0065;
		throw e;
	}

CATCH_0065:
	{ // begin catch(System.Object)
		goto IL_006b;
	} // end catch (depth: 1)

IL_006b:
	{
		int32_t L_19 = V_5;
		V_5 = ((int32_t)((int32_t)L_19+(int32_t)1));
	}

IL_0071:
	{
		int32_t L_20 = V_5;
		StringU5BU5D_t2956870243* L_21 = V_4;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)(((int32_t)((int32_t)(((Il2CppArray *)L_21)->max_length)))))))
		{
			goto IL_0048;
		}
	}

IL_007c:
	{
		ArrayList_t2121638921 * L_22 = V_0;
		return L_22;
	}
}
// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::get_CurrentUser()
extern Il2CppClass* X509StoreManager_t902433605_il2cpp_TypeInfo_var;
extern Il2CppClass* Path_t2029632748_il2cpp_TypeInfo_var;
extern Il2CppClass* X509Stores_t2754714603_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral45839377;
extern Il2CppCodeGenString* _stringLiteral94550735;
extern const uint32_t X509StoreManager_get_CurrentUser_m761909638_MetadataUsageId;
extern "C"  X509Stores_t2754714603 * X509StoreManager_get_CurrentUser_m761909638 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509StoreManager_get_CurrentUser_m761909638_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = NULL;
	{
		X509Stores_t2754714603 * L_0 = ((X509StoreManager_t902433605_StaticFields*)X509StoreManager_t902433605_il2cpp_TypeInfo_var->static_fields)->get__userStore_0();
		if (L_0)
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_1 = Environment_GetFolderPath_m4247985398(NULL /*static, unused*/, ((int32_t)26), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t2029632748_il2cpp_TypeInfo_var);
		String_t* L_2 = Path_Combine_m4122812896(NULL /*static, unused*/, L_1, _stringLiteral45839377, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		String_t* L_4 = Path_Combine_m4122812896(NULL /*static, unused*/, L_3, _stringLiteral94550735, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = V_0;
		X509Stores_t2754714603 * L_6 = (X509Stores_t2754714603 *)il2cpp_codegen_object_new(X509Stores_t2754714603_il2cpp_TypeInfo_var);
		X509Stores__ctor_m3067409489(L_6, L_5, /*hidden argument*/NULL);
		((X509StoreManager_t902433605_StaticFields*)X509StoreManager_t902433605_il2cpp_TypeInfo_var->static_fields)->set__userStore_0(L_6);
	}

IL_0033:
	{
		X509Stores_t2754714603 * L_7 = ((X509StoreManager_t902433605_StaticFields*)X509StoreManager_t902433605_il2cpp_TypeInfo_var->static_fields)->get__userStore_0();
		return L_7;
	}
}
// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::get_LocalMachine()
extern Il2CppClass* X509StoreManager_t902433605_il2cpp_TypeInfo_var;
extern Il2CppClass* Path_t2029632748_il2cpp_TypeInfo_var;
extern Il2CppClass* X509Stores_t2754714603_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral45839377;
extern Il2CppCodeGenString* _stringLiteral94550735;
extern const uint32_t X509StoreManager_get_LocalMachine_m812946396_MetadataUsageId;
extern "C"  X509Stores_t2754714603 * X509StoreManager_get_LocalMachine_m812946396 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509StoreManager_get_LocalMachine_m812946396_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = NULL;
	{
		X509Stores_t2754714603 * L_0 = ((X509StoreManager_t902433605_StaticFields*)X509StoreManager_t902433605_il2cpp_TypeInfo_var->static_fields)->get__machineStore_1();
		if (L_0)
		{
			goto IL_0033;
		}
	}
	{
		String_t* L_1 = Environment_GetFolderPath_m4247985398(NULL /*static, unused*/, ((int32_t)35), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Path_t2029632748_il2cpp_TypeInfo_var);
		String_t* L_2 = Path_Combine_m4122812896(NULL /*static, unused*/, L_1, _stringLiteral45839377, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		String_t* L_4 = Path_Combine_m4122812896(NULL /*static, unused*/, L_3, _stringLiteral94550735, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = V_0;
		X509Stores_t2754714603 * L_6 = (X509Stores_t2754714603 *)il2cpp_codegen_object_new(X509Stores_t2754714603_il2cpp_TypeInfo_var);
		X509Stores__ctor_m3067409489(L_6, L_5, /*hidden argument*/NULL);
		((X509StoreManager_t902433605_StaticFields*)X509StoreManager_t902433605_il2cpp_TypeInfo_var->static_fields)->set__machineStore_1(L_6);
	}

IL_0033:
	{
		X509Stores_t2754714603 * L_7 = ((X509StoreManager_t902433605_StaticFields*)X509StoreManager_t902433605_il2cpp_TypeInfo_var->static_fields)->get__machineStore_1();
		return L_7;
	}
}
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509StoreManager::get_TrustedRootCertificates()
extern Il2CppClass* X509CertificateCollection_t3336811651_il2cpp_TypeInfo_var;
extern const uint32_t X509StoreManager_get_TrustedRootCertificates_m2593128238_MetadataUsageId;
extern "C"  X509CertificateCollection_t3336811651 * X509StoreManager_get_TrustedRootCertificates_m2593128238 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509StoreManager_get_TrustedRootCertificates_m2593128238_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	X509CertificateCollection_t3336811651 * V_0 = NULL;
	{
		X509CertificateCollection_t3336811651 * L_0 = (X509CertificateCollection_t3336811651 *)il2cpp_codegen_object_new(X509CertificateCollection_t3336811651_il2cpp_TypeInfo_var);
		X509CertificateCollection__ctor_m2517521230(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		X509CertificateCollection_t3336811651 * L_1 = V_0;
		X509Stores_t2754714603 * L_2 = X509StoreManager_get_CurrentUser_m761909638(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_2);
		X509Store_t3983467982 * L_3 = X509Stores_get_TrustedRoot_m4006515680(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		X509CertificateCollection_t3336811651 * L_4 = X509Store_get_Certificates_m3707205492(L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		X509CertificateCollection_AddRange_m2353463272(L_1, L_4, /*hidden argument*/NULL);
		X509CertificateCollection_t3336811651 * L_5 = V_0;
		X509Stores_t2754714603 * L_6 = X509StoreManager_get_LocalMachine_m812946396(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_6);
		X509Store_t3983467982 * L_7 = X509Stores_get_TrustedRoot_m4006515680(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		X509CertificateCollection_t3336811651 * L_8 = X509Store_get_Certificates_m3707205492(L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		X509CertificateCollection_AddRange_m2353463272(L_5, L_8, /*hidden argument*/NULL);
		X509CertificateCollection_t3336811651 * L_9 = V_0;
		return L_9;
	}
}
// System.Void Mono.Security.X509.X509Stores::.ctor(System.String)
extern "C"  void X509Stores__ctor_m3067409489 (X509Stores_t2754714603 * __this, String_t* ___path0, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___path0;
		__this->set__storePath_0(L_0);
		return;
	}
}
// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::get_TrustedRoot()
extern Il2CppClass* Path_t2029632748_il2cpp_TypeInfo_var;
extern Il2CppClass* X509Store_t3983467982_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral81088056;
extern const uint32_t X509Stores_get_TrustedRoot_m4006515680_MetadataUsageId;
extern "C"  X509Store_t3983467982 * X509Stores_get_TrustedRoot_m4006515680 (X509Stores_t2754714603 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Stores_get_TrustedRoot_m4006515680_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = NULL;
	{
		X509Store_t3983467982 * L_0 = __this->get__trusted_1();
		if (L_0)
		{
			goto IL_0029;
		}
	}
	{
		String_t* L_1 = __this->get__storePath_0();
		IL2CPP_RUNTIME_CLASS_INIT(Path_t2029632748_il2cpp_TypeInfo_var);
		String_t* L_2 = Path_Combine_m4122812896(NULL /*static, unused*/, L_1, _stringLiteral81088056, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		X509Store_t3983467982 * L_4 = (X509Store_t3983467982 *)il2cpp_codegen_object_new(X509Store_t3983467982_il2cpp_TypeInfo_var);
		X509Store__ctor_m3740673213(L_4, L_3, (bool)1, /*hidden argument*/NULL);
		__this->set__trusted_1(L_4);
	}

IL_0029:
	{
		X509Store_t3983467982 * L_5 = __this->get__trusted_1();
		return L_5;
	}
}
// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::Open(System.String,System.Boolean)
extern Il2CppClass* ArgumentNullException_t3214793280_il2cpp_TypeInfo_var;
extern Il2CppClass* Path_t2029632748_il2cpp_TypeInfo_var;
extern Il2CppClass* X509Store_t3983467982_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1691782924;
extern const uint32_t X509Stores_Open_m371944087_MetadataUsageId;
extern "C"  X509Store_t3983467982 * X509Stores_Open_m371944087 (X509Stores_t2754714603 * __this, String_t* ___storeName0, bool ___create1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (X509Stores_Open_m371944087_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = NULL;
	{
		String_t* L_0 = ___storeName0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t3214793280 * L_1 = (ArgumentNullException_t3214793280 *)il2cpp_codegen_object_new(ArgumentNullException_t3214793280_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m135444188(L_1, _stringLiteral1691782924, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1);
	}

IL_0011:
	{
		String_t* L_2 = __this->get__storePath_0();
		String_t* L_3 = ___storeName0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t2029632748_il2cpp_TypeInfo_var);
		String_t* L_4 = Path_Combine_m4122812896(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		bool L_5 = ___create1;
		if (L_5)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_6 = V_0;
		bool L_7 = Directory_Exists_m4117375188(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0031;
		}
	}
	{
		return (X509Store_t3983467982 *)NULL;
	}

IL_0031:
	{
		String_t* L_8 = V_0;
		X509Store_t3983467982 * L_9 = (X509Store_t3983467982 *)il2cpp_codegen_object_new(X509Store_t3983467982_il2cpp_TypeInfo_var);
		X509Store__ctor_m3740673213(L_9, L_8, (bool)1, /*hidden argument*/NULL);
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
