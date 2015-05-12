#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.ASN1
struct ASN1_t1373;
// System.Byte[]
struct ByteU5BU5D_t97;
// System.String
struct String_t;

// System.Void Mono.Security.ASN1::.ctor(System.Byte)
 void ASN1__ctor_m5591 (ASN1_t1373 * __this, uint8_t ___tag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::.ctor(System.Byte,System.Byte[])
 void ASN1__ctor_m5592 (ASN1_t1373 * __this, uint8_t ___tag, ByteU5BU5D_t97* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::.ctor(System.Byte[])
 void ASN1__ctor_m5593 (ASN1_t1373 * __this, ByteU5BU5D_t97* ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.ASN1::get_Count()
 int32_t ASN1_get_Count_m5594 (ASN1_t1373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.ASN1::get_Tag()
 uint8_t ASN1_get_Tag_m5595 (ASN1_t1373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.ASN1::get_Length()
 int32_t ASN1_get_Length_m5596 (ASN1_t1373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.ASN1::get_Value()
 ByteU5BU5D_t97* ASN1_get_Value_m5597 (ASN1_t1373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::set_Value(System.Byte[])
 void ASN1_set_Value_m5598 (ASN1_t1373 * __this, ByteU5BU5D_t97* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.ASN1::CompareArray(System.Byte[],System.Byte[])
 bool ASN1_CompareArray_m5599 (ASN1_t1373 * __this, ByteU5BU5D_t97* ___array1, ByteU5BU5D_t97* ___array2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.ASN1::CompareValue(System.Byte[])
 bool ASN1_CompareValue_m5600 (ASN1_t1373 * __this, ByteU5BU5D_t97* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.ASN1::Add(Mono.Security.ASN1)
 ASN1_t1373 * ASN1_Add_m5601 (ASN1_t1373 * __this, ASN1_t1373 * ___asn1, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.ASN1::GetBytes()
 ByteU5BU5D_t97* ASN1_GetBytes_m5602 (ASN1_t1373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::Decode(System.Byte[],System.Int32&,System.Int32)
 void ASN1_Decode_m5603 (ASN1_t1373 * __this, ByteU5BU5D_t97* ___asn1, int32_t* ___anPos, int32_t ___anLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.ASN1::DecodeTLV(System.Byte[],System.Int32&,System.Byte&,System.Int32&,System.Byte[]&)
 void ASN1_DecodeTLV_m5604 (ASN1_t1373 * __this, ByteU5BU5D_t97* ___asn1, int32_t* ___pos, uint8_t* ___tag, int32_t* ___length, ByteU5BU5D_t97** ___content, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.ASN1::get_Item(System.Int32)
 ASN1_t1373 * ASN1_get_Item_m5605 (ASN1_t1373 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.ASN1::Element(System.Int32,System.Byte)
 ASN1_t1373 * ASN1_Element_m5606 (ASN1_t1373 * __this, int32_t ___index, uint8_t ___anTag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.ASN1::ToString()
 String_t* ASN1_ToString_m5607 (ASN1_t1373 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
