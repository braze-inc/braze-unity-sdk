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

// System.Predicate`1<System.Reflection.CustomAttributeTypedArgument>
struct Predicate_1_t2843;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t551;
// System.AsyncCallback
struct AsyncCallback_t552;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Reflection_CustomAttributeTypedArgument.h"

// System.Void System.Predicate`1<System.Reflection.CustomAttributeTypedArgument>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m21635_gshared (Predicate_1_t2843 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m21635(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2843 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m21635_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Reflection.CustomAttributeTypedArgument>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m21636_gshared (Predicate_1_t2843 * __this, CustomAttributeTypedArgument_t1648  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m21636(__this, ___obj, method) (( bool (*) (Predicate_1_t2843 *, CustomAttributeTypedArgument_t1648 , const MethodInfo*))Predicate_1_Invoke_m21636_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Reflection.CustomAttributeTypedArgument>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m21637_gshared (Predicate_1_t2843 * __this, CustomAttributeTypedArgument_t1648  ___obj, AsyncCallback_t552 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m21637(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2843 *, CustomAttributeTypedArgument_t1648 , AsyncCallback_t552 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m21637_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Reflection.CustomAttributeTypedArgument>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m21638_gshared (Predicate_1_t2843 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m21638(__this, ___result, method) (( bool (*) (Predicate_1_t2843 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m21638_gshared)(__this, ___result, method)
