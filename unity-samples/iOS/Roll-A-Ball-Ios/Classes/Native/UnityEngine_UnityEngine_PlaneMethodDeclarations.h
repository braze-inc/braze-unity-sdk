#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Plane
struct Plane_t444;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"

// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
 void Plane__ctor_m2083 (Plane_t444 * __this, Vector3_t202  ___inNormal, Vector3_t202  ___inPoint, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Plane::get_normal()
 Vector3_t202  Plane_get_normal_m4494 (Plane_t444 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Plane::set_normal(UnityEngine.Vector3)
 void Plane_set_normal_m2087 (Plane_t444 * __this, Vector3_t202  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Plane::get_distance()
 float Plane_get_distance_m4495 (Plane_t444 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Plane::set_distance(System.Single)
 void Plane_set_distance_m2088 (Plane_t444 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
 bool Plane_Raycast_m2090 (Plane_t444 * __this, Ray_t445  ___ray, float* ___enter, MethodInfo* method) IL2CPP_METHOD_ATTR;
