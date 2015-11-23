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

// UnityEngine.Collider2D
struct Collider2D_t684;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t814;
// UnityEngine.Transform
struct Transform_t258;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RaycastHit2D.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point()
extern "C" Vector2_t231  RaycastHit2D_get_point_m3252 (RaycastHit2D_t683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_normal()
extern "C" Vector2_t231  RaycastHit2D_get_normal_m3253 (RaycastHit2D_t683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit2D::get_fraction()
extern "C" float RaycastHit2D_get_fraction_m3406 (RaycastHit2D_t683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
extern "C" Collider2D_t684 * RaycastHit2D_get_collider_m3249 (RaycastHit2D_t683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody2D UnityEngine.RaycastHit2D::get_rigidbody()
extern "C" Rigidbody2D_t814 * RaycastHit2D_get_rigidbody_m4246 (RaycastHit2D_t683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
extern "C" Transform_t258 * RaycastHit2D_get_transform_m3251 (RaycastHit2D_t683 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
