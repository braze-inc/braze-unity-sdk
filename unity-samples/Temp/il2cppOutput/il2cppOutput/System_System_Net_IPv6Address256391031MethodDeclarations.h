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

// System.Net.IPv6Address
struct IPv6Address_t256391031;
// System.UInt16[]
struct UInt16U5BU5D_t3999484061;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "System_System_Net_IPv6Address256391031.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Net.IPv6Address::.ctor(System.UInt16[])
extern "C"  void IPv6Address__ctor_m194879283 (IPv6Address_t256391031 * __this, UInt16U5BU5D_t3999484061* ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPv6Address::.ctor(System.UInt16[],System.Int32)
extern "C"  void IPv6Address__ctor_m705628292 (IPv6Address_t256391031 * __this, UInt16U5BU5D_t3999484061* ___addr0, int32_t ___prefixLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPv6Address::.ctor(System.UInt16[],System.Int32,System.Int32)
extern "C"  void IPv6Address__ctor_m974981843 (IPv6Address_t256391031 * __this, UInt16U5BU5D_t3999484061* ___addr0, int32_t ___prefixLength1, int32_t ___scopeId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPv6Address::.cctor()
extern "C"  void IPv6Address__cctor_m84116622 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPv6Address System.Net.IPv6Address::Parse(System.String)
extern "C"  IPv6Address_t256391031 * IPv6Address_Parse_m1303737588 (Il2CppObject * __this /* static, unused */, String_t* ___ipString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPv6Address::Fill(System.UInt16[],System.String)
extern "C"  int32_t IPv6Address_Fill_m1034015862 (Il2CppObject * __this /* static, unused */, UInt16U5BU5D_t3999484061* ___addr0, String_t* ___ipString1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPv6Address::TryParse(System.String,System.Int32&)
extern "C"  bool IPv6Address_TryParse_m895448644 (Il2CppObject * __this /* static, unused */, String_t* ___prefix0, int32_t* ___res1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPv6Address::TryParse(System.String,System.Net.IPv6Address&)
extern "C"  bool IPv6Address_TryParse_m711194034 (Il2CppObject * __this /* static, unused */, String_t* ___ipString0, IPv6Address_t256391031 ** ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16[] System.Net.IPv6Address::get_Address()
extern "C"  UInt16U5BU5D_t3999484061* IPv6Address_get_Address_m1909339413 (IPv6Address_t256391031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.IPv6Address::get_ScopeId()
extern "C"  int64_t IPv6Address_get_ScopeId_m2822565682 (IPv6Address_t256391031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPv6Address::set_ScopeId(System.Int64)
extern "C"  void IPv6Address_set_ScopeId_m1866414241 (IPv6Address_t256391031 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPv6Address::IsLoopback(System.Net.IPv6Address)
extern "C"  bool IPv6Address_IsLoopback_m3559367027 (Il2CppObject * __this /* static, unused */, IPv6Address_t256391031 * ___addr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Net.IPv6Address::SwapUShort(System.UInt16)
extern "C"  uint16_t IPv6Address_SwapUShort_m3711871552 (Il2CppObject * __this /* static, unused */, uint16_t ___number0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPv6Address::AsIPv4Int()
extern "C"  int32_t IPv6Address_AsIPv4Int_m2221656389 (IPv6Address_t256391031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPv6Address::IsIPv4Compatible()
extern "C"  bool IPv6Address_IsIPv4Compatible_m3774873342 (IPv6Address_t256391031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPv6Address::IsIPv4Mapped()
extern "C"  bool IPv6Address_IsIPv4Mapped_m525075229 (IPv6Address_t256391031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.IPv6Address::ToString()
extern "C"  String_t* IPv6Address_ToString_m804087156 (IPv6Address_t256391031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.IPv6Address::ToString(System.Boolean)
extern "C"  String_t* IPv6Address_ToString_m2548793323 (IPv6Address_t256391031 * __this, bool ___fullLength0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPv6Address::Equals(System.Object)
extern "C"  bool IPv6Address_Equals_m1266534874 (IPv6Address_t256391031 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPv6Address::GetHashCode()
extern "C"  int32_t IPv6Address_GetHashCode_m691770942 (IPv6Address_t256391031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPv6Address::Hash(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int32_t IPv6Address_Hash_m1904786435 (Il2CppObject * __this /* static, unused */, int32_t ___i0, int32_t ___j1, int32_t ___k2, int32_t ___l3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
