#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GeometryUtility
struct GeometryUtility_t837;
// UnityEngine.Plane[]
struct PlaneU5BU5D_t316;
// UnityEngine.Camera
struct Camera_t186;
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"

// UnityEngine.Plane[] UnityEngine.GeometryUtility::CalculateFrustumPlanes(UnityEngine.Camera)
 PlaneU5BU5D_t316* GeometryUtility_CalculateFrustumPlanes_m1313 (Object_t * __this/* static, unused */, Camera_t186 * ___camera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Plane[] UnityEngine.GeometryUtility::CalculateFrustumPlanes(UnityEngine.Matrix4x4)
 PlaneU5BU5D_t316* GeometryUtility_CalculateFrustumPlanes_m4083 (Object_t * __this/* static, unused */, Matrix4x4_t461  ___worldToProjectionMatrix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GeometryUtility::Internal_ExtractPlanes(UnityEngine.Plane[],UnityEngine.Matrix4x4)
 void GeometryUtility_Internal_ExtractPlanes_m4084 (Object_t * __this/* static, unused */, PlaneU5BU5D_t316* ___planes, Matrix4x4_t461  ___worldToProjectionMatrix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GeometryUtility::INTERNAL_CALL_Internal_ExtractPlanes(UnityEngine.Plane[],UnityEngine.Matrix4x4&)
 void GeometryUtility_INTERNAL_CALL_Internal_ExtractPlanes_m4085 (Object_t * __this/* static, unused */, PlaneU5BU5D_t316* ___planes, Matrix4x4_t461 * ___worldToProjectionMatrix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GeometryUtility::TestPlanesAABB(UnityEngine.Plane[],UnityEngine.Bounds)
 bool GeometryUtility_TestPlanesAABB_m1315 (Object_t * __this/* static, unused */, PlaneU5BU5D_t316* ___planes, Bounds_t169  ___bounds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GeometryUtility::INTERNAL_CALL_TestPlanesAABB(UnityEngine.Plane[],UnityEngine.Bounds&)
 bool GeometryUtility_INTERNAL_CALL_TestPlanesAABB_m4086 (Object_t * __this/* static, unused */, PlaneU5BU5D_t316* ___planes, Bounds_t169 * ___bounds, MethodInfo* method) IL2CPP_METHOD_ATTR;
