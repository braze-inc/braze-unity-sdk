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

// UnityEngine.Plane[]
struct PlaneU5BU5D_t277;
// UnityEngine.Camera
struct Camera_t257;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Bounds.h"

// UnityEngine.Plane[] UnityEngine.GeometryUtility::CalculateFrustumPlanes(UnityEngine.Camera)
extern "C" PlaneU5BU5D_t277* GeometryUtility_CalculateFrustumPlanes_m1100 (Object_t * __this /* static, unused */, Camera_t257 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Plane[] UnityEngine.GeometryUtility::CalculateFrustumPlanes(UnityEngine.Matrix4x4)
extern "C" PlaneU5BU5D_t277* GeometryUtility_CalculateFrustumPlanes_m3815 (Object_t * __this /* static, unused */, Matrix4x4_t417  ___worldToProjectionMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GeometryUtility::Internal_ExtractPlanes(UnityEngine.Plane[],UnityEngine.Matrix4x4)
extern "C" void GeometryUtility_Internal_ExtractPlanes_m3816 (Object_t * __this /* static, unused */, PlaneU5BU5D_t277* ___planes, Matrix4x4_t417  ___worldToProjectionMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GeometryUtility::INTERNAL_CALL_Internal_ExtractPlanes(UnityEngine.Plane[],UnityEngine.Matrix4x4&)
extern "C" void GeometryUtility_INTERNAL_CALL_Internal_ExtractPlanes_m3817 (Object_t * __this /* static, unused */, PlaneU5BU5D_t277* ___planes, Matrix4x4_t417 * ___worldToProjectionMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GeometryUtility::TestPlanesAABB(UnityEngine.Plane[],UnityEngine.Bounds)
extern "C" bool GeometryUtility_TestPlanesAABB_m1102 (Object_t * __this /* static, unused */, PlaneU5BU5D_t277* ___planes, Bounds_t255  ___bounds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GeometryUtility::INTERNAL_CALL_TestPlanesAABB(UnityEngine.Plane[],UnityEngine.Bounds&)
extern "C" bool GeometryUtility_INTERNAL_CALL_TestPlanesAABB_m3818 (Object_t * __this /* static, unused */, PlaneU5BU5D_t277* ___planes, Bounds_t255 * ___bounds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
