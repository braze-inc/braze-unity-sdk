#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.TrackedReference
struct TrackedReference_t914;
struct TrackedReference_t914_marshaled;
// System.Object
struct Object_t;

// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
 bool TrackedReference_Equals_m4912 (TrackedReference_t914 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
 int32_t TrackedReference_GetHashCode_m4913 (TrackedReference_t914 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
 bool TrackedReference_op_Equality_m4914 (Object_t * __this/* static, unused */, TrackedReference_t914 * ___x, TrackedReference_t914 * ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
void TrackedReference_t914_marshal(const TrackedReference_t914& unmarshaled, TrackedReference_t914_marshaled& marshaled);
void TrackedReference_t914_marshal_back(const TrackedReference_t914_marshaled& marshaled, TrackedReference_t914& unmarshaled);
void TrackedReference_t914_marshal_cleanup(TrackedReference_t914_marshaled& marshaled);
