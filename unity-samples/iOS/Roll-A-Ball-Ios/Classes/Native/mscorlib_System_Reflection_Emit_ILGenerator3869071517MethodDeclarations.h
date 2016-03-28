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

// System.Reflection.Emit.ILGenerator
struct ILGenerator_t3869071517;
// System.Reflection.Module
struct Module_t206139610;
// System.Reflection.Emit.TokenGenerator
struct TokenGenerator_t1614283943;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t3542137334;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Module206139610.h"
#include "mscorlib_System_Reflection_MemberInfo2843033814.h"
#include "mscorlib_System_Reflection_Emit_OpCode4028977979.h"
#include "mscorlib_System_Reflection_ConstructorInfo3542137334.h"
#include "mscorlib_System_Reflection_Emit_ILGenerator3869071517.h"

// System.Void System.Reflection.Emit.ILGenerator::.ctor(System.Reflection.Module,System.Reflection.Emit.TokenGenerator,System.Int32)
extern "C"  void ILGenerator__ctor_m363767667 (ILGenerator_t3869071517 * __this, Module_t206139610 * ___m, Il2CppObject * ___token_gen, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::.cctor()
extern "C"  void ILGenerator__cctor_m152040660 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::add_token_fixup(System.Reflection.MemberInfo)
extern "C"  void ILGenerator_add_token_fixup_m1030891159 (ILGenerator_t3869071517 * __this, MemberInfo_t * ___mi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::make_room(System.Int32)
extern "C"  void ILGenerator_make_room_m3150005908 (ILGenerator_t3869071517 * __this, int32_t ___nbytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::emit_int(System.Int32)
extern "C"  void ILGenerator_emit_int_m1452131359 (ILGenerator_t3869071517 * __this, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::ll_emit(System.Reflection.Emit.OpCode)
extern "C"  void ILGenerator_ll_emit_m2322068804 (ILGenerator_t3869071517 * __this, OpCode_t4028977979  ___opcode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode)
extern "C"  void ILGenerator_Emit_m1513421455 (ILGenerator_t3869071517 * __this, OpCode_t4028977979  ___opcode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.ConstructorInfo)
extern "C"  void ILGenerator_Emit_m726728631 (ILGenerator_t3869071517 * __this, OpCode_t4028977979  ___opcode, ConstructorInfo_t3542137334 * ___con, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::label_fixup()
extern "C"  void ILGenerator_label_fixup_m2969084380 (ILGenerator_t3869071517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ILGenerator::Mono_GetCurrentOffset(System.Reflection.Emit.ILGenerator)
extern "C"  int32_t ILGenerator_Mono_GetCurrentOffset_m436459828 (Il2CppObject * __this /* static, unused */, ILGenerator_t3869071517 * ___ig, const MethodInfo* method) IL2CPP_METHOD_ATTR;
