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

// System.Security.Cryptography.CspParameters
struct CspParameters_t4096074019;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Security_Cryptography_CspProviderF3172895311.h"

// System.Void System.Security.Cryptography.CspParameters::.ctor()
extern "C"  void CspParameters__ctor_m3804826267 (CspParameters_t4096074019 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CspParameters::.ctor(System.Int32)
extern "C"  void CspParameters__ctor_m2607591276 (CspParameters_t4096074019 * __this, int32_t ___dwTypeIn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CspParameters::.ctor(System.Int32,System.String)
extern "C"  void CspParameters__ctor_m622357160 (CspParameters_t4096074019 * __this, int32_t ___dwTypeIn, String_t* ___strProviderNameIn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CspParameters::.ctor(System.Int32,System.String,System.String)
extern "C"  void CspParameters__ctor_m1032703204 (CspParameters_t4096074019 * __this, int32_t ___dwTypeIn, String_t* ___strProviderNameIn, String_t* ___strContainerNameIn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CspProviderFlags System.Security.Cryptography.CspParameters::get_Flags()
extern "C"  int32_t CspParameters_get_Flags_m85401037 (CspParameters_t4096074019 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CspParameters::set_Flags(System.Security.Cryptography.CspProviderFlags)
extern "C"  void CspParameters_set_Flags_m3780635110 (CspParameters_t4096074019 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
