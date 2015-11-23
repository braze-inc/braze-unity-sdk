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

// IntegrationTest/ExcludePlatformAttribute
struct ExcludePlatformAttribute_t190;
// UnityEngine.RuntimePlatform[]
struct RuntimePlatformU5BU5D_t262;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RuntimePlatform.h"

// System.Void IntegrationTest/ExcludePlatformAttribute::.ctor(UnityEngine.RuntimePlatform[])
extern "C" void ExcludePlatformAttribute__ctor_m798 (ExcludePlatformAttribute_t190 * __this, RuntimePlatformU5BU5D_t262* ___platformsToExclude, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String IntegrationTest/ExcludePlatformAttribute::<ExcludePlatformAttribute>m__2(UnityEngine.RuntimePlatform)
extern "C" String_t* ExcludePlatformAttribute_U3CExcludePlatformAttributeU3Em__2_m799 (Object_t * __this /* static, unused */, int32_t ___platform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
