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

// System.Globalization.SortKey
struct SortKey_t2408679447;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Globalization_CompareOptions1115053679.h"
#include "mscorlib_System_Globalization_SortKey2408679447.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Globalization.SortKey::.ctor(System.Int32,System.String,System.Globalization.CompareOptions)
extern "C"  void SortKey__ctor_m1693041873 (SortKey_t2408679447 * __this, int32_t ___lcid, String_t* ___source, int32_t ___opt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Globalization.SortKey::.ctor(System.Int32,System.String,System.Byte[],System.Globalization.CompareOptions,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void SortKey__ctor_m2331146324 (SortKey_t2408679447 * __this, int32_t ___lcid, String_t* ___source, ByteU5BU5D_t58506160* ___buffer, int32_t ___opt, int32_t ___lv1Length, int32_t ___lv2Length, int32_t ___lv3Length, int32_t ___kanaSmallLength, int32_t ___markTypeLength, int32_t ___katakanaLength, int32_t ___kanaWidthLength, int32_t ___identLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.SortKey::Compare(System.Globalization.SortKey,System.Globalization.SortKey)
extern "C"  int32_t SortKey_Compare_m3672073378 (Il2CppObject * __this /* static, unused */, SortKey_t2408679447 * ___sortkey1, SortKey_t2408679447 * ___sortkey2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.SortKey::get_OriginalString()
extern "C"  String_t* SortKey_get_OriginalString_m3208667701 (SortKey_t2408679447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Globalization.SortKey::get_KeyData()
extern "C"  ByteU5BU5D_t58506160* SortKey_get_KeyData_m3767193105 (SortKey_t2408679447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Globalization.SortKey::Equals(System.Object)
extern "C"  bool SortKey_Equals_m477142412 (SortKey_t2408679447 * __this, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Globalization.SortKey::GetHashCode()
extern "C"  int32_t SortKey_GetHashCode_m3388500464 (SortKey_t2408679447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.SortKey::ToString()
extern "C"  String_t* SortKey_ToString_m358511190 (SortKey_t2408679447 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
