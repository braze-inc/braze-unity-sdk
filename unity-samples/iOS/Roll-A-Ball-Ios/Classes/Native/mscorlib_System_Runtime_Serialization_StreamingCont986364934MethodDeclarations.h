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

// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCont986364934.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2964666472.h"
#include "mscorlib_System_Object837106420.h"

// System.Void System.Runtime.Serialization.StreamingContext::.ctor(System.Runtime.Serialization.StreamingContextStates)
extern "C"  void StreamingContext__ctor_m165676124 (StreamingContext_t986364934 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.StreamingContext::.ctor(System.Runtime.Serialization.StreamingContextStates,System.Object)
extern "C"  void StreamingContext__ctor_m404323882 (StreamingContext_t986364934 * __this, int32_t ___state, Il2CppObject * ___additional, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::get_State()
extern "C"  int32_t StreamingContext_get_State_m334223851 (StreamingContext_t986364934 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.StreamingContext::Equals(System.Object)
extern "C"  bool StreamingContext_Equals_m3567411783 (StreamingContext_t986364934 * __this, Il2CppObject * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.StreamingContext::GetHashCode()
extern "C"  int32_t StreamingContext_GetHashCode_m1804520735 (StreamingContext_t986364934 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct StreamingContext_t986364934;
struct StreamingContext_t986364934_marshaled_com;

extern "C" void StreamingContext_t986364934_marshal_com(const StreamingContext_t986364934& unmarshaled, StreamingContext_t986364934_marshaled_com& marshaled);
extern "C" void StreamingContext_t986364934_marshal_com_back(const StreamingContext_t986364934_marshaled_com& marshaled, StreamingContext_t986364934& unmarshaled);
extern "C" void StreamingContext_t986364934_marshal_com_cleanup(StreamingContext_t986364934_marshaled_com& marshaled);
