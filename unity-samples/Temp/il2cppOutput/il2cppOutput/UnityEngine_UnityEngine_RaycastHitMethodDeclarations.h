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

// UnityEngine.Collider
struct Collider_t410;
// UnityEngine.Rigidbody
struct Rigidbody_t359;
// UnityEngine.Transform
struct Transform_t258;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RaycastHit.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C" Vector3_t259  RaycastHit_get_point_m1678 (RaycastHit_t407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern "C" Vector3_t259  RaycastHit_get_normal_m1679 (RaycastHit_t407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit::get_distance()
extern "C" float RaycastHit_get_distance_m1672 (RaycastHit_t407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern "C" Collider_t410 * RaycastHit_get_collider_m1568 (RaycastHit_t407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.RaycastHit::get_rigidbody()
extern "C" Rigidbody_t359 * RaycastHit_get_rigidbody_m1742 (RaycastHit_t407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
extern "C" Transform_t258 * RaycastHit_get_transform_m1671 (RaycastHit_t407 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
