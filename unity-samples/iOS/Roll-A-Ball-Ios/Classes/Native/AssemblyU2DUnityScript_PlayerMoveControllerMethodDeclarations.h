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
struct PlayerMoveController_t398;
// UnityEngine.Camera
struct Camera_t257;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Plane.h"
#include "UnityEngine_UnityEngine_Ray.h"

// System.Void PlayerMoveController::.ctor()
extern "C" void PlayerMoveController__ctor_m1496 (PlayerMoveController_t398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMoveController::Awake()
extern "C" void PlayerMoveController_Awake_m1497 (PlayerMoveController_t398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMoveController::Start()
extern "C" void PlayerMoveController_Start_m1498 (PlayerMoveController_t398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMoveController::OnDisable()
extern "C" void PlayerMoveController_OnDisable_m1499 (PlayerMoveController_t398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMoveController::OnEnable()
extern "C" void PlayerMoveController_OnEnable_m1500 (PlayerMoveController_t398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMoveController::Update()
extern "C" void PlayerMoveController_Update_m1501 (PlayerMoveController_t398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PlayerMoveController::PlaneRayIntersection(UnityEngine.Plane,UnityEngine.Ray)
extern "C" Vector3_t259  PlayerMoveController_PlaneRayIntersection_m1502 (Object_t * __this /* static, unused */, Plane_t399  ___plane, Ray_t412  ___ray, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PlayerMoveController::ScreenPointToWorldPointOnPlane(UnityEngine.Vector3,UnityEngine.Plane,UnityEngine.Camera)
extern "C" Vector3_t259  PlayerMoveController_ScreenPointToWorldPointOnPlane_m1503 (Object_t * __this /* static, unused */, Vector3_t259  ___screenPoint, Plane_t399  ___plane, Camera_t257 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMoveController::HandleCursorAlignment(UnityEngine.Vector3)
extern "C" void PlayerMoveController_HandleCursorAlignment_m1504 (PlayerMoveController_t398 * __this, Vector3_t259  ___cursorWorldPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMoveController::Main()
extern "C" void PlayerMoveController_Main_m1505 (PlayerMoveController_t398 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
