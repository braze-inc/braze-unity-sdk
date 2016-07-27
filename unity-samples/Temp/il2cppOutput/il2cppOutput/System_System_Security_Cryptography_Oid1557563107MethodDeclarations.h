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

// System.Security.Cryptography.Oid
struct Oid_t1557563107;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "System_System_Security_Cryptography_Oid1557563107.h"

// System.Void System.Security.Cryptography.Oid::.ctor()
extern "C"  void Oid__ctor_m49113285 (Oid_t1557563107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Oid::.ctor(System.String)
extern "C"  void Oid__ctor_m2787728989 (Oid_t1557563107 * __this, String_t* ___oid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Oid::.ctor(System.String,System.String)
extern "C"  void Oid__ctor_m1889247193 (Oid_t1557563107 * __this, String_t* ___value0, String_t* ___friendlyName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Oid::.ctor(System.Security.Cryptography.Oid)
extern "C"  void Oid__ctor_m4076384238 (Oid_t1557563107 * __this, Oid_t1557563107 * ___oid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.Oid::get_FriendlyName()
extern "C"  String_t* Oid_get_FriendlyName_m937320993 (Oid_t1557563107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.Oid::get_Value()
extern "C"  String_t* Oid_get_Value_m216923304 (Oid_t1557563107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.Oid::GetName(System.String)
extern "C"  String_t* Oid_GetName_m1845636801 (Oid_t1557563107 * __this, String_t* ___oid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
