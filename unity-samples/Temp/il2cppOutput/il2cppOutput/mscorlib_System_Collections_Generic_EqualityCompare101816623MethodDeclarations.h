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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t101816624;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan763862892.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C"  void DefaultComparer__ctor_m3757819988_gshared (DefaultComparer_t101816624 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m3757819988(__this, method) ((  void (*) (DefaultComparer_t101816624 *, const MethodInfo*))DefaultComparer__ctor_m3757819988_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern "C"  int32_t DefaultComparer_GetHashCode_m1710312151_gshared (DefaultComparer_t101816624 * __this, TimeSpan_t763862892  ___obj0, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m1710312151(__this, ___obj0, method) ((  int32_t (*) (DefaultComparer_t101816624 *, TimeSpan_t763862892 , const MethodInfo*))DefaultComparer_GetHashCode_m1710312151_gshared)(__this, ___obj0, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern "C"  bool DefaultComparer_Equals_m327676453_gshared (DefaultComparer_t101816624 * __this, TimeSpan_t763862892  ___x0, TimeSpan_t763862892  ___y1, const MethodInfo* method);
#define DefaultComparer_Equals_m327676453(__this, ___x0, ___y1, method) ((  bool (*) (DefaultComparer_t101816624 *, TimeSpan_t763862892 , TimeSpan_t763862892 , const MethodInfo*))DefaultComparer_Equals_m327676453_gshared)(__this, ___x0, ___y1, method)
