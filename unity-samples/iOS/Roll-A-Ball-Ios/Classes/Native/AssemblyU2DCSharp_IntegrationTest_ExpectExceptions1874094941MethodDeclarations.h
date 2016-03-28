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

// IntegrationTest/ExpectExceptions
struct ExpectExceptions_t1874094941;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// System.String
struct String_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void IntegrationTest/ExpectExceptions::.ctor()
extern "C"  void ExpectExceptions__ctor_m2851065717 (ExpectExceptions_t1874094941 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest/ExpectExceptions::.ctor(System.Boolean)
extern "C"  void ExpectExceptions__ctor_m2588398636 (ExpectExceptions_t1874094941 * __this, bool ___succeedOnException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest/ExpectExceptions::.ctor(System.Boolean,System.String[])
extern "C"  void ExpectExceptions__ctor_m2351090822 (ExpectExceptions_t1874094941 * __this, bool ___succeedOnException, StringU5BU5D_t2956870243* ___exceptionTypeNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest/ExpectExceptions::.ctor(System.Boolean,System.Type[])
extern "C"  void ExpectExceptions__ctor_m92564669 (ExpectExceptions_t1874094941 * __this, bool ___succeedOnException, TypeU5BU5D_t3431720054* ___exceptionTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest/ExpectExceptions::.ctor(System.String[])
extern "C"  void ExpectExceptions__ctor_m683238795 (ExpectExceptions_t1874094941 * __this, StringU5BU5D_t2956870243* ___exceptionTypeNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest/ExpectExceptions::.ctor(System.Type[])
extern "C"  void ExpectExceptions__ctor_m3599205122 (ExpectExceptions_t1874094941 * __this, TypeU5BU5D_t3431720054* ___exceptionTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String IntegrationTest/ExpectExceptions::<ExpectExceptions>m__3(System.Type)
extern "C"  String_t* ExpectExceptions_U3CExpectExceptionsU3Em__3_m3079769116 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
