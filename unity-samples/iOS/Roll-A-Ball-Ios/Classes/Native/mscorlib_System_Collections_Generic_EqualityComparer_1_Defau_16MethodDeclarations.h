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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t2889;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m22058_gshared (DefaultComparer_t2889 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m22058(__this, method) (( void (*) (DefaultComparer_t2889 *, const MethodInfo*))DefaultComparer__ctor_m22058_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m22059_gshared (DefaultComparer_t2889 * __this, Guid_t99  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m22059(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2889 *, Guid_t99 , const MethodInfo*))DefaultComparer_GetHashCode_m22059_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m22060_gshared (DefaultComparer_t2889 * __this, Guid_t99  ___x, Guid_t99  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m22060(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2889 *, Guid_t99 , Guid_t99 , const MethodInfo*))DefaultComparer_Equals_m22060_gshared)(__this, ___x, ___y, method)
