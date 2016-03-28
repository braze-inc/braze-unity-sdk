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
struct Spawner_t3948062024;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

// System.Void Spawner::.ctor()
extern "C"  void Spawner__ctor_m3989575182 (Spawner_t3948062024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spawner::Awake()
extern "C"  void Spawner_Awake_m4227180401 (Spawner_t3948062024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Spawner::Spawn(UnityEngine.GameObject,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  GameObject_t4012695102 * Spawner_Spawn_m2167211328 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___prefab, Vector3_t3525329789  ___position, Quaternion_t1891715979  ___rotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spawner::Destroy(UnityEngine.GameObject)
extern "C"  void Spawner_Destroy_m3183641822 (Il2CppObject * __this /* static, unused */, GameObject_t4012695102 * ___objectToDestroy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Spawner::Main()
extern "C"  void Spawner_Main_m3923515631 (Spawner_t3948062024 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
