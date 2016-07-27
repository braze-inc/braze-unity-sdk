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

// UnityEngine.TrackedReference
struct TrackedReference_t3599015854;
struct TrackedReference_t3599015854_marshaled_pinvoke;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_TrackedReference3599015854.h"

// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
extern "C"  bool TrackedReference_Equals_m732758423 (TrackedReference_t3599015854 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
extern "C"  int32_t TrackedReference_GetHashCode_m894516347 (TrackedReference_t3599015854 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
extern "C"  bool TrackedReference_op_Equality_m4125598506 (Il2CppObject * __this /* static, unused */, TrackedReference_t3599015854 * ___x0, TrackedReference_t3599015854 * ___y1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct TrackedReference_t3599015854;
struct TrackedReference_t3599015854_marshaled_pinvoke;

extern "C" void TrackedReference_t3599015854_marshal_pinvoke(const TrackedReference_t3599015854& unmarshaled, TrackedReference_t3599015854_marshaled_pinvoke& marshaled);
extern "C" void TrackedReference_t3599015854_marshal_pinvoke_back(const TrackedReference_t3599015854_marshaled_pinvoke& marshaled, TrackedReference_t3599015854& unmarshaled);
extern "C" void TrackedReference_t3599015854_marshal_pinvoke_cleanup(TrackedReference_t3599015854_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct TrackedReference_t3599015854;
struct TrackedReference_t3599015854_marshaled_com;

extern "C" void TrackedReference_t3599015854_marshal_com(const TrackedReference_t3599015854& unmarshaled, TrackedReference_t3599015854_marshaled_com& marshaled);
extern "C" void TrackedReference_t3599015854_marshal_com_back(const TrackedReference_t3599015854_marshaled_com& marshaled, TrackedReference_t3599015854& unmarshaled);
extern "C" void TrackedReference_t3599015854_marshal_com_cleanup(TrackedReference_t3599015854_marshaled_com& marshaled);
