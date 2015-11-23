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

// Spawner
struct Spawner_t380;
// UnityEngine.GameObject
struct GameObject_t141;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void Spawner::.ctor()
extern "C" void Spawner__ctor_m1448 (Spawner_t380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spawner::Awake()
extern "C" void Spawner_Awake_m1449 (Spawner_t380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Spawner::Spawn(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" GameObject_t141 * Spawner_Spawn_m1450 (Object_t * __this /* static, unused */, GameObject_t141 * ___prefab, Vector3_t259  ___position, Quaternion_t400  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spawner::Destroy(UnityEngine.GameObject)
extern "C" void Spawner_Destroy_m1451 (Object_t * __this /* static, unused */, GameObject_t141 * ___objectToDestroy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spawner::Main()
extern "C" void Spawner_Main_m1452 (Spawner_t380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
