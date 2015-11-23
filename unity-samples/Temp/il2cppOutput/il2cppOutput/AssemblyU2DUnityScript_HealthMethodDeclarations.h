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

// Health
struct Health_t403;
// System.Collections.IEnumerator
struct IEnumerator_t66;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Health::.ctor()
extern "C" void Health__ctor_m1516 (Health_t403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Health::Awake()
extern "C" void Health_Awake_m1517 (Health_t403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Health::OnDamage(System.Single,UnityEngine.Vector3)
extern "C" void Health_OnDamage_m1518 (Health_t403 * __this, float ___amount, Vector3_t259  ___fromDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Health::OnEnable()
extern "C" void Health_OnEnable_m1519 (Health_t403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Health::Regenerate()
extern "C" Object_t * Health_Regenerate_m1520 (Health_t403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Health::Main()
extern "C" void Health_Main_m1521 (Health_t403 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
