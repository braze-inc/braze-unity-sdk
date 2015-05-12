#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Globalization.Unicode.CodePointIndexer
struct CodePointIndexer_t1790;
// System.Int32[]
struct Int32U5BU5D_t1196;

// System.Void Mono.Globalization.Unicode.CodePointIndexer::.ctor(System.Int32[],System.Int32[],System.Int32,System.Int32)
 void CodePointIndexer__ctor_m8584 (CodePointIndexer_t1790 * __this, Int32U5BU5D_t1196* ___starts, Int32U5BU5D_t1196* ___ends, int32_t ___defaultIndex, int32_t ___defaultCP, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.CodePointIndexer::ToIndex(System.Int32)
 int32_t CodePointIndexer_ToIndex_m8585 (CodePointIndexer_t1790 * __this, int32_t ___cp, MethodInfo* method) IL2CPP_METHOD_ATTR;
