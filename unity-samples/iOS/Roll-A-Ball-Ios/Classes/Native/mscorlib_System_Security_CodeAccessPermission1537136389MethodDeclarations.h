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

// System.Security.CodeAccessPermission
struct CodeAccessPermission_t1537136389;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Security.SecurityElement
struct SecurityElement_t2475331585;
// System.Security.IPermission
struct IPermission_t2562055037;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void System.Security.CodeAccessPermission::.ctor()
extern "C"  void CodeAccessPermission__ctor_m1762050467 (CodeAccessPermission_t1537136389 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.CodeAccessPermission::Equals(System.Object)
extern "C"  bool CodeAccessPermission_Equals_m3733109266 (CodeAccessPermission_t1537136389 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.CodeAccessPermission::GetHashCode()
extern "C"  int32_t CodeAccessPermission_GetHashCode_m621045366 (CodeAccessPermission_t1537136389 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.CodeAccessPermission::ToString()
extern "C"  String_t* CodeAccessPermission_ToString_m4186930320 (CodeAccessPermission_t1537136389 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.CodeAccessPermission::Element(System.Int32)
extern "C"  SecurityElement_t2475331585 * CodeAccessPermission_Element_m2845355336 (CodeAccessPermission_t1537136389 * __this, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.CodeAccessPermission::ThrowInvalidPermission(System.Security.IPermission,System.Type)
extern "C"  void CodeAccessPermission_ThrowInvalidPermission_m1519167963 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___target, Type_t * ___expected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
