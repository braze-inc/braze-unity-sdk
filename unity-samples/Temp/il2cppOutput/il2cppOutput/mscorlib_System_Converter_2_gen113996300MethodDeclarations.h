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

// System.Converter`2<System.Object,System.Object>
struct Converter_2_t113996300;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Converter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Converter_2__ctor_m15321797_gshared (Converter_2_t113996300 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Converter_2__ctor_m15321797(__this, ___object0, ___method1, method) ((  void (*) (Converter_2_t113996300 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Converter_2__ctor_m15321797_gshared)(__this, ___object0, ___method1, method)
// TOutput System.Converter`2<System.Object,System.Object>::Invoke(TInput)
extern "C"  Il2CppObject * Converter_2_Invoke_m606895179_gshared (Converter_2_t113996300 * __this, Il2CppObject * ___input0, const MethodInfo* method);
#define Converter_2_Invoke_m606895179(__this, ___input0, method) ((  Il2CppObject * (*) (Converter_2_t113996300 *, Il2CppObject *, const MethodInfo*))Converter_2_Invoke_m606895179_gshared)(__this, ___input0, method)
// System.IAsyncResult System.Converter`2<System.Object,System.Object>::BeginInvoke(TInput,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Converter_2_BeginInvoke_m3132354088_gshared (Converter_2_t113996300 * __this, Il2CppObject * ___input0, AsyncCallback_t1363551830 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method);
#define Converter_2_BeginInvoke_m3132354088(__this, ___input0, ___callback1, ___object2, method) ((  Il2CppObject * (*) (Converter_2_t113996300 *, Il2CppObject *, AsyncCallback_t1363551830 *, Il2CppObject *, const MethodInfo*))Converter_2_BeginInvoke_m3132354088_gshared)(__this, ___input0, ___callback1, ___object2, method)
// TOutput System.Converter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Converter_2_EndInvoke_m3873471959_gshared (Converter_2_t113996300 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Converter_2_EndInvoke_m3873471959(__this, ___result0, method) ((  Il2CppObject * (*) (Converter_2_t113996300 *, Il2CppObject *, const MethodInfo*))Converter_2_EndInvoke_m3873471959_gshared)(__this, ___result0, method)
