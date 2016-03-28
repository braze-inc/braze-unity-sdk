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

// PlayerMoveController
struct PlayerMoveController_t96020398;
// UnityEngine.Camera
struct Camera_t3533968274;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Plane1600081545.h"
#include "UnityEngine_UnityEngine_Ray1522967639.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"

// System.Void PlayerMoveController::.ctor()
extern "C"  void PlayerMoveController__ctor_m1663316386 (PlayerMoveController_t96020398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMoveController::Awake()
extern "C"  void PlayerMoveController_Awake_m1900921605 (PlayerMoveController_t96020398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMoveController::Start()
extern "C"  void PlayerMoveController_Start_m610454178 (PlayerMoveController_t96020398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMoveController::OnDisable()
extern "C"  void PlayerMoveController_OnDisable_m4204127497 (PlayerMoveController_t96020398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMoveController::OnEnable()
extern "C"  void PlayerMoveController_OnEnable_m2892339876 (PlayerMoveController_t96020398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMoveController::Update()
extern "C"  void PlayerMoveController_Update_m1750062507 (PlayerMoveController_t96020398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PlayerMoveController::PlaneRayIntersection(UnityEngine.Plane,UnityEngine.Ray)
extern "C"  Vector3_t3525329789  PlayerMoveController_PlaneRayIntersection_m2840050355 (Il2CppObject * __this /* static, unused */, Plane_t1600081545  ___plane, Ray_t1522967639  ___ray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PlayerMoveController::ScreenPointToWorldPointOnPlane(UnityEngine.Vector3,UnityEngine.Plane,UnityEngine.Camera)
extern "C"  Vector3_t3525329789  PlayerMoveController_ScreenPointToWorldPointOnPlane_m1520644358 (Il2CppObject * __this /* static, unused */, Vector3_t3525329789  ___screenPoint, Plane_t1600081545  ___plane, Camera_t3533968274 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMoveController::HandleCursorAlignment(UnityEngine.Vector3)
extern "C"  void PlayerMoveController_HandleCursorAlignment_m1210338388 (PlayerMoveController_t96020398 * __this, Vector3_t3525329789  ___cursorWorldPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMoveController::Main()
extern "C"  void PlayerMoveController_Main_m2047359707 (PlayerMoveController_t96020398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
