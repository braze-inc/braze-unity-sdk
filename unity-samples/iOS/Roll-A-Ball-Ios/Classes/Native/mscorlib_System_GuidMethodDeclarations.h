#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Guid
struct Guid_t116;
// System.Byte[]
struct ByteU5BU5D_t112;
// System.Object
struct Object_t;
// System.Text.StringBuilder
struct StringBuilder_t89;
// System.String
struct String_t;
// System.IFormatProvider
struct IFormatProvider_t1173;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Guid::.ctor(System.Byte[])
 void Guid__ctor_m11758 (Guid_t116 * __this, ByteU5BU5D_t112* ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::.ctor(System.Int32,System.Int16,System.Int16,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte,System.Byte)
 void Guid__ctor_m11759 (Guid_t116 * __this, int32_t ___a, int16_t ___b, int16_t ___c, uint8_t ___d, uint8_t ___e, uint8_t ___f, uint8_t ___g, uint8_t ___h, uint8_t ___i, uint8_t ___j, uint8_t ___k, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::.cctor()
 void Guid__cctor_m11760 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::CheckNull(System.Object)
 void Guid_CheckNull_m11761 (Object_t * __this/* static, unused */, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::CheckLength(System.Byte[],System.Int32)
 void Guid_CheckLength_m11762 (Object_t * __this/* static, unused */, ByteU5BU5D_t112* ___o, int32_t ___l, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::CheckArray(System.Byte[],System.Int32)
 void Guid_CheckArray_m11763 (Object_t * __this/* static, unused */, ByteU5BU5D_t112* ___o, int32_t ___l, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Guid::Compare(System.Int32,System.Int32)
 int32_t Guid_Compare_m11764 (Object_t * __this/* static, unused */, int32_t ___x, int32_t ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Guid::CompareTo(System.Object)
 int32_t Guid_CompareTo_m11765 (Guid_t116 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Guid::Equals(System.Object)
 bool Guid_Equals_m11766 (Guid_t116 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Guid::CompareTo(System.Guid)
 int32_t Guid_CompareTo_m11767 (Guid_t116 * __this, Guid_t116  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Guid::Equals(System.Guid)
 bool Guid_Equals_m11768 (Guid_t116 * __this, Guid_t116  ___g, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Guid::GetHashCode()
 int32_t Guid_GetHashCode_m11769 (Guid_t116 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Guid::ToHex(System.Int32)
 uint16_t Guid_ToHex_m11770 (Object_t * __this/* static, unused */, int32_t ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Guid::NewGuid()
 Guid_t116  Guid_NewGuid_m624 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::AppendInt(System.Text.StringBuilder,System.Int32)
 void Guid_AppendInt_m11771 (Object_t * __this/* static, unused */, StringBuilder_t89 * ___builder, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::AppendShort(System.Text.StringBuilder,System.Int16)
 void Guid_AppendShort_m11772 (Object_t * __this/* static, unused */, StringBuilder_t89 * ___builder, int16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid::AppendByte(System.Text.StringBuilder,System.Byte)
 void Guid_AppendByte_m11773 (Object_t * __this/* static, unused */, StringBuilder_t89 * ___builder, uint8_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Guid::BaseToString(System.Boolean,System.Boolean,System.Boolean)
 String_t* Guid_BaseToString_m11774 (Guid_t116 * __this, bool ___h, bool ___p, bool ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Guid::ToString()
 String_t* Guid_ToString_m625 (Guid_t116 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Guid::ToString(System.String)
 String_t* Guid_ToString_m11775 (Guid_t116 * __this, String_t* ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Guid::ToString(System.String,System.IFormatProvider)
 String_t* Guid_ToString_m11776 (Guid_t116 * __this, String_t* ___format, Object_t * ___provider, MethodInfo* method) IL2CPP_METHOD_ATTR;
