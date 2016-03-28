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
struct ASN1_t1254135646;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Mono_Security_ASN11254135646.h"

// System.Void Mono.Security.ASN1::.ctor(System.Byte)
extern "C"  void ASN1__ctor_m2151045169 (ASN1_t1254135646 * __this, uint8_t ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::.ctor(System.Byte,System.Byte[])
extern "C"  void ASN1__ctor_m520959860 (ASN1_t1254135646 * __this, uint8_t ___tag, ByteU5BU5D_t58506160* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::.ctor(System.Byte[])
extern "C"  void ASN1__ctor_m1275189007 (ASN1_t1254135646 * __this, ByteU5BU5D_t58506160* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.ASN1::get_Count()
extern "C"  int32_t ASN1_get_Count_m1333946978 (ASN1_t1254135646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.ASN1::get_Tag()
extern "C"  uint8_t ASN1_get_Tag_m3498647997 (ASN1_t1254135646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.ASN1::get_Length()
extern "C"  int32_t ASN1_get_Length_m711165077 (ASN1_t1254135646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.ASN1::get_Value()
extern "C"  ByteU5BU5D_t58506160* ASN1_get_Value_m3158558710 (ASN1_t1254135646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::set_Value(System.Byte[])
extern "C"  void ASN1_set_Value_m1539277917 (ASN1_t1254135646 * __this, ByteU5BU5D_t58506160* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.ASN1::CompareArray(System.Byte[],System.Byte[])
extern "C"  bool ASN1_CompareArray_m2898057484 (ASN1_t1254135646 * __this, ByteU5BU5D_t58506160* ___array1, ByteU5BU5D_t58506160* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.ASN1::CompareValue(System.Byte[])
extern "C"  bool ASN1_CompareValue_m3775459761 (ASN1_t1254135646 * __this, ByteU5BU5D_t58506160* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.ASN1::Add(Mono.Security.ASN1)
extern "C"  ASN1_t1254135646 * ASN1_Add_m4076871950 (ASN1_t1254135646 * __this, ASN1_t1254135646 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.ASN1::GetBytes()
extern "C"  ByteU5BU5D_t58506160* ASN1_GetBytes_m653053737 (ASN1_t1254135646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::Decode(System.Byte[],System.Int32&,System.Int32)
extern "C"  void ASN1_Decode_m3655129841 (ASN1_t1254135646 * __this, ByteU5BU5D_t58506160* ___asn1, int32_t* ___anPos, int32_t ___anLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::DecodeTLV(System.Byte[],System.Int32&,System.Byte&,System.Int32&,System.Byte[]&)
extern "C"  void ASN1_DecodeTLV_m4051437923 (ASN1_t1254135646 * __this, ByteU5BU5D_t58506160* ___asn1, int32_t* ___pos, uint8_t* ___tag, int32_t* ___length, ByteU5BU5D_t58506160** ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.ASN1::get_Item(System.Int32)
extern "C"  ASN1_t1254135646 * ASN1_get_Item_m210610506 (ASN1_t1254135646 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.ASN1::Element(System.Int32,System.Byte)
extern "C"  ASN1_t1254135646 * ASN1_Element_m2807922775 (ASN1_t1254135646 * __this, int32_t ___index, uint8_t ___anTag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.ASN1::ToString()
extern "C"  String_t* ASN1_ToString_m374840985 (ASN1_t1254135646 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
