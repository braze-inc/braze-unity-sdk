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

// Appboy.Models.InAppMessage.InAppMessageFactory
struct InAppMessageFactory_t53;
// Appboy.Models.InAppMessage.IInAppMessage
struct IInAppMessage_t71;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Appboy.Models.InAppMessage.InAppMessageFactory::.ctor()
extern "C" void InAppMessageFactory__ctor_m429 (InAppMessageFactory_t53 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Models.InAppMessage.IInAppMessage Appboy.Models.InAppMessage.InAppMessageFactory::BuildInAppMessage(System.String)
extern "C" Object_t * InAppMessageFactory_BuildInAppMessage_m430 (Object_t * __this /* static, unused */, String_t* ___inAppMessageJSONString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
