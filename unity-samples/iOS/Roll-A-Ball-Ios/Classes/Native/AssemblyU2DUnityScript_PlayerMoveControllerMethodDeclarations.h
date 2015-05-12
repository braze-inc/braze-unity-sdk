#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PlayerMoveController
struct PlayerMoveController_t443;
// UnityEngine.Camera
struct Camera_t186;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Plane
#include "UnityEngine_UnityEngine_Plane.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"

// System.Void PlayerMoveController::.ctor()
 void PlayerMoveController__ctor_m1832 (PlayerMoveController_t443 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMoveController::Awake()
 void PlayerMoveController_Awake_m1833 (PlayerMoveController_t443 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMoveController::Start()
 void PlayerMoveController_Start_m1834 (PlayerMoveController_t443 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMoveController::OnDisable()
 void PlayerMoveController_OnDisable_m1835 (PlayerMoveController_t443 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMoveController::OnEnable()
 void PlayerMoveController_OnEnable_m1836 (PlayerMoveController_t443 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMoveController::Update()
 void PlayerMoveController_Update_m1837 (PlayerMoveController_t443 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PlayerMoveController::PlaneRayIntersection(UnityEngine.Plane,UnityEngine.Ray)
 Vector3_t202  PlayerMoveController_PlaneRayIntersection_m1838 (Object_t * __this/* static, unused */, Plane_t444  ___plane, Ray_t445  ___ray, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PlayerMoveController::ScreenPointToWorldPointOnPlane(UnityEngine.Vector3,UnityEngine.Plane,UnityEngine.Camera)
 Vector3_t202  PlayerMoveController_ScreenPointToWorldPointOnPlane_m1839 (Object_t * __this/* static, unused */, Vector3_t202  ___screenPoint, Plane_t444  ___plane, Camera_t186 * ___camera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMoveController::HandleCursorAlignment(UnityEngine.Vector3)
 void PlayerMoveController_HandleCursorAlignment_m1840 (PlayerMoveController_t443 * __this, Vector3_t202  ___cursorWorldPosition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMoveController::Main()
 void PlayerMoveController_Main_m1841 (PlayerMoveController_t443 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
