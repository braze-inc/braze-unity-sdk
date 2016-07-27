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


#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Interpreter_I618478585.h"

// System.Int32 System.Text.RegularExpressions.Interpreter/IntStack::Pop()
extern "C"  int32_t IntStack_Pop_m1434102286 (IntStack_t618478585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter/IntStack::Push(System.Int32)
extern "C"  void IntStack_Push_m2506448672 (IntStack_t618478585 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter/IntStack::get_Count()
extern "C"  int32_t IntStack_get_Count_m897242211 (IntStack_t618478585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter/IntStack::set_Count(System.Int32)
extern "C"  void IntStack_set_Count_m518204432 (IntStack_t618478585 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct IntStack_t618478585;
struct IntStack_t618478585_marshaled_pinvoke;

extern "C" void IntStack_t618478585_marshal_pinvoke(const IntStack_t618478585& unmarshaled, IntStack_t618478585_marshaled_pinvoke& marshaled);
extern "C" void IntStack_t618478585_marshal_pinvoke_back(const IntStack_t618478585_marshaled_pinvoke& marshaled, IntStack_t618478585& unmarshaled);
extern "C" void IntStack_t618478585_marshal_pinvoke_cleanup(IntStack_t618478585_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct IntStack_t618478585;
struct IntStack_t618478585_marshaled_com;

extern "C" void IntStack_t618478585_marshal_com(const IntStack_t618478585& unmarshaled, IntStack_t618478585_marshaled_com& marshaled);
extern "C" void IntStack_t618478585_marshal_com_back(const IntStack_t618478585_marshaled_com& marshaled, IntStack_t618478585& unmarshaled);
extern "C" void IntStack_t618478585_marshal_com_cleanup(IntStack_t618478585_marshaled_com& marshaled);
