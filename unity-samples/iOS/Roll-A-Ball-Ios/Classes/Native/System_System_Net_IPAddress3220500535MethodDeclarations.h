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

// System.Net.IPAddress
struct IPAddress_t3220500535;
// System.UInt16[]
struct UInt16U5BU5D_t3999484061;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "System_System_Net_IPAddress3220500535.h"
#include "System_System_Net_Sockets_AddressFamily1632127208.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Net.IPAddress::.ctor(System.Int64)
extern "C"  void IPAddress__ctor_m927672017 (IPAddress_t3220500535 * __this, int64_t ___addr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPAddress::.ctor(System.UInt16[],System.Int64)
extern "C"  void IPAddress__ctor_m3937524101 (IPAddress_t3220500535 * __this, UInt16U5BU5D_t3999484061* ___address, int64_t ___scopeId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPAddress::.cctor()
extern "C"  void IPAddress__cctor_m3356110606 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Net.IPAddress::SwapShort(System.Int16)
extern "C"  int16_t IPAddress_SwapShort_m2091369575 (Il2CppObject * __this /* static, unused */, int16_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Net.IPAddress::HostToNetworkOrder(System.Int16)
extern "C"  int16_t IPAddress_HostToNetworkOrder_m3514593469 (Il2CppObject * __this /* static, unused */, int16_t ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Net.IPAddress::NetworkToHostOrder(System.Int16)
extern "C"  int16_t IPAddress_NetworkToHostOrder_m3568389847 (Il2CppObject * __this /* static, unused */, int16_t ___network, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.IPAddress::Parse(System.String)
extern "C"  IPAddress_t3220500535 * IPAddress_Parse_m1640477876 (Il2CppObject * __this /* static, unused */, String_t* ___ipString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPAddress::TryParse(System.String,System.Net.IPAddress&)
extern "C"  bool IPAddress_TryParse_m1385842418 (Il2CppObject * __this /* static, unused */, String_t* ___ipString, IPAddress_t3220500535 ** ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.IPAddress::ParseIPV4(System.String)
extern "C"  IPAddress_t3220500535 * IPAddress_ParseIPV4_m120660623 (Il2CppObject * __this /* static, unused */, String_t* ___ip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.IPAddress::ParseIPV6(System.String)
extern "C"  IPAddress_t3220500535 * IPAddress_ParseIPV6_m3394559565 (Il2CppObject * __this /* static, unused */, String_t* ___ip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.IPAddress::get_InternalIPv4Address()
extern "C"  int64_t IPAddress_get_InternalIPv4Address_m2101711253 (IPAddress_t3220500535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.IPAddress::get_ScopeId()
extern "C"  int64_t IPAddress_get_ScopeId_m2224014450 (IPAddress_t3220500535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
extern "C"  int32_t IPAddress_get_AddressFamily_m2364322247 (IPAddress_t3220500535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPAddress::IsLoopback(System.Net.IPAddress)
extern "C"  bool IPAddress_IsLoopback_m3449051763 (Il2CppObject * __this /* static, unused */, IPAddress_t3220500535 * ___addr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.IPAddress::ToString()
extern "C"  String_t* IPAddress_ToString_m2947972276 (IPAddress_t3220500535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.IPAddress::ToString(System.Int64)
extern "C"  String_t* IPAddress_ToString_m277532550 (Il2CppObject * __this /* static, unused */, int64_t ___addr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPAddress::Equals(System.Object)
extern "C"  bool IPAddress_Equals_m1176433114 (IPAddress_t3220500535 * __this, Il2CppObject * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPAddress::GetHashCode()
extern "C"  int32_t IPAddress_GetHashCode_m1369616318 (IPAddress_t3220500535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPAddress::Hash(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t IPAddress_Hash_m3738146179 (Il2CppObject * __this /* static, unused */, int32_t ___i, int32_t ___j, int32_t ___k, int32_t ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
