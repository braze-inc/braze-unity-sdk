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
#include "mscorlib_Mono_Globalization_Unicode_SimpleCollator2616184207.h"
#include "mscorlib_System_Globalization_CompareOptions1115053679.h"

// System.Void Mono.Globalization.Unicode.SimpleCollator/Context::.ctor(System.Globalization.CompareOptions,System.Byte*,System.Byte*,System.Byte*,System.Byte*,System.Byte*,System.Boolean)
extern "C"  void Context__ctor_m1103265712 (Context_t2616184207 * __this, int32_t ___opt0, uint8_t* ___alwaysMatchFlags1, uint8_t* ___neverMatchFlags2, uint8_t* ___buffer13, uint8_t* ___buffer24, uint8_t* ___prev15, bool ___quickCheckPossible6, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Context_t2616184207;
struct Context_t2616184207_marshaled_pinvoke;

extern "C" void Context_t2616184207_marshal_pinvoke(const Context_t2616184207& unmarshaled, Context_t2616184207_marshaled_pinvoke& marshaled);
extern "C" void Context_t2616184207_marshal_pinvoke_back(const Context_t2616184207_marshaled_pinvoke& marshaled, Context_t2616184207& unmarshaled);
extern "C" void Context_t2616184207_marshal_pinvoke_cleanup(Context_t2616184207_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Context_t2616184207;
struct Context_t2616184207_marshaled_com;

extern "C" void Context_t2616184207_marshal_com(const Context_t2616184207& unmarshaled, Context_t2616184207_marshaled_com& marshaled);
extern "C" void Context_t2616184207_marshal_com_back(const Context_t2616184207_marshaled_com& marshaled, Context_t2616184207& unmarshaled);
extern "C" void Context_t2616184207_marshal_com_cleanup(Context_t2616184207_marshaled_com& marshaled);
