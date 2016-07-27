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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Plane1600081545.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Ray1522967639.h"

// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Plane__ctor_m2201046863 (Plane_t1600081545 * __this, Vector3_t3525329789  ___inNormal0, Vector3_t3525329789  ___inPoint1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Plane::get_normal()
extern "C"  Vector3_t3525329789  Plane_get_normal_m3534129213 (Plane_t1600081545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Plane::get_distance()
extern "C"  float Plane_get_distance_m2612484153 (Plane_t1600081545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Plane::Raycast(UnityEngine.Ray,System.Single&)
extern "C"  bool Plane_Raycast_m2829769106 (Plane_t1600081545 * __this, Ray_t1522967639  ___ray0, float* ___enter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Plane_t1600081545;
struct Plane_t1600081545_marshaled_pinvoke;

extern "C" void Plane_t1600081545_marshal_pinvoke(const Plane_t1600081545& unmarshaled, Plane_t1600081545_marshaled_pinvoke& marshaled);
extern "C" void Plane_t1600081545_marshal_pinvoke_back(const Plane_t1600081545_marshaled_pinvoke& marshaled, Plane_t1600081545& unmarshaled);
extern "C" void Plane_t1600081545_marshal_pinvoke_cleanup(Plane_t1600081545_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Plane_t1600081545;
struct Plane_t1600081545_marshaled_com;

extern "C" void Plane_t1600081545_marshal_com(const Plane_t1600081545& unmarshaled, Plane_t1600081545_marshaled_com& marshaled);
extern "C" void Plane_t1600081545_marshal_com_back(const Plane_t1600081545_marshaled_com& marshaled, Plane_t1600081545& unmarshaled);
extern "C" void Plane_t1600081545_marshal_com_cleanup(Plane_t1600081545_marshaled_com& marshaled);
