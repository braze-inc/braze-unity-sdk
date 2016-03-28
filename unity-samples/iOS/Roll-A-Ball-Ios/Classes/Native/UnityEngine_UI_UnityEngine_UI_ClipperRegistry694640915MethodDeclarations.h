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

// UnityEngine.UI.ClipperRegistry
struct ClipperRegistry_t694640915;
// UnityEngine.UI.IClipper
struct IClipper_t4185560397;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.UI.ClipperRegistry::.ctor()
extern "C"  void ClipperRegistry__ctor_m3311832913 (ClipperRegistry_t694640915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ClipperRegistry UnityEngine.UI.ClipperRegistry::get_instance()
extern "C"  ClipperRegistry_t694640915 * ClipperRegistry_get_instance_m1642325505 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ClipperRegistry::Cull()
extern "C"  void ClipperRegistry_Cull_m2386993349 (ClipperRegistry_t694640915 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ClipperRegistry::Register(UnityEngine.UI.IClipper)
extern "C"  void ClipperRegistry_Register_m2777461237 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ClipperRegistry::Unregister(UnityEngine.UI.IClipper)
extern "C"  void ClipperRegistry_Unregister_m926013180 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
