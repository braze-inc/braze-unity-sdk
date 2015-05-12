#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Camera
struct Camera_t172;
// UnityEngine.RenderTexture
struct RenderTexture_t826;
// UnityEngine.Camera[]
struct CameraU5BU5D_t879;
// UnityEngine.GameObject
struct GameObject_t140;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.CameraClearFlags
#include "UnityEngine_UnityEngine_CameraClearFlags.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"

// System.Single UnityEngine.Camera::get_nearClipPlane()
 float Camera_get_nearClipPlane_m3341 (Camera_t172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_farClipPlane()
 float Camera_get_farClipPlane_m3340 (Camera_t172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_depth()
 float Camera_get_depth_m3207 (Camera_t172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_cullingMask()
 int32_t Camera_get_cullingMask_m3353 (Camera_t172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_eventMask()
 int32_t Camera_get_eventMask_m4478 (Camera_t172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_pixelRect(UnityEngine.Rect&)
 void Camera_INTERNAL_get_pixelRect_m4479 (Camera_t172 * __this, Rect_t78 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Camera::get_pixelRect()
 Rect_t78  Camera_get_pixelRect_m4480 (Camera_t172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.Camera::get_targetTexture()
 RenderTexture_t826 * Camera_get_targetTexture_m4481 (Camera_t172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_worldToCameraMatrix(UnityEngine.Matrix4x4&)
 void Camera_INTERNAL_get_worldToCameraMatrix_m4482 (Camera_t172 * __this, Matrix4x4_t447 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_worldToCameraMatrix()
 Matrix4x4_t447  Camera_get_worldToCameraMatrix_m4483 (Camera_t172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::INTERNAL_get_projectionMatrix(UnityEngine.Matrix4x4&)
 void Camera_INTERNAL_get_projectionMatrix_m4484 (Camera_t172 * __this, Matrix4x4_t447 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.Camera::get_projectionMatrix()
 Matrix4x4_t447  Camera_get_projectionMatrix_m4485 (Camera_t172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CameraClearFlags UnityEngine.Camera::get_clearFlags()
 int32_t Camera_get_clearFlags_m4486 (Camera_t172 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
 Vector3_t188  Camera_WorldToScreenPoint_m1989 (Camera_t172 * __this, Vector3_t188  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_WorldToScreenPoint(UnityEngine.Camera,UnityEngine.Vector3&)
 Vector3_t188  Camera_INTERNAL_CALL_WorldToScreenPoint_m4487 (Object_t * __this/* static, unused */, Camera_t172 * ___self, Vector3_t188 * ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToViewportPoint(UnityEngine.Vector3)
 Vector3_t188  Camera_ScreenToViewportPoint_m3470 (Camera_t172 * __this, Vector3_t188  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::INTERNAL_CALL_ScreenToViewportPoint(UnityEngine.Camera,UnityEngine.Vector3&)
 Vector3_t188  Camera_INTERNAL_CALL_ScreenToViewportPoint_m4488 (Object_t * __this/* static, unused */, Camera_t172 * ___self, Vector3_t188 * ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
 Ray_t432  Camera_ScreenPointToRay_m1986 (Camera_t172 * __this, Vector3_t188  ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Camera::INTERNAL_CALL_ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector3&)
 Ray_t432  Camera_INTERNAL_CALL_ScreenPointToRay_m4489 (Object_t * __this/* static, unused */, Camera_t172 * ___self, Vector3_t188 * ___position, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
 Camera_t172 * Camera_get_main_m1910 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::get_allCamerasCount()
 int32_t Camera_get_allCamerasCount_m4490 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Camera::GetAllCameras(UnityEngine.Camera[])
 int32_t Camera_GetAllCameras_m4491 (Object_t * __this/* static, unused */, CameraU5BU5D_t879* ___cameras, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPreCull(UnityEngine.Camera)
 void Camera_FireOnPreCull_m4492 (Object_t * __this/* static, unused */, Camera_t172 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPreRender(UnityEngine.Camera)
 void Camera_FireOnPreRender_m4493 (Object_t * __this/* static, unused */, Camera_t172 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Camera::FireOnPostRender(UnityEngine.Camera)
 void Camera_FireOnPostRender_m4494 (Object_t * __this/* static, unused */, Camera_t172 * ___cam, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry(UnityEngine.Ray,System.Single,System.Int32)
 GameObject_t140 * Camera_RaycastTry_m4495 (Camera_t172 * __this, Ray_t432  ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
 GameObject_t140 * Camera_INTERNAL_CALL_RaycastTry_m4496 (Object_t * __this/* static, unused */, Camera_t172 * ___self, Ray_t432 * ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::RaycastTry2D(UnityEngine.Ray,System.Single,System.Int32)
 GameObject_t140 * Camera_RaycastTry2D_m4497 (Camera_t172 * __this, Ray_t432  ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Camera::INTERNAL_CALL_RaycastTry2D(UnityEngine.Camera,UnityEngine.Ray&,System.Single,System.Int32)
 GameObject_t140 * Camera_INTERNAL_CALL_RaycastTry2D_m4498 (Object_t * __this/* static, unused */, Camera_t172 * ___self, Ray_t432 * ___ray, float ___distance, int32_t ___layerMask, MethodInfo* method) IL2CPP_METHOD_ATTR;
