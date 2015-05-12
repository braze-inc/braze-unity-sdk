#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Interpreter/RepeatContext
struct RepeatContext_t1662;

// System.Void System.Text.RegularExpressions.Interpreter/RepeatContext::.ctor(System.Text.RegularExpressions.Interpreter/RepeatContext,System.Int32,System.Int32,System.Boolean,System.Int32)
 void RepeatContext__ctor_m7225 (RepeatContext_t1662 * __this, RepeatContext_t1662 * ___previous, int32_t ___min, int32_t ___max, bool ___lazy, int32_t ___expr_pc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::get_Count()
 int32_t RepeatContext_get_Count_m7226 (RepeatContext_t1662 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter/RepeatContext::set_Count(System.Int32)
 void RepeatContext_set_Count_m7227 (RepeatContext_t1662 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::get_Start()
 int32_t RepeatContext_get_Start_m7228 (RepeatContext_t1662 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter/RepeatContext::set_Start(System.Int32)
 void RepeatContext_set_Start_m7229 (RepeatContext_t1662 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter/RepeatContext::get_IsMinimum()
 bool RepeatContext_get_IsMinimum_m7230 (RepeatContext_t1662 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter/RepeatContext::get_IsMaximum()
 bool RepeatContext_get_IsMaximum_m7231 (RepeatContext_t1662 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter/RepeatContext::get_IsLazy()
 bool RepeatContext_get_IsLazy_m7232 (RepeatContext_t1662 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::get_Expression()
 int32_t RepeatContext_get_Expression_m7233 (RepeatContext_t1662 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Interpreter/RepeatContext System.Text.RegularExpressions.Interpreter/RepeatContext::get_Previous()
 RepeatContext_t1662 * RepeatContext_get_Previous_m7234 (RepeatContext_t1662 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
