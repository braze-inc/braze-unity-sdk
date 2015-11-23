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

// IntegrationTestAttribute
struct IntegrationTestAttribute_t200;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void IntegrationTestAttribute::.ctor(System.String)
extern "C" void IntegrationTestAttribute__ctor_m825 (IntegrationTestAttribute_t200 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean IntegrationTestAttribute::IncludeOnScene(System.String)
extern "C" bool IntegrationTestAttribute_IncludeOnScene_m826 (IntegrationTestAttribute_t200 * __this, String_t* ___scenePath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
