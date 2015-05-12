#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_4.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
extern TypeInfo TlsServerCertificate_t1498_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_4MethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// Mono.Security.Protocol.Tls.Context
#include "Mono_Security_Mono_Security_Protocol_Tls_Context.h"
#include "mscorlib_ArrayTypes.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// Mono.Security.Protocol.Tls.Handshake.HandshakeType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake_0.h"
// Mono.Security.Protocol.Tls.TlsServerSettings
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsServerSettings.h"
// Mono.Security.X509.X509CertificateCollection
#include "Mono_Security_Mono_Security_X509_X509CertificateCollection.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// Mono.Security.X509.X509Certificate
#include "Mono_Security_Mono_Security_X509_X509Certificate.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// Mono.Security.Protocol.Tls.ClientContext
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientContext.h"
// Mono.Security.X509.Extensions.KeyUsages
#include "Mono_Security_Mono_Security_X509_Extensions_KeyUsages.h"
// Mono.Security.X509.Extensions.KeyUsageExtension
#include "Mono_Security_Mono_Security_X509_Extensions_KeyUsageExtensio.h"
// Mono.Security.X509.Extensions.ExtendedKeyUsageExtension
#include "Mono_Security_Mono_Security_X509_Extensions_ExtendedKeyUsage.h"
// Mono.Security.X509.X509Extension
#include "Mono_Security_Mono_Security_X509_X509Extension.h"
// Mono.Security.X509.Extensions.NetscapeCertTypeExtension
#include "Mono_Security_Mono_Security_X509_Extensions_NetscapeCertType_0.h"
// Mono.Security.Protocol.Tls.ExchangeAlgorithmType
#include "Mono_Security_Mono_Security_Protocol_Tls_ExchangeAlgorithmTy.h"
// Mono.Security.Protocol.Tls.SecurityParameters
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityParameters.h"
// Mono.Security.Protocol.Tls.CipherSuite
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuite.h"
// Mono.Security.X509.X509ExtensionCollection
#include "Mono_Security_Mono_Security_X509_X509ExtensionCollection.h"
// System.String
#include "mscorlib_System_String.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayList.h"
// System.Object
#include "mscorlib_System_Object.h"
// Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes
#include "Mono_Security_Mono_Security_X509_Extensions_NetscapeCertType.h"
// Mono.Security.Protocol.Tls.AlertDescription
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertDescription.h"
// Mono.Security.Protocol.Tls.ValidationResult
#include "Mono_Security_Mono_Security_Protocol_Tls_ValidationResult.h"
// System.Int64
#include "mscorlib_System_Int64.h"
// System.Security.Cryptography.X509Certificates.X509Certificate
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509C.h"
// Mono.Security.X509.X509Chain
#include "Mono_Security_Mono_Security_X509_X509Chain.h"
// Mono.Security.X509.X509ChainStatusFlags
#include "Mono_Security_Mono_Security_X509_X509ChainStatusFlags.h"
// Mono.Security.Protocol.Tls.SslClientStream
#include "Mono_Security_Mono_Security_Protocol_Tls_SslClientStream.h"
// Mono.Security.Protocol.Tls.TlsException
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsException.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Array
#include "mscorlib_System_Array.h"
// Mono.Security.X509.Extensions.SubjectAltNameExtension
#include "Mono_Security_Mono_Security_X509_Extensions_SubjectAltNameEx.h"
// Mono.Security.Protocol.Tls.TlsClientSettings
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsClientSettings.h"
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_Regex.h"
// System.Text.RegularExpressions.MatchCollection
#include "System_System_Text_RegularExpressions_MatchCollection.h"
// System.Text.RegularExpressions.Match
#include "System_System_Text_RegularExpressions_Match.h"
// System.Text.RegularExpressions.GroupCollection
#include "System_System_Text_RegularExpressions_GroupCollection.h"
// System.Text.RegularExpressions.Group
#include "System_System_Text_RegularExpressions_Group.h"
// System.Char
#include "mscorlib_System_Char.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfo.h"
extern TypeInfo HandshakeMessage_t1456_il2cpp_TypeInfo;
extern TypeInfo Void_t72_il2cpp_TypeInfo;
extern TypeInfo X509CertificateCollection_t1413_il2cpp_TypeInfo;
extern TypeInfo X509Certificate_t1417_il2cpp_TypeInfo;
extern TypeInfo ClientContext_t1452_il2cpp_TypeInfo;
extern TypeInfo KeyUsageExtension_t1434_il2cpp_TypeInfo;
extern TypeInfo ExtendedKeyUsageExtension_t1431_il2cpp_TypeInfo;
extern TypeInfo ArrayList_t1383_il2cpp_TypeInfo;
extern TypeInfo Boolean_t74_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo NetscapeCertTypeExtension_t1436_il2cpp_TypeInfo;
extern TypeInfo SslClientStream_t1451_il2cpp_TypeInfo;
extern TypeInfo ValidationResult_t1483_il2cpp_TypeInfo;
extern TypeInfo Int64_t77_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo TlsException_t1489_il2cpp_TypeInfo;
extern TypeInfo ByteU5BU5D_t112_il2cpp_TypeInfo;
extern TypeInfo Byte_t97_il2cpp_TypeInfo;
extern TypeInfo X509Certificate_t1471_il2cpp_TypeInfo;
extern TypeInfo Int32_t73_il2cpp_TypeInfo;
extern TypeInfo X509Chain_t1421_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo Array_t_il2cpp_TypeInfo;
extern TypeInfo Int32U5BU5D_t1196_il2cpp_TypeInfo;
extern TypeInfo Exception_t82_il2cpp_TypeInfo;
extern TypeInfo SubjectAltNameExtension_t1437_il2cpp_TypeInfo;
extern TypeInfo Regex_t322_il2cpp_TypeInfo;
extern TypeInfo MatchCollection_t1559_il2cpp_TypeInfo;
extern TypeInfo Match_t1560_il2cpp_TypeInfo;
extern TypeInfo GroupCollection_t1561_il2cpp_TypeInfo;
extern TypeInfo CultureInfo_t1076_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake_0MethodDeclarations.h"
// Mono.Security.Protocol.Tls.Context
#include "Mono_Security_Mono_Security_Protocol_Tls_ContextMethodDeclarations.h"
// Mono.Security.Protocol.Tls.TlsServerSettings
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsServerSettingsMethodDeclarations.h"
// Mono.Security.X509.X509CertificateCollection
#include "Mono_Security_Mono_Security_X509_X509CertificateCollectionMethodDeclarations.h"
// Mono.Security.Protocol.Tls.TlsStream
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsStreamMethodDeclarations.h"
// Mono.Security.X509.X509Certificate
#include "Mono_Security_Mono_Security_X509_X509CertificateMethodDeclarations.h"
// Mono.Security.Protocol.Tls.SecurityParameters
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityParametersMethodDeclarations.h"
// Mono.Security.Protocol.Tls.CipherSuite
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuiteMethodDeclarations.h"
// Mono.Security.X509.X509ExtensionCollection
#include "Mono_Security_Mono_Security_X509_X509ExtensionCollectionMethodDeclarations.h"
// Mono.Security.X509.Extensions.KeyUsageExtension
#include "Mono_Security_Mono_Security_X509_Extensions_KeyUsageExtensioMethodDeclarations.h"
// Mono.Security.X509.Extensions.ExtendedKeyUsageExtension
#include "Mono_Security_Mono_Security_X509_Extensions_ExtendedKeyUsageMethodDeclarations.h"
// System.Collections.ArrayList
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
// Mono.Security.X509.Extensions.NetscapeCertTypeExtension
#include "Mono_Security_Mono_Security_X509_Extensions_NetscapeCertType_0MethodDeclarations.h"
// Mono.Security.Protocol.Tls.ClientContext
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientContextMethodDeclarations.h"
// Mono.Security.Protocol.Tls.SslClientStream
#include "Mono_Security_Mono_Security_Protocol_Tls_SslClientStreamMethodDeclarations.h"
// Mono.Security.Protocol.Tls.ValidationResult
#include "Mono_Security_Mono_Security_Protocol_Tls_ValidationResultMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// Mono.Security.Protocol.Tls.TlsException
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsExceptionMethodDeclarations.h"
// System.Security.Cryptography.X509Certificates.X509Certificate
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509CMethodDeclarations.h"
// Mono.Security.X509.X509Chain
#include "Mono_Security_Mono_Security_X509_X509ChainMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// Mono.Security.Protocol.Tls.TlsClientSettings
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsClientSettingsMethodDeclarations.h"
// Mono.Security.X509.Extensions.SubjectAltNameExtension
#include "Mono_Security_Mono_Security_X509_Extensions_SubjectAltNameExMethodDeclarations.h"
// System.Text.RegularExpressions.Regex
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"
// System.Text.RegularExpressions.MatchCollection
#include "System_System_Text_RegularExpressions_MatchCollectionMethodDeclarations.h"
// System.Text.RegularExpressions.Group
#include "System_System_Text_RegularExpressions_GroupMethodDeclarations.h"
// System.Text.RegularExpressions.Match
#include "System_System_Text_RegularExpressions_MatchMethodDeclarations.h"
// System.Text.RegularExpressions.GroupCollection
#include "System_System_Text_RegularExpressions_GroupCollectionMethodDeclarations.h"
// System.Text.RegularExpressions.Capture
#include "System_System_Text_RegularExpressions_CaptureMethodDeclarations.h"
// System.Globalization.CultureInfo
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
extern Il2CppType Int32_t73_0_0_0;
extern MethodInfo HandshakeMessage__ctor_m6391_MethodInfo;
extern MethodInfo HandshakeMessage_Update_m6396_MethodInfo;
extern MethodInfo HandshakeMessage_get_Context_m6392_MethodInfo;
extern MethodInfo Context_get_ServerSettings_m6094_MethodInfo;
extern MethodInfo TlsServerSettings_set_Certificates_m6353_MethodInfo;
extern MethodInfo TlsServerSettings_UpdateCertificateRSA_m6362_MethodInfo;
extern MethodInfo TlsServerCertificate_ProcessAsTls1_m6429_MethodInfo;
extern MethodInfo X509CertificateCollection__ctor_m5868_MethodInfo;
extern MethodInfo TlsStream_ReadInt24_m6375_MethodInfo;
extern MethodInfo TlsStream_ReadBytes_m6376_MethodInfo;
extern MethodInfo X509Certificate__ctor_m5830_MethodInfo;
extern MethodInfo X509CertificateCollection_Add_m5872_MethodInfo;
extern MethodInfo TlsServerCertificate_validateCertificates_m6431_MethodInfo;
extern MethodInfo X509Certificate_get_Version_m5852_MethodInfo;
extern MethodInfo Context_get_Negotiating_m6138_MethodInfo;
extern MethodInfo SecurityParameters_get_Cipher_m6208_MethodInfo;
extern MethodInfo CipherSuite_get_ExchangeAlgorithmType_m6001_MethodInfo;
extern MethodInfo X509Certificate_get_Extensions_m5836_MethodInfo;
extern MethodInfo X509ExtensionCollection_get_Item_m5922_MethodInfo;
extern MethodInfo KeyUsageExtension__ctor_m5956_MethodInfo;
extern MethodInfo ExtendedKeyUsageExtension__ctor_m5947_MethodInfo;
extern MethodInfo KeyUsageExtension_Support_m5959_MethodInfo;
extern MethodInfo ExtendedKeyUsageExtension_get_KeyPurpose_m5950_MethodInfo;
extern MethodInfo ArrayList_Contains_m6648_MethodInfo;
extern MethodInfo NetscapeCertTypeExtension__ctor_m5961_MethodInfo;
extern MethodInfo NetscapeCertTypeExtension_Support_m5963_MethodInfo;
extern MethodInfo ClientContext_get_SslStream_m6054_MethodInfo;
extern MethodInfo SslClientStream_get_HaveRemoteValidation2Callback_m6245_MethodInfo;
extern MethodInfo SslClientStream_RaiseServerCertificateValidation2_m6249_MethodInfo;
extern MethodInfo ValidationResult_get_Trusted_m6215_MethodInfo;
extern MethodInfo ValidationResult_get_ErrorCode_m6216_MethodInfo;
extern MethodInfo String_Format_m523_MethodInfo;
extern MethodInfo String_Concat_m477_MethodInfo;
extern MethodInfo TlsException__ctor_m6347_MethodInfo;
extern MethodInfo X509CertificateCollection_get_Item_m5871_MethodInfo;
extern MethodInfo X509Certificate_get_RawData_m5845_MethodInfo;
extern MethodInfo X509Certificate__ctor_m6705_MethodInfo;
extern MethodInfo ArrayList__ctor_m6487_MethodInfo;
extern MethodInfo TlsServerCertificate_checkCertificateUsage_m6430_MethodInfo;
extern MethodInfo ArrayList_Add_m6488_MethodInfo;
extern MethodInfo TlsServerCertificate_checkServerIdentity_m6432_MethodInfo;
extern MethodInfo X509CertificateCollection__ctor_m5869_MethodInfo;
extern MethodInfo X509CertificateCollection_Remove_m5878_MethodInfo;
extern MethodInfo X509Chain__ctor_m5881_MethodInfo;
extern MethodInfo X509Chain_Build_m5884_MethodInfo;
extern MethodInfo X509Chain_get_Status_m5882_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m642_MethodInfo;
extern MethodInfo ArrayList_ToArray_m6626_MethodInfo;
extern MethodInfo SslClientStream_RaiseServerCertificateValidation_m6248_MethodInfo;
extern MethodInfo Context_get_ClientSettings_m6095_MethodInfo;
extern MethodInfo TlsClientSettings_get_TargetHost_m6335_MethodInfo;
extern MethodInfo SubjectAltNameExtension__ctor_m5965_MethodInfo;
extern MethodInfo SubjectAltNameExtension_get_DNSNames_m5967_MethodInfo;
extern MethodInfo TlsServerCertificate_Match_m6434_MethodInfo;
extern MethodInfo SubjectAltNameExtension_get_IPAddresses_m5968_MethodInfo;
extern MethodInfo String_op_Equality_m636_MethodInfo;
extern MethodInfo X509Certificate_get_SubjectName_m5849_MethodInfo;
extern MethodInfo TlsServerCertificate_checkDomainName_m6433_MethodInfo;
extern MethodInfo Regex__ctor_m6742_MethodInfo;
extern MethodInfo Regex_Matches_m6743_MethodInfo;
extern MethodInfo MatchCollection_get_Count_m6744_MethodInfo;
extern MethodInfo MatchCollection_get_Item_m6745_MethodInfo;
extern MethodInfo Group_get_Success_m6746_MethodInfo;
extern MethodInfo Match_get_Groups_m6747_MethodInfo;
extern MethodInfo GroupCollection_get_Item_m6748_MethodInfo;
extern MethodInfo Capture_get_Value_m6749_MethodInfo;
extern MethodInfo String_ToString_m650_MethodInfo;
extern MethodInfo String_IndexOf_m1641_MethodInfo;
extern MethodInfo CultureInfo_get_InvariantCulture_m6497_MethodInfo;
extern MethodInfo String_Compare_m6750_MethodInfo;
extern MethodInfo String_get_Length_m569_MethodInfo;
extern MethodInfo String_get_Chars_m568_MethodInfo;
extern MethodInfo String_IndexOf_m6751_MethodInfo;
extern MethodInfo String_Substring_m1189_MethodInfo;
extern MethodInfo String_Compare_m6752_MethodInfo;
extern MethodInfo String_Substring_m578_MethodInfo;


// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern MethodInfo TlsServerCertificate__ctor_m6426_MethodInfo;
 void TlsServerCertificate__ctor_m6426 (TlsServerCertificate_t1498 * __this, Context_t1445 * ___context, ByteU5BU5D_t112* ___buffer, MethodInfo* method){
	{
		HandshakeMessage__ctor_m6391(__this, ___context, ((int32_t)11), ___buffer, /*hidden argument*/&HandshakeMessage__ctor_m6391_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::Update()
extern MethodInfo TlsServerCertificate_Update_m6427_MethodInfo;
 void TlsServerCertificate_Update_m6427 (TlsServerCertificate_t1498 * __this, MethodInfo* method){
	{
		HandshakeMessage_Update_m6396(__this, /*hidden argument*/&HandshakeMessage_Update_m6396_MethodInfo);
		Context_t1445 * L_0 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		NullCheck(L_0);
		TlsServerSettings_t1461 * L_1 = Context_get_ServerSettings_m6094(L_0, /*hidden argument*/&Context_get_ServerSettings_m6094_MethodInfo);
		X509CertificateCollection_t1413 * L_2 = (__this->___certificates_9);
		NullCheck(L_1);
		TlsServerSettings_set_Certificates_m6353(L_1, L_2, /*hidden argument*/&TlsServerSettings_set_Certificates_m6353_MethodInfo);
		Context_t1445 * L_3 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		NullCheck(L_3);
		TlsServerSettings_t1461 * L_4 = Context_get_ServerSettings_m6094(L_3, /*hidden argument*/&Context_get_ServerSettings_m6094_MethodInfo);
		NullCheck(L_4);
		TlsServerSettings_UpdateCertificateRSA_m6362(L_4, /*hidden argument*/&TlsServerSettings_UpdateCertificateRSA_m6362_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsSsl3()
extern MethodInfo TlsServerCertificate_ProcessAsSsl3_m6428_MethodInfo;
 void TlsServerCertificate_ProcessAsSsl3_m6428 (TlsServerCertificate_t1498 * __this, MethodInfo* method){
	{
		VirtActionInvoker0::Invoke(&TlsServerCertificate_ProcessAsTls1_m6429_MethodInfo, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsTls1()
 void TlsServerCertificate_ProcessAsTls1_m6429 (TlsServerCertificate_t1498 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_t112* V_3 = {0};
	X509Certificate_t1417 * V_4 = {0};
	{
		X509CertificateCollection_t1413 * L_0 = (X509CertificateCollection_t1413 *)il2cpp_codegen_object_new (InitializedTypeInfo(&X509CertificateCollection_t1413_il2cpp_TypeInfo));
		X509CertificateCollection__ctor_m5868(L_0, /*hidden argument*/&X509CertificateCollection__ctor_m5868_MethodInfo);
		__this->___certificates_9 = L_0;
		V_0 = 0;
		int32_t L_1 = TlsStream_ReadInt24_m6375(__this, /*hidden argument*/&TlsStream_ReadInt24_m6375_MethodInfo);
		V_1 = L_1;
		goto IL_004d;
	}

IL_0019:
	{
		int32_t L_2 = TlsStream_ReadInt24_m6375(__this, /*hidden argument*/&TlsStream_ReadInt24_m6375_MethodInfo);
		V_2 = L_2;
		V_0 = ((int32_t)(V_0+3));
		if ((((int32_t)V_2) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		ByteU5BU5D_t112* L_3 = TlsStream_ReadBytes_m6376(__this, V_2, /*hidden argument*/&TlsStream_ReadBytes_m6376_MethodInfo);
		V_3 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&X509Certificate_t1417_il2cpp_TypeInfo));
		X509Certificate_t1417 * L_4 = (X509Certificate_t1417 *)il2cpp_codegen_object_new (InitializedTypeInfo(&X509Certificate_t1417_il2cpp_TypeInfo));
		X509Certificate__ctor_m5830(L_4, V_3, /*hidden argument*/&X509Certificate__ctor_m5830_MethodInfo);
		V_4 = L_4;
		X509CertificateCollection_t1413 * L_5 = (__this->___certificates_9);
		NullCheck(L_5);
		X509CertificateCollection_Add_m5872(L_5, V_4, /*hidden argument*/&X509CertificateCollection_Add_m5872_MethodInfo);
		V_0 = ((int32_t)(V_0+V_2));
	}

IL_004d:
	{
		if ((((int32_t)V_0) < ((int32_t)V_1)))
		{
			goto IL_0019;
		}
	}
	{
		X509CertificateCollection_t1413 * L_6 = (__this->___certificates_9);
		TlsServerCertificate_validateCertificates_m6431(__this, L_6, /*hidden argument*/&TlsServerCertificate_validateCertificates_m6431_MethodInfo);
		return;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkCertificateUsage(Mono.Security.X509.X509Certificate)
 bool TlsServerCertificate_checkCertificateUsage_m6430 (TlsServerCertificate_t1498 * __this, X509Certificate_t1417 * ___cert, MethodInfo* method){
	ClientContext_t1452 * V_0 = {0};
	int32_t V_1 = {0};
	KeyUsageExtension_t1434 * V_2 = {0};
	ExtendedKeyUsageExtension_t1431 * V_3 = {0};
	X509Extension_t1425 * V_4 = {0};
	NetscapeCertTypeExtension_t1436 * V_5 = {0};
	int32_t V_6 = {0};
	int32_t G_B19_0 = 0;
	int32_t G_B26_0 = 0;
	{
		Context_t1445 * L_0 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		V_0 = ((ClientContext_t1452 *)Castclass(L_0, InitializedTypeInfo(&ClientContext_t1452_il2cpp_TypeInfo)));
		NullCheck(___cert);
		int32_t L_1 = X509Certificate_get_Version_m5852(___cert, /*hidden argument*/&X509Certificate_get_Version_m5852_MethodInfo);
		if ((((int32_t)L_1) >= ((int32_t)3)))
		{
			goto IL_001a;
		}
	}
	{
		return 1;
	}

IL_001a:
	{
		V_1 = 0;
		NullCheck(V_0);
		SecurityParameters_t1463 * L_2 = Context_get_Negotiating_m6138(V_0, /*hidden argument*/&Context_get_Negotiating_m6138_MethodInfo);
		NullCheck(L_2);
		CipherSuite_t1446 * L_3 = SecurityParameters_get_Cipher_m6208(L_2, /*hidden argument*/&SecurityParameters_get_Cipher_m6208_MethodInfo);
		NullCheck(L_3);
		int32_t L_4 = CipherSuite_get_ExchangeAlgorithmType_m6001(L_3, /*hidden argument*/&CipherSuite_get_ExchangeAlgorithmType_m6001_MethodInfo);
		V_6 = L_4;
		if (V_6 == 0)
		{
			goto IL_0061;
		}
		if (V_6 == 1)
		{
			goto IL_0068;
		}
		if (V_6 == 2)
		{
			goto IL_006a;
		}
		if (V_6 == 3)
		{
			goto IL_0059;
		}
		if (V_6 == 4)
		{
			goto IL_004e;
		}
	}
	{
		goto IL_006a;
	}

IL_004e:
	{
		V_1 = ((int32_t)128);
		goto IL_006a;
	}

IL_0059:
	{
		V_1 = ((int32_t)32);
		goto IL_006a;
	}

IL_0061:
	{
		V_1 = 8;
		goto IL_006a;
	}

IL_0068:
	{
		return 0;
	}

IL_006a:
	{
		V_2 = (KeyUsageExtension_t1434 *)NULL;
		V_3 = (ExtendedKeyUsageExtension_t1431 *)NULL;
		NullCheck(___cert);
		X509ExtensionCollection_t1416 * L_5 = X509Certificate_get_Extensions_m5836(___cert, /*hidden argument*/&X509Certificate_get_Extensions_m5836_MethodInfo);
		NullCheck(L_5);
		X509Extension_t1425 * L_6 = X509ExtensionCollection_get_Item_m5922(L_5, (String_t*) &_stringLiteral829, /*hidden argument*/&X509ExtensionCollection_get_Item_m5922_MethodInfo);
		V_4 = L_6;
		if (!V_4)
		{
			goto IL_008f;
		}
	}
	{
		KeyUsageExtension_t1434 * L_7 = (KeyUsageExtension_t1434 *)il2cpp_codegen_object_new (InitializedTypeInfo(&KeyUsageExtension_t1434_il2cpp_TypeInfo));
		KeyUsageExtension__ctor_m5956(L_7, V_4, /*hidden argument*/&KeyUsageExtension__ctor_m5956_MethodInfo);
		V_2 = L_7;
	}

IL_008f:
	{
		NullCheck(___cert);
		X509ExtensionCollection_t1416 * L_8 = X509Certificate_get_Extensions_m5836(___cert, /*hidden argument*/&X509Certificate_get_Extensions_m5836_MethodInfo);
		NullCheck(L_8);
		X509Extension_t1425 * L_9 = X509ExtensionCollection_get_Item_m5922(L_8, (String_t*) &_stringLiteral830, /*hidden argument*/&X509ExtensionCollection_get_Item_m5922_MethodInfo);
		V_4 = L_9;
		if (!V_4)
		{
			goto IL_00b0;
		}
	}
	{
		ExtendedKeyUsageExtension_t1431 * L_10 = (ExtendedKeyUsageExtension_t1431 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ExtendedKeyUsageExtension_t1431_il2cpp_TypeInfo));
		ExtendedKeyUsageExtension__ctor_m5947(L_10, V_4, /*hidden argument*/&ExtendedKeyUsageExtension__ctor_m5947_MethodInfo);
		V_3 = L_10;
	}

IL_00b0:
	{
		if (!V_2)
		{
			goto IL_00f3;
		}
	}
	{
		if (!V_3)
		{
			goto IL_00f3;
		}
	}
	{
		NullCheck(V_2);
		bool L_11 = KeyUsageExtension_Support_m5959(V_2, V_1, /*hidden argument*/&KeyUsageExtension_Support_m5959_MethodInfo);
		if (L_11)
		{
			goto IL_00ca;
		}
	}
	{
		return 0;
	}

IL_00ca:
	{
		NullCheck(V_3);
		ArrayList_t1383 * L_12 = ExtendedKeyUsageExtension_get_KeyPurpose_m5950(V_3, /*hidden argument*/&ExtendedKeyUsageExtension_get_KeyPurpose_m5950_MethodInfo);
		NullCheck(L_12);
		bool L_13 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&ArrayList_Contains_m6648_MethodInfo, L_12, (String_t*) &_stringLiteral706);
		if (L_13)
		{
			goto IL_00f1;
		}
	}
	{
		NullCheck(V_3);
		ArrayList_t1383 * L_14 = ExtendedKeyUsageExtension_get_KeyPurpose_m5950(V_3, /*hidden argument*/&ExtendedKeyUsageExtension_get_KeyPurpose_m5950_MethodInfo);
		NullCheck(L_14);
		bool L_15 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&ArrayList_Contains_m6648_MethodInfo, L_14, (String_t*) &_stringLiteral831);
		G_B19_0 = ((int32_t)(L_15));
		goto IL_00f2;
	}

IL_00f1:
	{
		G_B19_0 = 1;
	}

IL_00f2:
	{
		return G_B19_0;
	}

IL_00f3:
	{
		if (!V_2)
		{
			goto IL_0101;
		}
	}
	{
		NullCheck(V_2);
		bool L_16 = KeyUsageExtension_Support_m5959(V_2, V_1, /*hidden argument*/&KeyUsageExtension_Support_m5959_MethodInfo);
		return L_16;
	}

IL_0101:
	{
		if (!V_3)
		{
			goto IL_0130;
		}
	}
	{
		NullCheck(V_3);
		ArrayList_t1383 * L_17 = ExtendedKeyUsageExtension_get_KeyPurpose_m5950(V_3, /*hidden argument*/&ExtendedKeyUsageExtension_get_KeyPurpose_m5950_MethodInfo);
		NullCheck(L_17);
		bool L_18 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&ArrayList_Contains_m6648_MethodInfo, L_17, (String_t*) &_stringLiteral706);
		if (L_18)
		{
			goto IL_012e;
		}
	}
	{
		NullCheck(V_3);
		ArrayList_t1383 * L_19 = ExtendedKeyUsageExtension_get_KeyPurpose_m5950(V_3, /*hidden argument*/&ExtendedKeyUsageExtension_get_KeyPurpose_m5950_MethodInfo);
		NullCheck(L_19);
		bool L_20 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&ArrayList_Contains_m6648_MethodInfo, L_19, (String_t*) &_stringLiteral831);
		G_B26_0 = ((int32_t)(L_20));
		goto IL_012f;
	}

IL_012e:
	{
		G_B26_0 = 1;
	}

IL_012f:
	{
		return G_B26_0;
	}

IL_0130:
	{
		NullCheck(___cert);
		X509ExtensionCollection_t1416 * L_21 = X509Certificate_get_Extensions_m5836(___cert, /*hidden argument*/&X509Certificate_get_Extensions_m5836_MethodInfo);
		NullCheck(L_21);
		X509Extension_t1425 * L_22 = X509ExtensionCollection_get_Item_m5922(L_21, (String_t*) &_stringLiteral832, /*hidden argument*/&X509ExtensionCollection_get_Item_m5922_MethodInfo);
		V_4 = L_22;
		if (!V_4)
		{
			goto IL_015c;
		}
	}
	{
		NetscapeCertTypeExtension_t1436 * L_23 = (NetscapeCertTypeExtension_t1436 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NetscapeCertTypeExtension_t1436_il2cpp_TypeInfo));
		NetscapeCertTypeExtension__ctor_m5961(L_23, V_4, /*hidden argument*/&NetscapeCertTypeExtension__ctor_m5961_MethodInfo);
		V_5 = L_23;
		NullCheck(V_5);
		bool L_24 = NetscapeCertTypeExtension_Support_m5963(V_5, ((int32_t)64), /*hidden argument*/&NetscapeCertTypeExtension_Support_m5963_MethodInfo);
		return L_24;
	}

IL_015c:
	{
		return 1;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::validateCertificates(Mono.Security.X509.X509CertificateCollection)
 void TlsServerCertificate_validateCertificates_m6431 (TlsServerCertificate_t1498 * __this, X509CertificateCollection_t1413 * ___certificates, MethodInfo* method){
	ClientContext_t1452 * V_0 = {0};
	uint8_t V_1 = {0};
	ValidationResult_t1483 * V_2 = {0};
	int64_t V_3 = 0;
	String_t* V_4 = {0};
	X509Certificate_t1417 * V_5 = {0};
	X509Certificate_t1471 * V_6 = {0};
	ArrayList_t1383 * V_7 = {0};
	X509CertificateCollection_t1413 * V_8 = {0};
	X509Chain_t1421 * V_9 = {0};
	bool V_10 = false;
	Int32U5BU5D_t1196* V_11 = {0};
	int64_t V_12 = 0;
	int32_t V_13 = {0};
	Exception_t82 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t82 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		Context_t1445 * L_0 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		V_0 = ((ClientContext_t1452 *)Castclass(L_0, InitializedTypeInfo(&ClientContext_t1452_il2cpp_TypeInfo)));
		V_1 = ((int32_t)42);
		NullCheck(V_0);
		SslClientStream_t1451 * L_1 = ClientContext_get_SslStream_m6054(V_0, /*hidden argument*/&ClientContext_get_SslStream_m6054_MethodInfo);
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(&SslClientStream_get_HaveRemoteValidation2Callback_m6245_MethodInfo, L_1);
		if (!L_2)
		{
			goto IL_00b4;
		}
	}
	{
		NullCheck(V_0);
		SslClientStream_t1451 * L_3 = ClientContext_get_SslStream_m6054(V_0, /*hidden argument*/&ClientContext_get_SslStream_m6054_MethodInfo);
		NullCheck(L_3);
		ValidationResult_t1483 * L_4 = (ValidationResult_t1483 *)VirtFuncInvoker1< ValidationResult_t1483 *, X509CertificateCollection_t1413 * >::Invoke(&SslClientStream_RaiseServerCertificateValidation2_m6249_MethodInfo, L_3, ___certificates);
		V_2 = L_4;
		NullCheck(V_2);
		bool L_5 = ValidationResult_get_Trusted_m6215(V_2, /*hidden argument*/&ValidationResult_get_Trusted_m6215_MethodInfo);
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		return;
	}

IL_0038:
	{
		NullCheck(V_2);
		int32_t L_6 = ValidationResult_get_ErrorCode_m6216(V_2, /*hidden argument*/&ValidationResult_get_ErrorCode_m6216_MethodInfo);
		V_3 = (((int64_t)L_6));
		V_12 = V_3;
		if ((((int64_t)V_12) == ((int64_t)(((uint64_t)(((uint32_t)((int32_t)-2146762487))))))))
		{
			goto IL_007f;
		}
	}
	{
		if ((((int64_t)V_12) == ((int64_t)(((uint64_t)(((uint32_t)((int32_t)-2146762486))))))))
		{
			goto IL_0077;
		}
	}
	{
		if ((((int64_t)V_12) == ((int64_t)(((uint64_t)(((uint32_t)((int32_t)-2146762495))))))))
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0087;
	}

IL_006f:
	{
		V_1 = ((int32_t)45);
		goto IL_008f;
	}

IL_0077:
	{
		V_1 = ((int32_t)48);
		goto IL_008f;
	}

IL_007f:
	{
		V_1 = ((int32_t)48);
		goto IL_008f;
	}

IL_0087:
	{
		V_1 = ((int32_t)46);
		goto IL_008f;
	}

IL_008f:
	{
		int64_t L_7 = V_3;
		Object_t * L_8 = Box(InitializedTypeInfo(&Int64_t77_il2cpp_TypeInfo), &L_7);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_9 = String_Format_m523(NULL /*static, unused*/, (String_t*) &_stringLiteral833, L_8, /*hidden argument*/&String_Format_m523_MethodInfo);
		V_4 = L_9;
		String_t* L_10 = String_Concat_m477(NULL /*static, unused*/, (String_t*) &_stringLiteral834, V_4, /*hidden argument*/&String_Concat_m477_MethodInfo);
		TlsException_t1489 * L_11 = (TlsException_t1489 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t1489_il2cpp_TypeInfo));
		TlsException__ctor_m6347(L_11, V_1, L_10, /*hidden argument*/&TlsException__ctor_m6347_MethodInfo);
		il2cpp_codegen_raise_exception(L_11);
	}

IL_00b4:
	{
		NullCheck(___certificates);
		X509Certificate_t1417 * L_12 = X509CertificateCollection_get_Item_m5871(___certificates, 0, /*hidden argument*/&X509CertificateCollection_get_Item_m5871_MethodInfo);
		V_5 = L_12;
		NullCheck(V_5);
		ByteU5BU5D_t112* L_13 = (ByteU5BU5D_t112*)VirtFuncInvoker0< ByteU5BU5D_t112* >::Invoke(&X509Certificate_get_RawData_m5845_MethodInfo, V_5);
		X509Certificate_t1471 * L_14 = (X509Certificate_t1471 *)il2cpp_codegen_object_new (InitializedTypeInfo(&X509Certificate_t1471_il2cpp_TypeInfo));
		X509Certificate__ctor_m6705(L_14, L_13, /*hidden argument*/&X509Certificate__ctor_m6705_MethodInfo);
		V_6 = L_14;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ArrayList_t1383_il2cpp_TypeInfo));
		ArrayList_t1383 * L_15 = (ArrayList_t1383 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArrayList_t1383_il2cpp_TypeInfo));
		ArrayList__ctor_m6487(L_15, /*hidden argument*/&ArrayList__ctor_m6487_MethodInfo);
		V_7 = L_15;
		bool L_16 = TlsServerCertificate_checkCertificateUsage_m6430(__this, V_5, /*hidden argument*/&TlsServerCertificate_checkCertificateUsage_m6430_MethodInfo);
		if (L_16)
		{
			goto IL_00f1;
		}
	}
	{
		int32_t L_17 = ((int32_t)-2146762490);
		Object_t * L_18 = Box(InitializedTypeInfo(&Int32_t73_il2cpp_TypeInfo), &L_17);
		NullCheck(V_7);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m6488_MethodInfo, V_7, L_18);
	}

IL_00f1:
	{
		bool L_19 = TlsServerCertificate_checkServerIdentity_m6432(__this, V_5, /*hidden argument*/&TlsServerCertificate_checkServerIdentity_m6432_MethodInfo);
		if (L_19)
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_20 = ((int32_t)-2146762481);
		Object_t * L_21 = Box(InitializedTypeInfo(&Int32_t73_il2cpp_TypeInfo), &L_20);
		NullCheck(V_7);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m6488_MethodInfo, V_7, L_21);
	}

IL_0110:
	{
		X509CertificateCollection_t1413 * L_22 = (X509CertificateCollection_t1413 *)il2cpp_codegen_object_new (InitializedTypeInfo(&X509CertificateCollection_t1413_il2cpp_TypeInfo));
		X509CertificateCollection__ctor_m5869(L_22, ___certificates, /*hidden argument*/&X509CertificateCollection__ctor_m5869_MethodInfo);
		V_8 = L_22;
		NullCheck(V_8);
		X509CertificateCollection_Remove_m5878(V_8, V_5, /*hidden argument*/&X509CertificateCollection_Remove_m5878_MethodInfo);
		X509Chain_t1421 * L_23 = (X509Chain_t1421 *)il2cpp_codegen_object_new (InitializedTypeInfo(&X509Chain_t1421_il2cpp_TypeInfo));
		X509Chain__ctor_m5881(L_23, V_8, /*hidden argument*/&X509Chain__ctor_m5881_MethodInfo);
		V_9 = L_23;
		V_10 = 0;
	}

IL_012d:
	try
	{ // begin try (depth: 1)
		NullCheck(V_9);
		bool L_24 = X509Chain_Build_m5884(V_9, V_5, /*hidden argument*/&X509Chain_Build_m5884_MethodInfo);
		V_10 = L_24;
		// IL_0138: leave IL_0146
		goto IL_0146;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t82 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (&Exception_t82_il2cpp_TypeInfo, e.ex->object.klass))
			goto IL_013d;
		throw e;
	}

