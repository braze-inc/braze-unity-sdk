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
struct InAppMessageFactory_t4238379299;
// Appboy.Models.InAppMessage.IInAppMessage
struct IInAppMessage_t3517585656;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void Appboy.Models.InAppMessage.InAppMessageFactory::.ctor()
extern "C"  void InAppMessageFactory__ctor_m1016301746 (InAppMessageFactory_t4238379299 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Appboy.Models.InAppMessage.IInAppMessage Appboy.Models.InAppMessage.InAppMessageFactory::BuildInAppMessage(System.String)
extern "C"  Il2CppObject * InAppMessageFactory_BuildInAppMessage_m560405932 (Il2CppObject * __this /* static, unused */, String_t* ___inAppMessageJSONString0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
