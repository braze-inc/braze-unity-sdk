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

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t2887;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m22049_gshared (DefaultComparer_t2887 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m22049(__this, method) (( void (*) (DefaultComparer_t2887 *, const MethodInfo*))DefaultComparer__ctor_m22049_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m22050_gshared (DefaultComparer_t2887 * __this, Guid_t99  ___x, Guid_t99  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m22050(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t2887 *, Guid_t99 , Guid_t99 , const MethodInfo*))DefaultComparer_Compare_m22050_gshared)(__this, ___x, ___y, method)
