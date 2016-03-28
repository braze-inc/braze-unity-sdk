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

// System.Reflection.MemberFilter
struct MemberFilter_t1585748256;
// System.Object
struct Il2CppObject;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_Reflection_MemberInfo2843033814.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void System.Reflection.MemberFilter::.ctor(System.Object,System.IntPtr)
extern "C"  void MemberFilter__ctor_m1519003110 (MemberFilter_t1585748256 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MemberFilter::Invoke(System.Reflection.MemberInfo,System.Object)
extern "C"  bool MemberFilter_Invoke_m1252503396 (MemberFilter_t1585748256 * __this, MemberInfo_t * ___m, Il2CppObject * ___filterCriteria, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_MemberFilter_t1585748256(Il2CppObject* delegate, MemberInfo_t * ___m, Il2CppObject * ___filterCriteria);
// System.IAsyncResult System.Reflection.MemberFilter::BeginInvoke(System.Reflection.MemberInfo,System.Object,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * MemberFilter_BeginInvoke_m1668252761 (MemberFilter_t1585748256 * __this, MemberInfo_t * ___m, Il2CppObject * ___filterCriteria, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MemberFilter::EndInvoke(System.IAsyncResult)
extern "C"  bool MemberFilter_EndInvoke_m3696206456 (MemberFilter_t1585748256 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
