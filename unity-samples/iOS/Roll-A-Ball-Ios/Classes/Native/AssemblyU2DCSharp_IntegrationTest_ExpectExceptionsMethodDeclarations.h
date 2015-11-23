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
struct ExpectExceptions_t193;
// System.String[]
struct StringU5BU5D_t63;
// System.Type[]
struct TypeU5BU5D_t216;
// System.String
struct String_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"

// System.Void IntegrationTest/ExpectExceptions::.ctor()
extern "C" void ExpectExceptions__ctor_m800 (ExpectExceptions_t193 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest/ExpectExceptions::.ctor(System.Boolean)
extern "C" void ExpectExceptions__ctor_m801 (ExpectExceptions_t193 * __this, bool ___succeedOnException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest/ExpectExceptions::.ctor(System.Boolean,System.String[])
extern "C" void ExpectExceptions__ctor_m802 (ExpectExceptions_t193 * __this, bool ___succeedOnException, StringU5BU5D_t63* ___exceptionTypeNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest/ExpectExceptions::.ctor(System.Boolean,System.Type[])
extern "C" void ExpectExceptions__ctor_m803 (ExpectExceptions_t193 * __this, bool ___succeedOnException, TypeU5BU5D_t216* ___exceptionTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest/ExpectExceptions::.ctor(System.String[])
extern "C" void ExpectExceptions__ctor_m804 (ExpectExceptions_t193 * __this, StringU5BU5D_t63* ___exceptionTypeNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IntegrationTest/ExpectExceptions::.ctor(System.Type[])
extern "C" void ExpectExceptions__ctor_m805 (ExpectExceptions_t193 * __this, TypeU5BU5D_t216* ___exceptionTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String IntegrationTest/ExpectExceptions::<ExpectExceptions>m__3(System.Type)
extern "C" String_t* ExpectExceptions_U3CExpectExceptionsU3Em__3_m806 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
