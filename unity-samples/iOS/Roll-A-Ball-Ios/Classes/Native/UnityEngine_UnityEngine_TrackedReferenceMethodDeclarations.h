#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.TrackedReference
struct TrackedReference_t925;
struct TrackedReference_t925_marshaled;
// System.Object
struct Object_t;

// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
 bool TrackedReference_Equals_m5007 (TrackedReference_t925 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
 int32_t TrackedReference_GetHashCode_m5008 (TrackedReference_t925 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
 bool TrackedReference_op_Equality_m5009 (Object_t * __this/* static, unused */, TrackedReference_t925 * ___x, TrackedReference_t925 * ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
void TrackedReference_t925_marshal(const TrackedReference_t925& unmarshaled, TrackedReference_t925_marshaled& marshaled);
void TrackedReference_t925_marshal_back(const TrackedReference_t925_marshaled& marshaled, TrackedReference_t925& unmarshaled);
void TrackedReference_t925_marshal_cleanup(TrackedReference_t925_marshaled& marshaled);
