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

// System.MonoCustomAttrs/AttributeInfo
struct AttributeInfo_t3644523850;
// System.AttributeUsageAttribute
struct AttributeUsageAttribute_t1025395500;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_AttributeUsageAttribute1025395500.h"

// System.Void System.MonoCustomAttrs/AttributeInfo::.ctor(System.AttributeUsageAttribute,System.Int32)
extern "C"  void AttributeInfo__ctor_m2873601639 (AttributeInfo_t3644523850 * __this, AttributeUsageAttribute_t1025395500 * ___usage, int32_t ___inheritanceLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AttributeUsageAttribute System.MonoCustomAttrs/AttributeInfo::get_Usage()
extern "C"  AttributeUsageAttribute_t1025395500 * AttributeInfo_get_Usage_m2602974155 (AttributeInfo_t3644523850 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MonoCustomAttrs/AttributeInfo::get_InheritanceLevel()
extern "C"  int32_t AttributeInfo_get_InheritanceLevel_m2614791067 (AttributeInfo_t3644523850 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
