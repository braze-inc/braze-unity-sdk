#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.CspParameters
struct CspParameters_t1510;
// System.String
struct String_t;
// System.Security.Cryptography.CspProviderFlags
#include "mscorlib_System_Security_Cryptography_CspProviderFlags.h"

// System.Void System.Security.Cryptography.CspParameters::.ctor()
 void CspParameters__ctor_m6444 (CspParameters_t1510 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CspParameters::.ctor(System.Int32)
 void CspParameters__ctor_m10592 (CspParameters_t1510 * __this, int32_t ___dwTypeIn, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CspParameters::.ctor(System.Int32,System.String)
 void CspParameters__ctor_m10593 (CspParameters_t1510 * __this, int32_t ___dwTypeIn, String_t* ___strProviderNameIn, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CspParameters::.ctor(System.Int32,System.String,System.String)
 void CspParameters__ctor_m10594 (CspParameters_t1510 * __this, int32_t ___dwTypeIn, String_t* ___strProviderNameIn, String_t* ___strContainerNameIn, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.CspProviderFlags System.Security.Cryptography.CspParameters::get_Flags()
 int32_t CspParameters_get_Flags_m10595 (CspParameters_t1510 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CspParameters::set_Flags(System.Security.Cryptography.CspProviderFlags)
 void CspParameters_set_Flags_m6445 (CspParameters_t1510 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
