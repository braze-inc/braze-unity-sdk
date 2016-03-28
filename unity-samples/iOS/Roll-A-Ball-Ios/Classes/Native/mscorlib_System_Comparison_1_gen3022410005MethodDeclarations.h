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

// System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>
struct Comparison_1_t3022410005;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Reflection_CustomAttributeNamedArgu318735129.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>::.ctor(System.Object,System.IntPtr)
extern "C"  void Comparison_1__ctor_m1384769690_gshared (Comparison_1_t3022410005 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m1384769690(__this, ___object, ___method, method) ((  void (*) (Comparison_1_t3022410005 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m1384769690_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>::Invoke(T,T)
extern "C"  int32_t Comparison_1_Invoke_m3352574366_gshared (Comparison_1_t3022410005 * __this, CustomAttributeNamedArgument_t318735129  ___x, CustomAttributeNamedArgument_t318735129  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m3352574366(__this, ___x, ___y, method) ((  int32_t (*) (Comparison_1_t3022410005 *, CustomAttributeNamedArgument_t318735129 , CustomAttributeNamedArgument_t318735129 , const MethodInfo*))Comparison_1_Invoke_m3352574366_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Comparison_1_BeginInvoke_m3828829927_gshared (Comparison_1_t3022410005 * __this, CustomAttributeNamedArgument_t318735129  ___x, CustomAttributeNamedArgument_t318735129  ___y, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m3828829927(__this, ___x, ___y, ___callback, ___object, method) ((  Il2CppObject * (*) (Comparison_1_t3022410005 *, CustomAttributeNamedArgument_t318735129 , CustomAttributeNamedArgument_t318735129 , AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Comparison_1_BeginInvoke_m3828829927_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Reflection.CustomAttributeNamedArgument>::EndInvoke(System.IAsyncResult)
extern "C"  int32_t Comparison_1_EndInvoke_m3463489038_gshared (Comparison_1_t3022410005 * __this, Il2CppObject * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m3463489038(__this, ___result, method) ((  int32_t (*) (Comparison_1_t3022410005 *, Il2CppObject *, const MethodInfo*))Comparison_1_EndInvoke_m3463489038_gshared)(__this, ___result, method)
