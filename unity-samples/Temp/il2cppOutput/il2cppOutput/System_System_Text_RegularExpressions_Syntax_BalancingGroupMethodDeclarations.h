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

// System.Text.RegularExpressions.Syntax.BalancingGroup
struct BalancingGroup_t1163;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t1162;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t1203;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.RegularExpressions.Syntax.BalancingGroup::.ctor()
extern "C" void BalancingGroup__ctor_m5976 (BalancingGroup_t1163 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.BalancingGroup::set_Balance(System.Text.RegularExpressions.Syntax.CapturingGroup)
extern "C" void BalancingGroup_set_Balance_m5977 (BalancingGroup_t1163 * __this, CapturingGroup_t1162 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.BalancingGroup::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C" void BalancingGroup_Compile_m5978 (BalancingGroup_t1163 * __this, Object_t * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
