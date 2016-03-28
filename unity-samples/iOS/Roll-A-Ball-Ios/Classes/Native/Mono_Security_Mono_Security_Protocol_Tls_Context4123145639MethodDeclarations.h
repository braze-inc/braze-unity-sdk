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

// Mono.Security.Protocol.Tls.Context
struct Context_t4123145639;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// Mono.Security.Protocol.Tls.TlsServerSettings
struct TlsServerSettings_t2090450521;
// Mono.Security.Protocol.Tls.TlsClientSettings
struct TlsClientSettings_t2063694561;
// Mono.Security.Protocol.Tls.CipherSuiteCollection
struct CipherSuiteCollection_t1023598115;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t720149587;
// Mono.Security.Protocol.Tls.RecordProtocol
struct RecordProtocol_t3519001153;
// Mono.Security.Protocol.Tls.SecurityParameters
struct SecurityParameters_t202779010;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityP4015394186.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityC1615155800.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake1150764700.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake3657199378.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSui1023598115.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_RecordPro3519001153.h"

// System.Void Mono.Security.Protocol.Tls.Context::.ctor(Mono.Security.Protocol.Tls.SecurityProtocolType)
extern "C"  void Context__ctor_m2692561931 (Context_t4123145639 * __this, int32_t ___securityProtocolType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Context::get_AbbreviatedHandshake()
extern "C"  bool Context_get_AbbreviatedHandshake_m3621257066 (Context_t4123145639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_AbbreviatedHandshake(System.Boolean)
extern "C"  void Context_set_AbbreviatedHandshake_m66679943 (Context_t4123145639 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Context::get_ProtocolNegotiated()
extern "C"  bool Context_get_ProtocolNegotiated_m2137079082 (Context_t4123145639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ProtocolNegotiated(System.Boolean)
extern "C"  void Context_set_ProtocolNegotiated_m2979902407 (Context_t4123145639 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.Context::get_SecurityProtocol()
extern "C"  int32_t Context_get_SecurityProtocol_m2457665585 (Context_t4123145639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_SecurityProtocol(Mono.Security.Protocol.Tls.SecurityProtocolType)
extern "C"  void Context_set_SecurityProtocol_m848973232 (Context_t4123145639 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.Context::get_SecurityProtocolFlags()
extern "C"  int32_t Context_get_SecurityProtocolFlags_m1914144888 (Context_t4123145639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.Protocol.Tls.Context::get_Protocol()
extern "C"  int16_t Context_get_Protocol_m775713592 (Context_t4123145639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_SessionId()
extern "C"  ByteU5BU5D_t58506160* Context_get_SessionId_m1237865483 (Context_t4123145639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_SessionId(System.Byte[])
extern "C"  void Context_set_SessionId_m3092121576 (Context_t4123145639 * __this, ByteU5BU5D_t58506160* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityCompressionType Mono.Security.Protocol.Tls.Context::get_CompressionMethod()
extern "C"  int32_t Context_get_CompressionMethod_m487253678 (Context_t4123145639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_CompressionMethod(Mono.Security.Protocol.Tls.SecurityCompressionType)
extern "C"  void Context_set_CompressionMethod_m3462049341 (Context_t4123145639 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.TlsServerSettings Mono.Security.Protocol.Tls.Context::get_ServerSettings()
extern "C"  TlsServerSettings_t2090450521 * Context_get_ServerSettings_m4010613088 (Context_t4123145639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.TlsClientSettings Mono.Security.Protocol.Tls.Context::get_ClientSettings()
extern "C"  TlsClientSettings_t2063694561 * Context_get_ClientSettings_m4242530400 (Context_t4123145639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeType Mono.Security.Protocol.Tls.Context::get_LastHandshakeMsg()
extern "C"  uint8_t Context_get_LastHandshakeMsg_m1576961185 (Context_t4123145639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_LastHandshakeMsg(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C"  void Context_set_LastHandshakeMsg_m1436694014 (Context_t4123145639 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.HandshakeState Mono.Security.Protocol.Tls.Context::get_HandshakeState()
extern "C"  int32_t Context_get_HandshakeState_m972066827 (Context_t4123145639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_HandshakeState(Mono.Security.Protocol.Tls.HandshakeState)
extern "C"  void Context_set_HandshakeState_m3428098438 (Context_t4123145639 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Context::get_ReceivedConnectionEnd()
extern "C"  bool Context_get_ReceivedConnectionEnd_m731026834 (Context_t4123145639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ReceivedConnectionEnd(System.Boolean)
extern "C"  void Context_set_ReceivedConnectionEnd_m1502103331 (Context_t4123145639 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Context::get_SentConnectionEnd()
extern "C"  bool Context_get_SentConnectionEnd_m1343643003 (Context_t4123145639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_SentConnectionEnd(System.Boolean)
extern "C"  void Context_set_SentConnectionEnd_m2988269644 (Context_t4123145639 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuiteCollection Mono.Security.Protocol.Tls.Context::get_SupportedCiphers()
extern "C"  CipherSuiteCollection_t1023598115 * Context_get_SupportedCiphers_m2251752138 (Context_t4123145639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_SupportedCiphers(Mono.Security.Protocol.Tls.CipherSuiteCollection)
extern "C"  void Context_set_SupportedCiphers_m2658500263 (Context_t4123145639 * __this, CipherSuiteCollection_t1023598115 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.TlsStream Mono.Security.Protocol.Tls.Context::get_HandshakeMessages()
extern "C"  TlsStream_t720149587 * Context_get_HandshakeMessages_m1457854885 (Context_t4123145639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Mono.Security.Protocol.Tls.Context::get_WriteSequenceNumber()
extern "C"  uint64_t Context_get_WriteSequenceNumber_m2425723185 (Context_t4123145639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_WriteSequenceNumber(System.UInt64)
extern "C"  void Context_set_WriteSequenceNumber_m970670722 (Context_t4123145639 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Mono.Security.Protocol.Tls.Context::get_ReadSequenceNumber()
extern "C"  uint64_t Context_get_ReadSequenceNumber_m1306012538 (Context_t4123145639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ReadSequenceNumber(System.UInt64)
extern "C"  void Context_set_ReadSequenceNumber_m3107900585 (Context_t4123145639 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ClientRandom()
extern "C"  ByteU5BU5D_t58506160* Context_get_ClientRandom_m1978397270 (Context_t4123145639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ClientRandom(System.Byte[])
extern "C"  void Context_set_ClientRandom_m628701865 (Context_t4123145639 * __this, ByteU5BU5D_t58506160* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ServerRandom()
extern "C"  ByteU5BU5D_t58506160* Context_get_ServerRandom_m2005153230 (Context_t4123145639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ServerRandom(System.Byte[])
extern "C"  void Context_set_ServerRandom_m1721522737 (Context_t4123145639 * __this, ByteU5BU5D_t58506160* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_RandomCS()
extern "C"  ByteU5BU5D_t58506160* Context_get_RandomCS_m1402706075 (Context_t4123145639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_RandomCS(System.Byte[])
extern "C"  void Context_set_RandomCS_m2386417540 (Context_t4123145639 * __this, ByteU5BU5D_t58506160* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_RandomSC()
extern "C"  ByteU5BU5D_t58506160* Context_get_RandomSC_m1403167355 (Context_t4123145639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_RandomSC(System.Byte[])
extern "C"  void Context_set_RandomSC_m2143148452 (Context_t4123145639 * __this, ByteU5BU5D_t58506160* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_MasterSecret()
extern "C"  ByteU5BU5D_t58506160* Context_get_MasterSecret_m2040743066 (Context_t4123145639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_MasterSecret(System.Byte[])
extern "C"  void Context_set_MasterSecret_m748730085 (Context_t4123145639 * __this, ByteU5BU5D_t58506160* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ClientWriteKey()
extern "C"  ByteU5BU5D_t58506160* Context_get_ClientWriteKey_m2094953427 (Context_t4123145639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ClientWriteKey(System.Byte[])
extern "C"  void Context_set_ClientWriteKey_m409290444 (Context_t4123145639 * __this, ByteU5BU5D_t58506160* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ServerWriteKey()
extern "C"  ByteU5BU5D_t58506160* Context_get_ServerWriteKey_m2037627211 (Context_t4123145639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ServerWriteKey(System.Byte[])
extern "C"  void Context_set_ServerWriteKey_m2638128212 (Context_t4123145639 * __this, ByteU5BU5D_t58506160* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ClientWriteIV()
extern "C"  ByteU5BU5D_t58506160* Context_get_ClientWriteIV_m621691963 (Context_t4123145639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ClientWriteIV(System.Byte[])
extern "C"  void Context_set_ClientWriteIV_m3933057208 (Context_t4123145639 * __this, ByteU5BU5D_t58506160* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ServerWriteIV()
extern "C"  ByteU5BU5D_t58506160* Context_get_ServerWriteIV_m1451126723 (Context_t4123145639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ServerWriteIV(System.Byte[])
extern "C"  void Context_set_ServerWriteIV_m3450765872 (Context_t4123145639 * __this, ByteU5BU5D_t58506160* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.RecordProtocol Mono.Security.Protocol.Tls.Context::get_RecordProtocol()
extern "C"  RecordProtocol_t3519001153 * Context_get_RecordProtocol_m3223396139 (Context_t4123145639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_RecordProtocol(Mono.Security.Protocol.Tls.RecordProtocol)
extern "C"  void Context_set_RecordProtocol_m1649539496 (Context_t4123145639 * __this, RecordProtocol_t3519001153 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.Context::GetUnixTime()
extern "C"  int32_t Context_GetUnixTime_m545141264 (Context_t4123145639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::GetSecureRandomBytes(System.Int32)
extern "C"  ByteU5BU5D_t58506160* Context_GetSecureRandomBytes_m3225475755 (Context_t4123145639 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::Clear()
extern "C"  void Context_Clear_m2073665242 (Context_t4123145639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::ClearKeyInfo()
extern "C"  void Context_ClearKeyInfo_m2273078613 (Context_t4123145639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.Context::DecodeProtocolCode(System.Int16)
extern "C"  int32_t Context_DecodeProtocolCode_m1937919790 (Context_t4123145639 * __this, int16_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::ChangeProtocol(System.Int16)
extern "C"  void Context_ChangeProtocol_m460386024 (Context_t4123145639 * __this, int16_t ___protocol, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::get_Current()
extern "C"  SecurityParameters_t202779010 * Context_get_Current_m2247657978 (Context_t4123145639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::get_Negotiating()
extern "C"  SecurityParameters_t202779010 * Context_get_Negotiating_m622190524 (Context_t4123145639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::get_Read()
extern "C"  SecurityParameters_t202779010 * Context_get_Read_m3694946135 (Context_t4123145639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::get_Write()
extern "C"  SecurityParameters_t202779010 * Context_get_Write_m3396834016 (Context_t4123145639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::StartSwitchingSecurityParameters(System.Boolean)
extern "C"  void Context_StartSwitchingSecurityParameters_m271202242 (Context_t4123145639 * __this, bool ___client, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::EndSwitchingSecurityParameters(System.Boolean)
extern "C"  void Context_EndSwitchingSecurityParameters_m284941993 (Context_t4123145639 * __this, bool ___client, const MethodInfo* method) IL2CPP_METHOD_ATTR;
