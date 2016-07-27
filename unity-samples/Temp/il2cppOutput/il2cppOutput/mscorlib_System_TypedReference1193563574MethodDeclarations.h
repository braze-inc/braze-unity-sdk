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
#include "mscorlib_System_TypedReference1193563574.h"
#include "mscorlib_System_Object837106420.h"

// System.Boolean System.TypedReference::Equals(System.Object)
extern "C"  bool TypedReference_Equals_m2626069127 (TypedReference_t1193563574 * __this, Il2CppObject * ___o0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TypedReference::GetHashCode()
extern "C"  int32_t TypedReference_GetHashCode_m1538911 (TypedReference_t1193563574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct TypedReference_t1193563574;
struct TypedReference_t1193563574_marshaled_pinvoke;

extern "C" void TypedReference_t1193563574_marshal_pinvoke(const TypedReference_t1193563574& unmarshaled, TypedReference_t1193563574_marshaled_pinvoke& marshaled);
extern "C" void TypedReference_t1193563574_marshal_pinvoke_back(const TypedReference_t1193563574_marshaled_pinvoke& marshaled, TypedReference_t1193563574& unmarshaled);
extern "C" void TypedReference_t1193563574_marshal_pinvoke_cleanup(TypedReference_t1193563574_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct TypedReference_t1193563574;
struct TypedReference_t1193563574_marshaled_com;

extern "C" void TypedReference_t1193563574_marshal_com(const TypedReference_t1193563574& unmarshaled, TypedReference_t1193563574_marshaled_com& marshaled);
extern "C" void TypedReference_t1193563574_marshal_com_back(const TypedReference_t1193563574_marshaled_com& marshaled, TypedReference_t1193563574& unmarshaled);
extern "C" void TypedReference_t1193563574_marshal_com_cleanup(TypedReference_t1193563574_marshaled_com& marshaled);
