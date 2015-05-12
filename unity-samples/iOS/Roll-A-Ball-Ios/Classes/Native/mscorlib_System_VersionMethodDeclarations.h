#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Version
struct Version_t1587;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void System.Version::.ctor()
 void Version__ctor_m11997 (Version_t1587 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.String)
 void Version__ctor_m11998 (Version_t1587 * __this, String_t* ___version, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32)
 void Version__ctor_m7564 (Version_t1587 * __this, int32_t ___major, int32_t ___minor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
 void Version__ctor_m11999 (Version_t1587 * __this, int32_t ___major, int32_t ___minor, int32_t ___build, int32_t ___revision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::CheckedSet(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
 void Version_CheckedSet_m12000 (Version_t1587 * __this, int32_t ___defined, int32_t ___major, int32_t ___minor, int32_t ___build, int32_t ___revision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Build()
 int32_t Version_get_Build_m12001 (Version_t1587 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Major()
 int32_t Version_get_Major_m12002 (Version_t1587 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Minor()
 int32_t Version_get_Minor_m12003 (Version_t1587 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Revision()
 int32_t Version_get_Revision_m12004 (Version_t1587 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::CompareTo(System.Object)
 int32_t Version_CompareTo_m12005 (Version_t1587 * __this, Object_t * ___version, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::Equals(System.Object)
 bool Version_Equals_m12006 (Version_t1587 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::CompareTo(System.Version)
 int32_t Version_CompareTo_m12007 (Version_t1587 * __this, Version_t1587 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::Equals(System.Version)
 bool Version_Equals_m12008 (Version_t1587 * __this, Version_t1587 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::GetHashCode()
 int32_t Version_GetHashCode_m12009 (Version_t1587 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Version::ToString()
 String_t* Version_ToString_m12010 (Version_t1587 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Version::CreateFromString(System.String)
 Version_t1587 * Version_CreateFromString_m12011 (Object_t * __this/* static, unused */, String_t* ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_Equality(System.Version,System.Version)
 bool Version_op_Equality_m12012 (Object_t * __this/* static, unused */, Version_t1587 * ___v1, Version_t1587 * ___v2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_Inequality(System.Version,System.Version)
 bool Version_op_Inequality_m12013 (Object_t * __this/* static, unused */, Version_t1587 * ___v1, Version_t1587 * ___v2, MethodInfo* method) IL2CPP_METHOD_ATTR;
