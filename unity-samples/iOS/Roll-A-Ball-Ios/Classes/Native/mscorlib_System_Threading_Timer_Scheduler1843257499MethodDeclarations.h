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

// System.Threading.Timer/Scheduler
struct Scheduler_t1843257499;
// System.Threading.Timer
struct Timer_t3546110984;
// System.Collections.ArrayList
struct ArrayList_t2121638921;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Threading_Timer3546110984.h"
#include "mscorlib_System_Collections_ArrayList2121638921.h"

// System.Void System.Threading.Timer/Scheduler::.ctor()
extern "C"  void Scheduler__ctor_m1239585238 (Scheduler_t1843257499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer/Scheduler::.cctor()
extern "C"  void Scheduler__cctor_m3585307799 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Timer/Scheduler System.Threading.Timer/Scheduler::get_Instance()
extern "C"  Scheduler_t1843257499 * Scheduler_get_Instance_m2238004347 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer/Scheduler::Remove(System.Threading.Timer)
extern "C"  void Scheduler_Remove_m1246429346 (Scheduler_t1843257499 * __this, Timer_t3546110984 * ___timer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer/Scheduler::Change(System.Threading.Timer,System.Int64)
extern "C"  void Scheduler_Change_m3602739018 (Scheduler_t1843257499 * __this, Timer_t3546110984 * ___timer, int64_t ___new_next_run, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer/Scheduler::Add(System.Threading.Timer)
extern "C"  void Scheduler_Add_m1591289733 (Scheduler_t1843257499 * __this, Timer_t3546110984 * ___timer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Timer/Scheduler::InternalRemove(System.Threading.Timer)
extern "C"  int32_t Scheduler_InternalRemove_m1022594523 (Scheduler_t1843257499 * __this, Timer_t3546110984 * ___timer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer/Scheduler::SchedulerThread()
extern "C"  void Scheduler_SchedulerThread_m2007715993 (Scheduler_t1843257499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer/Scheduler::ShrinkIfNeeded(System.Collections.ArrayList,System.Int32)
extern "C"  void Scheduler_ShrinkIfNeeded_m4137944589 (Scheduler_t1843257499 * __this, ArrayList_t2121638921 * ___list, int32_t ___initial, const MethodInfo* method) IL2CPP_METHOD_ATTR;