IL_013d:
	{ // begin catch(System.Exception)
		V_10 = 0;
		// IL_0141: leave IL_0146
		goto IL_0146;
	} // end catch (depth: 1)

IL_0146:
	{
		if (V_10)
		{
			goto IL_0243;
		}
	}
	{
		NullCheck(V_9);
		int32_t L_25 = X509Chain_get_Status_m5882(V_9, /*hidden argument*/&X509Chain_get_Status_m5882_MethodInfo);
		V_13 = L_25;
		if ((((int32_t)V_13) == ((int32_t)1)))
		{
			goto IL_01d9;
		}
	}
	{
		if ((((int32_t)V_13) == ((int32_t)2)))
		{
			goto IL_01c2;
		}
	}
	{
		if ((((int32_t)V_13) == ((int32_t)8)))
		{
			goto IL_01ab;
		}
	}
	{
		if ((((int32_t)V_13) == ((int32_t)((int32_t)32))))
		{
			goto IL_020d;
		}
	}
	{
		if ((((int32_t)V_13) == ((int32_t)((int32_t)1024))))
		{
			goto IL_0194;
		}
	}
	{
		if ((((int32_t)V_13) == ((int32_t)((int32_t)65536))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_0227;
	}

IL_0194:
	{
		int32_t L_26 = ((int32_t)-2146869223);
		Object_t * L_27 = Box(InitializedTypeInfo(&Int32_t73_il2cpp_TypeInfo), &L_26);
		NullCheck(V_7);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m6488_MethodInfo, V_7, L_27);
		goto IL_0243;
	}

IL_01ab:
	{
		int32_t L_28 = ((int32_t)-2146869232);
		Object_t * L_29 = Box(InitializedTypeInfo(&Int32_t73_il2cpp_TypeInfo), &L_28);
		NullCheck(V_7);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m6488_MethodInfo, V_7, L_29);
		goto IL_0243;
	}

IL_01c2:
	{
		int32_t L_30 = ((int32_t)-2146762494);
		Object_t * L_31 = Box(InitializedTypeInfo(&Int32_t73_il2cpp_TypeInfo), &L_30);
		NullCheck(V_7);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m6488_MethodInfo, V_7, L_31);
		goto IL_0243;
	}

IL_01d9:
	{
		V_1 = ((int32_t)45);
		int32_t L_32 = ((int32_t)-2146762495);
		Object_t * L_33 = Box(InitializedTypeInfo(&Int32_t73_il2cpp_TypeInfo), &L_32);
		NullCheck(V_7);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m6488_MethodInfo, V_7, L_33);
		goto IL_0243;
	}

IL_01f3:
	{
		V_1 = ((int32_t)48);
		int32_t L_34 = ((int32_t)-2146762486);
		Object_t * L_35 = Box(InitializedTypeInfo(&Int32_t73_il2cpp_TypeInfo), &L_34);
		NullCheck(V_7);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m6488_MethodInfo, V_7, L_35);
		goto IL_0243;
	}

IL_020d:
	{
		V_1 = ((int32_t)48);
		int32_t L_36 = ((int32_t)-2146762487);
		Object_t * L_37 = Box(InitializedTypeInfo(&Int32_t73_il2cpp_TypeInfo), &L_36);
		NullCheck(V_7);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m6488_MethodInfo, V_7, L_37);
		goto IL_0243;
	}

IL_0227:
	{
		V_1 = ((int32_t)46);
		NullCheck(V_9);
		int32_t L_38 = X509Chain_get_Status_m5882(V_9, /*hidden argument*/&X509Chain_get_Status_m5882_MethodInfo);
		int32_t L_39 = L_38;
		Object_t * L_40 = Box(InitializedTypeInfo(&Int32_t73_il2cpp_TypeInfo), &L_39);
		NullCheck(V_7);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(&ArrayList_Add_m6488_MethodInfo, V_7, L_40);
		goto IL_0243;
	}

IL_0243:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Type_t_il2cpp_TypeInfo));
		Type_t * L_41 = Type_GetTypeFromHandle_m642(NULL /*static, unused*/, LoadTypeToken(&Int32_t73_0_0_0), /*hidden argument*/&Type_GetTypeFromHandle_m642_MethodInfo);
		NullCheck(V_7);
		Array_t * L_42 = (Array_t *)VirtFuncInvoker1< Array_t *, Type_t * >::Invoke(&ArrayList_ToArray_m6626_MethodInfo, V_7, L_41);
		V_11 = ((Int32U5BU5D_t1196*)Castclass(L_42, InitializedTypeInfo(&Int32U5BU5D_t1196_il2cpp_TypeInfo)));
		NullCheck(V_0);
		SslClientStream_t1451 * L_43 = ClientContext_get_SslStream_m6054(V_0, /*hidden argument*/&ClientContext_get_SslStream_m6054_MethodInfo);
		NullCheck(L_43);
		bool L_44 = (bool)VirtFuncInvoker2< bool, X509Certificate_t1471 *, Int32U5BU5D_t1196* >::Invoke(&SslClientStream_RaiseServerCertificateValidation_m6248_MethodInfo, L_43, V_6, V_11);
		if (L_44)
		{
			goto IL_027b;
		}
	}
	{
		TlsException_t1489 * L_45 = (TlsException_t1489 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t1489_il2cpp_TypeInfo));
		TlsException__ctor_m6347(L_45, V_1, (String_t*) &_stringLiteral835, /*hidden argument*/&TlsException__ctor_m6347_MethodInfo);
		il2cpp_codegen_raise_exception(L_45);
	}

IL_027b:
	{
		return;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkServerIdentity(Mono.Security.X509.X509Certificate)
 bool TlsServerCertificate_checkServerIdentity_m6432 (TlsServerCertificate_t1498 * __this, X509Certificate_t1417 * ___cert, MethodInfo* method){
	ClientContext_t1452 * V_0 = {0};
	String_t* V_1 = {0};
	X509Extension_t1425 * V_2 = {0};
	SubjectAltNameExtension_t1437 * V_3 = {0};
	String_t* V_4 = {0};
	StringU5BU5D_t3* V_5 = {0};
	int32_t V_6 = 0;
	String_t* V_7 = {0};
	StringU5BU5D_t3* V_8 = {0};
	int32_t V_9 = 0;
	{
		Context_t1445 * L_0 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		V_0 = ((ClientContext_t1452 *)Castclass(L_0, InitializedTypeInfo(&ClientContext_t1452_il2cpp_TypeInfo)));
		NullCheck(V_0);
		TlsClientSettings_t1462 * L_1 = Context_get_ClientSettings_m6095(V_0, /*hidden argument*/&Context_get_ClientSettings_m6095_MethodInfo);
		NullCheck(L_1);
		String_t* L_2 = TlsClientSettings_get_TargetHost_m6335(L_1, /*hidden argument*/&TlsClientSettings_get_TargetHost_m6335_MethodInfo);
		V_1 = L_2;
		NullCheck(___cert);
		X509ExtensionCollection_t1416 * L_3 = X509Certificate_get_Extensions_m5836(___cert, /*hidden argument*/&X509Certificate_get_Extensions_m5836_MethodInfo);
		NullCheck(L_3);
		X509Extension_t1425 * L_4 = X509ExtensionCollection_get_Item_m5922(L_3, (String_t*) &_stringLiteral836, /*hidden argument*/&X509ExtensionCollection_get_Item_m5922_MethodInfo);
		V_2 = L_4;
		if (!V_2)
		{
			goto IL_00a4;
		}
	}
	{
		SubjectAltNameExtension_t1437 * L_5 = (SubjectAltNameExtension_t1437 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SubjectAltNameExtension_t1437_il2cpp_TypeInfo));
		SubjectAltNameExtension__ctor_m5965(L_5, V_2, /*hidden argument*/&SubjectAltNameExtension__ctor_m5965_MethodInfo);
		V_3 = L_5;
		NullCheck(V_3);
		StringU5BU5D_t3* L_6 = SubjectAltNameExtension_get_DNSNames_m5967(V_3, /*hidden argument*/&SubjectAltNameExtension_get_DNSNames_m5967_MethodInfo);
		V_5 = L_6;
		V_6 = 0;
		goto IL_0062;
	}

IL_0046:
	{
		NullCheck(V_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_5, V_6);
		int32_t L_7 = V_6;
		V_4 = (*(String_t**)(String_t**)SZArrayLdElema(V_5, L_7));
		bool L_8 = TlsServerCertificate_Match_m6434(NULL /*static, unused*/, V_1, V_4, /*hidden argument*/&TlsServerCertificate_Match_m6434_MethodInfo);
		if (!L_8)
		{
			goto IL_005c;
		}
	}
	{
		return 1;
	}

IL_005c:
	{
		V_6 = ((int32_t)(V_6+1));
	}

IL_0062:
	{
		NullCheck(V_5);
		if ((((int32_t)V_6) < ((int32_t)(((int32_t)(((Array_t *)V_5)->max_length))))))
		{
			goto IL_0046;
		}
	}
	{
		NullCheck(V_3);
		StringU5BU5D_t3* L_9 = SubjectAltNameExtension_get_IPAddresses_m5968(V_3, /*hidden argument*/&SubjectAltNameExtension_get_IPAddresses_m5968_MethodInfo);
		V_8 = L_9;
		V_9 = 0;
		goto IL_0099;
	}

IL_007d:
	{
		NullCheck(V_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(V_8, V_9);
		int32_t L_10 = V_9;
		V_7 = (*(String_t**)(String_t**)SZArrayLdElema(V_8, L_10));
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		bool L_11 = String_op_Equality_m636(NULL /*static, unused*/, V_7, V_1, /*hidden argument*/&String_op_Equality_m636_MethodInfo);
		if (!L_11)
		{
			goto IL_0093;
		}
	}
	{
		return 1;
	}

IL_0093:
	{
		V_9 = ((int32_t)(V_9+1));
	}

IL_0099:
	{
		NullCheck(V_8);
		if ((((int32_t)V_9) < ((int32_t)(((int32_t)(((Array_t *)V_8)->max_length))))))
		{
			goto IL_007d;
		}
	}

IL_00a4:
	{
		NullCheck(___cert);
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&X509Certificate_get_SubjectName_m5849_MethodInfo, ___cert);
		bool L_13 = TlsServerCertificate_checkDomainName_m6433(__this, L_12, /*hidden argument*/&TlsServerCertificate_checkDomainName_m6433_MethodInfo);
		return L_13;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkDomainName(System.String)
 bool TlsServerCertificate_checkDomainName_m6433 (TlsServerCertificate_t1498 * __this, String_t* ___subjectName, MethodInfo* method){
	ClientContext_t1452 * V_0 = {0};
	String_t* V_1 = {0};
	Regex_t322 * V_2 = {0};
	MatchCollection_t1559 * V_3 = {0};
	{
		Context_t1445 * L_0 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		V_0 = ((ClientContext_t1452 *)Castclass(L_0, InitializedTypeInfo(&ClientContext_t1452_il2cpp_TypeInfo)));
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		V_1 = (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty_2);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Regex_t322_il2cpp_TypeInfo));
		Regex_t322 * L_1 = (Regex_t322 *)il2cpp_codegen_object_new (InitializedTypeInfo(&Regex_t322_il2cpp_TypeInfo));
		Regex__ctor_m6742(L_1, (String_t*) &_stringLiteral837, /*hidden argument*/&Regex__ctor_m6742_MethodInfo);
		V_2 = L_1;
		NullCheck(V_2);
		MatchCollection_t1559 * L_2 = Regex_Matches_m6743(V_2, ___subjectName, /*hidden argument*/&Regex_Matches_m6743_MethodInfo);
		V_3 = L_2;
		NullCheck(V_3);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&MatchCollection_get_Count_m6744_MethodInfo, V_3);
		if ((((uint32_t)L_3) != ((uint32_t)1)))
		{
			goto IL_005f;
		}
	}
	{
		NullCheck(V_3);
		Match_t1560 * L_4 = (Match_t1560 *)VirtFuncInvoker1< Match_t1560 *, int32_t >::Invoke(&MatchCollection_get_Item_m6745_MethodInfo, V_3, 0);
		NullCheck(L_4);
		bool L_5 = Group_get_Success_m6746(L_4, /*hidden argument*/&Group_get_Success_m6746_MethodInfo);
		if (!L_5)
		{
			goto IL_005f;
		}
	}
	{
		NullCheck(V_3);
		Match_t1560 * L_6 = (Match_t1560 *)VirtFuncInvoker1< Match_t1560 *, int32_t >::Invoke(&MatchCollection_get_Item_m6745_MethodInfo, V_3, 0);
		NullCheck(L_6);
		GroupCollection_t1561 * L_7 = (GroupCollection_t1561 *)VirtFuncInvoker0< GroupCollection_t1561 * >::Invoke(&Match_get_Groups_m6747_MethodInfo, L_6);
		NullCheck(L_7);
		Group_t1562 * L_8 = GroupCollection_get_Item_m6748(L_7, 1, /*hidden argument*/&GroupCollection_get_Item_m6748_MethodInfo);
		NullCheck(L_8);
		String_t* L_9 = Capture_get_Value_m6749(L_8, /*hidden argument*/&Capture_get_Value_m6749_MethodInfo);
		NullCheck(L_9);
		String_t* L_10 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&String_ToString_m650_MethodInfo, L_9);
		V_1 = L_10;
	}

