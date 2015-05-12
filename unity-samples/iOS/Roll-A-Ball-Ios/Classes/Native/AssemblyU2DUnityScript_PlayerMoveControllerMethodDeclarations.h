#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PlayerMoveController
struct PlayerMoveController_t430;
// UnityEngine.Camera
struct Camera_t172;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"

// System.Void PlayerMoveController::.ctor()
 void PlayerMoveController__ctor_m1726 (PlayerMoveController_t430 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMoveController::Awake()
 void PlayerMoveController_Awake_m1727 (PlayerMoveController_t430 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMoveController::Start()
 void PlayerMoveController_Start_m1728 (PlayerMoveController_t430 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMoveController::OnDisable()
 void PlayerMoveController_OnDisable_m1729 (PlayerMoveController_t430 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMoveController::OnEnable()
 void PlayerMoveController_OnEnable_m1730 (PlayerMoveController_t430 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMoveController::Update()
 void PlayerMoveController_Update_m1731 (PlayerMoveController_t430 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PlayerMoveController::PlaneRayIntersection(UnityEngine.Plane,UnityEngine.Ray)
 Vector3_t188  PlayerMoveController_PlaneRayIntersection_m1732 (Object_t * __this/* static, unused */, Plane_t431  ___plane, Ray_t432  ___ray, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PlayerMoveController::ScreenPointToWorldPointOnPlane(UnityEngine.Vector3,UnityEngine.Plane,UnityEngine.Camera)
 Vector3_t188  PlayerMoveController_ScreenPointToWorldPointOnPlane_m1733 (Object_t * __this/* static, unused */, Vector3_t188  ___screenPoint, Plane_t431  ___plane, Camera_t172 * ___camera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMoveController::HandleCursorAlignment(UnityEngine.Vector3)
 void PlayerMoveController_HandleCursorAlignment_m1734 (PlayerMoveController_t430 * __this, Vector3_t188  ___cursorWorldPosition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMoveController::Main()
 void PlayerMoveController_Main_m1735 (PlayerMoveController_t430 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
