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

// Mono.Globalization.Unicode.CodePointIndexer
struct CodePointIndexer_t2962824291;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Globalization.Unicode.CodePointIndexer::.ctor(System.Int32[],System.Int32[],System.Int32,System.Int32)
extern "C"  void CodePointIndexer__ctor_m1627820919 (CodePointIndexer_t2962824291 * __this, Int32U5BU5D_t1809983122* ___starts0, Int32U5BU5D_t1809983122* ___ends1, int32_t ___defaultIndex2, int32_t ___defaultCP3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.CodePointIndexer::ToIndex(System.Int32)
extern "C"  int32_t CodePointIndexer_ToIndex_m2811911057 (CodePointIndexer_t2962824291 * __this, int32_t ___cp0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
