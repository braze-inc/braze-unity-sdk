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

// System.Runtime.Remoting.Messaging.RemotingSurrogateSelector
struct RemotingSurrogateSelector_t4020846894;
// System.Runtime.Serialization.ISerializationSurrogate
struct ISerializationSurrogate_t1735544170;
// System.Type
struct Type_t;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t1640433287;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"

// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::.ctor()
extern "C"  void RemotingSurrogateSelector__ctor_m1480647200 (RemotingSurrogateSelector_t4020846894 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::.cctor()
extern "C"  void RemotingSurrogateSelector__cctor_m2468294029 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Remoting.Messaging.RemotingSurrogateSelector::GetSurrogate(System.Type,System.Runtime.Serialization.StreamingContext,System.Runtime.Serialization.ISurrogateSelector&)
extern "C"  Il2CppObject * RemotingSurrogateSelector_GetSurrogate_m2656182773 (RemotingSurrogateSelector_t4020846894 * __this, Type_t * ___type, StreamingContext_t986364934  ___context, Il2CppObject ** ___ssout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
