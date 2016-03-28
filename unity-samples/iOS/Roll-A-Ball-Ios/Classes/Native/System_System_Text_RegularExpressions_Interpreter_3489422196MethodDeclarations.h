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

// System.Text.RegularExpressions.Interpreter/RepeatContext
struct RepeatContext_t3489422196;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Interpreter_3489422196.h"

// System.Void System.Text.RegularExpressions.Interpreter/RepeatContext::.ctor(System.Text.RegularExpressions.Interpreter/RepeatContext,System.Int32,System.Int32,System.Boolean,System.Int32)
extern "C"  void RepeatContext__ctor_m788719250 (RepeatContext_t3489422196 * __this, RepeatContext_t3489422196 * ___previous, int32_t ___min, int32_t ___max, bool ___lazy, int32_t ___expr_pc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::get_Count()
extern "C"  int32_t RepeatContext_get_Count_m4097254526 (RepeatContext_t3489422196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter/RepeatContext::set_Count(System.Int32)
extern "C"  void RepeatContext_set_Count_m4149390859 (RepeatContext_t3489422196 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::get_Start()
extern "C"  int32_t RepeatContext_get_Start_m1242238737 (RepeatContext_t3489422196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter/RepeatContext::set_Start(System.Int32)
extern "C"  void RepeatContext_set_Start_m3788788766 (RepeatContext_t3489422196 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter/RepeatContext::get_IsMinimum()
extern "C"  bool RepeatContext_get_IsMinimum_m1600048397 (RepeatContext_t3489422196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter/RepeatContext::get_IsMaximum()
extern "C"  bool RepeatContext_get_IsMaximum_m827569823 (RepeatContext_t3489422196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Interpreter/RepeatContext::get_IsLazy()
extern "C"  bool RepeatContext_get_IsLazy_m2915133623 (RepeatContext_t3489422196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::get_Expression()
extern "C"  int32_t RepeatContext_get_Expression_m540420139 (RepeatContext_t3489422196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Interpreter/RepeatContext System.Text.RegularExpressions.Interpreter/RepeatContext::get_Previous()
extern "C"  RepeatContext_t3489422196 * RepeatContext_get_Previous_m4141614471 (RepeatContext_t3489422196 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
