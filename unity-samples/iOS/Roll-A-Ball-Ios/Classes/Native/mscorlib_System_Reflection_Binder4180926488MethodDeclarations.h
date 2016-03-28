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

// System.Reflection.Binder
struct Binder_t4180926488;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t1127461800;
// System.Globalization.CultureInfo
struct CultureInfo_t3603717042;
// System.Type
struct Type_t;
// System.Reflection.MethodBase
struct MethodBase_t3461000640;
// System.Reflection.MethodBase[]
struct MethodBaseU5BU5D_t1767252801;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Binder4180926488.h"
#include "mscorlib_System_Globalization_CultureInfo3603717042.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void System.Reflection.Binder::.ctor()
extern "C"  void Binder__ctor_m1880433924 (Binder_t4180926488 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Binder::.cctor()
extern "C"  void Binder__cctor_m1976780585 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Binder System.Reflection.Binder::get_DefaultBinder()
extern "C"  Binder_t4180926488 * Binder_get_DefaultBinder_m695054407 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Binder::ConvertArgs(System.Reflection.Binder,System.Object[],System.Reflection.ParameterInfo[],System.Globalization.CultureInfo)
extern "C"  bool Binder_ConvertArgs_m2442440337 (Il2CppObject * __this /* static, unused */, Binder_t4180926488 * ___binder, ObjectU5BU5D_t11523773* ___args, ParameterInfoU5BU5D_t1127461800* ___pinfo, CultureInfo_t3603717042 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Binder::GetDerivedLevel(System.Type)
extern "C"  int32_t Binder_GetDerivedLevel_m1285412278 (Il2CppObject * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Reflection.Binder::FindMostDerivedMatch(System.Reflection.MethodBase[])
extern "C"  MethodBase_t3461000640 * Binder_FindMostDerivedMatch_m1519815265 (Il2CppObject * __this /* static, unused */, MethodBaseU5BU5D_t1767252801* ___match, const MethodInfo* method) IL2CPP_METHOD_ATTR;
