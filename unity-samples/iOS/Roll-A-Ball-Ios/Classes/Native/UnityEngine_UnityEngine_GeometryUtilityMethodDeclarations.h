#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GeometryUtility
struct GeometryUtility_t824;
// UnityEngine.Plane[]
struct PlaneU5BU5D_t303;
// UnityEngine.Camera
struct Camera_t172;
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"

// UnityEngine.Plane[] UnityEngine.GeometryUtility::CalculateFrustumPlanes(UnityEngine.Camera)
 PlaneU5BU5D_t303* GeometryUtility_CalculateFrustumPlanes_m1207 (Object_t * __this/* static, unused */, Camera_t172 * ___camera, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Plane[] UnityEngine.GeometryUtility::CalculateFrustumPlanes(UnityEngine.Matrix4x4)
 PlaneU5BU5D_t303* GeometryUtility_CalculateFrustumPlanes_m3978 (Object_t * __this/* static, unused */, Matrix4x4_t447  ___worldToProjectionMatrix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GeometryUtility::Internal_ExtractPlanes(UnityEngine.Plane[],UnityEngine.Matrix4x4)
 void GeometryUtility_Internal_ExtractPlanes_m3979 (Object_t * __this/* static, unused */, PlaneU5BU5D_t303* ___planes, Matrix4x4_t447  ___worldToProjectionMatrix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GeometryUtility::INTERNAL_CALL_Internal_ExtractPlanes(UnityEngine.Plane[],UnityEngine.Matrix4x4&)
 void GeometryUtility_INTERNAL_CALL_Internal_ExtractPlanes_m3980 (Object_t * __this/* static, unused */, PlaneU5BU5D_t303* ___planes, Matrix4x4_t447 * ___worldToProjectionMatrix, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GeometryUtility::TestPlanesAABB(UnityEngine.Plane[],UnityEngine.Bounds)
 bool GeometryUtility_TestPlanesAABB_m1209 (Object_t * __this/* static, unused */, PlaneU5BU5D_t303* ___planes, Bounds_t155  ___bounds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GeometryUtility::INTERNAL_CALL_TestPlanesAABB(UnityEngine.Plane[],UnityEngine.Bounds&)
 bool GeometryUtility_INTERNAL_CALL_TestPlanesAABB_m3981 (Object_t * __this/* static, unused */, PlaneU5BU5D_t303* ___planes, Bounds_t155 * ___bounds, MethodInfo* method) IL2CPP_METHOD_ATTR;