IL_005f:
	{
		NullCheck(V_0);
		TlsClientSettings_t1462 * L_11 = Context_get_ClientSettings_m6095(V_0, /*hidden argument*/&Context_get_ClientSettings_m6095_MethodInfo);
		NullCheck(L_11);
		String_t* L_12 = TlsClientSettings_get_TargetHost_m6335(L_11, /*hidden argument*/&TlsClientSettings_get_TargetHost_m6335_MethodInfo);
		bool L_13 = TlsServerCertificate_Match_m6434(NULL /*static, unused*/, L_12, V_1, /*hidden argument*/&TlsServerCertificate_Match_m6434_MethodInfo);
		return L_13;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::Match(System.String,System.String)
 bool TlsServerCertificate_Match_m6434 (Object_t * __this/* static, unused */, String_t* ___hostname, String_t* ___pattern, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	String_t* V_5 = {0};
	int32_t G_B15_0 = 0;
	{
		NullCheck(___pattern);
		int32_t L_0 = String_IndexOf_m1641(___pattern, ((int32_t)42), /*hidden argument*/&String_IndexOf_m1641_MethodInfo);
		V_0 = L_0;
		if ((((uint32_t)V_0) != ((uint32_t)(-1))))
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t1076_il2cpp_TypeInfo));
		CultureInfo_t1076 * L_1 = CultureInfo_get_InvariantCulture_m6497(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m6497_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		int32_t L_2 = String_Compare_m6750(NULL /*static, unused*/, ___hostname, ___pattern, 1, L_1, /*hidden argument*/&String_Compare_m6750_MethodInfo);
		return ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_0021:
	{
		NullCheck(___pattern);
		int32_t L_3 = String_get_Length_m569(___pattern, /*hidden argument*/&String_get_Length_m569_MethodInfo);
		if ((((int32_t)V_0) == ((int32_t)((int32_t)(L_3-1)))))
		{
			goto IL_0041;
		}
	}
	{
		NullCheck(___pattern);
		uint16_t L_4 = String_get_Chars_m568(___pattern, ((int32_t)(V_0+1)), /*hidden argument*/&String_get_Chars_m568_MethodInfo);
		if ((((int32_t)L_4) == ((int32_t)((int32_t)46))))
		{
			goto IL_0041;
		}
	}
	{
		return 0;
	}

IL_0041:
	{
		NullCheck(___pattern);
		int32_t L_5 = String_IndexOf_m6751(___pattern, ((int32_t)42), ((int32_t)(V_0+1)), /*hidden argument*/&String_IndexOf_m6751_MethodInfo);
		V_1 = L_5;
		if ((((int32_t)V_1) == ((int32_t)(-1))))
		{
			goto IL_0056;
		}
	}
	{
		return 0;
	}

IL_0056:
	{
		NullCheck(___pattern);
		String_t* L_6 = String_Substring_m1189(___pattern, ((int32_t)(V_0+1)), /*hidden argument*/&String_Substring_m1189_MethodInfo);
		V_2 = L_6;
		NullCheck(___hostname);
		int32_t L_7 = String_get_Length_m569(___hostname, /*hidden argument*/&String_get_Length_m569_MethodInfo);
		NullCheck(V_2);
		int32_t L_8 = String_get_Length_m569(V_2, /*hidden argument*/&String_get_Length_m569_MethodInfo);
		V_3 = ((int32_t)(L_7-L_8));
		if ((((int32_t)V_3) > ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		return 0;
	}

IL_0077:
	{
		NullCheck(V_2);
		int32_t L_9 = String_get_Length_m569(V_2, /*hidden argument*/&String_get_Length_m569_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t1076_il2cpp_TypeInfo));
		CultureInfo_t1076 * L_10 = CultureInfo_get_InvariantCulture_m6497(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m6497_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		int32_t L_11 = String_Compare_m6752(NULL /*static, unused*/, ___hostname, V_3, V_2, 0, L_9, 1, L_10, /*hidden argument*/&String_Compare_m6752_MethodInfo);
		if (!L_11)
		{
			goto IL_0093;
		}
	}
	{
		return 0;
	}

IL_0093:
	{
		if (V_0)
		{
			goto IL_00c3;
		}
	}
	{
		NullCheck(___hostname);
		int32_t L_12 = String_IndexOf_m1641(___hostname, ((int32_t)46), /*hidden argument*/&String_IndexOf_m1641_MethodInfo);
		V_4 = L_12;
		if ((((int32_t)V_4) == ((int32_t)(-1))))
		{
			goto IL_00c1;
		}
	}
	{
		NullCheck(___hostname);
		int32_t L_13 = String_get_Length_m569(___hostname, /*hidden argument*/&String_get_Length_m569_MethodInfo);
		NullCheck(V_2);
		int32_t L_14 = String_get_Length_m569(V_2, /*hidden argument*/&String_get_Length_m569_MethodInfo);
		G_B15_0 = ((((int32_t)((((int32_t)V_4) < ((int32_t)((int32_t)(L_13-L_14))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00c2;
	}

IL_00c1:
	{
		G_B15_0 = 1;
	}

IL_00c2:
	{
		return G_B15_0;
	}

IL_00c3:
	{
		NullCheck(___pattern);
		String_t* L_15 = String_Substring_m578(___pattern, 0, V_0, /*hidden argument*/&String_Substring_m578_MethodInfo);
		V_5 = L_15;
		NullCheck(V_5);
		int32_t L_16 = String_get_Length_m569(V_5, /*hidden argument*/&String_get_Length_m569_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CultureInfo_t1076_il2cpp_TypeInfo));
		CultureInfo_t1076 * L_17 = CultureInfo_get_InvariantCulture_m6497(NULL /*static, unused*/, /*hidden argument*/&CultureInfo_get_InvariantCulture_m6497_MethodInfo);
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		int32_t L_18 = String_Compare_m6752(NULL /*static, unused*/, ___hostname, 0, V_5, 0, L_16, 1, L_17, /*hidden argument*/&String_Compare_m6752_MethodInfo);
		return ((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
	}
}
// Metadata Definition Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate
extern Il2CppType X509CertificateCollection_t1413_0_0_1;
FieldInfo TlsServerCertificate_t1498____certificates_9_FieldInfo = 
{
	"certificates"/* name */
	, &X509CertificateCollection_t1413_0_0_1/* type */
	, &TlsServerCertificate_t1498_il2cpp_TypeInfo/* parent */
	, offsetof(TlsServerCertificate_t1498, ___certificates_9)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* TlsServerCertificate_t1498_FieldInfos[] =
{
	&TlsServerCertificate_t1498____certificates_9_FieldInfo,
	NULL
};
extern Il2CppType Context_t1445_0_0_0;
extern Il2CppType Context_t1445_0_0_0;
extern Il2CppType ByteU5BU5D_t112_0_0_0;
extern Il2CppType ByteU5BU5D_t112_0_0_0;
static ParameterInfo TlsServerCertificate_t1498_TlsServerCertificate__ctor_m6426_ParameterInfos[] = 
{
	{"context", 0, 134218531, &EmptyCustomAttributesCache, &Context_t1445_0_0_0},
	{"buffer", 1, 134218532, &EmptyCustomAttributesCache, &ByteU5BU5D_t112_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
MethodInfo TlsServerCertificate__ctor_m6426_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TlsServerCertificate__ctor_m6426/* method */
	, &TlsServerCertificate_t1498_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Object_t/* invoker_method */
	, TlsServerCertificate_t1498_TlsServerCertificate__ctor_m6426_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 834/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::Update()
MethodInfo TlsServerCertificate_Update_m6427_MethodInfo = 
{
	"Update"/* name */
	, (methodPointerType)&TlsServerCertificate_Update_m6427/* method */
	, &TlsServerCertificate_t1498_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 26/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 835/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsSsl3()
MethodInfo TlsServerCertificate_ProcessAsSsl3_m6428_MethodInfo = 
{
	"ProcessAsSsl3"/* name */
	, (methodPointerType)&TlsServerCertificate_ProcessAsSsl3_m6428/* method */
	, &TlsServerCertificate_t1498_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 25/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 836/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsTls1()
MethodInfo TlsServerCertificate_ProcessAsTls1_m6429_MethodInfo = 
{
	"ProcessAsTls1"/* name */
	, (methodPointerType)&TlsServerCertificate_ProcessAsTls1_m6429/* method */
	, &TlsServerCertificate_t1498_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 24/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 837/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType X509Certificate_t1417_0_0_0;
extern Il2CppType X509Certificate_t1417_0_0_0;
static ParameterInfo TlsServerCertificate_t1498_TlsServerCertificate_checkCertificateUsage_m6430_ParameterInfos[] = 
{
	{"cert", 0, 134218533, &EmptyCustomAttributesCache, &X509Certificate_t1417_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkCertificateUsage(Mono.Security.X509.X509Certificate)
MethodInfo TlsServerCertificate_checkCertificateUsage_m6430_MethodInfo = 
{
	"checkCertificateUsage"/* name */
	, (methodPointerType)&TlsServerCertificate_checkCertificateUsage_m6430/* method */
	, &TlsServerCertificate_t1498_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, TlsServerCertificate_t1498_TlsServerCertificate_checkCertificateUsage_m6430_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 838/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType X509CertificateCollection_t1413_0_0_0;
extern Il2CppType X509CertificateCollection_t1413_0_0_0;
static ParameterInfo TlsServerCertificate_t1498_TlsServerCertificate_validateCertificates_m6431_ParameterInfos[] = 
{
	{"certificates", 0, 134218534, &EmptyCustomAttributesCache, &X509CertificateCollection_t1413_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::validateCertificates(Mono.Security.X509.X509CertificateCollection)
MethodInfo TlsServerCertificate_validateCertificates_m6431_MethodInfo = 
{
	"validateCertificates"/* name */
	, (methodPointerType)&TlsServerCertificate_validateCertificates_m6431/* method */
	, &TlsServerCertificate_t1498_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t/* invoker_method */
	, TlsServerCertificate_t1498_TlsServerCertificate_validateCertificates_m6431_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 839/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType X509Certificate_t1417_0_0_0;
static ParameterInfo TlsServerCertificate_t1498_TlsServerCertificate_checkServerIdentity_m6432_ParameterInfos[] = 
{
	{"cert", 0, 134218535, &EmptyCustomAttributesCache, &X509Certificate_t1417_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkServerIdentity(Mono.Security.X509.X509Certificate)
MethodInfo TlsServerCertificate_checkServerIdentity_m6432_MethodInfo = 
{
	"checkServerIdentity"/* name */
	, (methodPointerType)&TlsServerCertificate_checkServerIdentity_m6432/* method */
	, &TlsServerCertificate_t1498_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, TlsServerCertificate_t1498_TlsServerCertificate_checkServerIdentity_m6432_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 840/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType String_t_0_0_0;
static ParameterInfo TlsServerCertificate_t1498_TlsServerCertificate_checkDomainName_m6433_ParameterInfos[] = 
{
	{"subjectName", 0, 134218536, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkDomainName(System.String)
MethodInfo TlsServerCertificate_checkDomainName_m6433_MethodInfo = 
{
	"checkDomainName"/* name */
	, (methodPointerType)&TlsServerCertificate_checkDomainName_m6433/* method */
	, &TlsServerCertificate_t1498_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, TlsServerCertificate_t1498_TlsServerCertificate_checkDomainName_m6433_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 841/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType String_t_0_0_0;
extern Il2CppType String_t_0_0_0;
static ParameterInfo TlsServerCertificate_t1498_TlsServerCertificate_Match_m6434_ParameterInfos[] = 
{
	{"hostname", 0, 134218537, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"pattern", 1, 134218538, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::Match(System.String,System.String)
MethodInfo TlsServerCertificate_Match_m6434_MethodInfo = 
{
	"Match"/* name */
	, (methodPointerType)&TlsServerCertificate_Match_m6434/* method */
	, &TlsServerCertificate_t1498_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t_Object_t/* invoker_method */
	, TlsServerCertificate_t1498_TlsServerCertificate_Match_m6434_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 842/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* TlsServerCertificate_t1498_MethodInfos[] =
{
	&TlsServerCertificate__ctor_m6426_MethodInfo,
	&TlsServerCertificate_Update_m6427_MethodInfo,
	&TlsServerCertificate_ProcessAsSsl3_m6428_MethodInfo,
	&TlsServerCertificate_ProcessAsTls1_m6429_MethodInfo,
	&TlsServerCertificate_checkCertificateUsage_m6430_MethodInfo,
	&TlsServerCertificate_validateCertificates_m6431_MethodInfo,
	&TlsServerCertificate_checkServerIdentity_m6432_MethodInfo,
	&TlsServerCertificate_checkDomainName_m6433_MethodInfo,
	&TlsServerCertificate_Match_m6434_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m517_MethodInfo;
extern MethodInfo Object_Finalize_m473_MethodInfo;
extern MethodInfo Object_GetHashCode_m518_MethodInfo;
extern MethodInfo Object_ToString_m498_MethodInfo;
extern MethodInfo Stream_Dispose_m6683_MethodInfo;
extern MethodInfo TlsStream_get_CanRead_m6367_MethodInfo;
extern MethodInfo TlsStream_get_CanSeek_m6368_MethodInfo;
extern MethodInfo TlsStream_get_CanWrite_m6366_MethodInfo;
extern MethodInfo TlsStream_get_Length_m6371_MethodInfo;
extern MethodInfo TlsStream_get_Position_m6369_MethodInfo;
extern MethodInfo TlsStream_set_Position_m6370_MethodInfo;
extern MethodInfo Stream_Dispose_m6725_MethodInfo;
extern MethodInfo Stream_Close_m6620_MethodInfo;
extern MethodInfo TlsStream_Flush_m6384_MethodInfo;
extern MethodInfo TlsStream_Read_m6387_MethodInfo;
extern MethodInfo Stream_ReadByte_m1448_MethodInfo;
extern MethodInfo TlsStream_Seek_m6386_MethodInfo;
extern MethodInfo TlsStream_SetLength_m6385_MethodInfo;
extern MethodInfo TlsStream_Write_m6388_MethodInfo;
extern MethodInfo Stream_WriteByte_m1441_MethodInfo;
extern MethodInfo Stream_BeginRead_m6689_MethodInfo;
extern MethodInfo Stream_BeginWrite_m6698_MethodInfo;
extern MethodInfo Stream_EndRead_m6691_MethodInfo;
extern MethodInfo Stream_EndWrite_m6699_MethodInfo;
extern MethodInfo HandshakeMessage_EncodeMessage_m6397_MethodInfo;
static MethodInfo* TlsServerCertificate_t1498_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Object_ToString_m498_MethodInfo,
	&Stream_Dispose_m6683_MethodInfo,
	&TlsStream_get_CanRead_m6367_MethodInfo,
	&TlsStream_get_CanSeek_m6368_MethodInfo,
	&TlsStream_get_CanWrite_m6366_MethodInfo,
	&TlsStream_get_Length_m6371_MethodInfo,
	&TlsStream_get_Position_m6369_MethodInfo,
	&TlsStream_set_Position_m6370_MethodInfo,
	&Stream_Dispose_m6725_MethodInfo,
	&Stream_Close_m6620_MethodInfo,
	&TlsStream_Flush_m6384_MethodInfo,
	&TlsStream_Read_m6387_MethodInfo,
	&Stream_ReadByte_m1448_MethodInfo,
	&TlsStream_Seek_m6386_MethodInfo,
	&TlsStream_SetLength_m6385_MethodInfo,
	&TlsStream_Write_m6388_MethodInfo,
	&Stream_WriteByte_m1441_MethodInfo,
	&Stream_BeginRead_m6689_MethodInfo,
	&Stream_BeginWrite_m6698_MethodInfo,
	&Stream_EndRead_m6691_MethodInfo,
	&Stream_EndWrite_m6699_MethodInfo,
	&TlsServerCertificate_ProcessAsTls1_m6429_MethodInfo,
	&TlsServerCertificate_ProcessAsSsl3_m6428_MethodInfo,
	&TlsServerCertificate_Update_m6427_MethodInfo,
	&HandshakeMessage_EncodeMessage_m6397_MethodInfo,
};
extern TypeInfo IDisposable_t81_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair TlsServerCertificate_t1498_InterfacesOffsets[] = 
{
	{ &IDisposable_t81_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType TlsServerCertificate_t1498_0_0_0;
extern Il2CppType TlsServerCertificate_t1498_1_0_0;
struct TlsServerCertificate_t1498;
TypeInfo TlsServerCertificate_t1498_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "TlsServerCertificate"/* name */
	, "Mono.Security.Protocol.Tls.Handshake.Client"/* namespaze */
	, TlsServerCertificate_t1498_MethodInfos/* methods */
	, NULL/* properties */
	, TlsServerCertificate_t1498_FieldInfos/* fields */
	, NULL/* events */
	, &HandshakeMessage_t1456_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &TlsServerCertificate_t1498_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, TlsServerCertificate_t1498_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &TlsServerCertificate_t1498_il2cpp_TypeInfo/* cast_class */
	, &TlsServerCertificate_t1498_0_0_0/* byval_arg */
	, &TlsServerCertificate_t1498_1_0_0/* this_arg */
	, TlsServerCertificate_t1498_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TlsServerCertificate_t1498)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 9/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 28/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TlsServerCertificateRequest_t1499_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_5MethodDeclarations.h"

#include "Mono.Security_ArrayTypes.h"
// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_ClientCer.h"
// Mono.Security.ASN1
#include "Mono_Security_Mono_Security_ASN1.h"
// System.Int16
#include "mscorlib_System_Int16.h"
// System.Text.Encoding
#include "mscorlib_System_Text_Encoding.h"
extern TypeInfo ClientCertificateTypeU5BU5D_t1490_il2cpp_TypeInfo;
extern TypeInfo ClientCertificateType_t1491_il2cpp_TypeInfo;
extern TypeInfo ASN1_t1384_il2cpp_TypeInfo;
extern TypeInfo StringU5BU5D_t3_il2cpp_TypeInfo;
extern TypeInfo Encoding_t335_il2cpp_TypeInfo;
// Mono.Security.ASN1
#include "Mono_Security_Mono_Security_ASN1MethodDeclarations.h"
// System.Text.Encoding
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"
extern MethodInfo TlsServerSettings_set_CertificateTypes_m6360_MethodInfo;
extern MethodInfo TlsServerSettings_set_DistinguisedNames_m6361_MethodInfo;
extern MethodInfo TlsServerSettings_set_CertificateRequest_m6359_MethodInfo;
extern MethodInfo TlsServerCertificateRequest_ProcessAsTls1_m6438_MethodInfo;
extern MethodInfo TlsStream_ReadByte_m6373_MethodInfo;
extern MethodInfo TlsStream_ReadInt16_m6374_MethodInfo;
extern MethodInfo ASN1__ctor_m5687_MethodInfo;
extern MethodInfo ASN1_get_Count_m5688_MethodInfo;
extern MethodInfo ASN1_get_Item_m5699_MethodInfo;
extern MethodInfo ASN1_get_Value_m5691_MethodInfo;
extern MethodInfo Encoding_get_UTF8_m6570_MethodInfo;
extern MethodInfo Encoding_GetString_m1452_MethodInfo;


// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern MethodInfo TlsServerCertificateRequest__ctor_m6435_MethodInfo;
 void TlsServerCertificateRequest__ctor_m6435 (TlsServerCertificateRequest_t1499 * __this, Context_t1445 * ___context, ByteU5BU5D_t112* ___buffer, MethodInfo* method){
	{
		HandshakeMessage__ctor_m6391(__this, ___context, ((int32_t)13), ___buffer, /*hidden argument*/&HandshakeMessage__ctor_m6391_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::Update()
extern MethodInfo TlsServerCertificateRequest_Update_m6436_MethodInfo;
 void TlsServerCertificateRequest_Update_m6436 (TlsServerCertificateRequest_t1499 * __this, MethodInfo* method){
	{
		HandshakeMessage_Update_m6396(__this, /*hidden argument*/&HandshakeMessage_Update_m6396_MethodInfo);
		Context_t1445 * L_0 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		NullCheck(L_0);
		TlsServerSettings_t1461 * L_1 = Context_get_ServerSettings_m6094(L_0, /*hidden argument*/&Context_get_ServerSettings_m6094_MethodInfo);
		ClientCertificateTypeU5BU5D_t1490* L_2 = (__this->___certificateTypes_9);
		NullCheck(L_1);
		TlsServerSettings_set_CertificateTypes_m6360(L_1, L_2, /*hidden argument*/&TlsServerSettings_set_CertificateTypes_m6360_MethodInfo);
		Context_t1445 * L_3 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		NullCheck(L_3);
		TlsServerSettings_t1461 * L_4 = Context_get_ServerSettings_m6094(L_3, /*hidden argument*/&Context_get_ServerSettings_m6094_MethodInfo);
		StringU5BU5D_t3* L_5 = (__this->___distinguisedNames_10);
		NullCheck(L_4);
		TlsServerSettings_set_DistinguisedNames_m6361(L_4, L_5, /*hidden argument*/&TlsServerSettings_set_DistinguisedNames_m6361_MethodInfo);
		Context_t1445 * L_6 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		NullCheck(L_6);
		TlsServerSettings_t1461 * L_7 = Context_get_ServerSettings_m6094(L_6, /*hidden argument*/&Context_get_ServerSettings_m6094_MethodInfo);
		NullCheck(L_7);
		TlsServerSettings_set_CertificateRequest_m6359(L_7, 1, /*hidden argument*/&TlsServerSettings_set_CertificateRequest_m6359_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::ProcessAsSsl3()
extern MethodInfo TlsServerCertificateRequest_ProcessAsSsl3_m6437_MethodInfo;
 void TlsServerCertificateRequest_ProcessAsSsl3_m6437 (TlsServerCertificateRequest_t1499 * __this, MethodInfo* method){
	{
		VirtActionInvoker0::Invoke(&TlsServerCertificateRequest_ProcessAsTls1_m6438_MethodInfo, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::ProcessAsTls1()
 void TlsServerCertificateRequest_ProcessAsTls1_m6438 (TlsServerCertificateRequest_t1499 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ASN1_t1384 * V_2 = {0};
	int32_t V_3 = 0;
	ASN1_t1384 * V_4 = {0};
	{
		uint8_t L_0 = TlsStream_ReadByte_m6373(__this, /*hidden argument*/&TlsStream_ReadByte_m6373_MethodInfo);
		V_0 = L_0;
		__this->___certificateTypes_9 = ((ClientCertificateTypeU5BU5D_t1490*)SZArrayNew(InitializedTypeInfo(&ClientCertificateTypeU5BU5D_t1490_il2cpp_TypeInfo), V_0));
		V_1 = 0;
		goto IL_002c;
	}

IL_001a:
	{
		ClientCertificateTypeU5BU5D_t1490* L_1 = (__this->___certificateTypes_9);
		uint8_t L_2 = TlsStream_ReadByte_m6373(__this, /*hidden argument*/&TlsStream_ReadByte_m6373_MethodInfo);
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, V_1);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_1, V_1)) = (int32_t)L_2;
		V_1 = ((int32_t)(V_1+1));
	}

IL_002c:
	{
		if ((((int32_t)V_1) < ((int32_t)V_0)))
		{
			goto IL_001a;
		}
	}
	{
		int16_t L_3 = TlsStream_ReadInt16_m6374(__this, /*hidden argument*/&TlsStream_ReadInt16_m6374_MethodInfo);
		if (!L_3)
		{
			goto IL_00aa;
		}
	}
	{
		int16_t L_4 = TlsStream_ReadInt16_m6374(__this, /*hidden argument*/&TlsStream_ReadInt16_m6374_MethodInfo);
		ByteU5BU5D_t112* L_5 = TlsStream_ReadBytes_m6376(__this, L_4, /*hidden argument*/&TlsStream_ReadBytes_m6376_MethodInfo);
		ASN1_t1384 * L_6 = (ASN1_t1384 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ASN1_t1384_il2cpp_TypeInfo));
		ASN1__ctor_m5687(L_6, L_5, /*hidden argument*/&ASN1__ctor_m5687_MethodInfo);
		V_2 = L_6;
		NullCheck(V_2);
		int32_t L_7 = ASN1_get_Count_m5688(V_2, /*hidden argument*/&ASN1_get_Count_m5688_MethodInfo);
		__this->___distinguisedNames_10 = ((StringU5BU5D_t3*)SZArrayNew(InitializedTypeInfo(&StringU5BU5D_t3_il2cpp_TypeInfo), L_7));
		V_3 = 0;
		goto IL_009e;
	}

IL_0068:
	{
		NullCheck(V_2);
		ASN1_t1384 * L_8 = ASN1_get_Item_m5699(V_2, V_3, /*hidden argument*/&ASN1_get_Item_m5699_MethodInfo);
		NullCheck(L_8);
		ByteU5BU5D_t112* L_9 = ASN1_get_Value_m5691(L_8, /*hidden argument*/&ASN1_get_Value_m5691_MethodInfo);
		ASN1_t1384 * L_10 = (ASN1_t1384 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ASN1_t1384_il2cpp_TypeInfo));
		ASN1__ctor_m5687(L_10, L_9, /*hidden argument*/&ASN1__ctor_m5687_MethodInfo);
		V_4 = L_10;
		StringU5BU5D_t3* L_11 = (__this->___distinguisedNames_10);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Encoding_t335_il2cpp_TypeInfo));
		Encoding_t335 * L_12 = Encoding_get_UTF8_m6570(NULL /*static, unused*/, /*hidden argument*/&Encoding_get_UTF8_m6570_MethodInfo);
		NullCheck(V_4);
		ASN1_t1384 * L_13 = ASN1_get_Item_m5699(V_4, 1, /*hidden argument*/&ASN1_get_Item_m5699_MethodInfo);
		NullCheck(L_13);
		ByteU5BU5D_t112* L_14 = ASN1_get_Value_m5691(L_13, /*hidden argument*/&ASN1_get_Value_m5691_MethodInfo);
		NullCheck(L_12);
		String_t* L_15 = (String_t*)VirtFuncInvoker1< String_t*, ByteU5BU5D_t112* >::Invoke(&Encoding_GetString_m1452_MethodInfo, L_12, L_14);
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, V_3);
		ArrayElementTypeCheck (L_11, L_15);
		*((String_t**)(String_t**)SZArrayLdElema(L_11, V_3)) = (String_t*)L_15;
		V_3 = ((int32_t)(V_3+1));
	}

IL_009e:
	{
		NullCheck(V_2);
		int32_t L_16 = ASN1_get_Count_m5688(V_2, /*hidden argument*/&ASN1_get_Count_m5688_MethodInfo);
		if ((((int32_t)V_3) < ((int32_t)L_16)))
		{
			goto IL_0068;
		}
	}

IL_00aa:
	{
		return;
	}
}
// Metadata Definition Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest
extern Il2CppType ClientCertificateTypeU5BU5D_t1490_0_0_1;
FieldInfo TlsServerCertificateRequest_t1499____certificateTypes_9_FieldInfo = 
{
	"certificateTypes"/* name */
	, &ClientCertificateTypeU5BU5D_t1490_0_0_1/* type */
	, &TlsServerCertificateRequest_t1499_il2cpp_TypeInfo/* parent */
	, offsetof(TlsServerCertificateRequest_t1499, ___certificateTypes_9)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType StringU5BU5D_t3_0_0_1;
FieldInfo TlsServerCertificateRequest_t1499____distinguisedNames_10_FieldInfo = 
{
	"distinguisedNames"/* name */
	, &StringU5BU5D_t3_0_0_1/* type */
	, &TlsServerCertificateRequest_t1499_il2cpp_TypeInfo/* parent */
	, offsetof(TlsServerCertificateRequest_t1499, ___distinguisedNames_10)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* TlsServerCertificateRequest_t1499_FieldInfos[] =
{
	&TlsServerCertificateRequest_t1499____certificateTypes_9_FieldInfo,
	&TlsServerCertificateRequest_t1499____distinguisedNames_10_FieldInfo,
	NULL
};
extern Il2CppType Context_t1445_0_0_0;
extern Il2CppType ByteU5BU5D_t112_0_0_0;
static ParameterInfo TlsServerCertificateRequest_t1499_TlsServerCertificateRequest__ctor_m6435_ParameterInfos[] = 
{
	{"context", 0, 134218539, &EmptyCustomAttributesCache, &Context_t1445_0_0_0},
	{"buffer", 1, 134218540, &EmptyCustomAttributesCache, &ByteU5BU5D_t112_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
MethodInfo TlsServerCertificateRequest__ctor_m6435_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TlsServerCertificateRequest__ctor_m6435/* method */
	, &TlsServerCertificateRequest_t1499_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Object_t/* invoker_method */
	, TlsServerCertificateRequest_t1499_TlsServerCertificateRequest__ctor_m6435_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 843/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::Update()
MethodInfo TlsServerCertificateRequest_Update_m6436_MethodInfo = 
{
	"Update"/* name */
	, (methodPointerType)&TlsServerCertificateRequest_Update_m6436/* method */
	, &TlsServerCertificateRequest_t1499_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 26/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 844/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::ProcessAsSsl3()
MethodInfo TlsServerCertificateRequest_ProcessAsSsl3_m6437_MethodInfo = 
{
	"ProcessAsSsl3"/* name */
	, (methodPointerType)&TlsServerCertificateRequest_ProcessAsSsl3_m6437/* method */
	, &TlsServerCertificateRequest_t1499_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 25/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 845/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::ProcessAsTls1()
MethodInfo TlsServerCertificateRequest_ProcessAsTls1_m6438_MethodInfo = 
{
	"ProcessAsTls1"/* name */
	, (methodPointerType)&TlsServerCertificateRequest_ProcessAsTls1_m6438/* method */
	, &TlsServerCertificateRequest_t1499_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 24/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 846/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* TlsServerCertificateRequest_t1499_MethodInfos[] =
{
	&TlsServerCertificateRequest__ctor_m6435_MethodInfo,
	&TlsServerCertificateRequest_Update_m6436_MethodInfo,
	&TlsServerCertificateRequest_ProcessAsSsl3_m6437_MethodInfo,
	&TlsServerCertificateRequest_ProcessAsTls1_m6438_MethodInfo,
	NULL
};
static MethodInfo* TlsServerCertificateRequest_t1499_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Object_ToString_m498_MethodInfo,
	&Stream_Dispose_m6683_MethodInfo,
	&TlsStream_get_CanRead_m6367_MethodInfo,
	&TlsStream_get_CanSeek_m6368_MethodInfo,
	&TlsStream_get_CanWrite_m6366_MethodInfo,
	&TlsStream_get_Length_m6371_MethodInfo,
	&TlsStream_get_Position_m6369_MethodInfo,
	&TlsStream_set_Position_m6370_MethodInfo,
	&Stream_Dispose_m6725_MethodInfo,
	&Stream_Close_m6620_MethodInfo,
	&TlsStream_Flush_m6384_MethodInfo,
	&TlsStream_Read_m6387_MethodInfo,
	&Stream_ReadByte_m1448_MethodInfo,
	&TlsStream_Seek_m6386_MethodInfo,
	&TlsStream_SetLength_m6385_MethodInfo,
	&TlsStream_Write_m6388_MethodInfo,
	&Stream_WriteByte_m1441_MethodInfo,
	&Stream_BeginRead_m6689_MethodInfo,
	&Stream_BeginWrite_m6698_MethodInfo,
	&Stream_EndRead_m6691_MethodInfo,
	&Stream_EndWrite_m6699_MethodInfo,
	&TlsServerCertificateRequest_ProcessAsTls1_m6438_MethodInfo,
	&TlsServerCertificateRequest_ProcessAsSsl3_m6437_MethodInfo,
	&TlsServerCertificateRequest_Update_m6436_MethodInfo,
	&HandshakeMessage_EncodeMessage_m6397_MethodInfo,
};
static Il2CppInterfaceOffsetPair TlsServerCertificateRequest_t1499_InterfacesOffsets[] = 
{
	{ &IDisposable_t81_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType TlsServerCertificateRequest_t1499_0_0_0;
extern Il2CppType TlsServerCertificateRequest_t1499_1_0_0;
struct TlsServerCertificateRequest_t1499;
TypeInfo TlsServerCertificateRequest_t1499_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "TlsServerCertificateRequest"/* name */
	, "Mono.Security.Protocol.Tls.Handshake.Client"/* namespaze */
	, TlsServerCertificateRequest_t1499_MethodInfos/* methods */
	, NULL/* properties */
	, TlsServerCertificateRequest_t1499_FieldInfos/* fields */
	, NULL/* events */
	, &HandshakeMessage_t1456_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &TlsServerCertificateRequest_t1499_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, TlsServerCertificateRequest_t1499_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &TlsServerCertificateRequest_t1499_il2cpp_TypeInfo/* cast_class */
	, &TlsServerCertificateRequest_t1499_0_0_0/* byval_arg */
	, &TlsServerCertificateRequest_t1499_1_0_0/* this_arg */
	, TlsServerCertificateRequest_t1499_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TlsServerCertificateRequest_t1499)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 28/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TlsServerFinished_t1500_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_6MethodDeclarations.h"

// <PrivateImplementationDetails>
#include "Mono_Security_U3CPrivateImplementationDetailsU3E.h"
// <PrivateImplementationDetails>/$ArrayType$4
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_7.h"
// System.RuntimeFieldHandle
#include "mscorlib_System_RuntimeFieldHandle.h"
// Mono.Security.Protocol.Tls.HandshakeState
#include "Mono_Security_Mono_Security_Protocol_Tls_HandshakeState.h"
// System.Security.Cryptography.HashAlgorithm
#include "mscorlib_System_Security_Cryptography_HashAlgorithm.h"
// Mono.Security.Protocol.Tls.SslHandshakeHash
#include "Mono_Security_Mono_Security_Protocol_Tls_SslHandshakeHash.h"
// Mono.Security.Protocol.Tls.TlsStream
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsStream.h"
// Mono.Security.Cryptography.MD5SHA1
#include "Mono_Security_Mono_Security_Cryptography_MD5SHA1.h"
extern TypeInfo U3CPrivateImplementationDetailsU3E_t1513_il2cpp_TypeInfo;
extern TypeInfo SslHandshakeHash_t1487_il2cpp_TypeInfo;
extern TypeInfo HashAlgorithm_t1396_il2cpp_TypeInfo;
extern TypeInfo CipherSuite_t1446_il2cpp_TypeInfo;
extern TypeInfo TlsStream_t1457_il2cpp_TypeInfo;
extern TypeInfo MD5SHA1_t1440_il2cpp_TypeInfo;
// <PrivateImplementationDetails>
#include "Mono_Security_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
// System.Runtime.CompilerServices.RuntimeHelpers
#include "mscorlib_System_Runtime_CompilerServices_RuntimeHelpersMethodDeclarations.h"
// Mono.Security.Protocol.Tls.SslHandshakeHash
#include "Mono_Security_Mono_Security_Protocol_Tls_SslHandshakeHashMethodDeclarations.h"
// System.Security.Cryptography.HashAlgorithm
#include "mscorlib_System_Security_Cryptography_HashAlgorithmMethodDeclarations.h"
// Mono.Security.Cryptography.MD5SHA1
#include "Mono_Security_Mono_Security_Cryptography_MD5SHA1MethodDeclarations.h"
extern MethodInfo RuntimeHelpers_InitializeArray_m6480_MethodInfo;
extern MethodInfo Context_set_HandshakeState_m6099_MethodInfo;
extern MethodInfo Context_get_MasterSecret_m6119_MethodInfo;
extern MethodInfo SslHandshakeHash__ctor_m6259_MethodInfo;
extern MethodInfo Context_get_HandshakeMessages_m6106_MethodInfo;
extern MethodInfo TlsStream_ToArray_m6383_MethodInfo;
extern MethodInfo HashAlgorithm_TransformBlock_m6525_MethodInfo;
extern MethodInfo HashAlgorithm_TransformFinalBlock_m6526_MethodInfo;
extern MethodInfo HashAlgorithm_get_Hash_m6527_MethodInfo;
extern MethodInfo HandshakeMessage_Compare_m6398_MethodInfo;
extern MethodInfo MD5SHA1__ctor_m5977_MethodInfo;
extern MethodInfo HashAlgorithm_ComputeHash_m6555_MethodInfo;
extern MethodInfo Context_get_Current_m6137_MethodInfo;
extern MethodInfo CipherSuite_PRF_m6019_MethodInfo;
extern MethodInfo TlsException__ctor_m6342_MethodInfo;
extern FieldInfo U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D22_14_FieldInfo;


// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern MethodInfo TlsServerFinished__ctor_m6439_MethodInfo;
 void TlsServerFinished__ctor_m6439 (TlsServerFinished_t1500 * __this, Context_t1445 * ___context, ByteU5BU5D_t112* ___buffer, MethodInfo* method){
	{
		HandshakeMessage__ctor_m6391(__this, ___context, ((int32_t)20), ___buffer, /*hidden argument*/&HandshakeMessage__ctor_m6391_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::.cctor()
extern MethodInfo TlsServerFinished__cctor_m6440_MethodInfo;
 void TlsServerFinished__cctor_m6440 (Object_t * __this/* static, unused */, MethodInfo* method){
	{
		ByteU5BU5D_t112* L_0 = ((ByteU5BU5D_t112*)SZArrayNew(InitializedTypeInfo(&ByteU5BU5D_t112_il2cpp_TypeInfo), 4));
		RuntimeHelpers_InitializeArray_m6480(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, LoadFieldToken(&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D22_14_FieldInfo), /*hidden argument*/&RuntimeHelpers_InitializeArray_m6480_MethodInfo);
		((TlsServerFinished_t1500_StaticFields*)InitializedTypeInfo(&TlsServerFinished_t1500_il2cpp_TypeInfo)->static_fields)->___Ssl3Marker_9 = L_0;
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::Update()
extern MethodInfo TlsServerFinished_Update_m6441_MethodInfo;
 void TlsServerFinished_Update_m6441 (TlsServerFinished_t1500 * __this, MethodInfo* method){
	{
		HandshakeMessage_Update_m6396(__this, /*hidden argument*/&HandshakeMessage_Update_m6396_MethodInfo);
		Context_t1445 * L_0 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		NullCheck(L_0);
		Context_set_HandshakeState_m6099(L_0, 2, /*hidden argument*/&Context_set_HandshakeState_m6099_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::ProcessAsSsl3()
extern MethodInfo TlsServerFinished_ProcessAsSsl3_m6442_MethodInfo;
 void TlsServerFinished_ProcessAsSsl3_m6442 (TlsServerFinished_t1500 * __this, MethodInfo* method){
	HashAlgorithm_t1396 * V_0 = {0};
	ByteU5BU5D_t112* V_1 = {0};
	ByteU5BU5D_t112* V_2 = {0};
	ByteU5BU5D_t112* V_3 = {0};
	{
		Context_t1445 * L_0 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		NullCheck(L_0);
		ByteU5BU5D_t112* L_1 = Context_get_MasterSecret_m6119(L_0, /*hidden argument*/&Context_get_MasterSecret_m6119_MethodInfo);
		SslHandshakeHash_t1487 * L_2 = (SslHandshakeHash_t1487 *)il2cpp_codegen_object_new (InitializedTypeInfo(&SslHandshakeHash_t1487_il2cpp_TypeInfo));
		SslHandshakeHash__ctor_m6259(L_2, L_1, /*hidden argument*/&SslHandshakeHash__ctor_m6259_MethodInfo);
		V_0 = L_2;
		Context_t1445 * L_3 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		NullCheck(L_3);
		TlsStream_t1457 * L_4 = Context_get_HandshakeMessages_m6106(L_3, /*hidden argument*/&Context_get_HandshakeMessages_m6106_MethodInfo);
		NullCheck(L_4);
		ByteU5BU5D_t112* L_5 = TlsStream_ToArray_m6383(L_4, /*hidden argument*/&TlsStream_ToArray_m6383_MethodInfo);
		V_1 = L_5;
		NullCheck(V_1);
		NullCheck(V_0);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t112*, int32_t, int32_t, ByteU5BU5D_t112*, int32_t >::Invoke(&HashAlgorithm_TransformBlock_m6525_MethodInfo, V_0, V_1, 0, (((int32_t)(((Array_t *)V_1)->max_length))), V_1, 0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&TlsServerFinished_t1500_il2cpp_TypeInfo));
		NullCheck((((TlsServerFinished_t1500_StaticFields*)InitializedTypeInfo(&TlsServerFinished_t1500_il2cpp_TypeInfo)->static_fields)->___Ssl3Marker_9));
		NullCheck(V_0);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t112*, int32_t, int32_t, ByteU5BU5D_t112*, int32_t >::Invoke(&HashAlgorithm_TransformBlock_m6525_MethodInfo, V_0, (((TlsServerFinished_t1500_StaticFields*)InitializedTypeInfo(&TlsServerFinished_t1500_il2cpp_TypeInfo)->static_fields)->___Ssl3Marker_9), 0, (((int32_t)(((Array_t *)(((TlsServerFinished_t1500_StaticFields*)InitializedTypeInfo(&TlsServerFinished_t1500_il2cpp_TypeInfo)->static_fields)->___Ssl3Marker_9))->max_length))), (((TlsServerFinished_t1500_StaticFields*)InitializedTypeInfo(&TlsServerFinished_t1500_il2cpp_TypeInfo)->static_fields)->___Ssl3Marker_9), 0);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&CipherSuite_t1446_il2cpp_TypeInfo));
		NullCheck(V_0);
		VirtFuncInvoker3< ByteU5BU5D_t112*, ByteU5BU5D_t112*, int32_t, int32_t >::Invoke(&HashAlgorithm_TransformFinalBlock_m6526_MethodInfo, V_0, (((CipherSuite_t1446_StaticFields*)InitializedTypeInfo(&CipherSuite_t1446_il2cpp_TypeInfo)->static_fields)->___EmptyArray_0), 0, 0);
		int64_t L_6 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&TlsStream_get_Length_m6371_MethodInfo, __this);
		ByteU5BU5D_t112* L_7 = TlsStream_ReadBytes_m6376(__this, (((int32_t)L_6)), /*hidden argument*/&TlsStream_ReadBytes_m6376_MethodInfo);
		V_2 = L_7;
		NullCheck(V_0);
		ByteU5BU5D_t112* L_8 = (ByteU5BU5D_t112*)VirtFuncInvoker0< ByteU5BU5D_t112* >::Invoke(&HashAlgorithm_get_Hash_m6527_MethodInfo, V_0);
		V_3 = L_8;
		bool L_9 = HandshakeMessage_Compare_m6398(NULL /*static, unused*/, V_3, V_2, /*hidden argument*/&HandshakeMessage_Compare_m6398_MethodInfo);
		if (L_9)
		{
			goto IL_0086;
		}
	}
	{
		TlsException_t1489 * L_10 = (TlsException_t1489 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t1489_il2cpp_TypeInfo));
		TlsException__ctor_m6347(L_10, ((int32_t)71), (String_t*) &_stringLiteral838, /*hidden argument*/&TlsException__ctor_m6347_MethodInfo);
		il2cpp_codegen_raise_exception(L_10);
	}

IL_0086:
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::ProcessAsTls1()
extern MethodInfo TlsServerFinished_ProcessAsTls1_m6443_MethodInfo;
 void TlsServerFinished_ProcessAsTls1_m6443 (TlsServerFinished_t1500 * __this, MethodInfo* method){
	ByteU5BU5D_t112* V_0 = {0};
	HashAlgorithm_t1396 * V_1 = {0};
	ByteU5BU5D_t112* V_2 = {0};
	ByteU5BU5D_t112* V_3 = {0};
	ByteU5BU5D_t112* V_4 = {0};
	{
		int64_t L_0 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(&TlsStream_get_Length_m6371_MethodInfo, __this);
		ByteU5BU5D_t112* L_1 = TlsStream_ReadBytes_m6376(__this, (((int32_t)L_0)), /*hidden argument*/&TlsStream_ReadBytes_m6376_MethodInfo);
		V_0 = L_1;
		MD5SHA1_t1440 * L_2 = (MD5SHA1_t1440 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MD5SHA1_t1440_il2cpp_TypeInfo));
		MD5SHA1__ctor_m5977(L_2, /*hidden argument*/&MD5SHA1__ctor_m5977_MethodInfo);
		V_1 = L_2;
		Context_t1445 * L_3 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		NullCheck(L_3);
		TlsStream_t1457 * L_4 = Context_get_HandshakeMessages_m6106(L_3, /*hidden argument*/&Context_get_HandshakeMessages_m6106_MethodInfo);
		NullCheck(L_4);
		ByteU5BU5D_t112* L_5 = TlsStream_ToArray_m6383(L_4, /*hidden argument*/&TlsStream_ToArray_m6383_MethodInfo);
		V_2 = L_5;
		NullCheck(V_2);
		NullCheck(V_1);
		ByteU5BU5D_t112* L_6 = HashAlgorithm_ComputeHash_m6555(V_1, V_2, 0, (((int32_t)(((Array_t *)V_2)->max_length))), /*hidden argument*/&HashAlgorithm_ComputeHash_m6555_MethodInfo);
		V_3 = L_6;
		Context_t1445 * L_7 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		NullCheck(L_7);
		SecurityParameters_t1463 * L_8 = Context_get_Current_m6137(L_7, /*hidden argument*/&Context_get_Current_m6137_MethodInfo);
		NullCheck(L_8);
		CipherSuite_t1446 * L_9 = SecurityParameters_get_Cipher_m6208(L_8, /*hidden argument*/&SecurityParameters_get_Cipher_m6208_MethodInfo);
		Context_t1445 * L_10 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		NullCheck(L_10);
		ByteU5BU5D_t112* L_11 = Context_get_MasterSecret_m6119(L_10, /*hidden argument*/&Context_get_MasterSecret_m6119_MethodInfo);
		NullCheck(L_9);
		ByteU5BU5D_t112* L_12 = CipherSuite_PRF_m6019(L_9, L_11, (String_t*) &_stringLiteral839, V_3, ((int32_t)12), /*hidden argument*/&CipherSuite_PRF_m6019_MethodInfo);
		V_4 = L_12;
		bool L_13 = HandshakeMessage_Compare_m6398(NULL /*static, unused*/, V_4, V_0, /*hidden argument*/&HandshakeMessage_Compare_m6398_MethodInfo);
		if (L_13)
		{
			goto IL_0073;
		}
	}
	{
		TlsException_t1489 * L_14 = (TlsException_t1489 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t1489_il2cpp_TypeInfo));
		TlsException__ctor_m6342(L_14, (String_t*) &_stringLiteral838, /*hidden argument*/&TlsException__ctor_m6342_MethodInfo);
		il2cpp_codegen_raise_exception(L_14);
	}

IL_0073:
	{
		return;
	}
}
// Metadata Definition Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished
extern Il2CppType ByteU5BU5D_t112_0_0_17;
FieldInfo TlsServerFinished_t1500____Ssl3Marker_9_FieldInfo = 
{
	"Ssl3Marker"/* name */
	, &ByteU5BU5D_t112_0_0_17/* type */
	, &TlsServerFinished_t1500_il2cpp_TypeInfo/* parent */
	, offsetof(TlsServerFinished_t1500_StaticFields, ___Ssl3Marker_9)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* TlsServerFinished_t1500_FieldInfos[] =
{
	&TlsServerFinished_t1500____Ssl3Marker_9_FieldInfo,
	NULL
};
extern Il2CppType Context_t1445_0_0_0;
extern Il2CppType ByteU5BU5D_t112_0_0_0;
static ParameterInfo TlsServerFinished_t1500_TlsServerFinished__ctor_m6439_ParameterInfos[] = 
{
	{"context", 0, 134218541, &EmptyCustomAttributesCache, &Context_t1445_0_0_0},
	{"buffer", 1, 134218542, &EmptyCustomAttributesCache, &ByteU5BU5D_t112_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
MethodInfo TlsServerFinished__ctor_m6439_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TlsServerFinished__ctor_m6439/* method */
	, &TlsServerFinished_t1500_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Object_t/* invoker_method */
	, TlsServerFinished_t1500_TlsServerFinished__ctor_m6439_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 847/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::.cctor()
MethodInfo TlsServerFinished__cctor_m6440_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&TlsServerFinished__cctor_m6440/* method */
	, &TlsServerFinished_t1500_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 848/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::Update()
MethodInfo TlsServerFinished_Update_m6441_MethodInfo = 
{
	"Update"/* name */
	, (methodPointerType)&TlsServerFinished_Update_m6441/* method */
	, &TlsServerFinished_t1500_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 26/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 849/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::ProcessAsSsl3()
MethodInfo TlsServerFinished_ProcessAsSsl3_m6442_MethodInfo = 
{
	"ProcessAsSsl3"/* name */
	, (methodPointerType)&TlsServerFinished_ProcessAsSsl3_m6442/* method */
	, &TlsServerFinished_t1500_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 25/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 850/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::ProcessAsTls1()
MethodInfo TlsServerFinished_ProcessAsTls1_m6443_MethodInfo = 
{
	"ProcessAsTls1"/* name */
	, (methodPointerType)&TlsServerFinished_ProcessAsTls1_m6443/* method */
	, &TlsServerFinished_t1500_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 24/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 851/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* TlsServerFinished_t1500_MethodInfos[] =
{
	&TlsServerFinished__ctor_m6439_MethodInfo,
	&TlsServerFinished__cctor_m6440_MethodInfo,
	&TlsServerFinished_Update_m6441_MethodInfo,
	&TlsServerFinished_ProcessAsSsl3_m6442_MethodInfo,
	&TlsServerFinished_ProcessAsTls1_m6443_MethodInfo,
	NULL
};
static MethodInfo* TlsServerFinished_t1500_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Object_ToString_m498_MethodInfo,
	&Stream_Dispose_m6683_MethodInfo,
	&TlsStream_get_CanRead_m6367_MethodInfo,
	&TlsStream_get_CanSeek_m6368_MethodInfo,
	&TlsStream_get_CanWrite_m6366_MethodInfo,
	&TlsStream_get_Length_m6371_MethodInfo,
	&TlsStream_get_Position_m6369_MethodInfo,
	&TlsStream_set_Position_m6370_MethodInfo,
	&Stream_Dispose_m6725_MethodInfo,
	&Stream_Close_m6620_MethodInfo,
	&TlsStream_Flush_m6384_MethodInfo,
	&TlsStream_Read_m6387_MethodInfo,
	&Stream_ReadByte_m1448_MethodInfo,
	&TlsStream_Seek_m6386_MethodInfo,
	&TlsStream_SetLength_m6385_MethodInfo,
	&TlsStream_Write_m6388_MethodInfo,
	&Stream_WriteByte_m1441_MethodInfo,
	&Stream_BeginRead_m6689_MethodInfo,
	&Stream_BeginWrite_m6698_MethodInfo,
	&Stream_EndRead_m6691_MethodInfo,
	&Stream_EndWrite_m6699_MethodInfo,
	&TlsServerFinished_ProcessAsTls1_m6443_MethodInfo,
	&TlsServerFinished_ProcessAsSsl3_m6442_MethodInfo,
	&TlsServerFinished_Update_m6441_MethodInfo,
	&HandshakeMessage_EncodeMessage_m6397_MethodInfo,
};
static Il2CppInterfaceOffsetPair TlsServerFinished_t1500_InterfacesOffsets[] = 
{
	{ &IDisposable_t81_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType TlsServerFinished_t1500_0_0_0;
extern Il2CppType TlsServerFinished_t1500_1_0_0;
struct TlsServerFinished_t1500;
TypeInfo TlsServerFinished_t1500_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "TlsServerFinished"/* name */
	, "Mono.Security.Protocol.Tls.Handshake.Client"/* namespaze */
	, TlsServerFinished_t1500_MethodInfos/* methods */
	, NULL/* properties */
	, TlsServerFinished_t1500_FieldInfos/* fields */
	, NULL/* events */
	, &HandshakeMessage_t1456_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &TlsServerFinished_t1500_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, TlsServerFinished_t1500_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &TlsServerFinished_t1500_il2cpp_TypeInfo/* cast_class */
	, &TlsServerFinished_t1500_0_0_0/* byval_arg */
	, &TlsServerFinished_t1500_1_0_0/* this_arg */
	, TlsServerFinished_t1500_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TlsServerFinished_t1500)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(TlsServerFinished_t1500_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, true/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 28/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_7.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TlsServerHello_t1501_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_7MethodDeclarations.h"

// Mono.Security.Protocol.Tls.SecurityCompressionType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityCompression.h"
// Mono.Security.Protocol.Tls.CipherSuiteCollection
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuiteCollecti.h"
// Mono.Security.Protocol.Tls.SecurityProtocolType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"
extern TypeInfo ClientSessionCache_t1459_il2cpp_TypeInfo;
extern TypeInfo CipherSuiteCollection_t1447_il2cpp_TypeInfo;
// System.Buffer
#include "mscorlib_System_BufferMethodDeclarations.h"
// Mono.Security.Protocol.Tls.ClientSessionCache
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientSessionCacheMethodDeclarations.h"
// Mono.Security.Protocol.Tls.CipherSuiteCollection
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuiteCollectiMethodDeclarations.h"
// Mono.Security.Protocol.Tls.CipherSuiteFactory
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuiteFactoryMethodDeclarations.h"
extern MethodInfo Context_set_SessionId_m6091_MethodInfo;
extern MethodInfo Context_set_ServerRandom_m6114_MethodInfo;
extern MethodInfo SecurityParameters_set_Cipher_m6209_MethodInfo;
extern MethodInfo Context_set_CompressionMethod_m6093_MethodInfo;
extern MethodInfo Context_set_ProtocolNegotiated_m6085_MethodInfo;
extern MethodInfo Context_get_ClientRandom_m6111_MethodInfo;
extern MethodInfo Context_get_ServerRandom_m6113_MethodInfo;
extern MethodInfo Buffer_BlockCopy_m6482_MethodInfo;
extern MethodInfo Context_set_RandomCS_m6116_MethodInfo;
extern MethodInfo Context_set_RandomSC_m6118_MethodInfo;
extern MethodInfo TlsServerHello_ProcessAsTls1_m6447_MethodInfo;
extern MethodInfo TlsServerHello_processProtocol_m6448_MethodInfo;
extern MethodInfo ClientSessionCache_Add_m6076_MethodInfo;
extern MethodInfo Context_get_SessionId_m6090_MethodInfo;
extern MethodInfo Context_set_AbbreviatedHandshake_m6083_MethodInfo;
extern MethodInfo Context_get_SupportedCiphers_m6104_MethodInfo;
extern MethodInfo CipherSuiteCollection_IndexOf_m6045_MethodInfo;
extern MethodInfo CipherSuiteCollection_get_Item_m6038_MethodInfo;
extern MethodInfo Context_DecodeProtocolCode_m6135_MethodInfo;
extern MethodInfo Context_get_SecurityProtocolFlags_m6088_MethodInfo;
extern MethodInfo Context_set_SecurityProtocol_m6087_MethodInfo;
extern MethodInfo CipherSuiteCollection_Clear_m6043_MethodInfo;
extern MethodInfo Context_set_SupportedCiphers_m6105_MethodInfo;
extern MethodInfo CipherSuiteFactory_GetSupportedCiphers_m6050_MethodInfo;


// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern MethodInfo TlsServerHello__ctor_m6444_MethodInfo;
 void TlsServerHello__ctor_m6444 (TlsServerHello_t1501 * __this, Context_t1445 * ___context, ByteU5BU5D_t112* ___buffer, MethodInfo* method){
	{
		HandshakeMessage__ctor_m6391(__this, ___context, 2, ___buffer, /*hidden argument*/&HandshakeMessage__ctor_m6391_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::Update()
extern MethodInfo TlsServerHello_Update_m6445_MethodInfo;
 void TlsServerHello_Update_m6445 (TlsServerHello_t1501 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_t112* V_3 = {0};
	ByteU5BU5D_t112* V_4 = {0};
	{
		HandshakeMessage_Update_m6396(__this, /*hidden argument*/&HandshakeMessage_Update_m6396_MethodInfo);
		Context_t1445 * L_0 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		ByteU5BU5D_t112* L_1 = (__this->___sessionId_11);
		NullCheck(L_0);
		Context_set_SessionId_m6091(L_0, L_1, /*hidden argument*/&Context_set_SessionId_m6091_MethodInfo);
		Context_t1445 * L_2 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		ByteU5BU5D_t112* L_3 = (__this->___random_10);
		NullCheck(L_2);
		Context_set_ServerRandom_m6114(L_2, L_3, /*hidden argument*/&Context_set_ServerRandom_m6114_MethodInfo);
		Context_t1445 * L_4 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		NullCheck(L_4);
		SecurityParameters_t1463 * L_5 = Context_get_Negotiating_m6138(L_4, /*hidden argument*/&Context_get_Negotiating_m6138_MethodInfo);
		CipherSuite_t1446 * L_6 = (__this->___cipherSuite_12);
		NullCheck(L_5);
		SecurityParameters_set_Cipher_m6209(L_5, L_6, /*hidden argument*/&SecurityParameters_set_Cipher_m6209_MethodInfo);
		Context_t1445 * L_7 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		int32_t L_8 = (__this->___compressionMethod_9);
		NullCheck(L_7);
		Context_set_CompressionMethod_m6093(L_7, L_8, /*hidden argument*/&Context_set_CompressionMethod_m6093_MethodInfo);
		Context_t1445 * L_9 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		NullCheck(L_9);
		Context_set_ProtocolNegotiated_m6085(L_9, 1, /*hidden argument*/&Context_set_ProtocolNegotiated_m6085_MethodInfo);
		Context_t1445 * L_10 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		NullCheck(L_10);
		ByteU5BU5D_t112* L_11 = Context_get_ClientRandom_m6111(L_10, /*hidden argument*/&Context_get_ClientRandom_m6111_MethodInfo);
		NullCheck(L_11);
		V_0 = (((int32_t)(((Array_t *)L_11)->max_length)));
		Context_t1445 * L_12 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		NullCheck(L_12);
		ByteU5BU5D_t112* L_13 = Context_get_ServerRandom_m6113(L_12, /*hidden argument*/&Context_get_ServerRandom_m6113_MethodInfo);
		NullCheck(L_13);
		V_1 = (((int32_t)(((Array_t *)L_13)->max_length)));
		V_2 = ((int32_t)(V_0+V_1));
		V_3 = ((ByteU5BU5D_t112*)SZArrayNew(InitializedTypeInfo(&ByteU5BU5D_t112_il2cpp_TypeInfo), V_2));
		Context_t1445 * L_14 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		NullCheck(L_14);
		ByteU5BU5D_t112* L_15 = Context_get_ClientRandom_m6111(L_14, /*hidden argument*/&Context_get_ClientRandom_m6111_MethodInfo);
		Buffer_BlockCopy_m6482(NULL /*static, unused*/, (Array_t *)(Array_t *)L_15, 0, (Array_t *)(Array_t *)V_3, 0, V_0, /*hidden argument*/&Buffer_BlockCopy_m6482_MethodInfo);
		Context_t1445 * L_16 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		NullCheck(L_16);
		ByteU5BU5D_t112* L_17 = Context_get_ServerRandom_m6113(L_16, /*hidden argument*/&Context_get_ServerRandom_m6113_MethodInfo);
		Buffer_BlockCopy_m6482(NULL /*static, unused*/, (Array_t *)(Array_t *)L_17, 0, (Array_t *)(Array_t *)V_3, V_0, V_1, /*hidden argument*/&Buffer_BlockCopy_m6482_MethodInfo);
		Context_t1445 * L_18 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		NullCheck(L_18);
		Context_set_RandomCS_m6116(L_18, V_3, /*hidden argument*/&Context_set_RandomCS_m6116_MethodInfo);
		V_4 = ((ByteU5BU5D_t112*)SZArrayNew(InitializedTypeInfo(&ByteU5BU5D_t112_il2cpp_TypeInfo), V_2));
		Context_t1445 * L_19 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		NullCheck(L_19);
		ByteU5BU5D_t112* L_20 = Context_get_ServerRandom_m6113(L_19, /*hidden argument*/&Context_get_ServerRandom_m6113_MethodInfo);
		Buffer_BlockCopy_m6482(NULL /*static, unused*/, (Array_t *)(Array_t *)L_20, 0, (Array_t *)(Array_t *)V_4, 0, V_1, /*hidden argument*/&Buffer_BlockCopy_m6482_MethodInfo);
		Context_t1445 * L_21 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		NullCheck(L_21);
		ByteU5BU5D_t112* L_22 = Context_get_ClientRandom_m6111(L_21, /*hidden argument*/&Context_get_ClientRandom_m6111_MethodInfo);
		Buffer_BlockCopy_m6482(NULL /*static, unused*/, (Array_t *)(Array_t *)L_22, 0, (Array_t *)(Array_t *)V_4, V_1, V_0, /*hidden argument*/&Buffer_BlockCopy_m6482_MethodInfo);
		Context_t1445 * L_23 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		NullCheck(L_23);
		Context_set_RandomSC_m6118(L_23, V_4, /*hidden argument*/&Context_set_RandomSC_m6118_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::ProcessAsSsl3()
extern MethodInfo TlsServerHello_ProcessAsSsl3_m6446_MethodInfo;
 void TlsServerHello_ProcessAsSsl3_m6446 (TlsServerHello_t1501 * __this, MethodInfo* method){
	{
		VirtActionInvoker0::Invoke(&TlsServerHello_ProcessAsTls1_m6447_MethodInfo, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::ProcessAsTls1()
 void TlsServerHello_ProcessAsTls1_m6447 (TlsServerHello_t1501 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int16_t V_1 = 0;
	{
		int16_t L_0 = TlsStream_ReadInt16_m6374(__this, /*hidden argument*/&TlsStream_ReadInt16_m6374_MethodInfo);
		TlsServerHello_processProtocol_m6448(__this, L_0, /*hidden argument*/&TlsServerHello_processProtocol_m6448_MethodInfo);
		ByteU5BU5D_t112* L_1 = TlsStream_ReadBytes_m6376(__this, ((int32_t)32), /*hidden argument*/&TlsStream_ReadBytes_m6376_MethodInfo);
		__this->___random_10 = L_1;
		uint8_t L_2 = TlsStream_ReadByte_m6373(__this, /*hidden argument*/&TlsStream_ReadByte_m6373_MethodInfo);
		V_0 = L_2;
		if ((((int32_t)V_0) <= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		ByteU5BU5D_t112* L_3 = TlsStream_ReadBytes_m6376(__this, V_0, /*hidden argument*/&TlsStream_ReadBytes_m6376_MethodInfo);
		__this->___sessionId_11 = L_3;
		Context_t1445 * L_4 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		NullCheck(L_4);
		TlsClientSettings_t1462 * L_5 = Context_get_ClientSettings_m6095(L_4, /*hidden argument*/&Context_get_ClientSettings_m6095_MethodInfo);
		NullCheck(L_5);
		String_t* L_6 = TlsClientSettings_get_TargetHost_m6335(L_5, /*hidden argument*/&TlsClientSettings_get_TargetHost_m6335_MethodInfo);
		ByteU5BU5D_t112* L_7 = (__this->___sessionId_11);
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&ClientSessionCache_t1459_il2cpp_TypeInfo));
		ClientSessionCache_Add_m6076(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/&ClientSessionCache_Add_m6076_MethodInfo);
		Context_t1445 * L_8 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		ByteU5BU5D_t112* L_9 = (__this->___sessionId_11);
		Context_t1445 * L_10 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		NullCheck(L_10);
		ByteU5BU5D_t112* L_11 = Context_get_SessionId_m6090(L_10, /*hidden argument*/&Context_get_SessionId_m6090_MethodInfo);
		bool L_12 = HandshakeMessage_Compare_m6398(NULL /*static, unused*/, L_9, L_11, /*hidden argument*/&HandshakeMessage_Compare_m6398_MethodInfo);
		NullCheck(L_8);
		Context_set_AbbreviatedHandshake_m6083(L_8, L_12, /*hidden argument*/&Context_set_AbbreviatedHandshake_m6083_MethodInfo);
		goto IL_0082;
	}

IL_0076:
	{
		Context_t1445 * L_13 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		NullCheck(L_13);
		Context_set_AbbreviatedHandshake_m6083(L_13, 0, /*hidden argument*/&Context_set_AbbreviatedHandshake_m6083_MethodInfo);
	}

IL_0082:
	{
		int16_t L_14 = TlsStream_ReadInt16_m6374(__this, /*hidden argument*/&TlsStream_ReadInt16_m6374_MethodInfo);
		V_1 = L_14;
		Context_t1445 * L_15 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		NullCheck(L_15);
		CipherSuiteCollection_t1447 * L_16 = Context_get_SupportedCiphers_m6104(L_15, /*hidden argument*/&Context_get_SupportedCiphers_m6104_MethodInfo);
		NullCheck(L_16);
		int32_t L_17 = CipherSuiteCollection_IndexOf_m6045(L_16, V_1, /*hidden argument*/&CipherSuiteCollection_IndexOf_m6045_MethodInfo);
		if ((((uint32_t)L_17) != ((uint32_t)(-1))))
		{
			goto IL_00ad;
		}
	}
	{
		TlsException_t1489 * L_18 = (TlsException_t1489 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t1489_il2cpp_TypeInfo));
		TlsException__ctor_m6347(L_18, ((int32_t)71), (String_t*) &_stringLiteral840, /*hidden argument*/&TlsException__ctor_m6347_MethodInfo);
		il2cpp_codegen_raise_exception(L_18);
	}

IL_00ad:
	{
		Context_t1445 * L_19 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		NullCheck(L_19);
		CipherSuiteCollection_t1447 * L_20 = Context_get_SupportedCiphers_m6104(L_19, /*hidden argument*/&Context_get_SupportedCiphers_m6104_MethodInfo);
		NullCheck(L_20);
		CipherSuite_t1446 * L_21 = CipherSuiteCollection_get_Item_m6038(L_20, V_1, /*hidden argument*/&CipherSuiteCollection_get_Item_m6038_MethodInfo);
		__this->___cipherSuite_12 = L_21;
		uint8_t L_22 = TlsStream_ReadByte_m6373(__this, /*hidden argument*/&TlsStream_ReadByte_m6373_MethodInfo);
		__this->___compressionMethod_9 = L_22;
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::processProtocol(System.Int16)
 void TlsServerHello_processProtocol_m6448 (TlsServerHello_t1501 * __this, int16_t ___protocol, MethodInfo* method){
	int32_t V_0 = {0};
	{
		Context_t1445 * L_0 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		NullCheck(L_0);
		int32_t L_1 = Context_DecodeProtocolCode_m6135(L_0, ___protocol, /*hidden argument*/&Context_DecodeProtocolCode_m6135_MethodInfo);
		V_0 = L_1;
		Context_t1445 * L_2 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		NullCheck(L_2);
		int32_t L_3 = Context_get_SecurityProtocolFlags_m6088(L_2, /*hidden argument*/&Context_get_SecurityProtocolFlags_m6088_MethodInfo);
		if ((((int32_t)((int32_t)((int32_t)V_0&(int32_t)L_3))) == ((int32_t)V_0)))
		{
			goto IL_003b;
		}
	}
	{
		Context_t1445 * L_4 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		NullCheck(L_4);
		int32_t L_5 = Context_get_SecurityProtocolFlags_m6088(L_4, /*hidden argument*/&Context_get_SecurityProtocolFlags_m6088_MethodInfo);
		if ((((uint32_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)-1073741824)))) != ((uint32_t)((int32_t)-1073741824))))
		{
			goto IL_0079;
		}
	}

IL_003b:
	{
		Context_t1445 * L_6 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		NullCheck(L_6);
		Context_set_SecurityProtocol_m6087(L_6, V_0, /*hidden argument*/&Context_set_SecurityProtocol_m6087_MethodInfo);
		Context_t1445 * L_7 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		NullCheck(L_7);
		CipherSuiteCollection_t1447 * L_8 = Context_get_SupportedCiphers_m6104(L_7, /*hidden argument*/&Context_get_SupportedCiphers_m6104_MethodInfo);
		NullCheck(L_8);
		VirtActionInvoker0::Invoke(&CipherSuiteCollection_Clear_m6043_MethodInfo, L_8);
		Context_t1445 * L_9 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		NullCheck(L_9);
		Context_set_SupportedCiphers_m6105(L_9, (CipherSuiteCollection_t1447 *)NULL, /*hidden argument*/&Context_set_SupportedCiphers_m6105_MethodInfo);
		Context_t1445 * L_10 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		CipherSuiteCollection_t1447 * L_11 = CipherSuiteFactory_GetSupportedCiphers_m6050(NULL /*static, unused*/, V_0, /*hidden argument*/&CipherSuiteFactory_GetSupportedCiphers_m6050_MethodInfo);
		NullCheck(L_10);
		Context_set_SupportedCiphers_m6105(L_10, L_11, /*hidden argument*/&Context_set_SupportedCiphers_m6105_MethodInfo);
		goto IL_0086;
	}

IL_0079:
	{
		TlsException_t1489 * L_12 = (TlsException_t1489 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t1489_il2cpp_TypeInfo));
		TlsException__ctor_m6347(L_12, ((int32_t)70), (String_t*) &_stringLiteral781, /*hidden argument*/&TlsException__ctor_m6347_MethodInfo);
		il2cpp_codegen_raise_exception(L_12);
	}

IL_0086:
	{
		return;
	}
}
// Metadata Definition Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello
extern Il2CppType SecurityCompressionType_t1480_0_0_1;
FieldInfo TlsServerHello_t1501____compressionMethod_9_FieldInfo = 
{
	"compressionMethod"/* name */
	, &SecurityCompressionType_t1480_0_0_1/* type */
	, &TlsServerHello_t1501_il2cpp_TypeInfo/* parent */
	, offsetof(TlsServerHello_t1501, ___compressionMethod_9)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType ByteU5BU5D_t112_0_0_1;
FieldInfo TlsServerHello_t1501____random_10_FieldInfo = 
{
	"random"/* name */
	, &ByteU5BU5D_t112_0_0_1/* type */
	, &TlsServerHello_t1501_il2cpp_TypeInfo/* parent */
	, offsetof(TlsServerHello_t1501, ___random_10)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType ByteU5BU5D_t112_0_0_1;
FieldInfo TlsServerHello_t1501____sessionId_11_FieldInfo = 
{
	"sessionId"/* name */
	, &ByteU5BU5D_t112_0_0_1/* type */
	, &TlsServerHello_t1501_il2cpp_TypeInfo/* parent */
	, offsetof(TlsServerHello_t1501, ___sessionId_11)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType CipherSuite_t1446_0_0_1;
FieldInfo TlsServerHello_t1501____cipherSuite_12_FieldInfo = 
{
	"cipherSuite"/* name */
	, &CipherSuite_t1446_0_0_1/* type */
	, &TlsServerHello_t1501_il2cpp_TypeInfo/* parent */
	, offsetof(TlsServerHello_t1501, ___cipherSuite_12)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* TlsServerHello_t1501_FieldInfos[] =
{
	&TlsServerHello_t1501____compressionMethod_9_FieldInfo,
	&TlsServerHello_t1501____random_10_FieldInfo,
	&TlsServerHello_t1501____sessionId_11_FieldInfo,
	&TlsServerHello_t1501____cipherSuite_12_FieldInfo,
	NULL
};
extern Il2CppType Context_t1445_0_0_0;
extern Il2CppType ByteU5BU5D_t112_0_0_0;
static ParameterInfo TlsServerHello_t1501_TlsServerHello__ctor_m6444_ParameterInfos[] = 
{
	{"context", 0, 134218543, &EmptyCustomAttributesCache, &Context_t1445_0_0_0},
	{"buffer", 1, 134218544, &EmptyCustomAttributesCache, &ByteU5BU5D_t112_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
MethodInfo TlsServerHello__ctor_m6444_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TlsServerHello__ctor_m6444/* method */
	, &TlsServerHello_t1501_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Object_t/* invoker_method */
	, TlsServerHello_t1501_TlsServerHello__ctor_m6444_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 852/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::Update()
MethodInfo TlsServerHello_Update_m6445_MethodInfo = 
{
	"Update"/* name */
	, (methodPointerType)&TlsServerHello_Update_m6445/* method */
	, &TlsServerHello_t1501_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 26/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 853/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::ProcessAsSsl3()
MethodInfo TlsServerHello_ProcessAsSsl3_m6446_MethodInfo = 
{
	"ProcessAsSsl3"/* name */
	, (methodPointerType)&TlsServerHello_ProcessAsSsl3_m6446/* method */
	, &TlsServerHello_t1501_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 25/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 854/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::ProcessAsTls1()
MethodInfo TlsServerHello_ProcessAsTls1_m6447_MethodInfo = 
{
	"ProcessAsTls1"/* name */
	, (methodPointerType)&TlsServerHello_ProcessAsTls1_m6447/* method */
	, &TlsServerHello_t1501_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 24/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 855/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Int16_t754_0_0_0;
extern Il2CppType Int16_t754_0_0_0;
static ParameterInfo TlsServerHello_t1501_TlsServerHello_processProtocol_m6448_ParameterInfos[] = 
{
	{"protocol", 0, 134218545, &EmptyCustomAttributesCache, &Int16_t754_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Int16_t754 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::processProtocol(System.Int16)
MethodInfo TlsServerHello_processProtocol_m6448_MethodInfo = 
{
	"processProtocol"/* name */
	, (methodPointerType)&TlsServerHello_processProtocol_m6448/* method */
	, &TlsServerHello_t1501_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Int16_t754/* invoker_method */
	, TlsServerHello_t1501_TlsServerHello_processProtocol_m6448_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 856/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* TlsServerHello_t1501_MethodInfos[] =
{
	&TlsServerHello__ctor_m6444_MethodInfo,
	&TlsServerHello_Update_m6445_MethodInfo,
	&TlsServerHello_ProcessAsSsl3_m6446_MethodInfo,
	&TlsServerHello_ProcessAsTls1_m6447_MethodInfo,
	&TlsServerHello_processProtocol_m6448_MethodInfo,
	NULL
};
static MethodInfo* TlsServerHello_t1501_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Object_ToString_m498_MethodInfo,
	&Stream_Dispose_m6683_MethodInfo,
	&TlsStream_get_CanRead_m6367_MethodInfo,
	&TlsStream_get_CanSeek_m6368_MethodInfo,
	&TlsStream_get_CanWrite_m6366_MethodInfo,
	&TlsStream_get_Length_m6371_MethodInfo,
	&TlsStream_get_Position_m6369_MethodInfo,
	&TlsStream_set_Position_m6370_MethodInfo,
	&Stream_Dispose_m6725_MethodInfo,
	&Stream_Close_m6620_MethodInfo,
	&TlsStream_Flush_m6384_MethodInfo,
	&TlsStream_Read_m6387_MethodInfo,
	&Stream_ReadByte_m1448_MethodInfo,
	&TlsStream_Seek_m6386_MethodInfo,
	&TlsStream_SetLength_m6385_MethodInfo,
	&TlsStream_Write_m6388_MethodInfo,
	&Stream_WriteByte_m1441_MethodInfo,
	&Stream_BeginRead_m6689_MethodInfo,
	&Stream_BeginWrite_m6698_MethodInfo,
	&Stream_EndRead_m6691_MethodInfo,
	&Stream_EndWrite_m6699_MethodInfo,
	&TlsServerHello_ProcessAsTls1_m6447_MethodInfo,
	&TlsServerHello_ProcessAsSsl3_m6446_MethodInfo,
	&TlsServerHello_Update_m6445_MethodInfo,
	&HandshakeMessage_EncodeMessage_m6397_MethodInfo,
};
static Il2CppInterfaceOffsetPair TlsServerHello_t1501_InterfacesOffsets[] = 
{
	{ &IDisposable_t81_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType TlsServerHello_t1501_0_0_0;
extern Il2CppType TlsServerHello_t1501_1_0_0;
struct TlsServerHello_t1501;
TypeInfo TlsServerHello_t1501_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "TlsServerHello"/* name */
	, "Mono.Security.Protocol.Tls.Handshake.Client"/* namespaze */
	, TlsServerHello_t1501_MethodInfos/* methods */
	, NULL/* properties */
	, TlsServerHello_t1501_FieldInfos/* fields */
	, NULL/* events */
	, &HandshakeMessage_t1456_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &TlsServerHello_t1501_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, TlsServerHello_t1501_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &TlsServerHello_t1501_il2cpp_TypeInfo/* cast_class */
	, &TlsServerHello_t1501_0_0_0/* byval_arg */
	, &TlsServerHello_t1501_1_0_0/* this_arg */
	, TlsServerHello_t1501_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TlsServerHello_t1501)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 0/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 28/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_8.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TlsServerHelloDone_t1502_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_8MethodDeclarations.h"



// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern MethodInfo TlsServerHelloDone__ctor_m6449_MethodInfo;
 void TlsServerHelloDone__ctor_m6449 (TlsServerHelloDone_t1502 * __this, Context_t1445 * ___context, ByteU5BU5D_t112* ___buffer, MethodInfo* method){
	{
		HandshakeMessage__ctor_m6391(__this, ___context, ((int32_t)14), ___buffer, /*hidden argument*/&HandshakeMessage__ctor_m6391_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::ProcessAsSsl3()
extern MethodInfo TlsServerHelloDone_ProcessAsSsl3_m6450_MethodInfo;
 void TlsServerHelloDone_ProcessAsSsl3_m6450 (TlsServerHelloDone_t1502 * __this, MethodInfo* method){
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::ProcessAsTls1()
extern MethodInfo TlsServerHelloDone_ProcessAsTls1_m6451_MethodInfo;
 void TlsServerHelloDone_ProcessAsTls1_m6451 (TlsServerHelloDone_t1502 * __this, MethodInfo* method){
	{
		return;
	}
}
// Metadata Definition Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone
extern Il2CppType Context_t1445_0_0_0;
extern Il2CppType ByteU5BU5D_t112_0_0_0;
static ParameterInfo TlsServerHelloDone_t1502_TlsServerHelloDone__ctor_m6449_ParameterInfos[] = 
{
	{"context", 0, 134218546, &EmptyCustomAttributesCache, &Context_t1445_0_0_0},
	{"buffer", 1, 134218547, &EmptyCustomAttributesCache, &ByteU5BU5D_t112_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
MethodInfo TlsServerHelloDone__ctor_m6449_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TlsServerHelloDone__ctor_m6449/* method */
	, &TlsServerHelloDone_t1502_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Object_t/* invoker_method */
	, TlsServerHelloDone_t1502_TlsServerHelloDone__ctor_m6449_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 857/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::ProcessAsSsl3()
MethodInfo TlsServerHelloDone_ProcessAsSsl3_m6450_MethodInfo = 
{
	"ProcessAsSsl3"/* name */
	, (methodPointerType)&TlsServerHelloDone_ProcessAsSsl3_m6450/* method */
	, &TlsServerHelloDone_t1502_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 25/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 858/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::ProcessAsTls1()
MethodInfo TlsServerHelloDone_ProcessAsTls1_m6451_MethodInfo = 
{
	"ProcessAsTls1"/* name */
	, (methodPointerType)&TlsServerHelloDone_ProcessAsTls1_m6451/* method */
	, &TlsServerHelloDone_t1502_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 24/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 859/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* TlsServerHelloDone_t1502_MethodInfos[] =
{
	&TlsServerHelloDone__ctor_m6449_MethodInfo,
	&TlsServerHelloDone_ProcessAsSsl3_m6450_MethodInfo,
	&TlsServerHelloDone_ProcessAsTls1_m6451_MethodInfo,
	NULL
};
static MethodInfo* TlsServerHelloDone_t1502_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Object_ToString_m498_MethodInfo,
	&Stream_Dispose_m6683_MethodInfo,
	&TlsStream_get_CanRead_m6367_MethodInfo,
	&TlsStream_get_CanSeek_m6368_MethodInfo,
	&TlsStream_get_CanWrite_m6366_MethodInfo,
	&TlsStream_get_Length_m6371_MethodInfo,
	&TlsStream_get_Position_m6369_MethodInfo,
	&TlsStream_set_Position_m6370_MethodInfo,
	&Stream_Dispose_m6725_MethodInfo,
	&Stream_Close_m6620_MethodInfo,
	&TlsStream_Flush_m6384_MethodInfo,
	&TlsStream_Read_m6387_MethodInfo,
	&Stream_ReadByte_m1448_MethodInfo,
	&TlsStream_Seek_m6386_MethodInfo,
	&TlsStream_SetLength_m6385_MethodInfo,
	&TlsStream_Write_m6388_MethodInfo,
	&Stream_WriteByte_m1441_MethodInfo,
	&Stream_BeginRead_m6689_MethodInfo,
	&Stream_BeginWrite_m6698_MethodInfo,
	&Stream_EndRead_m6691_MethodInfo,
	&Stream_EndWrite_m6699_MethodInfo,
	&TlsServerHelloDone_ProcessAsTls1_m6451_MethodInfo,
	&TlsServerHelloDone_ProcessAsSsl3_m6450_MethodInfo,
	&HandshakeMessage_Update_m6396_MethodInfo,
	&HandshakeMessage_EncodeMessage_m6397_MethodInfo,
};
static Il2CppInterfaceOffsetPair TlsServerHelloDone_t1502_InterfacesOffsets[] = 
{
	{ &IDisposable_t81_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType TlsServerHelloDone_t1502_0_0_0;
extern Il2CppType TlsServerHelloDone_t1502_1_0_0;
struct TlsServerHelloDone_t1502;
TypeInfo TlsServerHelloDone_t1502_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "TlsServerHelloDone"/* name */
	, "Mono.Security.Protocol.Tls.Handshake.Client"/* namespaze */
	, TlsServerHelloDone_t1502_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &HandshakeMessage_t1456_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &TlsServerHelloDone_t1502_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, TlsServerHelloDone_t1502_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &TlsServerHelloDone_t1502_il2cpp_TypeInfo/* cast_class */
	, &TlsServerHelloDone_t1502_0_0_0/* byval_arg */
	, &TlsServerHelloDone_t1502_1_0_0/* this_arg */
	, TlsServerHelloDone_t1502_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TlsServerHelloDone_t1502)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 28/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_9.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo TlsServerKeyExchange_t1503_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_9MethodDeclarations.h"

// System.Security.Cryptography.RSAParameters
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"
// System.Security.Cryptography.RSA
#include "mscorlib_System_Security_Cryptography_RSA.h"
extern TypeInfo RSAParameters_t1410_il2cpp_TypeInfo;
extern MethodInfo TlsServerKeyExchange_verifySignature_m6456_MethodInfo;
extern MethodInfo TlsServerSettings_set_ServerKeyExchange_m6351_MethodInfo;
extern MethodInfo TlsServerSettings_set_RsaParameters_m6356_MethodInfo;
extern MethodInfo TlsServerSettings_set_SignedParams_m6357_MethodInfo;
extern MethodInfo TlsServerKeyExchange_ProcessAsTls1_m6455_MethodInfo;
extern MethodInfo TlsStream__ctor_m6363_MethodInfo;
extern MethodInfo Context_get_RandomCS_m6115_MethodInfo;
extern MethodInfo TlsStream_Write_m6381_MethodInfo;
extern MethodInfo HashAlgorithm_ComputeHash_m6616_MethodInfo;
extern MethodInfo TlsStream_Reset_m6382_MethodInfo;
extern MethodInfo TlsServerSettings_get_CertificateRSA_m6354_MethodInfo;
extern MethodInfo MD5SHA1_VerifySignature_m5982_MethodInfo;


// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern MethodInfo TlsServerKeyExchange__ctor_m6452_MethodInfo;
 void TlsServerKeyExchange__ctor_m6452 (TlsServerKeyExchange_t1503 * __this, Context_t1445 * ___context, ByteU5BU5D_t112* ___buffer, MethodInfo* method){
	{
		HandshakeMessage__ctor_m6391(__this, ___context, ((int32_t)12), ___buffer, /*hidden argument*/&HandshakeMessage__ctor_m6391_MethodInfo);
		TlsServerKeyExchange_verifySignature_m6456(__this, /*hidden argument*/&TlsServerKeyExchange_verifySignature_m6456_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::Update()
extern MethodInfo TlsServerKeyExchange_Update_m6453_MethodInfo;
 void TlsServerKeyExchange_Update_m6453 (TlsServerKeyExchange_t1503 * __this, MethodInfo* method){
	{
		HandshakeMessage_Update_m6396(__this, /*hidden argument*/&HandshakeMessage_Update_m6396_MethodInfo);
		Context_t1445 * L_0 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		NullCheck(L_0);
		TlsServerSettings_t1461 * L_1 = Context_get_ServerSettings_m6094(L_0, /*hidden argument*/&Context_get_ServerSettings_m6094_MethodInfo);
		NullCheck(L_1);
		TlsServerSettings_set_ServerKeyExchange_m6351(L_1, 1, /*hidden argument*/&TlsServerSettings_set_ServerKeyExchange_m6351_MethodInfo);
		Context_t1445 * L_2 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		NullCheck(L_2);
		TlsServerSettings_t1461 * L_3 = Context_get_ServerSettings_m6094(L_2, /*hidden argument*/&Context_get_ServerSettings_m6094_MethodInfo);
		RSAParameters_t1410  L_4 = (__this->___rsaParams_9);
		NullCheck(L_3);
		TlsServerSettings_set_RsaParameters_m6356(L_3, L_4, /*hidden argument*/&TlsServerSettings_set_RsaParameters_m6356_MethodInfo);
		Context_t1445 * L_5 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		NullCheck(L_5);
		TlsServerSettings_t1461 * L_6 = Context_get_ServerSettings_m6094(L_5, /*hidden argument*/&Context_get_ServerSettings_m6094_MethodInfo);
		ByteU5BU5D_t112* L_7 = (__this->___signedParams_10);
		NullCheck(L_6);
		TlsServerSettings_set_SignedParams_m6357(L_6, L_7, /*hidden argument*/&TlsServerSettings_set_SignedParams_m6357_MethodInfo);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::ProcessAsSsl3()
extern MethodInfo TlsServerKeyExchange_ProcessAsSsl3_m6454_MethodInfo;
 void TlsServerKeyExchange_ProcessAsSsl3_m6454 (TlsServerKeyExchange_t1503 * __this, MethodInfo* method){
	{
		VirtActionInvoker0::Invoke(&TlsServerKeyExchange_ProcessAsTls1_m6455_MethodInfo, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::ProcessAsTls1()
 void TlsServerKeyExchange_ProcessAsTls1_m6455 (TlsServerKeyExchange_t1503 * __this, MethodInfo* method){
	RSAParameters_t1410  V_0 = {0};
	{
		Initobj (&RSAParameters_t1410_il2cpp_TypeInfo, (&V_0));
		__this->___rsaParams_9 = V_0;
		RSAParameters_t1410 * L_0 = &(__this->___rsaParams_9);
		int16_t L_1 = TlsStream_ReadInt16_m6374(__this, /*hidden argument*/&TlsStream_ReadInt16_m6374_MethodInfo);
		ByteU5BU5D_t112* L_2 = TlsStream_ReadBytes_m6376(__this, L_1, /*hidden argument*/&TlsStream_ReadBytes_m6376_MethodInfo);
		NullCheck(L_0);
		L_0->___Modulus_6 = L_2;
		RSAParameters_t1410 * L_3 = &(__this->___rsaParams_9);
		int16_t L_4 = TlsStream_ReadInt16_m6374(__this, /*hidden argument*/&TlsStream_ReadInt16_m6374_MethodInfo);
		ByteU5BU5D_t112* L_5 = TlsStream_ReadBytes_m6376(__this, L_4, /*hidden argument*/&TlsStream_ReadBytes_m6376_MethodInfo);
		NullCheck(L_3);
		L_3->___Exponent_7 = L_5;
		int16_t L_6 = TlsStream_ReadInt16_m6374(__this, /*hidden argument*/&TlsStream_ReadInt16_m6374_MethodInfo);
		ByteU5BU5D_t112* L_7 = TlsStream_ReadBytes_m6376(__this, L_6, /*hidden argument*/&TlsStream_ReadBytes_m6376_MethodInfo);
		__this->___signedParams_10 = L_7;
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::verifySignature()
 void TlsServerKeyExchange_verifySignature_m6456 (TlsServerKeyExchange_t1503 * __this, MethodInfo* method){
	MD5SHA1_t1440 * V_0 = {0};
	int32_t V_1 = 0;
	TlsStream_t1457 * V_2 = {0};
	bool V_3 = false;
	{
		MD5SHA1_t1440 * L_0 = (MD5SHA1_t1440 *)il2cpp_codegen_object_new (InitializedTypeInfo(&MD5SHA1_t1440_il2cpp_TypeInfo));
		MD5SHA1__ctor_m5977(L_0, /*hidden argument*/&MD5SHA1__ctor_m5977_MethodInfo);
		V_0 = L_0;
		RSAParameters_t1410 * L_1 = &(__this->___rsaParams_9);
		NullCheck(L_1);
		ByteU5BU5D_t112* L_2 = (L_1->___Modulus_6);
		NullCheck(L_2);
		RSAParameters_t1410 * L_3 = &(__this->___rsaParams_9);
		NullCheck(L_3);
		ByteU5BU5D_t112* L_4 = (L_3->___Exponent_7);
		NullCheck(L_4);
		V_1 = ((int32_t)(((int32_t)((((int32_t)(((Array_t *)L_2)->max_length)))+(((int32_t)(((Array_t *)L_4)->max_length)))))+4));
		TlsStream_t1457 * L_5 = (TlsStream_t1457 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsStream_t1457_il2cpp_TypeInfo));
		TlsStream__ctor_m6363(L_5, /*hidden argument*/&TlsStream__ctor_m6363_MethodInfo);
		V_2 = L_5;
		Context_t1445 * L_6 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		NullCheck(L_6);
		ByteU5BU5D_t112* L_7 = Context_get_RandomCS_m6115(L_6, /*hidden argument*/&Context_get_RandomCS_m6115_MethodInfo);
		NullCheck(V_2);
		TlsStream_Write_m6381(V_2, L_7, /*hidden argument*/&TlsStream_Write_m6381_MethodInfo);
		ByteU5BU5D_t112* L_8 = TlsStream_ToArray_m6383(__this, /*hidden argument*/&TlsStream_ToArray_m6383_MethodInfo);
		NullCheck(V_2);
		VirtActionInvoker3< ByteU5BU5D_t112*, int32_t, int32_t >::Invoke(&TlsStream_Write_m6388_MethodInfo, V_2, L_8, 0, V_1);
		NullCheck(V_2);
		ByteU5BU5D_t112* L_9 = TlsStream_ToArray_m6383(V_2, /*hidden argument*/&TlsStream_ToArray_m6383_MethodInfo);
		NullCheck(V_0);
		HashAlgorithm_ComputeHash_m6616(V_0, L_9, /*hidden argument*/&HashAlgorithm_ComputeHash_m6616_MethodInfo);
		NullCheck(V_2);
		TlsStream_Reset_m6382(V_2, /*hidden argument*/&TlsStream_Reset_m6382_MethodInfo);
		Context_t1445 * L_10 = HandshakeMessage_get_Context_m6392(__this, /*hidden argument*/&HandshakeMessage_get_Context_m6392_MethodInfo);
		NullCheck(L_10);
		TlsServerSettings_t1461 * L_11 = Context_get_ServerSettings_m6094(L_10, /*hidden argument*/&Context_get_ServerSettings_m6094_MethodInfo);
		NullCheck(L_11);
		RSA_t1399 * L_12 = TlsServerSettings_get_CertificateRSA_m6354(L_11, /*hidden argument*/&TlsServerSettings_get_CertificateRSA_m6354_MethodInfo);
		ByteU5BU5D_t112* L_13 = (__this->___signedParams_10);
		NullCheck(V_0);
		bool L_14 = MD5SHA1_VerifySignature_m5982(V_0, L_12, L_13, /*hidden argument*/&MD5SHA1_VerifySignature_m5982_MethodInfo);
		V_3 = L_14;
		if (V_3)
		{
			goto IL_008c;
		}
	}
	{
		TlsException_t1489 * L_15 = (TlsException_t1489 *)il2cpp_codegen_object_new (InitializedTypeInfo(&TlsException_t1489_il2cpp_TypeInfo));
		TlsException__ctor_m6347(L_15, ((int32_t)50), (String_t*) &_stringLiteral841, /*hidden argument*/&TlsException__ctor_m6347_MethodInfo);
		il2cpp_codegen_raise_exception(L_15);
	}

IL_008c:
	{
		return;
	}
}
// Metadata Definition Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange
extern Il2CppType RSAParameters_t1410_0_0_1;
FieldInfo TlsServerKeyExchange_t1503____rsaParams_9_FieldInfo = 
{
	"rsaParams"/* name */
	, &RSAParameters_t1410_0_0_1/* type */
	, &TlsServerKeyExchange_t1503_il2cpp_TypeInfo/* parent */
	, offsetof(TlsServerKeyExchange_t1503, ___rsaParams_9)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType ByteU5BU5D_t112_0_0_1;
FieldInfo TlsServerKeyExchange_t1503____signedParams_10_FieldInfo = 
{
	"signedParams"/* name */
	, &ByteU5BU5D_t112_0_0_1/* type */
	, &TlsServerKeyExchange_t1503_il2cpp_TypeInfo/* parent */
	, offsetof(TlsServerKeyExchange_t1503, ___signedParams_10)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* TlsServerKeyExchange_t1503_FieldInfos[] =
{
	&TlsServerKeyExchange_t1503____rsaParams_9_FieldInfo,
	&TlsServerKeyExchange_t1503____signedParams_10_FieldInfo,
	NULL
};
extern Il2CppType Context_t1445_0_0_0;
extern Il2CppType ByteU5BU5D_t112_0_0_0;
static ParameterInfo TlsServerKeyExchange_t1503_TlsServerKeyExchange__ctor_m6452_ParameterInfos[] = 
{
	{"context", 0, 134218548, &EmptyCustomAttributesCache, &Context_t1445_0_0_0},
	{"buffer", 1, 134218549, &EmptyCustomAttributesCache, &ByteU5BU5D_t112_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
MethodInfo TlsServerKeyExchange__ctor_m6452_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&TlsServerKeyExchange__ctor_m6452/* method */
	, &TlsServerKeyExchange_t1503_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_Object_t/* invoker_method */
	, TlsServerKeyExchange_t1503_TlsServerKeyExchange__ctor_m6452_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 860/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::Update()
MethodInfo TlsServerKeyExchange_Update_m6453_MethodInfo = 
{
	"Update"/* name */
	, (methodPointerType)&TlsServerKeyExchange_Update_m6453/* method */
	, &TlsServerKeyExchange_t1503_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 26/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 861/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::ProcessAsSsl3()
MethodInfo TlsServerKeyExchange_ProcessAsSsl3_m6454_MethodInfo = 
{
	"ProcessAsSsl3"/* name */
	, (methodPointerType)&TlsServerKeyExchange_ProcessAsSsl3_m6454/* method */
	, &TlsServerKeyExchange_t1503_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 25/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 862/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::ProcessAsTls1()
MethodInfo TlsServerKeyExchange_ProcessAsTls1_m6455_MethodInfo = 
{
	"ProcessAsTls1"/* name */
	, (methodPointerType)&TlsServerKeyExchange_ProcessAsTls1_m6455/* method */
	, &TlsServerKeyExchange_t1503_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 196/* flags */
	, 0/* iflags */
	, 24/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 863/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::verifySignature()
MethodInfo TlsServerKeyExchange_verifySignature_m6456_MethodInfo = 
{
	"verifySignature"/* name */
	, (methodPointerType)&TlsServerKeyExchange_verifySignature_m6456/* method */
	, &TlsServerKeyExchange_t1503_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 864/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* TlsServerKeyExchange_t1503_MethodInfos[] =
{
	&TlsServerKeyExchange__ctor_m6452_MethodInfo,
	&TlsServerKeyExchange_Update_m6453_MethodInfo,
	&TlsServerKeyExchange_ProcessAsSsl3_m6454_MethodInfo,
	&TlsServerKeyExchange_ProcessAsTls1_m6455_MethodInfo,
	&TlsServerKeyExchange_verifySignature_m6456_MethodInfo,
	NULL
};
static MethodInfo* TlsServerKeyExchange_t1503_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Object_ToString_m498_MethodInfo,
	&Stream_Dispose_m6683_MethodInfo,
	&TlsStream_get_CanRead_m6367_MethodInfo,
	&TlsStream_get_CanSeek_m6368_MethodInfo,
	&TlsStream_get_CanWrite_m6366_MethodInfo,
	&TlsStream_get_Length_m6371_MethodInfo,
	&TlsStream_get_Position_m6369_MethodInfo,
	&TlsStream_set_Position_m6370_MethodInfo,
	&Stream_Dispose_m6725_MethodInfo,
	&Stream_Close_m6620_MethodInfo,
	&TlsStream_Flush_m6384_MethodInfo,
	&TlsStream_Read_m6387_MethodInfo,
	&Stream_ReadByte_m1448_MethodInfo,
	&TlsStream_Seek_m6386_MethodInfo,
	&TlsStream_SetLength_m6385_MethodInfo,
	&TlsStream_Write_m6388_MethodInfo,
	&Stream_WriteByte_m1441_MethodInfo,
	&Stream_BeginRead_m6689_MethodInfo,
	&Stream_BeginWrite_m6698_MethodInfo,
	&Stream_EndRead_m6691_MethodInfo,
	&Stream_EndWrite_m6699_MethodInfo,
	&TlsServerKeyExchange_ProcessAsTls1_m6455_MethodInfo,
	&TlsServerKeyExchange_ProcessAsSsl3_m6454_MethodInfo,
	&TlsServerKeyExchange_Update_m6453_MethodInfo,
	&HandshakeMessage_EncodeMessage_m6397_MethodInfo,
};
static Il2CppInterfaceOffsetPair TlsServerKeyExchange_t1503_InterfacesOffsets[] = 
{
	{ &IDisposable_t81_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType TlsServerKeyExchange_t1503_0_0_0;
extern Il2CppType TlsServerKeyExchange_t1503_1_0_0;
struct TlsServerKeyExchange_t1503;
TypeInfo TlsServerKeyExchange_t1503_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "TlsServerKeyExchange"/* name */
	, "Mono.Security.Protocol.Tls.Handshake.Client"/* namespaze */
	, TlsServerKeyExchange_t1503_MethodInfos/* methods */
	, NULL/* properties */
	, TlsServerKeyExchange_t1503_FieldInfos/* fields */
	, NULL/* events */
	, &HandshakeMessage_t1456_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &TlsServerKeyExchange_t1503_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, TlsServerKeyExchange_t1503_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &TlsServerKeyExchange_t1503_il2cpp_TypeInfo/* cast_class */
	, &TlsServerKeyExchange_t1503_0_0_0/* byval_arg */
	, &TlsServerKeyExchange_t1503_1_0_0/* this_arg */
	, TlsServerKeyExchange_t1503_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (TlsServerKeyExchange_t1503)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 0/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 28/* vtable_count */
	, 0/* interfaces_count */
	, 1/* interface_offsets_count */

};
// Mono.Math.Prime.PrimalityTest
#include "Mono_Security_Mono_Math_Prime_PrimalityTest.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PrimalityTest_t1381_il2cpp_TypeInfo;
// Mono.Math.Prime.PrimalityTest
#include "Mono_Security_Mono_Math_Prime_PrimalityTestMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Mono.Math.BigInteger
#include "Mono_Security_Mono_Math_BigInteger.h"
// Mono.Math.Prime.ConfidenceFactor
#include "Mono_Security_Mono_Math_Prime_ConfidenceFactor.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void Mono.Math.Prime.PrimalityTest::.ctor(System.Object,System.IntPtr)
extern MethodInfo PrimalityTest__ctor_m6457_MethodInfo;
 void PrimalityTest__ctor_m6457 (PrimalityTest_t1381 * __this, Object_t * ___object, IntPtr_t120 ___method, MethodInfo* method){
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean Mono.Math.Prime.PrimalityTest::Invoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
extern MethodInfo PrimalityTest_Invoke_m6458_MethodInfo;
 bool PrimalityTest_Invoke_m6458 (PrimalityTest_t1381 * __this, BigInteger_t1372 * ___bi, int32_t ___confidence, MethodInfo* method){
	if(__this->___prev_9 != NULL)
	{
		PrimalityTest_Invoke_m6458((PrimalityTest_t1381 *)__this->___prev_9,___bi, ___confidence, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, BigInteger_t1372 * ___bi, int32_t ___confidence, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___bi, ___confidence,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, BigInteger_t1372 * ___bi, int32_t ___confidence, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___bi, ___confidence,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, int32_t ___confidence, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___bi, ___confidence,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
bool pinvoke_delegate_wrapper_PrimalityTest_t1381(Il2CppObject* delegate, BigInteger_t1372 * ___bi, int32_t ___confidence)
{
	typedef int32_t (STDCALL *native_function_ptr_type)(BigInteger_t1372 *, int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___bi' to native representation
	BigInteger_t1372 * ____bi_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'Mono.Math.BigInteger'."));

	// Marshaling of parameter '___confidence' to native representation

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func(____bi_marshaled, ___confidence);

	// Marshaling cleanup of parameter '___bi' native representation

	// Marshaling cleanup of parameter '___confidence' native representation

	return _return_value;
}
// System.IAsyncResult Mono.Math.Prime.PrimalityTest::BeginInvoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor,System.AsyncCallback,System.Object)
extern MethodInfo PrimalityTest_BeginInvoke_m6459_MethodInfo;
 Object_t * PrimalityTest_BeginInvoke_m6459 (PrimalityTest_t1381 * __this, BigInteger_t1372 * ___bi, int32_t ___confidence, AsyncCallback_t487 * ___callback, Object_t * ___object, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = ___bi;
	__d_args[1] = Box(InitializedTypeInfo(&ConfidenceFactor_t1378_il2cpp_TypeInfo), &___confidence);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean Mono.Math.Prime.PrimalityTest::EndInvoke(System.IAsyncResult)
extern MethodInfo PrimalityTest_EndInvoke_m6460_MethodInfo;
 bool PrimalityTest_EndInvoke_m6460 (PrimalityTest_t1381 * __this, Object_t * ___result, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition Mono.Math.Prime.PrimalityTest
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t120_0_0_0;
extern Il2CppType IntPtr_t120_0_0_0;
static ParameterInfo PrimalityTest_t1381_PrimalityTest__ctor_m6457_ParameterInfos[] = 
{
	{"object", 0, 134218550, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134218551, &EmptyCustomAttributesCache, &IntPtr_t120_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_IntPtr_t120 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Math.Prime.PrimalityTest::.ctor(System.Object,System.IntPtr)
MethodInfo PrimalityTest__ctor_m6457_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&PrimalityTest__ctor_m6457/* method */
	, &PrimalityTest_t1381_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_IntPtr_t120/* invoker_method */
	, PrimalityTest_t1381_PrimalityTest__ctor_m6457_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 865/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType BigInteger_t1372_0_0_0;
extern Il2CppType BigInteger_t1372_0_0_0;
extern Il2CppType ConfidenceFactor_t1378_0_0_0;
extern Il2CppType ConfidenceFactor_t1378_0_0_0;
static ParameterInfo PrimalityTest_t1381_PrimalityTest_Invoke_m6458_ParameterInfos[] = 
{
	{"bi", 0, 134218552, &EmptyCustomAttributesCache, &BigInteger_t1372_0_0_0},
	{"confidence", 1, 134218553, &EmptyCustomAttributesCache, &ConfidenceFactor_t1378_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean Mono.Math.Prime.PrimalityTest::Invoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
MethodInfo PrimalityTest_Invoke_m6458_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&PrimalityTest_Invoke_m6458/* method */
	, &PrimalityTest_t1381_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t_Int32_t73/* invoker_method */
	, PrimalityTest_t1381_PrimalityTest_Invoke_m6458_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 866/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType BigInteger_t1372_0_0_0;
extern Il2CppType ConfidenceFactor_t1378_0_0_0;
extern Il2CppType AsyncCallback_t487_0_0_0;
extern Il2CppType AsyncCallback_t487_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo PrimalityTest_t1381_PrimalityTest_BeginInvoke_m6459_ParameterInfos[] = 
{
	{"bi", 0, 134218554, &EmptyCustomAttributesCache, &BigInteger_t1372_0_0_0},
	{"confidence", 1, 134218555, &EmptyCustomAttributesCache, &ConfidenceFactor_t1378_0_0_0},
	{"callback", 2, 134218556, &EmptyCustomAttributesCache, &AsyncCallback_t487_0_0_0},
	{"object", 3, 134218557, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t486_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Int32_t73_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult Mono.Math.Prime.PrimalityTest::BeginInvoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor,System.AsyncCallback,System.Object)
MethodInfo PrimalityTest_BeginInvoke_m6459_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&PrimalityTest_BeginInvoke_m6459/* method */
	, &PrimalityTest_t1381_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t486_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Int32_t73_Object_t_Object_t/* invoker_method */
	, PrimalityTest_t1381_PrimalityTest_BeginInvoke_m6459_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 867/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IAsyncResult_t486_0_0_0;
extern Il2CppType IAsyncResult_t486_0_0_0;
static ParameterInfo PrimalityTest_t1381_PrimalityTest_EndInvoke_m6460_ParameterInfos[] = 
{
	{"result", 0, 134218558, &EmptyCustomAttributesCache, &IAsyncResult_t486_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean Mono.Math.Prime.PrimalityTest::EndInvoke(System.IAsyncResult)
MethodInfo PrimalityTest_EndInvoke_m6460_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&PrimalityTest_EndInvoke_m6460/* method */
	, &PrimalityTest_t1381_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, PrimalityTest_t1381_PrimalityTest_EndInvoke_m6460_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 868/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* PrimalityTest_t1381_MethodInfos[] =
{
	&PrimalityTest__ctor_m6457_MethodInfo,
	&PrimalityTest_Invoke_m6458_MethodInfo,
	&PrimalityTest_BeginInvoke_m6459_MethodInfo,
	&PrimalityTest_EndInvoke_m6460_MethodInfo,
	NULL
};
extern MethodInfo MulticastDelegate_Equals_m3646_MethodInfo;
extern MethodInfo MulticastDelegate_GetHashCode_m3647_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m3648_MethodInfo;
extern MethodInfo Delegate_Clone_m3649_MethodInfo;
extern MethodInfo MulticastDelegate_GetInvocationList_m3650_MethodInfo;
extern MethodInfo MulticastDelegate_CombineImpl_m3651_MethodInfo;
extern MethodInfo MulticastDelegate_RemoveImpl_m3652_MethodInfo;
static MethodInfo* PrimalityTest_t1381_VTable[] =
{
	&MulticastDelegate_Equals_m3646_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&MulticastDelegate_GetHashCode_m3647_MethodInfo,
	&Object_ToString_m498_MethodInfo,
	&MulticastDelegate_GetObjectData_m3648_MethodInfo,
	&Delegate_Clone_m3649_MethodInfo,
	&MulticastDelegate_GetObjectData_m3648_MethodInfo,
	&MulticastDelegate_GetInvocationList_m3650_MethodInfo,
	&MulticastDelegate_CombineImpl_m3651_MethodInfo,
	&MulticastDelegate_RemoveImpl_m3652_MethodInfo,
	&PrimalityTest_Invoke_m6458_MethodInfo,
	&PrimalityTest_BeginInvoke_m6459_MethodInfo,
	&PrimalityTest_EndInvoke_m6460_MethodInfo,
};
extern TypeInfo ICloneable_t755_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t305_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair PrimalityTest_t1381_InterfacesOffsets[] = 
{
	{ &ICloneable_t755_il2cpp_TypeInfo, 4},
	{ &ISerializable_t305_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType PrimalityTest_t1381_0_0_0;
extern Il2CppType PrimalityTest_t1381_1_0_0;
extern TypeInfo MulticastDelegate_t608_il2cpp_TypeInfo;
struct PrimalityTest_t1381;
TypeInfo PrimalityTest_t1381_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "PrimalityTest"/* name */
	, "Mono.Math.Prime"/* namespaze */
	, PrimalityTest_t1381_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t608_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &PrimalityTest_t1381_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, PrimalityTest_t1381_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &PrimalityTest_t1381_il2cpp_TypeInfo/* cast_class */
	, &PrimalityTest_t1381_0_0_0/* byval_arg */
	, &PrimalityTest_t1381_1_0_0/* this_arg */
	, PrimalityTest_t1381_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_PrimalityTest_t1381/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (PrimalityTest_t1381)/* instance_size */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// Mono.Security.Protocol.Tls.CertificateValidationCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateValidati.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CertificateValidationCallback_t1484_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.CertificateValidationCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateValidatiMethodDeclarations.h"



// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo CertificateValidationCallback__ctor_m6461_MethodInfo;
 void CertificateValidationCallback__ctor_m6461 (CertificateValidationCallback_t1484 * __this, Object_t * ___object, IntPtr_t120 ___method, MethodInfo* method){
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::Invoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern MethodInfo CertificateValidationCallback_Invoke_m6462_MethodInfo;
 bool CertificateValidationCallback_Invoke_m6462 (CertificateValidationCallback_t1484 * __this, X509Certificate_t1471 * ___certificate, Int32U5BU5D_t1196* ___certificateErrors, MethodInfo* method){
	if(__this->___prev_9 != NULL)
	{
		CertificateValidationCallback_Invoke_m6462((CertificateValidationCallback_t1484 *)__this->___prev_9,___certificate, ___certificateErrors, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, X509Certificate_t1471 * ___certificate, Int32U5BU5D_t1196* ___certificateErrors, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___certificate, ___certificateErrors,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, X509Certificate_t1471 * ___certificate, Int32U5BU5D_t1196* ___certificateErrors, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___certificate, ___certificateErrors,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, Int32U5BU5D_t1196* ___certificateErrors, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___certificate, ___certificateErrors,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
bool pinvoke_delegate_wrapper_CertificateValidationCallback_t1484(Il2CppObject* delegate, X509Certificate_t1471 * ___certificate, Int32U5BU5D_t1196* ___certificateErrors)
{
	typedef int32_t (STDCALL *native_function_ptr_type)(X509Certificate_t1471 *, int32_t*);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___certificate' to native representation
	X509Certificate_t1471 * ____certificate_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509Certificate'."));

	// Marshaling of parameter '___certificateErrors' to native representation
	int32_t* ____certificateErrors_marshaled = { 0 };
	____certificateErrors_marshaled = il2cpp_codegen_marshal_array<int32_t>((Il2CppCodeGenArray*)___certificateErrors);

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func(____certificate_marshaled, ____certificateErrors_marshaled);

	// Marshaling cleanup of parameter '___certificate' native representation

	// Marshaling cleanup of parameter '___certificateErrors' native representation

	return _return_value;
}
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[],System.AsyncCallback,System.Object)
extern MethodInfo CertificateValidationCallback_BeginInvoke_m6463_MethodInfo;
 Object_t * CertificateValidationCallback_BeginInvoke_m6463 (CertificateValidationCallback_t1484 * __this, X509Certificate_t1471 * ___certificate, Int32U5BU5D_t1196* ___certificateErrors, AsyncCallback_t487 * ___callback, Object_t * ___object, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = ___certificate;
	__d_args[1] = ___certificateErrors;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo CertificateValidationCallback_EndInvoke_m6464_MethodInfo;
 bool CertificateValidationCallback_EndInvoke_m6464 (CertificateValidationCallback_t1484 * __this, Object_t * ___result, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// Metadata Definition Mono.Security.Protocol.Tls.CertificateValidationCallback
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t120_0_0_0;
static ParameterInfo CertificateValidationCallback_t1484_CertificateValidationCallback__ctor_m6461_ParameterInfos[] = 
{
	{"object", 0, 134218559, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134218560, &EmptyCustomAttributesCache, &IntPtr_t120_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_IntPtr_t120 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback::.ctor(System.Object,System.IntPtr)
MethodInfo CertificateValidationCallback__ctor_m6461_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CertificateValidationCallback__ctor_m6461/* method */
	, &CertificateValidationCallback_t1484_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_IntPtr_t120/* invoker_method */
	, CertificateValidationCallback_t1484_CertificateValidationCallback__ctor_m6461_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 869/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType X509Certificate_t1471_0_0_0;
extern Il2CppType X509Certificate_t1471_0_0_0;
extern Il2CppType Int32U5BU5D_t1196_0_0_0;
extern Il2CppType Int32U5BU5D_t1196_0_0_0;
static ParameterInfo CertificateValidationCallback_t1484_CertificateValidationCallback_Invoke_m6462_ParameterInfos[] = 
{
	{"certificate", 0, 134218561, &EmptyCustomAttributesCache, &X509Certificate_t1471_0_0_0},
	{"certificateErrors", 1, 134218562, &EmptyCustomAttributesCache, &Int32U5BU5D_t1196_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::Invoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
MethodInfo CertificateValidationCallback_Invoke_m6462_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CertificateValidationCallback_Invoke_m6462/* method */
	, &CertificateValidationCallback_t1484_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t_Object_t/* invoker_method */
	, CertificateValidationCallback_t1484_CertificateValidationCallback_Invoke_m6462_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 870/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType X509Certificate_t1471_0_0_0;
extern Il2CppType Int32U5BU5D_t1196_0_0_0;
extern Il2CppType AsyncCallback_t487_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo CertificateValidationCallback_t1484_CertificateValidationCallback_BeginInvoke_m6463_ParameterInfos[] = 
{
	{"certificate", 0, 134218563, &EmptyCustomAttributesCache, &X509Certificate_t1471_0_0_0},
	{"certificateErrors", 1, 134218564, &EmptyCustomAttributesCache, &Int32U5BU5D_t1196_0_0_0},
	{"callback", 2, 134218565, &EmptyCustomAttributesCache, &AsyncCallback_t487_0_0_0},
	{"object", 3, 134218566, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t486_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[],System.AsyncCallback,System.Object)
MethodInfo CertificateValidationCallback_BeginInvoke_m6463_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&CertificateValidationCallback_BeginInvoke_m6463/* method */
	, &CertificateValidationCallback_t1484_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t486_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, CertificateValidationCallback_t1484_CertificateValidationCallback_BeginInvoke_m6463_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 871/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IAsyncResult_t486_0_0_0;
static ParameterInfo CertificateValidationCallback_t1484_CertificateValidationCallback_EndInvoke_m6464_ParameterInfos[] = 
{
	{"result", 0, 134218567, &EmptyCustomAttributesCache, &IAsyncResult_t486_0_0_0},
};
extern Il2CppType Boolean_t74_0_0_0;
extern void* RuntimeInvoker_Boolean_t74_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::EndInvoke(System.IAsyncResult)
MethodInfo CertificateValidationCallback_EndInvoke_m6464_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&CertificateValidationCallback_EndInvoke_m6464/* method */
	, &CertificateValidationCallback_t1484_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t74_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t74_Object_t/* invoker_method */
	, CertificateValidationCallback_t1484_CertificateValidationCallback_EndInvoke_m6464_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 872/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* CertificateValidationCallback_t1484_MethodInfos[] =
{
	&CertificateValidationCallback__ctor_m6461_MethodInfo,
	&CertificateValidationCallback_Invoke_m6462_MethodInfo,
	&CertificateValidationCallback_BeginInvoke_m6463_MethodInfo,
	&CertificateValidationCallback_EndInvoke_m6464_MethodInfo,
	NULL
};
static MethodInfo* CertificateValidationCallback_t1484_VTable[] =
{
	&MulticastDelegate_Equals_m3646_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&MulticastDelegate_GetHashCode_m3647_MethodInfo,
	&Object_ToString_m498_MethodInfo,
	&MulticastDelegate_GetObjectData_m3648_MethodInfo,
	&Delegate_Clone_m3649_MethodInfo,
	&MulticastDelegate_GetObjectData_m3648_MethodInfo,
	&MulticastDelegate_GetInvocationList_m3650_MethodInfo,
	&MulticastDelegate_CombineImpl_m3651_MethodInfo,
	&MulticastDelegate_RemoveImpl_m3652_MethodInfo,
	&CertificateValidationCallback_Invoke_m6462_MethodInfo,
	&CertificateValidationCallback_BeginInvoke_m6463_MethodInfo,
	&CertificateValidationCallback_EndInvoke_m6464_MethodInfo,
};
static Il2CppInterfaceOffsetPair CertificateValidationCallback_t1484_InterfacesOffsets[] = 
{
	{ &ICloneable_t755_il2cpp_TypeInfo, 4},
	{ &ISerializable_t305_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType CertificateValidationCallback_t1484_0_0_0;
extern Il2CppType CertificateValidationCallback_t1484_1_0_0;
struct CertificateValidationCallback_t1484;
TypeInfo CertificateValidationCallback_t1484_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "CertificateValidationCallback"/* name */
	, "Mono.Security.Protocol.Tls"/* namespaze */
	, CertificateValidationCallback_t1484_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t608_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CertificateValidationCallback_t1484_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CertificateValidationCallback_t1484_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CertificateValidationCallback_t1484_il2cpp_TypeInfo/* cast_class */
	, &CertificateValidationCallback_t1484_0_0_0/* byval_arg */
	, &CertificateValidationCallback_t1484_1_0_0/* this_arg */
	, CertificateValidationCallback_t1484_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_CertificateValidationCallback_t1484/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CertificateValidationCallback_t1484)/* instance_size */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// Mono.Security.Protocol.Tls.CertificateValidationCallback2
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateValidati_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CertificateValidationCallback2_t1485_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.CertificateValidationCallback2
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateValidati_0MethodDeclarations.h"



// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback2::.ctor(System.Object,System.IntPtr)
extern MethodInfo CertificateValidationCallback2__ctor_m6465_MethodInfo;
 void CertificateValidationCallback2__ctor_m6465 (CertificateValidationCallback2_t1485 * __this, Object_t * ___object, IntPtr_t120 ___method, MethodInfo* method){
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::Invoke(Mono.Security.X509.X509CertificateCollection)
extern MethodInfo CertificateValidationCallback2_Invoke_m6466_MethodInfo;
 ValidationResult_t1483 * CertificateValidationCallback2_Invoke_m6466 (CertificateValidationCallback2_t1485 * __this, X509CertificateCollection_t1413 * ___collection, MethodInfo* method){
	if(__this->___prev_9 != NULL)
	{
		CertificateValidationCallback2_Invoke_m6466((CertificateValidationCallback2_t1485 *)__this->___prev_9,___collection, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef ValidationResult_t1483 * (*FunctionPointerType) (Object_t *, Object_t * __this, X509CertificateCollection_t1413 * ___collection, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___collection,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef ValidationResult_t1483 * (*FunctionPointerType) (Object_t * __this, X509CertificateCollection_t1413 * ___collection, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___collection,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef ValidationResult_t1483 * (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___collection,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
ValidationResult_t1483 * pinvoke_delegate_wrapper_CertificateValidationCallback2_t1485(Il2CppObject* delegate, X509CertificateCollection_t1413 * ___collection)
{
	typedef ValidationResult_t1483 * (STDCALL *native_function_ptr_type)(X509CertificateCollection_t1413 *);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___collection' to native representation
	X509CertificateCollection_t1413 * ____collection_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'Mono.Security.X509.X509CertificateCollection'."));

	// Native function invocation and marshaling of return value back from native representation
	ValidationResult_t1483 * _return_value = _il2cpp_pinvoke_func(____collection_marshaled);
	ValidationResult_t1483 * __return_value_unmarshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'Mono.Security.Protocol.Tls.ValidationResult'."));

	// Marshaling cleanup of parameter '___collection' native representation

	return __return_value_unmarshaled;
}
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::BeginInvoke(Mono.Security.X509.X509CertificateCollection,System.AsyncCallback,System.Object)
extern MethodInfo CertificateValidationCallback2_BeginInvoke_m6467_MethodInfo;
 Object_t * CertificateValidationCallback2_BeginInvoke_m6467 (CertificateValidationCallback2_t1485 * __this, X509CertificateCollection_t1413 * ___collection, AsyncCallback_t487 * ___callback, Object_t * ___object, MethodInfo* method){
	void *__d_args[2] = {0};
	__d_args[0] = ___collection;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::EndInvoke(System.IAsyncResult)
extern MethodInfo CertificateValidationCallback2_EndInvoke_m6468_MethodInfo;
 ValidationResult_t1483 * CertificateValidationCallback2_EndInvoke_m6468 (CertificateValidationCallback2_t1485 * __this, Object_t * ___result, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (ValidationResult_t1483 *)__result;
}
// Metadata Definition Mono.Security.Protocol.Tls.CertificateValidationCallback2
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t120_0_0_0;
static ParameterInfo CertificateValidationCallback2_t1485_CertificateValidationCallback2__ctor_m6465_ParameterInfos[] = 
{
	{"object", 0, 134218568, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134218569, &EmptyCustomAttributesCache, &IntPtr_t120_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_IntPtr_t120 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback2::.ctor(System.Object,System.IntPtr)
MethodInfo CertificateValidationCallback2__ctor_m6465_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CertificateValidationCallback2__ctor_m6465/* method */
	, &CertificateValidationCallback2_t1485_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_IntPtr_t120/* invoker_method */
	, CertificateValidationCallback2_t1485_CertificateValidationCallback2__ctor_m6465_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 873/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType X509CertificateCollection_t1413_0_0_0;
static ParameterInfo CertificateValidationCallback2_t1485_CertificateValidationCallback2_Invoke_m6466_ParameterInfos[] = 
{
	{"collection", 0, 134218570, &EmptyCustomAttributesCache, &X509CertificateCollection_t1413_0_0_0},
};
extern Il2CppType ValidationResult_t1483_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::Invoke(Mono.Security.X509.X509CertificateCollection)
MethodInfo CertificateValidationCallback2_Invoke_m6466_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CertificateValidationCallback2_Invoke_m6466/* method */
	, &CertificateValidationCallback2_t1485_il2cpp_TypeInfo/* declaring_type */
	, &ValidationResult_t1483_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, CertificateValidationCallback2_t1485_CertificateValidationCallback2_Invoke_m6466_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 874/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType X509CertificateCollection_t1413_0_0_0;
extern Il2CppType AsyncCallback_t487_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo CertificateValidationCallback2_t1485_CertificateValidationCallback2_BeginInvoke_m6467_ParameterInfos[] = 
{
	{"collection", 0, 134218571, &EmptyCustomAttributesCache, &X509CertificateCollection_t1413_0_0_0},
	{"callback", 1, 134218572, &EmptyCustomAttributesCache, &AsyncCallback_t487_0_0_0},
	{"object", 2, 134218573, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t486_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::BeginInvoke(Mono.Security.X509.X509CertificateCollection,System.AsyncCallback,System.Object)
MethodInfo CertificateValidationCallback2_BeginInvoke_m6467_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&CertificateValidationCallback2_BeginInvoke_m6467/* method */
	, &CertificateValidationCallback2_t1485_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t486_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, CertificateValidationCallback2_t1485_CertificateValidationCallback2_BeginInvoke_m6467_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 875/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IAsyncResult_t486_0_0_0;
static ParameterInfo CertificateValidationCallback2_t1485_CertificateValidationCallback2_EndInvoke_m6468_ParameterInfos[] = 
{
	{"result", 0, 134218574, &EmptyCustomAttributesCache, &IAsyncResult_t486_0_0_0},
};
extern Il2CppType ValidationResult_t1483_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::EndInvoke(System.IAsyncResult)
MethodInfo CertificateValidationCallback2_EndInvoke_m6468_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&CertificateValidationCallback2_EndInvoke_m6468/* method */
	, &CertificateValidationCallback2_t1485_il2cpp_TypeInfo/* declaring_type */
	, &ValidationResult_t1483_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, CertificateValidationCallback2_t1485_CertificateValidationCallback2_EndInvoke_m6468_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 876/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* CertificateValidationCallback2_t1485_MethodInfos[] =
{
	&CertificateValidationCallback2__ctor_m6465_MethodInfo,
	&CertificateValidationCallback2_Invoke_m6466_MethodInfo,
	&CertificateValidationCallback2_BeginInvoke_m6467_MethodInfo,
	&CertificateValidationCallback2_EndInvoke_m6468_MethodInfo,
	NULL
};
static MethodInfo* CertificateValidationCallback2_t1485_VTable[] =
{
	&MulticastDelegate_Equals_m3646_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&MulticastDelegate_GetHashCode_m3647_MethodInfo,
	&Object_ToString_m498_MethodInfo,
	&MulticastDelegate_GetObjectData_m3648_MethodInfo,
	&Delegate_Clone_m3649_MethodInfo,
	&MulticastDelegate_GetObjectData_m3648_MethodInfo,
	&MulticastDelegate_GetInvocationList_m3650_MethodInfo,
	&MulticastDelegate_CombineImpl_m3651_MethodInfo,
	&MulticastDelegate_RemoveImpl_m3652_MethodInfo,
	&CertificateValidationCallback2_Invoke_m6466_MethodInfo,
	&CertificateValidationCallback2_BeginInvoke_m6467_MethodInfo,
	&CertificateValidationCallback2_EndInvoke_m6468_MethodInfo,
};
static Il2CppInterfaceOffsetPair CertificateValidationCallback2_t1485_InterfacesOffsets[] = 
{
	{ &ICloneable_t755_il2cpp_TypeInfo, 4},
	{ &ISerializable_t305_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType CertificateValidationCallback2_t1485_0_0_0;
extern Il2CppType CertificateValidationCallback2_t1485_1_0_0;
struct CertificateValidationCallback2_t1485;
TypeInfo CertificateValidationCallback2_t1485_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "CertificateValidationCallback2"/* name */
	, "Mono.Security.Protocol.Tls"/* namespaze */
	, CertificateValidationCallback2_t1485_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t608_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CertificateValidationCallback2_t1485_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CertificateValidationCallback2_t1485_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CertificateValidationCallback2_t1485_il2cpp_TypeInfo/* cast_class */
	, &CertificateValidationCallback2_t1485_0_0_0/* byval_arg */
	, &CertificateValidationCallback2_t1485_1_0_0/* this_arg */
	, CertificateValidationCallback2_t1485_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_CertificateValidationCallback2_t1485/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CertificateValidationCallback2_t1485)/* instance_size */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// Mono.Security.Protocol.Tls.CertificateSelectionCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateSelectio.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CertificateSelectionCallback_t1468_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateSelectioMethodDeclarations.h"

// System.Security.Cryptography.X509Certificates.X509CertificateCollection
#include "System_System_Security_Cryptography_X509Certificates_X509Cer.h"


// System.Void Mono.Security.Protocol.Tls.CertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo CertificateSelectionCallback__ctor_m6469_MethodInfo;
 void CertificateSelectionCallback__ctor_m6469 (CertificateSelectionCallback_t1468 * __this, Object_t * ___object, IntPtr_t120 ___method, MethodInfo* method){
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern MethodInfo CertificateSelectionCallback_Invoke_m6470_MethodInfo;
 X509Certificate_t1471 * CertificateSelectionCallback_Invoke_m6470 (CertificateSelectionCallback_t1468 * __this, X509CertificateCollection_t1453 * ___clientCertificates, X509Certificate_t1471 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1453 * ___serverRequestedCertificates, MethodInfo* method){
	if(__this->___prev_9 != NULL)
	{
		CertificateSelectionCallback_Invoke_m6470((CertificateSelectionCallback_t1468 *)__this->___prev_9,___clientCertificates, ___serverCertificate, ___targetHost, ___serverRequestedCertificates, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef X509Certificate_t1471 * (*FunctionPointerType) (Object_t *, Object_t * __this, X509CertificateCollection_t1453 * ___clientCertificates, X509Certificate_t1471 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1453 * ___serverRequestedCertificates, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___clientCertificates, ___serverCertificate, ___targetHost, ___serverRequestedCertificates,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef X509Certificate_t1471 * (*FunctionPointerType) (Object_t * __this, X509CertificateCollection_t1453 * ___clientCertificates, X509Certificate_t1471 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1453 * ___serverRequestedCertificates, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___clientCertificates, ___serverCertificate, ___targetHost, ___serverRequestedCertificates,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef X509Certificate_t1471 * (*FunctionPointerType) (Object_t * __this, X509Certificate_t1471 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1453 * ___serverRequestedCertificates, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___clientCertificates, ___serverCertificate, ___targetHost, ___serverRequestedCertificates,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
X509Certificate_t1471 * pinvoke_delegate_wrapper_CertificateSelectionCallback_t1468(Il2CppObject* delegate, X509CertificateCollection_t1453 * ___clientCertificates, X509Certificate_t1471 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1453 * ___serverRequestedCertificates)
{
	typedef X509Certificate_t1471 * (STDCALL *native_function_ptr_type)(X509CertificateCollection_t1453 *, X509Certificate_t1471 *, char*, X509CertificateCollection_t1453 *);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___clientCertificates' to native representation
	X509CertificateCollection_t1453 * ____clientCertificates_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509CertificateCollection'."));

	// Marshaling of parameter '___serverCertificate' to native representation
	X509Certificate_t1471 * ____serverCertificate_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509Certificate'."));

	// Marshaling of parameter '___targetHost' to native representation
	char* ____targetHost_marshaled = { 0 };
	____targetHost_marshaled = il2cpp_codegen_marshal_string(___targetHost);

	// Marshaling of parameter '___serverRequestedCertificates' to native representation
	X509CertificateCollection_t1453 * ____serverRequestedCertificates_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509CertificateCollection'."));

	// Native function invocation and marshaling of return value back from native representation
	X509Certificate_t1471 * _return_value = _il2cpp_pinvoke_func(____clientCertificates_marshaled, ____serverCertificate_marshaled, ____targetHost_marshaled, ____serverRequestedCertificates_marshaled);
	X509Certificate_t1471 * __return_value_unmarshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509Certificate'."));

	// Marshaling cleanup of parameter '___clientCertificates' native representation

	// Marshaling cleanup of parameter '___serverCertificate' native representation

	// Marshaling cleanup of parameter '___targetHost' native representation
	il2cpp_codegen_marshal_free(____targetHost_marshaled);
	____targetHost_marshaled = NULL;

	// Marshaling cleanup of parameter '___serverRequestedCertificates' native representation

	return __return_value_unmarshaled;
}
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateSelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.AsyncCallback,System.Object)
extern MethodInfo CertificateSelectionCallback_BeginInvoke_m6471_MethodInfo;
 Object_t * CertificateSelectionCallback_BeginInvoke_m6471 (CertificateSelectionCallback_t1468 * __this, X509CertificateCollection_t1453 * ___clientCertificates, X509Certificate_t1471 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1453 * ___serverRequestedCertificates, AsyncCallback_t487 * ___callback, Object_t * ___object, MethodInfo* method){
	void *__d_args[5] = {0};
	__d_args[0] = ___clientCertificates;
	__d_args[1] = ___serverCertificate;
	__d_args[2] = ___targetHost;
	__d_args[3] = ___serverRequestedCertificates;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo CertificateSelectionCallback_EndInvoke_m6472_MethodInfo;
 X509Certificate_t1471 * CertificateSelectionCallback_EndInvoke_m6472 (CertificateSelectionCallback_t1468 * __this, Object_t * ___result, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (X509Certificate_t1471 *)__result;
}
// Metadata Definition Mono.Security.Protocol.Tls.CertificateSelectionCallback
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t120_0_0_0;
static ParameterInfo CertificateSelectionCallback_t1468_CertificateSelectionCallback__ctor_m6469_ParameterInfos[] = 
{
	{"object", 0, 134218575, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134218576, &EmptyCustomAttributesCache, &IntPtr_t120_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_IntPtr_t120 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.CertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
MethodInfo CertificateSelectionCallback__ctor_m6469_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CertificateSelectionCallback__ctor_m6469/* method */
	, &CertificateSelectionCallback_t1468_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_IntPtr_t120/* invoker_method */
	, CertificateSelectionCallback_t1468_CertificateSelectionCallback__ctor_m6469_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 877/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType X509CertificateCollection_t1453_0_0_0;
extern Il2CppType X509CertificateCollection_t1453_0_0_0;
extern Il2CppType X509Certificate_t1471_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType X509CertificateCollection_t1453_0_0_0;
static ParameterInfo CertificateSelectionCallback_t1468_CertificateSelectionCallback_Invoke_m6470_ParameterInfos[] = 
{
	{"clientCertificates", 0, 134218577, &EmptyCustomAttributesCache, &X509CertificateCollection_t1453_0_0_0},
	{"serverCertificate", 1, 134218578, &EmptyCustomAttributesCache, &X509Certificate_t1471_0_0_0},
	{"targetHost", 2, 134218579, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"serverRequestedCertificates", 3, 134218580, &EmptyCustomAttributesCache, &X509CertificateCollection_t1453_0_0_0},
};
extern Il2CppType X509Certificate_t1471_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
MethodInfo CertificateSelectionCallback_Invoke_m6470_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CertificateSelectionCallback_Invoke_m6470/* method */
	, &CertificateSelectionCallback_t1468_il2cpp_TypeInfo/* declaring_type */
	, &X509Certificate_t1471_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, CertificateSelectionCallback_t1468_CertificateSelectionCallback_Invoke_m6470_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 878/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType X509CertificateCollection_t1453_0_0_0;
extern Il2CppType X509Certificate_t1471_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType X509CertificateCollection_t1453_0_0_0;
extern Il2CppType AsyncCallback_t487_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo CertificateSelectionCallback_t1468_CertificateSelectionCallback_BeginInvoke_m6471_ParameterInfos[] = 
{
	{"clientCertificates", 0, 134218581, &EmptyCustomAttributesCache, &X509CertificateCollection_t1453_0_0_0},
	{"serverCertificate", 1, 134218582, &EmptyCustomAttributesCache, &X509Certificate_t1471_0_0_0},
	{"targetHost", 2, 134218583, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"serverRequestedCertificates", 3, 134218584, &EmptyCustomAttributesCache, &X509CertificateCollection_t1453_0_0_0},
	{"callback", 4, 134218585, &EmptyCustomAttributesCache, &AsyncCallback_t487_0_0_0},
	{"object", 5, 134218586, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t486_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateSelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.AsyncCallback,System.Object)
MethodInfo CertificateSelectionCallback_BeginInvoke_m6471_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&CertificateSelectionCallback_BeginInvoke_m6471/* method */
	, &CertificateSelectionCallback_t1468_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t486_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, CertificateSelectionCallback_t1468_CertificateSelectionCallback_BeginInvoke_m6471_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 6/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 879/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IAsyncResult_t486_0_0_0;
static ParameterInfo CertificateSelectionCallback_t1468_CertificateSelectionCallback_EndInvoke_m6472_ParameterInfos[] = 
{
	{"result", 0, 134218587, &EmptyCustomAttributesCache, &IAsyncResult_t486_0_0_0},
};
extern Il2CppType X509Certificate_t1471_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::EndInvoke(System.IAsyncResult)
MethodInfo CertificateSelectionCallback_EndInvoke_m6472_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&CertificateSelectionCallback_EndInvoke_m6472/* method */
	, &CertificateSelectionCallback_t1468_il2cpp_TypeInfo/* declaring_type */
	, &X509Certificate_t1471_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, CertificateSelectionCallback_t1468_CertificateSelectionCallback_EndInvoke_m6472_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 880/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* CertificateSelectionCallback_t1468_MethodInfos[] =
{
	&CertificateSelectionCallback__ctor_m6469_MethodInfo,
	&CertificateSelectionCallback_Invoke_m6470_MethodInfo,
	&CertificateSelectionCallback_BeginInvoke_m6471_MethodInfo,
	&CertificateSelectionCallback_EndInvoke_m6472_MethodInfo,
	NULL
};
static MethodInfo* CertificateSelectionCallback_t1468_VTable[] =
{
	&MulticastDelegate_Equals_m3646_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&MulticastDelegate_GetHashCode_m3647_MethodInfo,
	&Object_ToString_m498_MethodInfo,
	&MulticastDelegate_GetObjectData_m3648_MethodInfo,
	&Delegate_Clone_m3649_MethodInfo,
	&MulticastDelegate_GetObjectData_m3648_MethodInfo,
	&MulticastDelegate_GetInvocationList_m3650_MethodInfo,
	&MulticastDelegate_CombineImpl_m3651_MethodInfo,
	&MulticastDelegate_RemoveImpl_m3652_MethodInfo,
	&CertificateSelectionCallback_Invoke_m6470_MethodInfo,
	&CertificateSelectionCallback_BeginInvoke_m6471_MethodInfo,
	&CertificateSelectionCallback_EndInvoke_m6472_MethodInfo,
};
static Il2CppInterfaceOffsetPair CertificateSelectionCallback_t1468_InterfacesOffsets[] = 
{
	{ &ICloneable_t755_il2cpp_TypeInfo, 4},
	{ &ISerializable_t305_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType CertificateSelectionCallback_t1468_0_0_0;
extern Il2CppType CertificateSelectionCallback_t1468_1_0_0;
struct CertificateSelectionCallback_t1468;
TypeInfo CertificateSelectionCallback_t1468_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "CertificateSelectionCallback"/* name */
	, "Mono.Security.Protocol.Tls"/* namespaze */
	, CertificateSelectionCallback_t1468_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t608_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CertificateSelectionCallback_t1468_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CertificateSelectionCallback_t1468_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CertificateSelectionCallback_t1468_il2cpp_TypeInfo/* cast_class */
	, &CertificateSelectionCallback_t1468_0_0_0/* byval_arg */
	, &CertificateSelectionCallback_t1468_1_0_0/* this_arg */
	, CertificateSelectionCallback_t1468_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_CertificateSelectionCallback_t1468/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CertificateSelectionCallback_t1468)/* instance_size */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_PrivateKeySelection.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo PrivateKeySelectionCallback_t1469_il2cpp_TypeInfo;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
#include "Mono_Security_Mono_Security_Protocol_Tls_PrivateKeySelectionMethodDeclarations.h"

// System.Security.Cryptography.AsymmetricAlgorithm
#include "mscorlib_System_Security_Cryptography_AsymmetricAlgorithm.h"


// System.Void Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::.ctor(System.Object,System.IntPtr)
extern MethodInfo PrivateKeySelectionCallback__ctor_m6473_MethodInfo;
 void PrivateKeySelectionCallback__ctor_m6473 (PrivateKeySelectionCallback_t1469 * __this, Object_t * ___object, IntPtr_t120 ___method, MethodInfo* method){
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern MethodInfo PrivateKeySelectionCallback_Invoke_m6474_MethodInfo;
 AsymmetricAlgorithm_t1418 * PrivateKeySelectionCallback_Invoke_m6474 (PrivateKeySelectionCallback_t1469 * __this, X509Certificate_t1471 * ___certificate, String_t* ___targetHost, MethodInfo* method){
	if(__this->___prev_9 != NULL)
	{
		PrivateKeySelectionCallback_Invoke_m6474((PrivateKeySelectionCallback_t1469 *)__this->___prev_9,___certificate, ___targetHost, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef AsymmetricAlgorithm_t1418 * (*FunctionPointerType) (Object_t *, Object_t * __this, X509Certificate_t1471 * ___certificate, String_t* ___targetHost, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___certificate, ___targetHost,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef AsymmetricAlgorithm_t1418 * (*FunctionPointerType) (Object_t * __this, X509Certificate_t1471 * ___certificate, String_t* ___targetHost, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___certificate, ___targetHost,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef AsymmetricAlgorithm_t1418 * (*FunctionPointerType) (Object_t * __this, String_t* ___targetHost, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___certificate, ___targetHost,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
AsymmetricAlgorithm_t1418 * pinvoke_delegate_wrapper_PrivateKeySelectionCallback_t1469(Il2CppObject* delegate, X509Certificate_t1471 * ___certificate, String_t* ___targetHost)
{
	typedef AsymmetricAlgorithm_t1418 * (STDCALL *native_function_ptr_type)(X509Certificate_t1471 *, char*);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___certificate' to native representation
	X509Certificate_t1471 * ____certificate_marshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509Certificate'."));

	// Marshaling of parameter '___targetHost' to native representation
	char* ____targetHost_marshaled = { 0 };
	____targetHost_marshaled = il2cpp_codegen_marshal_string(___targetHost);

	// Native function invocation and marshaling of return value back from native representation
	AsymmetricAlgorithm_t1418 * _return_value = _il2cpp_pinvoke_func(____certificate_marshaled, ____targetHost_marshaled);
	AsymmetricAlgorithm_t1418 * __return_value_unmarshaled = { 0 };
	il2cpp_codegen_raise_exception(il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.AsymmetricAlgorithm'."));

	// Marshaling cleanup of parameter '___certificate' native representation

	// Marshaling cleanup of parameter '___targetHost' native representation
	il2cpp_codegen_marshal_free(____targetHost_marshaled);
	____targetHost_marshaled = NULL;

	return __return_value_unmarshaled;
}
// System.IAsyncResult Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.AsyncCallback,System.Object)
extern MethodInfo PrivateKeySelectionCallback_BeginInvoke_m6475_MethodInfo;
 Object_t * PrivateKeySelectionCallback_BeginInvoke_m6475 (PrivateKeySelectionCallback_t1469 * __this, X509Certificate_t1471 * ___certificate, String_t* ___targetHost, AsyncCallback_t487 * ___callback, Object_t * ___object, MethodInfo* method){
	void *__d_args[3] = {0};
	__d_args[0] = ___certificate;
	__d_args[1] = ___targetHost;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::EndInvoke(System.IAsyncResult)
extern MethodInfo PrivateKeySelectionCallback_EndInvoke_m6476_MethodInfo;
 AsymmetricAlgorithm_t1418 * PrivateKeySelectionCallback_EndInvoke_m6476 (PrivateKeySelectionCallback_t1469 * __this, Object_t * ___result, MethodInfo* method){
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (AsymmetricAlgorithm_t1418 *)__result;
}
// Metadata Definition Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t120_0_0_0;
static ParameterInfo PrivateKeySelectionCallback_t1469_PrivateKeySelectionCallback__ctor_m6473_ParameterInfos[] = 
{
	{"object", 0, 134218588, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134218589, &EmptyCustomAttributesCache, &IntPtr_t120_0_0_0},
};
extern Il2CppType Void_t72_0_0_0;
extern void* RuntimeInvoker_Void_t72_Object_t_IntPtr_t120 (MethodInfo* method, void* obj, void** args);
// System.Void Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::.ctor(System.Object,System.IntPtr)
MethodInfo PrivateKeySelectionCallback__ctor_m6473_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&PrivateKeySelectionCallback__ctor_m6473/* method */
	, &PrivateKeySelectionCallback_t1469_il2cpp_TypeInfo/* declaring_type */
	, &Void_t72_0_0_0/* return_type */
	, RuntimeInvoker_Void_t72_Object_t_IntPtr_t120/* invoker_method */
	, PrivateKeySelectionCallback_t1469_PrivateKeySelectionCallback__ctor_m6473_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 881/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType X509Certificate_t1471_0_0_0;
extern Il2CppType String_t_0_0_0;
static ParameterInfo PrivateKeySelectionCallback_t1469_PrivateKeySelectionCallback_Invoke_m6474_ParameterInfos[] = 
{
	{"certificate", 0, 134218590, &EmptyCustomAttributesCache, &X509Certificate_t1471_0_0_0},
	{"targetHost", 1, 134218591, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern Il2CppType AsymmetricAlgorithm_t1418_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
MethodInfo PrivateKeySelectionCallback_Invoke_m6474_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&PrivateKeySelectionCallback_Invoke_m6474/* method */
	, &PrivateKeySelectionCallback_t1469_il2cpp_TypeInfo/* declaring_type */
	, &AsymmetricAlgorithm_t1418_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t/* invoker_method */
	, PrivateKeySelectionCallback_t1469_PrivateKeySelectionCallback_Invoke_m6474_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 882/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType X509Certificate_t1471_0_0_0;
extern Il2CppType String_t_0_0_0;
extern Il2CppType AsyncCallback_t487_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo PrivateKeySelectionCallback_t1469_PrivateKeySelectionCallback_BeginInvoke_m6475_ParameterInfos[] = 
{
	{"certificate", 0, 134218592, &EmptyCustomAttributesCache, &X509Certificate_t1471_0_0_0},
	{"targetHost", 1, 134218593, &EmptyCustomAttributesCache, &String_t_0_0_0},
	{"callback", 2, 134218594, &EmptyCustomAttributesCache, &AsyncCallback_t487_0_0_0},
	{"object", 3, 134218595, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t486_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.AsyncCallback,System.Object)
MethodInfo PrivateKeySelectionCallback_BeginInvoke_m6475_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&PrivateKeySelectionCallback_BeginInvoke_m6475/* method */
	, &PrivateKeySelectionCallback_t1469_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t486_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, PrivateKeySelectionCallback_t1469_PrivateKeySelectionCallback_BeginInvoke_m6475_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 4/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 883/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
extern Il2CppType IAsyncResult_t486_0_0_0;
static ParameterInfo PrivateKeySelectionCallback_t1469_PrivateKeySelectionCallback_EndInvoke_m6476_ParameterInfos[] = 
{
	{"result", 0, 134218596, &EmptyCustomAttributesCache, &IAsyncResult_t486_0_0_0},
};
extern Il2CppType AsymmetricAlgorithm_t1418_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::EndInvoke(System.IAsyncResult)
MethodInfo PrivateKeySelectionCallback_EndInvoke_m6476_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&PrivateKeySelectionCallback_EndInvoke_m6476/* method */
	, &PrivateKeySelectionCallback_t1469_il2cpp_TypeInfo/* declaring_type */
	, &AsymmetricAlgorithm_t1418_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, PrivateKeySelectionCallback_t1469_PrivateKeySelectionCallback_EndInvoke_m6476_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, false/* is_inflated */
	, 884/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, NULL/* dummy */

};
static MethodInfo* PrivateKeySelectionCallback_t1469_MethodInfos[] =
{
	&PrivateKeySelectionCallback__ctor_m6473_MethodInfo,
	&PrivateKeySelectionCallback_Invoke_m6474_MethodInfo,
	&PrivateKeySelectionCallback_BeginInvoke_m6475_MethodInfo,
	&PrivateKeySelectionCallback_EndInvoke_m6476_MethodInfo,
	NULL
};
static MethodInfo* PrivateKeySelectionCallback_t1469_VTable[] =
{
	&MulticastDelegate_Equals_m3646_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&MulticastDelegate_GetHashCode_m3647_MethodInfo,
	&Object_ToString_m498_MethodInfo,
	&MulticastDelegate_GetObjectData_m3648_MethodInfo,
	&Delegate_Clone_m3649_MethodInfo,
	&MulticastDelegate_GetObjectData_m3648_MethodInfo,
	&MulticastDelegate_GetInvocationList_m3650_MethodInfo,
	&MulticastDelegate_CombineImpl_m3651_MethodInfo,
	&MulticastDelegate_RemoveImpl_m3652_MethodInfo,
	&PrivateKeySelectionCallback_Invoke_m6474_MethodInfo,
	&PrivateKeySelectionCallback_BeginInvoke_m6475_MethodInfo,
	&PrivateKeySelectionCallback_EndInvoke_m6476_MethodInfo,
};
static Il2CppInterfaceOffsetPair PrivateKeySelectionCallback_t1469_InterfacesOffsets[] = 
{
	{ &ICloneable_t755_il2cpp_TypeInfo, 4},
	{ &ISerializable_t305_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType PrivateKeySelectionCallback_t1469_0_0_0;
extern Il2CppType PrivateKeySelectionCallback_t1469_1_0_0;
struct PrivateKeySelectionCallback_t1469;
TypeInfo PrivateKeySelectionCallback_t1469_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "PrivateKeySelectionCallback"/* name */
	, "Mono.Security.Protocol.Tls"/* namespaze */
	, PrivateKeySelectionCallback_t1469_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t608_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &PrivateKeySelectionCallback_t1469_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, PrivateKeySelectionCallback_t1469_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &PrivateKeySelectionCallback_t1469_il2cpp_TypeInfo/* cast_class */
	, &PrivateKeySelectionCallback_t1469_0_0_0/* byval_arg */
	, &PrivateKeySelectionCallback_t1469_1_0_0/* this_arg */
	, PrivateKeySelectionCallback_t1469_InterfacesOffsets/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)pinvoke_delegate_wrapper_PrivateKeySelectionCallback_t1469/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (PrivateKeySelectionCallback_t1469)/* instance_size */
	, 0/* element_size */
	, sizeof(methodPointerType)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$3132
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$3132_t1504_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$3132
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$3132
void $ArrayType$3132_t1504_marshal(const $ArrayType$3132_t1504& unmarshaled, $ArrayType$3132_t1504_marshaled& marshaled)
{
}
void $ArrayType$3132_t1504_marshal_back(const $ArrayType$3132_t1504_marshaled& marshaled, $ArrayType$3132_t1504& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$3132
void $ArrayType$3132_t1504_marshal_cleanup($ArrayType$3132_t1504_marshaled& marshaled)
{
}
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$3132
static MethodInfo* $ArrayType$3132_t1504_MethodInfos[] =
{
	NULL
};
extern MethodInfo ValueType_Equals_m3385_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m3386_MethodInfo;
extern MethodInfo ValueType_ToString_m3474_MethodInfo;
static MethodInfo* $ArrayType$3132_t1504_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType $ArrayType$3132_t1504_0_0_0;
extern Il2CppType $ArrayType$3132_t1504_1_0_0;
extern TypeInfo ValueType_t714_il2cpp_TypeInfo;
TypeInfo $ArrayType$3132_t1504_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$3132"/* name */
	, ""/* namespaze */
	, $ArrayType$3132_t1504_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &U3CPrivateImplementationDetailsU3E_t1513_il2cpp_TypeInfo/* nested_in */
	, &$ArrayType$3132_t1504_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, $ArrayType$3132_t1504_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &$ArrayType$3132_t1504_il2cpp_TypeInfo/* cast_class */
	, &$ArrayType$3132_t1504_0_0_0/* byval_arg */
	, &$ArrayType$3132_t1504_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)$ArrayType$3132_t1504_marshal/* marshal_to_native_func */
	, (methodPointerType)$ArrayType$3132_t1504_marshal_back/* marshal_from_native_func */
	, (methodPointerType)$ArrayType$3132_t1504_marshal_cleanup/* marshal_cleanup_func */
	, sizeof ($ArrayType$3132_t1504)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, sizeof($ArrayType$3132_t1504_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$256
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$256_t1505_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$256
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_0MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$256
void $ArrayType$256_t1505_marshal(const $ArrayType$256_t1505& unmarshaled, $ArrayType$256_t1505_marshaled& marshaled)
{
}
void $ArrayType$256_t1505_marshal_back(const $ArrayType$256_t1505_marshaled& marshaled, $ArrayType$256_t1505& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$256
void $ArrayType$256_t1505_marshal_cleanup($ArrayType$256_t1505_marshaled& marshaled)
{
}
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$256
static MethodInfo* $ArrayType$256_t1505_MethodInfos[] =
{
	NULL
};
static MethodInfo* $ArrayType$256_t1505_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType $ArrayType$256_t1505_0_0_0;
extern Il2CppType $ArrayType$256_t1505_1_0_0;
TypeInfo $ArrayType$256_t1505_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$256"/* name */
	, ""/* namespaze */
	, $ArrayType$256_t1505_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &U3CPrivateImplementationDetailsU3E_t1513_il2cpp_TypeInfo/* nested_in */
	, &$ArrayType$256_t1505_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, $ArrayType$256_t1505_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &$ArrayType$256_t1505_il2cpp_TypeInfo/* cast_class */
	, &$ArrayType$256_t1505_0_0_0/* byval_arg */
	, &$ArrayType$256_t1505_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)$ArrayType$256_t1505_marshal/* marshal_to_native_func */
	, (methodPointerType)$ArrayType$256_t1505_marshal_back/* marshal_from_native_func */
	, (methodPointerType)$ArrayType$256_t1505_marshal_cleanup/* marshal_cleanup_func */
	, sizeof ($ArrayType$256_t1505)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, sizeof($ArrayType$256_t1505_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$20
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$20_t1506_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$20
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_1MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$20
void $ArrayType$20_t1506_marshal(const $ArrayType$20_t1506& unmarshaled, $ArrayType$20_t1506_marshaled& marshaled)
{
}
void $ArrayType$20_t1506_marshal_back(const $ArrayType$20_t1506_marshaled& marshaled, $ArrayType$20_t1506& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$20
void $ArrayType$20_t1506_marshal_cleanup($ArrayType$20_t1506_marshaled& marshaled)
{
}
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$20
static MethodInfo* $ArrayType$20_t1506_MethodInfos[] =
{
	NULL
};
static MethodInfo* $ArrayType$20_t1506_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType $ArrayType$20_t1506_0_0_0;
extern Il2CppType $ArrayType$20_t1506_1_0_0;
TypeInfo $ArrayType$20_t1506_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$20"/* name */
	, ""/* namespaze */
	, $ArrayType$20_t1506_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &U3CPrivateImplementationDetailsU3E_t1513_il2cpp_TypeInfo/* nested_in */
	, &$ArrayType$20_t1506_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, $ArrayType$20_t1506_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &$ArrayType$20_t1506_il2cpp_TypeInfo/* cast_class */
	, &$ArrayType$20_t1506_0_0_0/* byval_arg */
	, &$ArrayType$20_t1506_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)$ArrayType$20_t1506_marshal/* marshal_to_native_func */
	, (methodPointerType)$ArrayType$20_t1506_marshal_back/* marshal_from_native_func */
	, (methodPointerType)$ArrayType$20_t1506_marshal_cleanup/* marshal_cleanup_func */
	, sizeof ($ArrayType$20_t1506)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, sizeof($ArrayType$20_t1506_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$32
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$32_t1507_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$32
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_2MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$32
void $ArrayType$32_t1507_marshal(const $ArrayType$32_t1507& unmarshaled, $ArrayType$32_t1507_marshaled& marshaled)
{
}
void $ArrayType$32_t1507_marshal_back(const $ArrayType$32_t1507_marshaled& marshaled, $ArrayType$32_t1507& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$32
void $ArrayType$32_t1507_marshal_cleanup($ArrayType$32_t1507_marshaled& marshaled)
{
}
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$32
static MethodInfo* $ArrayType$32_t1507_MethodInfos[] =
{
	NULL
};
static MethodInfo* $ArrayType$32_t1507_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType $ArrayType$32_t1507_0_0_0;
extern Il2CppType $ArrayType$32_t1507_1_0_0;
TypeInfo $ArrayType$32_t1507_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$32"/* name */
	, ""/* namespaze */
	, $ArrayType$32_t1507_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &U3CPrivateImplementationDetailsU3E_t1513_il2cpp_TypeInfo/* nested_in */
	, &$ArrayType$32_t1507_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, $ArrayType$32_t1507_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &$ArrayType$32_t1507_il2cpp_TypeInfo/* cast_class */
	, &$ArrayType$32_t1507_0_0_0/* byval_arg */
	, &$ArrayType$32_t1507_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)$ArrayType$32_t1507_marshal/* marshal_to_native_func */
	, (methodPointerType)$ArrayType$32_t1507_marshal_back/* marshal_from_native_func */
	, (methodPointerType)$ArrayType$32_t1507_marshal_cleanup/* marshal_cleanup_func */
	, sizeof ($ArrayType$32_t1507)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, sizeof($ArrayType$32_t1507_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$48
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_3.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$48_t1508_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$48
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_3MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$48
void $ArrayType$48_t1508_marshal(const $ArrayType$48_t1508& unmarshaled, $ArrayType$48_t1508_marshaled& marshaled)
{
}
void $ArrayType$48_t1508_marshal_back(const $ArrayType$48_t1508_marshaled& marshaled, $ArrayType$48_t1508& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$48
void $ArrayType$48_t1508_marshal_cleanup($ArrayType$48_t1508_marshaled& marshaled)
{
}
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$48
static MethodInfo* $ArrayType$48_t1508_MethodInfos[] =
{
	NULL
};
static MethodInfo* $ArrayType$48_t1508_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType $ArrayType$48_t1508_0_0_0;
extern Il2CppType $ArrayType$48_t1508_1_0_0;
TypeInfo $ArrayType$48_t1508_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$48"/* name */
	, ""/* namespaze */
	, $ArrayType$48_t1508_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &U3CPrivateImplementationDetailsU3E_t1513_il2cpp_TypeInfo/* nested_in */
	, &$ArrayType$48_t1508_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, $ArrayType$48_t1508_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &$ArrayType$48_t1508_il2cpp_TypeInfo/* cast_class */
	, &$ArrayType$48_t1508_0_0_0/* byval_arg */
	, &$ArrayType$48_t1508_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)$ArrayType$48_t1508_marshal/* marshal_to_native_func */
	, (methodPointerType)$ArrayType$48_t1508_marshal_back/* marshal_from_native_func */
	, (methodPointerType)$ArrayType$48_t1508_marshal_cleanup/* marshal_cleanup_func */
	, sizeof ($ArrayType$48_t1508)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, sizeof($ArrayType$48_t1508_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$64
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_4.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$64_t1509_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$64
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_4MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$64
void $ArrayType$64_t1509_marshal(const $ArrayType$64_t1509& unmarshaled, $ArrayType$64_t1509_marshaled& marshaled)
{
}
void $ArrayType$64_t1509_marshal_back(const $ArrayType$64_t1509_marshaled& marshaled, $ArrayType$64_t1509& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$64
void $ArrayType$64_t1509_marshal_cleanup($ArrayType$64_t1509_marshaled& marshaled)
{
}
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$64
static MethodInfo* $ArrayType$64_t1509_MethodInfos[] =
{
	NULL
};
static MethodInfo* $ArrayType$64_t1509_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType $ArrayType$64_t1509_0_0_0;
extern Il2CppType $ArrayType$64_t1509_1_0_0;
TypeInfo $ArrayType$64_t1509_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$64"/* name */
	, ""/* namespaze */
	, $ArrayType$64_t1509_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &U3CPrivateImplementationDetailsU3E_t1513_il2cpp_TypeInfo/* nested_in */
	, &$ArrayType$64_t1509_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, $ArrayType$64_t1509_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &$ArrayType$64_t1509_il2cpp_TypeInfo/* cast_class */
	, &$ArrayType$64_t1509_0_0_0/* byval_arg */
	, &$ArrayType$64_t1509_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)$ArrayType$64_t1509_marshal/* marshal_to_native_func */
	, (methodPointerType)$ArrayType$64_t1509_marshal_back/* marshal_from_native_func */
	, (methodPointerType)$ArrayType$64_t1509_marshal_cleanup/* marshal_cleanup_func */
	, sizeof ($ArrayType$64_t1509)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, sizeof($ArrayType$64_t1509_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$12
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_5.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$12_t1510_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$12
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_5MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void $ArrayType$12_t1510_marshal(const $ArrayType$12_t1510& unmarshaled, $ArrayType$12_t1510_marshaled& marshaled)
{
}
void $ArrayType$12_t1510_marshal_back(const $ArrayType$12_t1510_marshaled& marshaled, $ArrayType$12_t1510& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$12
void $ArrayType$12_t1510_marshal_cleanup($ArrayType$12_t1510_marshaled& marshaled)
{
}
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$12
static MethodInfo* $ArrayType$12_t1510_MethodInfos[] =
{
	NULL
};
static MethodInfo* $ArrayType$12_t1510_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType $ArrayType$12_t1510_0_0_0;
extern Il2CppType $ArrayType$12_t1510_1_0_0;
TypeInfo $ArrayType$12_t1510_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$12"/* name */
	, ""/* namespaze */
	, $ArrayType$12_t1510_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &U3CPrivateImplementationDetailsU3E_t1513_il2cpp_TypeInfo/* nested_in */
	, &$ArrayType$12_t1510_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, $ArrayType$12_t1510_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &$ArrayType$12_t1510_il2cpp_TypeInfo/* cast_class */
	, &$ArrayType$12_t1510_0_0_0/* byval_arg */
	, &$ArrayType$12_t1510_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)$ArrayType$12_t1510_marshal/* marshal_to_native_func */
	, (methodPointerType)$ArrayType$12_t1510_marshal_back/* marshal_from_native_func */
	, (methodPointerType)$ArrayType$12_t1510_marshal_cleanup/* marshal_cleanup_func */
	, sizeof ($ArrayType$12_t1510)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, sizeof($ArrayType$12_t1510_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// <PrivateImplementationDetails>/$ArrayType$16
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_6.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$16_t1511_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$16
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_6MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$16
void $ArrayType$16_t1511_marshal(const $ArrayType$16_t1511& unmarshaled, $ArrayType$16_t1511_marshaled& marshaled)
{
}
void $ArrayType$16_t1511_marshal_back(const $ArrayType$16_t1511_marshaled& marshaled, $ArrayType$16_t1511& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$16
void $ArrayType$16_t1511_marshal_cleanup($ArrayType$16_t1511_marshaled& marshaled)
{
}
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$16
static MethodInfo* $ArrayType$16_t1511_MethodInfos[] =
{
	NULL
};
static MethodInfo* $ArrayType$16_t1511_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType $ArrayType$16_t1511_0_0_0;
extern Il2CppType $ArrayType$16_t1511_1_0_0;
TypeInfo $ArrayType$16_t1511_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$16"/* name */
	, ""/* namespaze */
	, $ArrayType$16_t1511_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &U3CPrivateImplementationDetailsU3E_t1513_il2cpp_TypeInfo/* nested_in */
	, &$ArrayType$16_t1511_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, $ArrayType$16_t1511_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &$ArrayType$16_t1511_il2cpp_TypeInfo/* cast_class */
	, &$ArrayType$16_t1511_0_0_0/* byval_arg */
	, &$ArrayType$16_t1511_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)$ArrayType$16_t1511_marshal/* marshal_to_native_func */
	, (methodPointerType)$ArrayType$16_t1511_marshal_back/* marshal_from_native_func */
	, (methodPointerType)$ArrayType$16_t1511_marshal_cleanup/* marshal_cleanup_func */
	, sizeof ($ArrayType$16_t1511)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, sizeof($ArrayType$16_t1511_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo $ArrayType$4_t1512_il2cpp_TypeInfo;
// <PrivateImplementationDetails>/$ArrayType$4
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_$ArrayType$_7MethodDeclarations.h"



// Conversion methods for marshalling of: <PrivateImplementationDetails>/$ArrayType$4
void $ArrayType$4_t1512_marshal(const $ArrayType$4_t1512& unmarshaled, $ArrayType$4_t1512_marshaled& marshaled)
{
}
void $ArrayType$4_t1512_marshal_back(const $ArrayType$4_t1512_marshaled& marshaled, $ArrayType$4_t1512& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: <PrivateImplementationDetails>/$ArrayType$4
void $ArrayType$4_t1512_marshal_cleanup($ArrayType$4_t1512_marshaled& marshaled)
{
}
// Metadata Definition <PrivateImplementationDetails>/$ArrayType$4
static MethodInfo* $ArrayType$4_t1512_MethodInfos[] =
{
	NULL
};
static MethodInfo* $ArrayType$4_t1512_VTable[] =
{
	&ValueType_Equals_m3385_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&ValueType_GetHashCode_m3386_MethodInfo,
	&ValueType_ToString_m3474_MethodInfo,
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType $ArrayType$4_t1512_0_0_0;
extern Il2CppType $ArrayType$4_t1512_1_0_0;
TypeInfo $ArrayType$4_t1512_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "$ArrayType$4"/* name */
	, ""/* namespaze */
	, $ArrayType$4_t1512_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &ValueType_t714_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &U3CPrivateImplementationDetailsU3E_t1513_il2cpp_TypeInfo/* nested_in */
	, &$ArrayType$4_t1512_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, $ArrayType$4_t1512_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &$ArrayType$4_t1512_il2cpp_TypeInfo/* cast_class */
	, &$ArrayType$4_t1512_0_0_0/* byval_arg */
	, &$ArrayType$4_t1512_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)$ArrayType$4_t1512_marshal/* marshal_to_native_func */
	, (methodPointerType)$ArrayType$4_t1512_marshal_back/* marshal_from_native_func */
	, (methodPointerType)$ArrayType$4_t1512_marshal_cleanup/* marshal_cleanup_func */
	, sizeof ($ArrayType$4_t1512)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, sizeof($ArrayType$4_t1512_marshaled)/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 275/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// Metadata Definition <PrivateImplementationDetails>
extern Il2CppType $ArrayType$3132_t1504_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D0_0_FieldInfo = 
{
	"$$field-0"/* name */
	, &$ArrayType$3132_t1504_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t1513_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t1513_StaticFields, ___$$fieldU2D0_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$256_t1505_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D5_1_FieldInfo = 
{
	"$$field-5"/* name */
	, &$ArrayType$256_t1505_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t1513_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t1513_StaticFields, ___$$fieldU2D5_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$20_t1506_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D6_2_FieldInfo = 
{
	"$$field-6"/* name */
	, &$ArrayType$20_t1506_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t1513_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t1513_StaticFields, ___$$fieldU2D6_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$32_t1507_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D7_3_FieldInfo = 
{
	"$$field-7"/* name */
	, &$ArrayType$32_t1507_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t1513_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t1513_StaticFields, ___$$fieldU2D7_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$48_t1508_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D8_4_FieldInfo = 
{
	"$$field-8"/* name */
	, &$ArrayType$48_t1508_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t1513_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t1513_StaticFields, ___$$fieldU2D8_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$64_t1509_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D9_5_FieldInfo = 
{
	"$$field-9"/* name */
	, &$ArrayType$64_t1509_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t1513_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t1513_StaticFields, ___$$fieldU2D9_5)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$64_t1509_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D11_6_FieldInfo = 
{
	"$$field-11"/* name */
	, &$ArrayType$64_t1509_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t1513_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t1513_StaticFields, ___$$fieldU2D11_6)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$64_t1509_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D12_7_FieldInfo = 
{
	"$$field-12"/* name */
	, &$ArrayType$64_t1509_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t1513_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t1513_StaticFields, ___$$fieldU2D12_7)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$64_t1509_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D13_8_FieldInfo = 
{
	"$$field-13"/* name */
	, &$ArrayType$64_t1509_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t1513_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t1513_StaticFields, ___$$fieldU2D13_8)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$12_t1510_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D14_9_FieldInfo = 
{
	"$$field-14"/* name */
	, &$ArrayType$12_t1510_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t1513_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t1513_StaticFields, ___$$fieldU2D14_9)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$12_t1510_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D15_10_FieldInfo = 
{
	"$$field-15"/* name */
	, &$ArrayType$12_t1510_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t1513_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t1513_StaticFields, ___$$fieldU2D15_10)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$12_t1510_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D16_11_FieldInfo = 
{
	"$$field-16"/* name */
	, &$ArrayType$12_t1510_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t1513_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t1513_StaticFields, ___$$fieldU2D16_11)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$16_t1511_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D17_12_FieldInfo = 
{
	"$$field-17"/* name */
	, &$ArrayType$16_t1511_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t1513_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t1513_StaticFields, ___$$fieldU2D17_12)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$4_t1512_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D21_13_FieldInfo = 
{
	"$$field-21"/* name */
	, &$ArrayType$4_t1512_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t1513_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t1513_StaticFields, ___$$fieldU2D21_13)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType $ArrayType$4_t1512_0_0_275;
FieldInfo U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D22_14_FieldInfo = 
{
	"$$field-22"/* name */
	, &$ArrayType$4_t1512_0_0_275/* type */
	, &U3CPrivateImplementationDetailsU3E_t1513_il2cpp_TypeInfo/* parent */
	, offsetof(U3CPrivateImplementationDetailsU3E_t1513_StaticFields, ___$$fieldU2D22_14)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* U3CPrivateImplementationDetailsU3E_t1513_FieldInfos[] =
{
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D0_0_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D5_1_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D6_2_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D7_3_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D8_4_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D9_5_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D11_6_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D12_7_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D13_8_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D14_9_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D15_10_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D16_11_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D17_12_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D21_13_FieldInfo,
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D22_14_FieldInfo,
	NULL
};
static const uint8_t U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D0_0_DefaultValueData[] = { 0x2, 0x0, 0x0, 0x0, 0x3, 0x0, 0x0, 0x0, 0x5, 0x0, 0x0, 0x0, 0x7, 0x0, 0x0, 0x0, 0xB, 0x0, 0x0, 0x0, 0xD, 0x0, 0x0, 0x0, 0x11, 0x0, 0x0, 0x0, 0x13, 0x0, 0x0, 0x0, 0x17, 0x0, 0x0, 0x0, 0x1D, 0x0, 0x0, 0x0, 0x1F, 0x0, 0x0, 0x0, 0x25, 0x0, 0x0, 0x0, 0x29, 0x0, 0x0, 0x0, 0x2B, 0x0, 0x0, 0x0, 0x2F, 0x0, 0x0, 0x0, 0x35, 0x0, 0x0, 0x0, 0x3B, 0x0, 0x0, 0x0, 0x3D, 0x0, 0x0, 0x0, 0x43, 0x0, 0x0, 0x0, 0x47, 0x0, 0x0, 0x0, 0x49, 0x0, 0x0, 0x0, 0x4F, 0x0, 0x0, 0x0, 0x53, 0x0, 0x0, 0x0, 0x59, 0x0, 0x0, 0x0, 0x61, 0x0, 0x0, 0x0, 0x65, 0x0, 0x0, 0x0, 0x67, 0x0, 0x0, 0x0, 0x6B, 0x0, 0x0, 0x0, 0x6D, 0x0, 0x0, 0x0, 0x71, 0x0, 0x0, 0x0, 0x7F, 0x0, 0x0, 0x0, 0x83, 0x0, 0x0, 0x0, 0x89, 0x0, 0x0, 0x0, 0x8B, 0x0, 0x0, 0x0, 0x95, 0x0, 0x0, 0x0, 0x97, 0x0, 0x0, 0x0, 0x9D, 0x0, 0x0, 0x0, 0xA3, 0x0, 0x0, 0x0, 0xA7, 0x0, 0x0, 0x0, 0xAD, 0x0, 0x0, 0x0, 0xB3, 0x0, 0x0, 0x0, 0xB5, 0x0, 0x0, 0x0, 0xBF, 0x0, 0x0, 0x0, 0xC1, 0x0, 0x0, 0x0, 0xC5, 0x0, 0x0, 0x0, 0xC7, 0x0, 0x0, 0x0, 0xD3, 0x0, 0x0, 0x0, 0xDF, 0x0, 0x0, 0x0, 0xE3, 0x0, 0x0, 0x0, 0xE5, 0x0, 0x0, 0x0, 0xE9, 0x0, 0x0, 0x0, 0xEF, 0x0, 0x0, 0x0, 0xF1, 0x0, 0x0, 0x0, 0xFB, 0x0, 0x0, 0x0, 0x1, 0x1, 0x0, 0x0, 0x7, 0x1, 0x0, 0x0, 0xD, 0x1, 0x0, 0x0, 0xF, 0x1, 0x0, 0x0, 0x15, 0x1, 0x0, 0x0, 0x19, 0x1, 0x0, 0x0, 0x1B, 0x1, 0x0, 0x0, 0x25, 0x1, 0x0, 0x0, 0x33, 0x1, 0x0, 0x0, 0x37, 0x1, 0x0, 0x0, 0x39, 0x1, 0x0, 0x0, 0x3D, 0x1, 0x0, 0x0, 0x4B, 0x1, 0x0, 0x0, 0x51, 0x1, 0x0, 0x0, 0x5B, 0x1, 0x0, 0x0, 0x5D, 0x1, 0x0, 0x0, 0x61, 0x1, 0x0, 0x0, 0x67, 0x1, 0x0, 0x0, 0x6F, 0x1, 0x0, 0x0, 0x75, 0x1, 0x0, 0x0, 0x7B, 0x1, 0x0, 0x0, 0x7F, 0x1, 0x0, 0x0, 0x85, 0x1, 0x0, 0x0, 0x8D, 0x1, 0x0, 0x0, 0x91, 0x1, 0x0, 0x0, 0x99, 0x1, 0x0, 0x0, 0xA3, 0x1, 0x0, 0x0, 0xA5, 0x1, 0x0, 0x0, 0xAF, 0x1, 0x0, 0x0, 0xB1, 0x1, 0x0, 0x0, 0xB7, 0x1, 0x0, 0x0, 0xBB, 0x1, 0x0, 0x0, 0xC1, 0x1, 0x0, 0x0, 0xC9, 0x1, 0x0, 0x0, 0xCD, 0x1, 0x0, 0x0, 0xCF, 0x1, 0x0, 0x0, 0xD3, 0x1, 0x0, 0x0, 0xDF, 0x1, 0x0, 0x0, 0xE7, 0x1, 0x0, 0x0, 0xEB, 0x1, 0x0, 0x0, 0xF3, 0x1, 0x0, 0x0, 0xF7, 0x1, 0x0, 0x0, 0xFD, 0x1, 0x0, 0x0, 0x9, 0x2, 0x0, 0x0, 0xB, 0x2, 0x0, 0x0, 0x1D, 0x2, 0x0, 0x0, 0x23, 0x2, 0x0, 0x0, 0x2D, 0x2, 0x0, 0x0, 0x33, 0x2, 0x0, 0x0, 0x39, 0x2, 0x0, 0x0, 0x3B, 0x2, 0x0, 0x0, 0x41, 0x2, 0x0, 0x0, 0x4B, 0x2, 0x0, 0x0, 0x51, 0x2, 0x0, 0x0, 0x57, 0x2, 0x0, 0x0, 0x59, 0x2, 0x0, 0x0, 0x5F, 0x2, 0x0, 0x0, 0x65, 0x2, 0x0, 0x0, 0x69, 0x2, 0x0, 0x0, 0x6B, 0x2, 0x0, 0x0, 0x77, 0x2, 0x0, 0x0, 0x81, 0x2, 0x0, 0x0, 0x83, 0x2, 0x0, 0x0, 0x87, 0x2, 0x0, 0x0, 0x8D, 0x2, 0x0, 0x0, 0x93, 0x2, 0x0, 0x0, 0x95, 0x2, 0x0, 0x0, 0xA1, 0x2, 0x0, 0x0, 0xA5, 0x2, 0x0, 0x0, 0xAB, 0x2, 0x0, 0x0, 0xB3, 0x2, 0x0, 0x0, 0xBD, 0x2, 0x0, 0x0, 0xC5, 0x2, 0x0, 0x0, 0xCF, 0x2, 0x0, 0x0, 0xD7, 0x2, 0x0, 0x0, 0xDD, 0x2, 0x0, 0x0, 0xE3, 0x2, 0x0, 0x0, 0xE7, 0x2, 0x0, 0x0, 0xEF, 0x2, 0x0, 0x0, 0xF5, 0x2, 0x0, 0x0, 0xF9, 0x2, 0x0, 0x0, 0x1, 0x3, 0x0, 0x0, 0x5, 0x3, 0x0, 0x0, 0x13, 0x3, 0x0, 0x0, 0x1D, 0x3, 0x0, 0x0, 0x29, 0x3, 0x0, 0x0, 0x2B, 0x3, 0x0, 0x0, 0x35, 0x3, 0x0, 0x0, 0x37, 0x3, 0x0, 0x0, 0x3B, 0x3, 0x0, 0x0, 0x3D, 0x3, 0x0, 0x0, 0x47, 0x3, 0x0, 0x0, 0x55, 0x3, 0x0, 0x0, 0x59, 0x3, 0x0, 0x0, 0x5B, 0x3, 0x0, 0x0, 0x5F, 0x3, 0x0, 0x0, 0x6D, 0x3, 0x0, 0x0, 0x71, 0x3, 0x0, 0x0, 0x73, 0x3, 0x0, 0x0, 0x77, 0x3, 0x0, 0x0, 0x8B, 0x3, 0x0, 0x0, 0x8F, 0x3, 0x0, 0x0, 0x97, 0x3, 0x0, 0x0, 0xA1, 0x3, 0x0, 0x0, 0xA9, 0x3, 0x0, 0x0, 0xAD, 0x3, 0x0, 0x0, 0xB3, 0x3, 0x0, 0x0, 0xB9, 0x3, 0x0, 0x0, 0xC7, 0x3, 0x0, 0x0, 0xCB, 0x3, 0x0, 0x0, 0xD1, 0x3, 0x0, 0x0, 0xD7, 0x3, 0x0, 0x0, 0xDF, 0x3, 0x0, 0x0, 0xE5, 0x3, 0x0, 0x0, 0xF1, 0x3, 0x0, 0x0, 0xF5, 0x3, 0x0, 0x0, 0xFB, 0x3, 0x0, 0x0, 0xFD, 0x3, 0x0, 0x0, 0x7, 0x4, 0x0, 0x0, 0x9, 0x4, 0x0, 0x0, 0xF, 0x4, 0x0, 0x0, 0x19, 0x4, 0x0, 0x0, 0x1B, 0x4, 0x0, 0x0, 0x25, 0x4, 0x0, 0x0, 0x27, 0x4, 0x0, 0x0, 0x2D, 0x4, 0x0, 0x0, 0x3F, 0x4, 0x0, 0x0, 0x43, 0x4, 0x0, 0x0, 0x45, 0x4, 0x0, 0x0, 0x49, 0x4, 0x0, 0x0, 0x4F, 0x4, 0x0, 0x0, 0x55, 0x4, 0x0, 0x0, 0x5D, 0x4, 0x0, 0x0, 0x63, 0x4, 0x0, 0x0, 0x69, 0x4, 0x0, 0x0, 0x7F, 0x4, 0x0, 0x0, 0x81, 0x4, 0x0, 0x0, 0x8B, 0x4, 0x0, 0x0, 0x93, 0x4, 0x0, 0x0, 0x9D, 0x4, 0x0, 0x0, 0xA3, 0x4, 0x0, 0x0, 0xA9, 0x4, 0x0, 0x0, 0xB1, 0x4, 0x0, 0x0, 0xBD, 0x4, 0x0, 0x0, 0xC1, 0x4, 0x0, 0x0, 0xC7, 0x4, 0x0, 0x0, 0xCD, 0x4, 0x0, 0x0, 0xCF, 0x4, 0x0, 0x0, 0xD5, 0x4, 0x0, 0x0, 0xE1, 0x4, 0x0, 0x0, 0xEB, 0x4, 0x0, 0x0, 0xFD, 0x4, 0x0, 0x0, 0xFF, 0x4, 0x0, 0x0, 0x3, 0x5, 0x0, 0x0, 0x9, 0x5, 0x0, 0x0, 0xB, 0x5, 0x0, 0x0, 0x11, 0x5, 0x0, 0x0, 0x15, 0x5, 0x0, 0x0, 0x17, 0x5, 0x0, 0x0, 0x1B, 0x5, 0x0, 0x0, 0x27, 0x5, 0x0, 0x0, 0x29, 0x5, 0x0, 0x0, 0x2F, 0x5, 0x0, 0x0, 0x51, 0x5, 0x0, 0x0, 0x57, 0x5, 0x0, 0x0, 0x5D, 0x5, 0x0, 0x0, 0x65, 0x5, 0x0, 0x0, 0x77, 0x5, 0x0, 0x0, 0x81, 0x5, 0x0, 0x0, 0x8F, 0x5, 0x0, 0x0, 0x93, 0x5, 0x0, 0x0, 0x95, 0x5, 0x0, 0x0, 0x99, 0x5, 0x0, 0x0, 0x9F, 0x5, 0x0, 0x0, 0xA7, 0x5, 0x0, 0x0, 0xAB, 0x5, 0x0, 0x0, 0xAD, 0x5, 0x0, 0x0, 0xB3, 0x5, 0x0, 0x0, 0xBF, 0x5, 0x0, 0x0, 0xC9, 0x5, 0x0, 0x0, 0xCB, 0x5, 0x0, 0x0, 0xCF, 0x5, 0x0, 0x0, 0xD1, 0x5, 0x0, 0x0, 0xD5, 0x5, 0x0, 0x0, 0xDB, 0x5, 0x0, 0x0, 0xE7, 0x5, 0x0, 0x0, 0xF3, 0x5, 0x0, 0x0, 0xFB, 0x5, 0x0, 0x0, 0x7, 0x6, 0x0, 0x0, 0xD, 0x6, 0x0, 0x0, 0x11, 0x6, 0x0, 0x0, 0x17, 0x6, 0x0, 0x0, 0x1F, 0x6, 0x0, 0x0, 0x23, 0x6, 0x0, 0x0, 0x2B, 0x6, 0x0, 0x0, 0x2F, 0x6, 0x0, 0x0, 0x3D, 0x6, 0x0, 0x0, 0x41, 0x6, 0x0, 0x0, 0x47, 0x6, 0x0, 0x0, 0x49, 0x6, 0x0, 0x0, 0x4D, 0x6, 0x0, 0x0, 0x53, 0x6, 0x0, 0x0, 0x55, 0x6, 0x0, 0x0, 0x5B, 0x6, 0x0, 0x0, 0x65, 0x6, 0x0, 0x0, 0x79, 0x6, 0x0, 0x0, 0x7F, 0x6, 0x0, 0x0, 0x83, 0x6, 0x0, 0x0, 0x85, 0x6, 0x0, 0x0, 0x9D, 0x6, 0x0, 0x0, 0xA1, 0x6, 0x0, 0x0, 0xA3, 0x6, 0x0, 0x0, 0xAD, 0x6, 0x0, 0x0, 0xB9, 0x6, 0x0, 0x0, 0xBB, 0x6, 0x0, 0x0, 0xC5, 0x6, 0x0, 0x0, 0xCD, 0x6, 0x0, 0x0, 0xD3, 0x6, 0x0, 0x0, 0xD9, 0x6, 0x0, 0x0, 0xDF, 0x6, 0x0, 0x0, 0xF1, 0x6, 0x0, 0x0, 0xF7, 0x6, 0x0, 0x0, 0xFB, 0x6, 0x0, 0x0, 0xFD, 0x6, 0x0, 0x0, 0x9, 0x7, 0x0, 0x0, 0x13, 0x7, 0x0, 0x0, 0x1F, 0x7, 0x0, 0x0, 0x27, 0x7, 0x0, 0x0, 0x37, 0x7, 0x0, 0x0, 0x45, 0x7, 0x0, 0x0, 0x4B, 0x7, 0x0, 0x0, 0x4F, 0x7, 0x0, 0x0, 0x51, 0x7, 0x0, 0x0, 0x55, 0x7, 0x0, 0x0, 0x57, 0x7, 0x0, 0x0, 0x61, 0x7, 0x0, 0x0, 0x6D, 0x7, 0x0, 0x0, 0x73, 0x7, 0x0, 0x0, 0x79, 0x7, 0x0, 0x0, 0x8B, 0x7, 0x0, 0x0, 0x8D, 0x7, 0x0, 0x0, 0x9D, 0x7, 0x0, 0x0, 0x9F, 0x7, 0x0, 0x0, 0xB5, 0x7, 0x0, 0x0, 0xBB, 0x7, 0x0, 0x0, 0xC3, 0x7, 0x0, 0x0, 0xC9, 0x7, 0x0, 0x0, 0xCD, 0x7, 0x0, 0x0, 0xCF, 0x7, 0x0, 0x0, 0xD3, 0x7, 0x0, 0x0, 0xDB, 0x7, 0x0, 0x0, 0xE1, 0x7, 0x0, 0x0, 0xEB, 0x7, 0x0, 0x0, 0xED, 0x7, 0x0, 0x0, 0xF7, 0x7, 0x0, 0x0, 0x5, 0x8, 0x0, 0x0, 0xF, 0x8, 0x0, 0x0, 0x15, 0x8, 0x0, 0x0, 0x21, 0x8, 0x0, 0x0, 0x23, 0x8, 0x0, 0x0, 0x27, 0x8, 0x0, 0x0, 0x29, 0x8, 0x0, 0x0, 0x33, 0x8, 0x0, 0x0, 0x3F, 0x8, 0x0, 0x0, 0x41, 0x8, 0x0, 0x0, 0x51, 0x8, 0x0, 0x0, 0x53, 0x8, 0x0, 0x0, 0x59, 0x8, 0x0, 0x0, 0x5D, 0x8, 0x0, 0x0, 0x5F, 0x8, 0x0, 0x0, 0x69, 0x8, 0x0, 0x0, 0x71, 0x8, 0x0, 0x0, 0x83, 0x8, 0x0, 0x0, 0x9B, 0x8, 0x0, 0x0, 0x9F, 0x8, 0x0, 0x0, 0xA5, 0x8, 0x0, 0x0, 0xAD, 0x8, 0x0, 0x0, 0xBD, 0x8, 0x0, 0x0, 0xBF, 0x8, 0x0, 0x0, 0xC3, 0x8, 0x0, 0x0, 0xCB, 0x8, 0x0, 0x0, 0xDB, 0x8, 0x0, 0x0, 0xDD, 0x8, 0x0, 0x0, 0xE1, 0x8, 0x0, 0x0, 0xE9, 0x8, 0x0, 0x0, 0xEF, 0x8, 0x0, 0x0, 0xF5, 0x8, 0x0, 0x0, 0xF9, 0x8, 0x0, 0x0, 0x5, 0x9, 0x0, 0x0, 0x7, 0x9, 0x0, 0x0, 0x1D, 0x9, 0x0, 0x0, 0x23, 0x9, 0x0, 0x0, 0x25, 0x9, 0x0, 0x0, 0x2B, 0x9, 0x0, 0x0, 0x2F, 0x9, 0x0, 0x0, 0x35, 0x9, 0x0, 0x0, 0x43, 0x9, 0x0, 0x0, 0x49, 0x9, 0x0, 0x0, 0x4D, 0x9, 0x0, 0x0, 0x4F, 0x9, 0x0, 0x0, 0x55, 0x9, 0x0, 0x0, 0x59, 0x9, 0x0, 0x0, 0x5F, 0x9, 0x0, 0x0, 0x6B, 0x9, 0x0, 0x0, 0x71, 0x9, 0x0, 0x0, 0x77, 0x9, 0x0, 0x0, 0x85, 0x9, 0x0, 0x0, 0x89, 0x9, 0x0, 0x0, 0x8F, 0x9, 0x0, 0x0, 0x9B, 0x9, 0x0, 0x0, 0xA3, 0x9, 0x0, 0x0, 0xA9, 0x9, 0x0, 0x0, 0xAD, 0x9, 0x0, 0x0, 0xC7, 0x9, 0x0, 0x0, 0xD9, 0x9, 0x0, 0x0, 0xE3, 0x9, 0x0, 0x0, 0xEB, 0x9, 0x0, 0x0, 0xEF, 0x9, 0x0, 0x0, 0xF5, 0x9, 0x0, 0x0, 0xF7, 0x9, 0x0, 0x0, 0xFD, 0x9, 0x0, 0x0, 0x13, 0xA, 0x0, 0x0, 0x1F, 0xA, 0x0, 0x0, 0x21, 0xA, 0x0, 0x0, 0x31, 0xA, 0x0, 0x0, 0x39, 0xA, 0x0, 0x0, 0x3D, 0xA, 0x0, 0x0, 0x49, 0xA, 0x0, 0x0, 0x57, 0xA, 0x0, 0x0, 0x61, 0xA, 0x0, 0x0, 0x63, 0xA, 0x0, 0x0, 0x67, 0xA, 0x0, 0x0, 0x6F, 0xA, 0x0, 0x0, 0x75, 0xA, 0x0, 0x0, 0x7B, 0xA, 0x0, 0x0, 0x7F, 0xA, 0x0, 0x0, 0x81, 0xA, 0x0, 0x0, 0x85, 0xA, 0x0, 0x0, 0x8B, 0xA, 0x0, 0x0, 0x93, 0xA, 0x0, 0x0, 0x97, 0xA, 0x0, 0x0, 0x99, 0xA, 0x0, 0x0, 0x9F, 0xA, 0x0, 0x0, 0xA9, 0xA, 0x0, 0x0, 0xAB, 0xA, 0x0, 0x0, 0xB5, 0xA, 0x0, 0x0, 0xBD, 0xA, 0x0, 0x0, 0xC1, 0xA, 0x0, 0x0, 0xCF, 0xA, 0x0, 0x0, 0xD9, 0xA, 0x0, 0x0, 0xE5, 0xA, 0x0, 0x0, 0xE7, 0xA, 0x0, 0x0, 0xED, 0xA, 0x0, 0x0, 0xF1, 0xA, 0x0, 0x0, 0xF3, 0xA, 0x0, 0x0, 0x3, 0xB, 0x0, 0x0, 0x11, 0xB, 0x0, 0x0, 0x15, 0xB, 0x0, 0x0, 0x1B, 0xB, 0x0, 0x0, 0x23, 0xB, 0x0, 0x0, 0x29, 0xB, 0x0, 0x0, 0x2D, 0xB, 0x0, 0x0, 0x3F, 0xB, 0x0, 0x0, 0x47, 0xB, 0x0, 0x0, 0x51, 0xB, 0x0, 0x0, 0x57, 0xB, 0x0, 0x0, 0x5D, 0xB, 0x0, 0x0, 0x65, 0xB, 0x0, 0x0, 0x6F, 0xB, 0x0, 0x0, 0x7B, 0xB, 0x0, 0x0, 0x89, 0xB, 0x0, 0x0, 0x8D, 0xB, 0x0, 0x0, 0x93, 0xB, 0x0, 0x0, 0x99, 0xB, 0x0, 0x0, 0x9B, 0xB, 0x0, 0x0, 0xB7, 0xB, 0x0, 0x0, 0xB9, 0xB, 0x0, 0x0, 0xC3, 0xB, 0x0, 0x0, 0xCB, 0xB, 0x0, 0x0, 0xCF, 0xB, 0x0, 0x0, 0xDD, 0xB, 0x0, 0x0, 0xE1, 0xB, 0x0, 0x0, 0xE9, 0xB, 0x0, 0x0, 0xF5, 0xB, 0x0, 0x0, 0xFB, 0xB, 0x0, 0x0, 0x7, 0xC, 0x0, 0x0, 0xB, 0xC, 0x0, 0x0, 0x11, 0xC, 0x0, 0x0, 0x25, 0xC, 0x0, 0x0, 0x2F, 0xC, 0x0, 0x0, 0x31, 0xC, 0x0, 0x0, 0x41, 0xC, 0x0, 0x0, 0x5B, 0xC, 0x0, 0x0, 0x5F, 0xC, 0x0, 0x0, 0x61, 0xC, 0x0, 0x0, 0x6D, 0xC, 0x0, 0x0, 0x73, 0xC, 0x0, 0x0, 0x77, 0xC, 0x0, 0x0, 0x83, 0xC, 0x0, 0x0, 0x89, 0xC, 0x0, 0x0, 0x91, 0xC, 0x0, 0x0, 0x95, 0xC, 0x0, 0x0, 0x9D, 0xC, 0x0, 0x0, 0xB3, 0xC, 0x0, 0x0, 0xB5, 0xC, 0x0, 0x0, 0xB9, 0xC, 0x0, 0x0, 0xBB, 0xC, 0x0, 0x0, 0xC7, 0xC, 0x0, 0x0, 0xE3, 0xC, 0x0, 0x0, 0xE5, 0xC, 0x0, 0x0, 0xEB, 0xC, 0x0, 0x0, 0xF1, 0xC, 0x0, 0x0, 0xF7, 0xC, 0x0, 0x0, 0xFB, 0xC, 0x0, 0x0, 0x1, 0xD, 0x0, 0x0, 0x3, 0xD, 0x0, 0x0, 0xF, 0xD, 0x0, 0x0, 0x13, 0xD, 0x0, 0x0, 0x1F, 0xD, 0x0, 0x0, 0x21, 0xD, 0x0, 0x0, 0x2B, 0xD, 0x0, 0x0, 0x2D, 0xD, 0x0, 0x0, 0x3D, 0xD, 0x0, 0x0, 0x3F, 0xD, 0x0, 0x0, 0x4F, 0xD, 0x0, 0x0, 0x55, 0xD, 0x0, 0x0, 0x69, 0xD, 0x0, 0x0, 0x79, 0xD, 0x0, 0x0, 0x81, 0xD, 0x0, 0x0, 0x85, 0xD, 0x0, 0x0, 0x87, 0xD, 0x0, 0x0, 0x8B, 0xD, 0x0, 0x0, 0x8D, 0xD, 0x0, 0x0, 0xA3, 0xD, 0x0, 0x0, 0xAB, 0xD, 0x0, 0x0, 0xB7, 0xD, 0x0, 0x0, 0xBD, 0xD, 0x0, 0x0, 0xC7, 0xD, 0x0, 0x0, 0xC9, 0xD, 0x0, 0x0, 0xCD, 0xD, 0x0, 0x0, 0xD3, 0xD, 0x0, 0x0, 0xD5, 0xD, 0x0, 0x0, 0xDB, 0xD, 0x0, 0x0, 0xE5, 0xD, 0x0, 0x0, 0xE7, 0xD, 0x0, 0x0, 0xF3, 0xD, 0x0, 0x0, 0xFD, 0xD, 0x0, 0x0, 0xFF, 0xD, 0x0, 0x0, 0x9, 0xE, 0x0, 0x0, 0x17, 0xE, 0x0, 0x0, 0x1D, 0xE, 0x0, 0x0, 0x21, 0xE, 0x0, 0x0, 0x27, 0xE, 0x0, 0x0, 0x2F, 0xE, 0x0, 0x0, 0x35, 0xE, 0x0, 0x0, 0x3B, 0xE, 0x0, 0x0, 0x4B, 0xE, 0x0, 0x0, 0x57, 0xE, 0x0, 0x0, 0x59, 0xE, 0x0, 0x0, 0x5D, 0xE, 0x0, 0x0, 0x6B, 0xE, 0x0, 0x0, 0x71, 0xE, 0x0, 0x0, 0x75, 0xE, 0x0, 0x0, 0x7D, 0xE, 0x0, 0x0, 0x87, 0xE, 0x0, 0x0, 0x8F, 0xE, 0x0, 0x0, 0x95, 0xE, 0x0, 0x0, 0x9B, 0xE, 0x0, 0x0, 0xB1, 0xE, 0x0, 0x0, 0xB7, 0xE, 0x0, 0x0, 0xB9, 0xE, 0x0, 0x0, 0xC3, 0xE, 0x0, 0x0, 0xD1, 0xE, 0x0, 0x0, 0xD5, 0xE, 0x0, 0x0, 0xDB, 0xE, 0x0, 0x0, 0xED, 0xE, 0x0, 0x0, 0xEF, 0xE, 0x0, 0x0, 0xF9, 0xE, 0x0, 0x0, 0x7, 0xF, 0x0, 0x0, 0xB, 0xF, 0x0, 0x0, 0xD, 0xF, 0x0, 0x0, 0x17, 0xF, 0x0, 0x0, 0x25, 0xF, 0x0, 0x0, 0x29, 0xF, 0x0, 0x0, 0x31, 0xF, 0x0, 0x0, 0x43, 0xF, 0x0, 0x0, 0x47, 0xF, 0x0, 0x0, 0x4D, 0xF, 0x0, 0x0, 0x4F, 0xF, 0x0, 0x0, 0x53, 0xF, 0x0, 0x0, 0x59, 0xF, 0x0, 0x0, 0x5B, 0xF, 0x0, 0x0, 0x67, 0xF, 0x0, 0x0, 0x6B, 0xF, 0x0, 0x0, 0x7F, 0xF, 0x0, 0x0, 0x95, 0xF, 0x0, 0x0, 0xA1, 0xF, 0x0, 0x0, 0xA3, 0xF, 0x0, 0x0, 0xA7, 0xF, 0x0, 0x0, 0xAD, 0xF, 0x0, 0x0, 0xB3, 0xF, 0x0, 0x0, 0xB5, 0xF, 0x0, 0x0, 0xBB, 0xF, 0x0, 0x0, 0xD1, 0xF, 0x0, 0x0, 0xD3, 0xF, 0x0, 0x0, 0xD9, 0xF, 0x0, 0x0, 0xE9, 0xF, 0x0, 0x0, 0xEF, 0xF, 0x0, 0x0, 0xFB, 0xF, 0x0, 0x0, 0xFD, 0xF, 0x0, 0x0, 0x3, 0x10, 0x0, 0x0, 0xF, 0x10, 0x0, 0x0, 0x1F, 0x10, 0x0, 0x0, 0x21, 0x10, 0x0, 0x0, 0x25, 0x10, 0x0, 0x0, 0x2B, 0x10, 0x0, 0x0, 0x39, 0x10, 0x0, 0x0, 0x3D, 0x10, 0x0, 0x0, 0x3F, 0x10, 0x0, 0x0, 0x51, 0x10, 0x0, 0x0, 0x69, 0x10, 0x0, 0x0, 0x73, 0x10, 0x0, 0x0, 0x79, 0x10, 0x0, 0x0, 0x7B, 0x10, 0x0, 0x0, 0x85, 0x10, 0x0, 0x0, 0x87, 0x10, 0x0, 0x0, 0x91, 0x10, 0x0, 0x0, 0x93, 0x10, 0x0, 0x0, 0x9D, 0x10, 0x0, 0x0, 0xA3, 0x10, 0x0, 0x0, 0xA5, 0x10, 0x0, 0x0, 0xAF, 0x10, 0x0, 0x0, 0xB1, 0x10, 0x0, 0x0, 0xBB, 0x10, 0x0, 0x0, 0xC1, 0x10, 0x0, 0x0, 0xC9, 0x10, 0x0, 0x0, 0xE7, 0x10, 0x0, 0x0, 0xF1, 0x10, 0x0, 0x0, 0xF3, 0x10, 0x0, 0x0, 0xFD, 0x10, 0x0, 0x0, 0x5, 0x11, 0x0, 0x0, 0xB, 0x11, 0x0, 0x0, 0x15, 0x11, 0x0, 0x0, 0x27, 0x11, 0x0, 0x0, 0x2D, 0x11, 0x0, 0x0, 0x39, 0x11, 0x0, 0x0, 0x45, 0x11, 0x0, 0x0, 0x47, 0x11, 0x0, 0x0, 0x59, 0x11, 0x0, 0x0, 0x5F, 0x11, 0x0, 0x0, 0x63, 0x11, 0x0, 0x0, 0x69, 0x11, 0x0, 0x0, 0x6F, 0x11, 0x0, 0x0, 0x81, 0x11, 0x0, 0x0, 0x83, 0x11, 0x0, 0x0, 0x8D, 0x11, 0x0, 0x0, 0x9B, 0x11, 0x0, 0x0, 0xA1, 0x11, 0x0, 0x0, 0xA5, 0x11, 0x0, 0x0, 0xA7, 0x11, 0x0, 0x0, 0xAB, 0x11, 0x0, 0x0, 0xC3, 0x11, 0x0, 0x0, 0xC5, 0x11, 0x0, 0x0, 0xD1, 0x11, 0x0, 0x0, 0xD7, 0x11, 0x0, 0x0, 0xE7, 0x11, 0x0, 0x0, 0xEF, 0x11, 0x0, 0x0, 0xF5, 0x11, 0x0, 0x0, 0xFB, 0x11, 0x0, 0x0, 0xD, 0x12, 0x0, 0x0, 0x1D, 0x12, 0x0, 0x0, 0x1F, 0x12, 0x0, 0x0, 0x23, 0x12, 0x0, 0x0, 0x29, 0x12, 0x0, 0x0, 0x2B, 0x12, 0x0, 0x0, 0x31, 0x12, 0x0, 0x0, 0x37, 0x12, 0x0, 0x0, 0x41, 0x12, 0x0, 0x0, 0x47, 0x12, 0x0, 0x0, 0x53, 0x12, 0x0, 0x0, 0x5F, 0x12, 0x0, 0x0, 0x71, 0x12, 0x0, 0x0, 0x73, 0x12, 0x0, 0x0, 0x79, 0x12, 0x0, 0x0, 0x7D, 0x12, 0x0, 0x0, 0x8F, 0x12, 0x0, 0x0, 0x97, 0x12, 0x0, 0x0, 0xAF, 0x12, 0x0, 0x0, 0xB3, 0x12, 0x0, 0x0, 0xB5, 0x12, 0x0, 0x0, 0xB9, 0x12, 0x0, 0x0, 0xBF, 0x12, 0x0, 0x0, 0xC1, 0x12, 0x0, 0x0, 0xCD, 0x12, 0x0, 0x0, 0xD1, 0x12, 0x0, 0x0, 0xDF, 0x12, 0x0, 0x0, 0xFD, 0x12, 0x0, 0x0, 0x7, 0x13, 0x0, 0x0, 0xD, 0x13, 0x0, 0x0, 0x19, 0x13, 0x0, 0x0, 0x27, 0x13, 0x0, 0x0, 0x2D, 0x13, 0x0, 0x0, 0x37, 0x13, 0x0, 0x0, 0x43, 0x13, 0x0, 0x0, 0x45, 0x13, 0x0, 0x0, 0x49, 0x13, 0x0, 0x0, 0x4F, 0x13, 0x0, 0x0, 0x57, 0x13, 0x0, 0x0, 0x5D, 0x13, 0x0, 0x0, 0x67, 0x13, 0x0, 0x0, 0x69, 0x13, 0x0, 0x0, 0x6D, 0x13, 0x0, 0x0, 0x7B, 0x13, 0x0, 0x0, 0x81, 0x13, 0x0, 0x0, 0x87, 0x13, 0x0, 0x0, 0x8B, 0x13, 0x0, 0x0, 0x91, 0x13, 0x0, 0x0, 0x93, 0x13, 0x0, 0x0, 0x9D, 0x13, 0x0, 0x0, 0x9F, 0x13, 0x0, 0x0, 0xAF, 0x13, 0x0, 0x0, 0xBB, 0x13, 0x0, 0x0, 0xC3, 0x13, 0x0, 0x0, 0xD5, 0x13, 0x0, 0x0, 0xD9, 0x13, 0x0, 0x0, 0xDF, 0x13, 0x0, 0x0, 0xEB, 0x13, 0x0, 0x0, 0xED, 0x13, 0x0, 0x0, 0xF3, 0x13, 0x0, 0x0, 0xF9, 0x13, 0x0, 0x0, 0xFF, 0x13, 0x0, 0x0, 0x1B, 0x14, 0x0, 0x0, 0x21, 0x14, 0x0, 0x0, 0x2F, 0x14, 0x0, 0x0, 0x33, 0x14, 0x0, 0x0, 0x3B, 0x14, 0x0, 0x0, 0x45, 0x14, 0x0, 0x0, 0x4D, 0x14, 0x0, 0x0, 0x59, 0x14, 0x0, 0x0, 0x6B, 0x14, 0x0, 0x0, 0x6F, 0x14, 0x0, 0x0, 0x71, 0x14, 0x0, 0x0, 0x75, 0x14, 0x0, 0x0, 0x8D, 0x14, 0x0, 0x0, 0x99, 0x14, 0x0, 0x0, 0x9F, 0x14, 0x0, 0x0, 0xA1, 0x14, 0x0, 0x0, 0xB1, 0x14, 0x0, 0x0, 0xB7, 0x14, 0x0, 0x0, 0xBD, 0x14, 0x0, 0x0, 0xCB, 0x14, 0x0, 0x0, 0xD5, 0x14, 0x0, 0x0, 0xE3, 0x14, 0x0, 0x0, 0xE7, 0x14, 0x0, 0x0, 0x5, 0x15, 0x0, 0x0, 0xB, 0x15, 0x0, 0x0, 0x11, 0x15, 0x0, 0x0, 0x17, 0x15, 0x0, 0x0, 0x1F, 0x15, 0x0, 0x0, 0x25, 0x15, 0x0, 0x0, 0x29, 0x15, 0x0, 0x0, 0x2B, 0x15, 0x0, 0x0, 0x37, 0x15, 0x0, 0x0, 0x3D, 0x15, 0x0, 0x0, 0x41, 0x15, 0x0, 0x0, 0x43, 0x15, 0x0, 0x0, 0x49, 0x15, 0x0, 0x0, 0x5F, 0x15, 0x0, 0x0, 0x65, 0x15, 0x0, 0x0, 0x67, 0x15, 0x0, 0x0, 0x6B, 0x15, 0x0, 0x0, 0x7D, 0x15, 0x0, 0x0, 0x7F, 0x15, 0x0, 0x0, 0x83, 0x15, 0x0, 0x0, 0x8F, 0x15, 0x0, 0x0, 0x91, 0x15, 0x0, 0x0, 0x97, 0x15, 0x0, 0x0, 0x9B, 0x15, 0x0, 0x0, 0xB5, 0x15, 0x0, 0x0, 0xBB, 0x15, 0x0, 0x0, 0xC1, 0x15, 0x0, 0x0, 0xC5, 0x15, 0x0, 0x0, 0xCD, 0x15, 0x0, 0x0, 0xD7, 0x15, 0x0, 0x0, 0xF7, 0x15, 0x0, 0x0, 0x7, 0x16, 0x0, 0x0, 0x9, 0x16, 0x0, 0x0, 0xF, 0x16, 0x0, 0x0, 0x13, 0x16, 0x0, 0x0, 0x15, 0x16, 0x0, 0x0, 0x19, 0x16, 0x0, 0x0, 0x1B, 0x16, 0x0, 0x0, 0x25, 0x16, 0x0, 0x0, 0x33, 0x16, 0x0, 0x0, 0x39, 0x16, 0x0, 0x0, 0x3D, 0x16, 0x0, 0x0, 0x45, 0x16, 0x0, 0x0, 0x4F, 0x16, 0x0, 0x0, 0x55, 0x16, 0x0, 0x0, 0x69, 0x16, 0x0, 0x0, 0x6D, 0x16, 0x0, 0x0, 0x6F, 0x16, 0x0, 0x0, 0x75, 0x16, 0x0, 0x0, 0x93, 0x16, 0x0, 0x0, 0x97, 0x16, 0x0, 0x0, 0x9F, 0x16, 0x0, 0x0, 0xA9, 0x16, 0x0, 0x0, 0xAF, 0x16, 0x0, 0x0, 0xB5, 0x16, 0x0, 0x0, 0xBD, 0x16, 0x0, 0x0, 0xC3, 0x16, 0x0, 0x0, 0xCF, 0x16, 0x0, 0x0, 0xD3, 0x16, 0x0, 0x0, 0xD9, 0x16, 0x0, 0x0, 0xDB, 0x16, 0x0, 0x0, 0xE1, 0x16, 0x0, 0x0, 0xE5, 0x16, 0x0, 0x0, 0xEB, 0x16, 0x0, 0x0, 0xED, 0x16, 0x0, 0x0, 0xF7, 0x16, 0x0, 0x0, 0xF9, 0x16, 0x0, 0x0, 0x9, 0x17, 0x0, 0x0, 0xF, 0x17, 0x0, 0x0, 0x23, 0x17, 0x0, 0x0, 0x27, 0x17, 0x0, 0x0, 0x33, 0x17, 0x0, 0x0, 0x41, 0x17, 0x0, 0x0, 0x5D, 0x17, 0x0, 0x0, 0x63, 0x17, 0x0, 0x0 };
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D0_0_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D0_0_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D0_0_DefaultValueData, &$ArrayType$3132_t1504_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D5_1_DefaultValueData[] = { 0x29, 0x2E, 0x43, 0xC9, 0xA2, 0xD8, 0x7C, 0x1, 0x3D, 0x36, 0x54, 0xA1, 0xEC, 0xF0, 0x6, 0x13, 0x62, 0xA7, 0x5, 0xF3, 0xC0, 0xC7, 0x73, 0x8C, 0x98, 0x93, 0x2B, 0xD9, 0xBC, 0x4C, 0x82, 0xCA, 0x1E, 0x9B, 0x57, 0x3C, 0xFD, 0xD4, 0xE0, 0x16, 0x67, 0x42, 0x6F, 0x18, 0x8A, 0x17, 0xE5, 0x12, 0xBE, 0x4E, 0xC4, 0xD6, 0xDA, 0x9E, 0xDE, 0x49, 0xA0, 0xFB, 0xF5, 0x8E, 0xBB, 0x2F, 0xEE, 0x7A, 0xA9, 0x68, 0x79, 0x91, 0x15, 0xB2, 0x7, 0x3F, 0x94, 0xC2, 0x10, 0x89, 0xB, 0x22, 0x5F, 0x21, 0x80, 0x7F, 0x5D, 0x9A, 0x5A, 0x90, 0x32, 0x27, 0x35, 0x3E, 0xCC, 0xE7, 0xBF, 0xF7, 0x97, 0x3, 0xFF, 0x19, 0x30, 0xB3, 0x48, 0xA5, 0xB5, 0xD1, 0xD7, 0x5E, 0x92, 0x2A, 0xAC, 0x56, 0xAA, 0xC6, 0x4F, 0xB8, 0x38, 0xD2, 0x96, 0xA4, 0x7D, 0xB6, 0x76, 0xFC, 0x6B, 0xE2, 0x9C, 0x74, 0x4, 0xF1, 0x45, 0x9D, 0x70, 0x59, 0x64, 0x71, 0x87, 0x20, 0x86, 0x5B, 0xCF, 0x65, 0xE6, 0x2D, 0xA8, 0x2, 0x1B, 0x60, 0x25, 0xAD, 0xAE, 0xB0, 0xB9, 0xF6, 0x1C, 0x46, 0x61, 0x69, 0x34, 0x40, 0x7E, 0xF, 0x55, 0x47, 0xA3, 0x23, 0xDD, 0x51, 0xAF, 0x3A, 0xC3, 0x5C, 0xF9, 0xCE, 0xBA, 0xC5, 0xEA, 0x26, 0x2C, 0x53, 0xD, 0x6E, 0x85, 0x28, 0x84, 0x9, 0xD3, 0xDF, 0xCD, 0xF4, 0x41, 0x81, 0x4D, 0x52, 0x6A, 0xDC, 0x37, 0xC8, 0x6C, 0xC1, 0xAB, 0xFA, 0x24, 0xE1, 0x7B, 0x8, 0xC, 0xBD, 0xB1, 0x4A, 0x78, 0x88, 0x95, 0x8B, 0xE3, 0x63, 0xE8, 0x6D, 0xE9, 0xCB, 0xD5, 0xFE, 0x3B, 0x0, 0x1D, 0x39, 0xF2, 0xEF, 0xB7, 0xE, 0x66, 0x58, 0xD0, 0xE4, 0xA6, 0x77, 0x72, 0xF8, 0xEB, 0x75, 0x4B, 0xA, 0x31, 0x44, 0x50, 0xB4, 0x8F, 0xED, 0x1F, 0x1A, 0xDB, 0x99, 0x8D, 0x33, 0x9F, 0x11, 0x83, 0x14 };
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D5_1_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D5_1_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D5_1_DefaultValueData, &$ArrayType$256_t1505_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D6_2_DefaultValueData[] = { 0xDA, 0x39, 0xA3, 0xEE, 0x5E, 0x6B, 0x4B, 0xD, 0x32, 0x55, 0xBF, 0xEF, 0x95, 0x60, 0x18, 0x90, 0xAF, 0xD8, 0x7, 0x9 };
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D6_2_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D6_2_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D6_2_DefaultValueData, &$ArrayType$20_t1506_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D7_3_DefaultValueData[] = { 0xE3, 0xB0, 0xC4, 0x42, 0x98, 0xFC, 0x1C, 0x14, 0x9A, 0xFB, 0xF4, 0xC8, 0x99, 0x6F, 0xB9, 0x24, 0x27, 0xAE, 0x41, 0xE4, 0x64, 0x9B, 0x93, 0x4C, 0xA4, 0x95, 0x99, 0x1B, 0x78, 0x52, 0xB8, 0x55 };
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D7_3_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D7_3_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D7_3_DefaultValueData, &$ArrayType$32_t1507_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D8_4_DefaultValueData[] = { 0x38, 0xB0, 0x60, 0xA7, 0x51, 0xAC, 0x96, 0x38, 0x4C, 0xD9, 0x32, 0x7E, 0xB1, 0xB1, 0xE3, 0x6A, 0x21, 0xFD, 0xB7, 0x11, 0x14, 0xBE, 0x7, 0x43, 0x4C, 0xC, 0xC7, 0xBF, 0x63, 0xF6, 0xE1, 0xDA, 0x27, 0x4E, 0xDE, 0xBF, 0xE7, 0x6F, 0x65, 0xFB, 0xD5, 0x1A, 0xD2, 0xF1, 0x48, 0x98, 0xB9, 0x5B };
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D8_4_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D8_4_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D8_4_DefaultValueData, &$ArrayType$48_t1508_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D9_5_DefaultValueData[] = { 0xCF, 0x83, 0xE1, 0x35, 0x7E, 0xEF, 0xB8, 0xBD, 0xF1, 0x54, 0x28, 0x50, 0xD6, 0x6D, 0x80, 0x7, 0xD6, 0x20, 0xE4, 0x5, 0xB, 0x57, 0x15, 0xDC, 0x83, 0xF4, 0xA9, 0x21, 0xD3, 0x6C, 0xE9, 0xCE, 0x47, 0xD0, 0xD1, 0x3C, 0x5D, 0x85, 0xF2, 0xB0, 0xFF, 0x83, 0x18, 0xD2, 0x87, 0x7E, 0xEC, 0x2F, 0x63, 0xB9, 0x31, 0xBD, 0x47, 0x41, 0x7A, 0x81, 0xA5, 0x38, 0x32, 0x7A, 0xF9, 0x27, 0xDA, 0x3E };
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D9_5_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D9_5_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D9_5_DefaultValueData, &$ArrayType$64_t1509_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D11_6_DefaultValueData[] = { 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1, 0x1 };
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D11_6_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D11_6_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D11_6_DefaultValueData, &$ArrayType$64_t1509_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D12_7_DefaultValueData[] = { 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2 };
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D12_7_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D12_7_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D12_7_DefaultValueData, &$ArrayType$64_t1509_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D13_8_DefaultValueData[] = { 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3 };
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D13_8_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D13_8_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D13_8_DefaultValueData, &$ArrayType$64_t1509_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D14_9_DefaultValueData[] = { 0x9, 0x92, 0x26, 0x89, 0x93, 0xF2, 0x2C, 0x64, 0x1, 0x19, 0x0, 0x0 };
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D14_9_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D14_9_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D14_9_DefaultValueData, &$ArrayType$12_t1510_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D15_10_DefaultValueData[] = { 0x9, 0x92, 0x26, 0x89, 0x93, 0xF2, 0x2C, 0x64, 0x1, 0x1, 0x0, 0x0 };
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D15_10_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D15_10_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D15_10_DefaultValueData, &$ArrayType$12_t1510_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D16_11_DefaultValueData[] = { 0x2A, 0x86, 0x48, 0x86, 0xF7, 0xD, 0x1, 0x9, 0x1, 0x0, 0x0, 0x0 };
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D16_11_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D16_11_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D16_11_DefaultValueData, &$ArrayType$12_t1510_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D17_12_DefaultValueData[] = { 0x2C, 0x0, 0x2B, 0x0, 0x22, 0x0, 0x5C, 0x0, 0x3C, 0x0, 0x3E, 0x0, 0x3B, 0x0, 0x0, 0x0 };
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D17_12_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D17_12_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D17_12_DefaultValueData, &$ArrayType$16_t1511_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D21_13_DefaultValueData[] = { 0x43, 0x4C, 0x4E, 0x54 };
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D21_13_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D21_13_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D21_13_DefaultValueData, &$ArrayType$4_t1512_0_0_0 }/* value */

};
static const uint8_t U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D22_14_DefaultValueData[] = { 0x53, 0x52, 0x56, 0x52 };
static Il2CppFieldDefaultValueEntry U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D22_14_DefaultValue = 
{
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D22_14_FieldInfo/* field */
	, { (char*)U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D22_14_DefaultValueData, &$ArrayType$4_t1512_0_0_0 }/* value */

};
static Il2CppFieldDefaultValueEntry* U3CPrivateImplementationDetailsU3E_t1513_FieldDefaultValues[] = 
{
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D0_0_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D5_1_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D6_2_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D7_3_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D8_4_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D9_5_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D11_6_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D12_7_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D13_8_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D14_9_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D15_10_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D16_11_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D17_12_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D21_13_DefaultValue,
	&U3CPrivateImplementationDetailsU3E_t1513____$$fieldU2D22_14_DefaultValue,
	NULL
};
static MethodInfo* U3CPrivateImplementationDetailsU3E_t1513_MethodInfos[] =
{
	NULL
};
extern TypeInfo $ArrayType$3132_t1504_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$256_t1505_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$20_t1506_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$32_t1507_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$48_t1508_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$64_t1509_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$12_t1510_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$16_t1511_il2cpp_TypeInfo;
extern TypeInfo $ArrayType$4_t1512_il2cpp_TypeInfo;
static TypeInfo* U3CPrivateImplementationDetailsU3E_t1513_il2cpp_TypeInfo__nestedTypes[10] =
{
	&$ArrayType$3132_t1504_il2cpp_TypeInfo,
	&$ArrayType$256_t1505_il2cpp_TypeInfo,
	&$ArrayType$20_t1506_il2cpp_TypeInfo,
	&$ArrayType$32_t1507_il2cpp_TypeInfo,
	&$ArrayType$48_t1508_il2cpp_TypeInfo,
	&$ArrayType$64_t1509_il2cpp_TypeInfo,
	&$ArrayType$12_t1510_il2cpp_TypeInfo,
	&$ArrayType$16_t1511_il2cpp_TypeInfo,
	&$ArrayType$4_t1512_il2cpp_TypeInfo,
	NULL
};
static MethodInfo* U3CPrivateImplementationDetailsU3E_t1513_VTable[] =
{
	&Object_Equals_m517_MethodInfo,
	&Object_Finalize_m473_MethodInfo,
	&Object_GetHashCode_m518_MethodInfo,
	&Object_ToString_m498_MethodInfo,
};
extern TypeInfo CompilerGeneratedAttribute_t104_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAt.h"
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilerGeneratedAtMethodDeclarations.h"
extern MethodInfo CompilerGeneratedAttribute__ctor_m556_MethodInfo;
void U3CPrivateImplementationDetailsU3E_t1513_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		CompilerGeneratedAttribute_t104 * tmp;
		tmp = (CompilerGeneratedAttribute_t104 *)il2cpp_codegen_object_new (&CompilerGeneratedAttribute_t104_il2cpp_TypeInfo);
		CompilerGeneratedAttribute__ctor_m556(tmp, &CompilerGeneratedAttribute__ctor_m556_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache U3CPrivateImplementationDetailsU3E_t1513__CustomAttributeCache = {
1,
NULL,
&U3CPrivateImplementationDetailsU3E_t1513_CustomAttributesCacheGenerator
};
extern Il2CppImage g_Mono_Security_dll_Image;
extern Il2CppType U3CPrivateImplementationDetailsU3E_t1513_0_0_0;
extern Il2CppType U3CPrivateImplementationDetailsU3E_t1513_1_0_0;
struct U3CPrivateImplementationDetailsU3E_t1513;
extern CustomAttributesCache U3CPrivateImplementationDetailsU3E_t1513__CustomAttributeCache;
TypeInfo U3CPrivateImplementationDetailsU3E_t1513_il2cpp_TypeInfo = 
{
	&g_Mono_Security_dll_Image/* image */
	, NULL/* gc_desc */
	, "<PrivateImplementationDetails>"/* name */
	, ""/* namespaze */
	, U3CPrivateImplementationDetailsU3E_t1513_MethodInfos/* methods */
	, NULL/* properties */
	, U3CPrivateImplementationDetailsU3E_t1513_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, U3CPrivateImplementationDetailsU3E_t1513_il2cpp_TypeInfo__nestedTypes/* nested_types */
	, NULL/* nested_in */
	, &U3CPrivateImplementationDetailsU3E_t1513_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, U3CPrivateImplementationDetailsU3E_t1513_VTable/* vtable */
	, &U3CPrivateImplementationDetailsU3E_t1513__CustomAttributeCache/* custom_attributes_cache */
	, &U3CPrivateImplementationDetailsU3E_t1513_il2cpp_TypeInfo/* cast_class */
	, &U3CPrivateImplementationDetailsU3E_t1513_0_0_0/* byval_arg */
	, &U3CPrivateImplementationDetailsU3E_t1513_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, NULL/* generic_class */
	, NULL/* generic_container */
	, U3CPrivateImplementationDetailsU3E_t1513_FieldDefaultValues/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CPrivateImplementationDetailsU3E_t1513)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(U3CPrivateImplementationDetailsU3E_t1513_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 0/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, false/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 0/* method_count */
	, 0/* property_count */
	, 15/* field_count */
	, 0/* event_count */
	, 9/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
