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
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Nullable_1_gen_0.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m12444_gshared (Nullable_1_t2081 * __this, TimeSpan_t1097  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m12444(__this, ___value, method) (( void (*) (Nullable_1_t2081 *, TimeSpan_t1097 , const MethodInfo*))Nullable_1__ctor_m12444_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m12445_gshared (Nullable_1_t2081 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m12445(__this, method) (( bool (*) (Nullable_1_t2081 *, const MethodInfo*))Nullable_1_get_HasValue_m12445_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t1097  Nullable_1_get_Value_m12446_gshared (Nullable_1_t2081 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m12446(__this, method) (( TimeSpan_t1097  (*) (Nullable_1_t2081 *, const MethodInfo*))Nullable_1_get_Value_m12446_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m22040_gshared (Nullable_1_t2081 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m22040(__this, ___other, method) (( bool (*) (Nullable_1_t2081 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m22040_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m22041_gshared (Nullable_1_t2081 * __this, Nullable_1_t2081  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m22041(__this, ___other, method) (( bool (*) (Nullable_1_t2081 *, Nullable_1_t2081 , const MethodInfo*))Nullable_1_Equals_m22041_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m22042_gshared (Nullable_1_t2081 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m22042(__this, method) (( int32_t (*) (Nullable_1_t2081 *, const MethodInfo*))Nullable_1_GetHashCode_m22042_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m22043_gshared (Nullable_1_t2081 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m22043(__this, method) (( String_t* (*) (Nullable_1_t2081 *, const MethodInfo*))Nullable_1_ToString_m22043_gshared)(__this, method)
