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

// Mono.Security.ASN1
struct ASN1_t1254135647;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_ASN11254135646.h"

// System.Void Mono.Security.ASN1::.ctor(System.Byte)
extern "C"  void ASN1__ctor_m3086925575 (ASN1_t1254135647 * __this, uint8_t ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::.ctor(System.Byte,System.Byte[])
extern "C"  void ASN1__ctor_m2727735242 (ASN1_t1254135647 * __this, uint8_t ___tag, ByteU5BU5D_t58506160* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::.ctor(System.Byte[])
extern "C"  void ASN1__ctor_m3008094309 (ASN1_t1254135647 * __this, ByteU5BU5D_t58506160* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.ASN1::get_Count()
extern "C"  int32_t ASN1_get_Count_m2214472120 (ASN1_t1254135647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.ASN1::get_Tag()
extern "C"  uint8_t ASN1_get_Tag_m442995239 (ASN1_t1254135647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.ASN1::get_Length()
extern "C"  int32_t ASN1_get_Length_m2237640703 (ASN1_t1254135647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.ASN1::get_Value()
extern "C"  ByteU5BU5D_t58506160* ASN1_get_Value_m390067040 (ASN1_t1254135647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::set_Value(System.Byte[])
extern "C"  void ASN1_set_Value_m213247127 (ASN1_t1254135647 * __this, ByteU5BU5D_t58506160* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.ASN1::CompareArray(System.Byte[],System.Byte[])
extern "C"  bool ASN1_CompareArray_m2104154182 (ASN1_t1254135647 * __this, ByteU5BU5D_t58506160* ___array1, ByteU5BU5D_t58506160* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.ASN1::CompareValue(System.Byte[])
extern "C"  bool ASN1_CompareValue_m1123010439 (ASN1_t1254135647 * __this, ByteU5BU5D_t58506160* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.ASN1::Add(Mono.Security.ASN1)
extern "C"  ASN1_t1254135647 * ASN1_Add_m1424422628 (ASN1_t1254135647 * __this, ASN1_t1254135647 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.ASN1::GetBytes()
extern "C"  ByteU5BU5D_t58506160* ASN1_GetBytes_m2350265955 (ASN1_t1254135647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::Decode(System.Byte[],System.Int32&,System.Int32)
extern "C"  void ASN1_Decode_m2560929067 (ASN1_t1254135647 * __this, ByteU5BU5D_t58506160* ___asn1, int32_t* ___anPos, int32_t ___anLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::DecodeTLV(System.Byte[],System.Int32&,System.Byte&,System.Int32&,System.Byte[]&)
extern "C"  void ASN1_DecodeTLV_m1331458973 (ASN1_t1254135647 * __this, ByteU5BU5D_t58506160* ___asn1, int32_t* ___pos, uint8_t* ___tag, int32_t* ___length, ByteU5BU5D_t58506160** ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.ASN1::get_Item(System.Int32)
extern "C"  ASN1_t1254135647 * ASN1_get_Item_m3727278260 (ASN1_t1254135647 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.ASN1::Element(System.Int32,System.Byte)
extern "C"  ASN1_t1254135647 * ASN1_Element_m2786077841 (ASN1_t1254135647 * __this, int32_t ___index, uint8_t ___anTag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.ASN1::ToString()
extern "C"  String_t* ASN1_ToString_m2072053203 (ASN1_t1254135647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
