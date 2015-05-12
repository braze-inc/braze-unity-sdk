#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Spawner
struct Spawner_t412;
// UnityEngine.GameObject
struct GameObject_t140;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void Spawner::.ctor()
 void Spawner__ctor_m1678 (Spawner_t412 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spawner::Awake()
 void Spawner_Awake_m1679 (Spawner_t412 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Spawner::Spawn(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Quaternion)
 GameObject_t140 * Spawner_Spawn_m1680 (Object_t * __this/* static, unused */, GameObject_t140 * ___prefab, Vector3_t188  ___position, Quaternion_t415  ___rotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spawner::Destroy(UnityEngine.GameObject)
 void Spawner_Destroy_m1681 (Object_t * __this/* static, unused */, GameObject_t140 * ___objectToDestroy, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spawner::Main()
 void Spawner_Main_m1682 (Spawner_t412 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
