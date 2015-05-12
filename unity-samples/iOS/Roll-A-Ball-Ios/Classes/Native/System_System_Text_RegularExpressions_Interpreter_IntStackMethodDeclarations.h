#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Interpreter/IntStack
struct IntStack_t1673;
struct IntStack_t1673_marshaled;

// System.Int32 System.Text.RegularExpressions.Interpreter/IntStack::Pop()
 int32_t IntStack_Pop_m7315 (IntStack_t1673 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter/IntStack::Push(System.Int32)
 void IntStack_Push_m7316 (IntStack_t1673 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter/IntStack::get_Count()
 int32_t IntStack_get_Count_m7317 (IntStack_t1673 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter/IntStack::set_Count(System.Int32)
 void IntStack_set_Count_m7318 (IntStack_t1673 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
void IntStack_t1673_marshal(const IntStack_t1673& unmarshaled, IntStack_t1673_marshaled& marshaled);
void IntStack_t1673_marshal_back(const IntStack_t1673_marshaled& marshaled, IntStack_t1673& unmarshaled);
void IntStack_t1673_marshal_cleanup(IntStack_t1673_marshaled& marshaled);
