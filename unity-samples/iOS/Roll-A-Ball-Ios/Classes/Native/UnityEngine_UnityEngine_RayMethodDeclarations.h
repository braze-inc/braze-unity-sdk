#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Ray
struct Ray_t445;
// System.String
struct String_t;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
 void Ray__ctor_m4492 (Ray_t445 * __this, Vector3_t202  ___origin, Vector3_t202  ___direction, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
 Vector3_t202  Ray_get_origin_m3447 (Ray_t445 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
 Vector3_t202  Ray_get_direction_m3448 (Ray_t445 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Ray::GetPoint(System.Single)
 Vector3_t202  Ray_GetPoint_m2091 (Ray_t445 * __this, float ___distance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Ray::ToString()
 String_t* Ray_ToString_m4493 (Ray_t445 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
