#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Interpreter/IntStack
struct IntStack_t1661;
struct IntStack_t1661_marshaled;

// System.Int32 System.Text.RegularExpressions.Interpreter/IntStack::Pop()
 int32_t IntStack_Pop_m7221 (IntStack_t1661 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter/IntStack::Push(System.Int32)
 void IntStack_Push_m7222 (IntStack_t1661 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Interpreter/IntStack::get_Count()
 int32_t IntStack_get_Count_m7223 (IntStack_t1661 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Interpreter/IntStack::set_Count(System.Int32)
 void IntStack_set_Count_m7224 (IntStack_t1661 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
void IntStack_t1661_marshal(const IntStack_t1661& unmarshaled, IntStack_t1661_marshaled& marshaled);
void IntStack_t1661_marshal_back(const IntStack_t1661_marshaled& marshaled, IntStack_t1661& unmarshaled);
void IntStack_t1661_marshal_cleanup(IntStack_t1661_marshaled& marshaled);
