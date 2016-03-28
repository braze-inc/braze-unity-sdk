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

// System.Text.RegularExpressions.Syntax.Reference
struct Reference_t2379893051;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t1439411180;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t93500931;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Syntax_Captu1439411180.h"

// System.Void System.Text.RegularExpressions.Syntax.Reference::.ctor(System.Boolean)
extern "C"  void Reference__ctor_m425097396 (Reference_t2379893051 * __this, bool ___ignore, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.Reference::get_CapturingGroup()
extern "C"  CapturingGroup_t1439411180 * Reference_get_CapturingGroup_m2373399431 (Reference_t2379893051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Reference::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
extern "C"  void Reference_set_CapturingGroup_m716261254 (Reference_t2379893051 * __this, CapturingGroup_t1439411180 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Reference::get_IgnoreCase()
extern "C"  bool Reference_get_IgnoreCase_m1035334716 (Reference_t2379893051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Reference::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C"  void Reference_Compile_m2087049322 (Reference_t2379893051 * __this, Il2CppObject * ___cmp, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.Reference::GetWidth(System.Int32&,System.Int32&)
extern "C"  void Reference_GetWidth_m2365245465 (Reference_t2379893051 * __this, int32_t* ___min, int32_t* ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.Reference::IsComplex()
extern "C"  bool Reference_IsComplex_m868186199 (Reference_t2379893051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
