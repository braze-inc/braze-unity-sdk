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

// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Emit_OpCode4028977979.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_Reflection_Emit_StackBehaviour2852137698.h"

// System.Void System.Reflection.Emit.OpCode::.ctor(System.Int32,System.Int32)
extern "C"  void OpCode__ctor_m742870391 (OpCode_t4028977979 * __this, int32_t ___p0, int32_t ___q1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.OpCode::GetHashCode()
extern "C"  int32_t OpCode_GetHashCode_m1885918234 (OpCode_t4028977979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.OpCode::Equals(System.Object)
extern "C"  bool OpCode_Equals_m3328690754 (OpCode_t4028977979 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.OpCode::ToString()
extern "C"  String_t* OpCode_ToString_m4043065278 (OpCode_t4028977979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.OpCode::get_Name()
extern "C"  String_t* OpCode_get_Name_m386372902 (OpCode_t4028977979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.OpCode::get_Size()
extern "C"  int32_t OpCode_get_Size_m2313922819 (OpCode_t4028977979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.StackBehaviour System.Reflection.Emit.OpCode::get_StackBehaviourPop()
extern "C"  int32_t OpCode_get_StackBehaviourPop_m4109383719 (OpCode_t4028977979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.StackBehaviour System.Reflection.Emit.OpCode::get_StackBehaviourPush()
extern "C"  int32_t OpCode_get_StackBehaviourPush_m2842535718 (OpCode_t4028977979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct OpCode_t4028977979;
struct OpCode_t4028977979_marshaled_pinvoke;

extern "C" void OpCode_t4028977979_marshal_pinvoke(const OpCode_t4028977979& unmarshaled, OpCode_t4028977979_marshaled_pinvoke& marshaled);
extern "C" void OpCode_t4028977979_marshal_pinvoke_back(const OpCode_t4028977979_marshaled_pinvoke& marshaled, OpCode_t4028977979& unmarshaled);
extern "C" void OpCode_t4028977979_marshal_pinvoke_cleanup(OpCode_t4028977979_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct OpCode_t4028977979;
struct OpCode_t4028977979_marshaled_com;

extern "C" void OpCode_t4028977979_marshal_com(const OpCode_t4028977979& unmarshaled, OpCode_t4028977979_marshaled_com& marshaled);
extern "C" void OpCode_t4028977979_marshal_com_back(const OpCode_t4028977979_marshaled_com& marshaled, OpCode_t4028977979& unmarshaled);
extern "C" void OpCode_t4028977979_marshal_com_cleanup(OpCode_t4028977979_marshaled_com& marshaled);
